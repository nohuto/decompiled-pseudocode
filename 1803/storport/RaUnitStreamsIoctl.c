/*
 * XREFs of RaUnitStreamsIoctl @ 0x1C0015550
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0008110 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007658 (RaidAllocatePool.c)
 *     RaidCompleteRequestEx @ 0x1C000C410 (RaidCompleteRequestEx.c)
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1C0015834 (RaidUnitSendSrbIoControlSynchronously.c)
 *     memmove @ 0x1C0017E00 (memmove.c)
 *     memset @ 0x1C0018140 (memset.c)
 */

__int64 __fastcall RaUnitStreamsIoctl(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r12
  unsigned int v5; // ebx
  unsigned int Options; // r14d
  unsigned int Length; // esi
  unsigned int v8; // r15d
  _DWORD *Pool; // rax
  _DWORD *v10; // rdi
  int v11; // eax
  unsigned int v12; // r14d
  unsigned int v14; // eax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v5 = 0;
  Options = CurrentStackLocation->Parameters.Create.Options;
  Length = CurrentStackLocation->Parameters.Read.Length;
  v8 = Options;
  if ( Options <= Length )
    v8 = CurrentStackLocation->Parameters.Read.Length;
  Pool = RaidAllocatePool(NonPagedPoolNx, v8 + 28, 0x72536152u, *(_QWORD *)(a1 + 8));
  v10 = Pool;
  if ( Pool )
  {
    memset(Pool, 0, v8 + 28);
    v10[4] = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    *v10 = 8;
    v11 = *(_DWORD *)(a1 + 1032);
    v10[6] = v8;
    v10[3] = v11;
    if ( Options )
      memmove(v10 + 7, a2->AssociatedIrp.MasterIrp, Options);
    v12 = RaidUnitSendSrbIoControlSynchronously(a1, (_DWORD)a2, (_DWORD)v10, v8 + 28, 0LL);
    if ( (int)(v12 + 0x80000000) < 0 || v12 == -2147483643 )
    {
      if ( Length )
      {
        v14 = v10[6];
        if ( v14 )
        {
          if ( Length >= v14 )
            Length = v10[6];
          v5 = Length;
          memmove(a2->AssociatedIrp.MasterIrp, v10 + 7, Length);
        }
      }
    }
    ExFreePoolWithTag(v10, 0x72536152u);
  }
  else
  {
    v12 = -1073741670;
  }
  a2->IoStatus.Information = v5;
  return RaidCompleteRequestEx(a2, 0, v12);
}
