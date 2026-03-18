/*
 * XREFs of MiReadWriteVirtualMemory @ 0x1405082D0
 * Callers:
 *     NtReadVirtualMemory @ 0x1405082A8 (NtReadVirtualMemory.c)
 *     NtWriteVirtualMemory @ 0x14058B114 (NtWriteVirtualMemory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     PsIsProcessReadWriteVmLoggingEnabled @ 0x1400BF470 (PsIsProcessReadWriteVmLoggingEnabled.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1404B1130 (ObpReferenceObjectByHandleWithTag.c)
 *     MmCopyVirtualMemory @ 0x1405084C0 (MmCopyVirtualMemory.c)
 *     EtwTiLogReadWriteVm @ 0x14074B358 (EtwTiLogReadWriteVm.c)
 */

__int64 __fastcall MiReadWriteVirtualMemory(
        ULONG_PTR BugCheckParameter1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        int a6)
{
  char v7; // r12
  struct _KTHREAD *CurrentThread; // r14
  char PreviousMode; // al
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r9
  _QWORD *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rdi
  int v16; // esi
  _KPROCESS *Process; // r10
  PVOID v18; // r14
  _KPROCESS *v19; // rcx
  int v20; // edx
  int v21; // r10d
  char v23; // [rsp+40h] [rbp-38h]
  __int64 v24; // [rsp+48h] [rbp-30h] BYREF
  PVOID Object[2]; // [rsp+50h] [rbp-28h] BYREF

  v7 = a2;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v23 = PreviousMode;
  if ( PreviousMode )
  {
    v11 = a2 + a4;
    if ( a2 + a4 < a2 )
      return 3221225477LL;
    v12 = a3 + a4;
    if ( v12 < a3 || v11 > 0x7FFFFFFEFFFFLL || v12 > 0x7FFFFFFEFFFFLL )
      return 3221225477LL;
    v13 = (_QWORD *)a5;
    if ( a5 )
    {
      v14 = a5;
      if ( a5 >= 0x7FFFFFFF0000LL )
        v14 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v14 = *(_QWORD *)v14;
      PreviousMode = v23;
    }
    else
    {
      PreviousMode = v23;
    }
  }
  else
  {
    v13 = (_QWORD *)a5;
  }
  v15 = 0LL;
  v24 = 0LL;
  v16 = 0;
  if ( a4 )
  {
    v16 = ObpReferenceObjectByHandleWithTag(
            BugCheckParameter1,
            a6,
            (__int64)PsProcessType,
            PreviousMode,
            1834380621,
            Object,
            0LL,
            0LL);
    if ( v16 >= 0 )
    {
      Process = CurrentThread->ApcState.Process;
      Object[1] = Process;
      v18 = Object[0];
      if ( (*((_BYTE *)Object[0] + 720) & 1) == 0 || Process == Object[0] || *((_QWORD *)Object[0] + 132) )
      {
        if ( a6 == 16 )
          v19 = (_KPROCESS *)Object[0];
        else
          v19 = Process;
        v16 = MmCopyVirtualMemory((ULONG_PTR)v19, a4, v23, (__int64)&v24);
        v15 = v24;
      }
      else
      {
        v16 = -1073741819;
      }
      if ( PsIsProcessReadWriteVmLoggingEnabled((__int64)v18, a6) )
        EtwTiLogReadWriteVm(v16, v21, (_DWORD)v18, v20, v7, v15);
      ObfDereferenceObjectWithTag(v18, 0x6D566D4Du);
    }
  }
  if ( v13 )
    *v13 = v15;
  return (unsigned int)v16;
}
