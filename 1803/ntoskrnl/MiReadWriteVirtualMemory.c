/*
 * XREFs of MiReadWriteVirtualMemory @ 0x140551A50
 * Callers:
 *     NtWriteVirtualMemory @ 0x1405519F8 (NtWriteVirtualMemory.c)
 *     NtReadVirtualMemory @ 0x140551A20 (NtReadVirtualMemory.c)
 * Callees:
 *     PsIsProcessReadWriteVmLoggingEnabled @ 0x1400A5E04 (PsIsProcessReadWriteVmLoggingEnabled.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     EtwTiLogReadWriteVm @ 0x1404D97A4 (EtwTiLogReadWriteVm.c)
 *     MmCopyVirtualMemory @ 0x14059CD40 (MmCopyVirtualMemory.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
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
  _QWORD *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rdi
  int v13; // esi
  _KPROCESS *Process; // r10
  PVOID v15; // r14
  PVOID v16; // rcx
  int v17; // eax
  int v18; // edx
  __int64 v19; // r10
  char PreviousMode; // [rsp+40h] [rbp-38h]
  __int64 v22[2]; // [rsp+48h] [rbp-30h] BYREF
  PVOID Object; // [rsp+58h] [rbp-20h] BYREF

  v7 = a2;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    if ( a2 + a4 < a2 || a2 + a4 > 0x7FFFFFFF0000LL || a4 + a3 < a3 || a4 + a3 > 0x7FFFFFFF0000LL )
      return 3221225477LL;
    v10 = (_QWORD *)a5;
    if ( a5 )
    {
      v11 = a5;
      if ( a5 >= 0x7FFFFFFF0000LL )
        v11 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v11 = *(_QWORD *)v11;
    }
  }
  else
  {
    v10 = (_QWORD *)a5;
  }
  v12 = 0LL;
  v22[0] = 0LL;
  v13 = 0;
  if ( a4 )
  {
    v13 = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x6D566D4Du, (__int64)&Object, 0LL, 0LL);
    if ( v13 >= 0 )
    {
      Process = CurrentThread->ApcState.Process;
      v22[1] = (__int64)Process;
      v15 = Object;
      if ( (*((_BYTE *)Object + 720) & 1) == 0 || Process == Object || *((_QWORD *)Object + 132) )
      {
        if ( a6 == 16 )
          v16 = Object;
        else
          v16 = Process;
        v17 = MmCopyVirtualMemory((ULONG_PTR)v16, a4, PreviousMode, (__int64)v22);
        v12 = v22[0];
        v13 = v17;
      }
      else
      {
        v13 = -1073741819;
      }
      if ( PsIsProcessReadWriteVmLoggingEnabled((__int64)v15, a6) )
        EtwTiLogReadWriteVm(v13, v19, (__int64)v15, v18, v7, v12);
      ObfDereferenceObjectWithTag(v15, 0x6D566D4Du);
    }
  }
  if ( v10 )
    *v10 = v12;
  return (unsigned int)v13;
}
