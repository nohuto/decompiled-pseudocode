/*
 * XREFs of RaUnitStreamsIoctl @ 0x1C003BDB0
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0005164 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C00058A4 (RaidAllocatePool.c)
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1C00111D4 (RaidUnitSendSrbIoControlSynchronously.c)
 *     memmove @ 0x1C001EE40 (memmove.c)
 *     memset @ 0x1C001F180 (memset.c)
 */

__int64 __fastcall RaUnitStreamsIoctl(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r12
  unsigned int v5; // ebx
  size_t Options; // r14
  unsigned int Length; // ebp
  unsigned int v8; // r15d
  _DWORD *Pool; // rax
  _DWORD *v10; // rdi
  unsigned int v11; // r14d
  int v12; // eax
  unsigned int v13; // ecx
  __int64 v15; // [rsp+28h] [rbp-50h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v5 = 0;
  Options = CurrentStackLocation->Parameters.Create.Options;
  Length = CurrentStackLocation->Parameters.Read.Length;
  v8 = Length;
  if ( (unsigned int)Options > Length )
    v8 = CurrentStackLocation->Parameters.Create.Options;
  Pool = RaidAllocatePool(NonPagedPoolNx, v8 + 28, 0x72536152u, *(_QWORD *)(a1 + 8));
  v10 = Pool;
  if ( Pool )
  {
    memset(Pool, 0, v8 + 28);
    v10[4] = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    *v10 = 8;
    v12 = *(_DWORD *)(a1 + 1000);
    v10[6] = v8;
    v10[3] = v12;
    if ( (_DWORD)Options )
      memmove(v10 + 7, a2->AssociatedIrp.MasterIrp, Options);
    v11 = RaidUnitSendSrbIoControlSynchronously(
            a1,
            (__int64)a2,
            (__int64)v10,
            v8 + 28,
            0LL,
            v15,
            (Length != 0 ? 0x40 : 0) | ((_DWORD)Options != 0 ? 0x80 : 0));
    if ( (int)(v11 + 0x80000000) < 0 || v11 == -2147483643 )
    {
      if ( Length )
      {
        v13 = v10[6];
        if ( v13 )
        {
          if ( Length < v13 )
            v13 = Length;
          v5 = v13;
          memmove(a2->AssociatedIrp.MasterIrp, v10 + 7, v13);
        }
      }
    }
    ExFreePoolWithTag(v10, 0x72536152u);
  }
  else
  {
    v11 = -1073741670;
  }
  a2->IoStatus.Information = v5;
  return RaidCompleteRequestEx(a2, 0, v11);
}
