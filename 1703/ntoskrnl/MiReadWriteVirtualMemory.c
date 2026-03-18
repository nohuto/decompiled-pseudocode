/*
 * XREFs of MiReadWriteVirtualMemory @ 0x140518020
 * Callers:
 *     NtWriteVirtualMemory @ 0x14044DD98 (NtWriteVirtualMemory.c)
 *     NtReadVirtualMemory @ 0x140517FEC (NtReadVirtualMemory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     MmCopyVirtualMemory @ 0x1405181F0 (MmCopyVirtualMemory.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall MiReadWriteVirtualMemory(
        ULONG_PTR BugCheckParameter1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        int a6)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r9
  _QWORD *v11; // rbx
  __int64 v12; // rcx
  int v13; // edi
  _KPROCESS *Process; // rcx
  PVOID v15; // r15
  char PreviousMode; // [rsp+40h] [rbp-38h]
  __int64 v18; // [rsp+48h] [rbp-30h] BYREF
  PVOID Object[2]; // [rsp+50h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v9 = a2 + a4;
    if ( a2 + a4 < a2 )
      return 3221225477LL;
    v10 = a3 + a4;
    if ( v10 < a3 || v9 > 0x7FFFFFFEFFFFLL || v10 > 0x7FFFFFFEFFFFLL )
      return 3221225477LL;
    v11 = (_QWORD *)a5;
    if ( a5 )
    {
      v12 = a5;
      if ( a5 >= 0x7FFFFFFF0000LL )
        v12 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v12 = *(_QWORD *)v12;
    }
  }
  else
  {
    v11 = (_QWORD *)a5;
  }
  v18 = 0LL;
  v13 = 0;
  if ( a4 )
  {
    v13 = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 1834380621, (__int64)Object, 0LL, 0LL);
    if ( v13 >= 0 )
    {
      Process = CurrentThread->ApcState.Process;
      v15 = Object[0];
      if ( !*((_QWORD *)Object[0] + 90) || Process == Object[0] || *((_QWORD *)Object[0] + 132) )
      {
        if ( a6 == 16 )
          Process = (_KPROCESS *)Object[0];
        v13 = MmCopyVirtualMemory((ULONG_PTR)Process, a4, PreviousMode, (__int64)&v18);
      }
      else
      {
        v13 = -1073741819;
      }
      ObfDereferenceObjectWithTag(v15, 0x6D566D4Du);
    }
  }
  if ( v11 )
    *v11 = v18;
  return (unsigned int)v13;
}
