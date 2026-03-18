/*
 * XREFs of NtCreateEnclave @ 0x1406BBE40
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 *     MiValidateZeroBits @ 0x1406B4D9C (MiValidateZeroBits.c)
 *     MiCreateEnclave @ 0x1406BB47C (MiCreateEnclave.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtCreateEnclave(
        ULONG_PTR a1,
        unsigned __int64 *a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        int a6,
        __int64 a7,
        int a8,
        _DWORD *a9)
{
  _OWORD *v11; // rdi
  _OWORD *PoolWithTag; // r14
  char PreviousMode; // r13
  __int64 v14; // rcx
  int v15; // ebx
  __int64 v16; // rcx
  _OWORD *v17; // rax
  __int64 v18; // rcx
  void *Process; // rdi
  int v21; // [rsp+48h] [rbp-D0h] BYREF
  unsigned __int64 v22; // [rsp+50h] [rbp-C8h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+58h] [rbp-C0h] BYREF
  unsigned __int64 v24; // [rsp+60h] [rbp-B8h]
  __int64 v25; // [rsp+68h] [rbp-B0h] BYREF
  ULONG_PTR v26; // [rsp+70h] [rbp-A8h]
  _DWORD *v27; // [rsp+78h] [rbp-A0h]
  _OWORD *v28; // [rsp+88h] [rbp-90h]
  unsigned __int64 *v29; // [rsp+90h] [rbp-88h]
  $5BC46E0569261879018906DEC3127961 v30; // [rsp+A8h] [rbp-70h] BYREF

  v24 = a4;
  v26 = a1;
  v29 = a2;
  v25 = a3;
  v11 = (_OWORD *)a7;
  v27 = a9;
  v22 = 0LL;
  PoolWithTag = 0LL;
  v21 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a9 && PreviousMode == 1 )
  {
    v14 = (__int64)a9;
    if ( (unsigned __int64)a9 >= 0x7FFFFFFF0000LL )
      v14 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v14 = *(_DWORD *)v14;
  }
  if ( a6 == 1 && qword_14036C298 )
  {
    if ( (int)MiValidateZeroBits((ULONGLONG *)&v25) < 0 )
    {
      v15 = -1073741583;
      goto LABEL_32;
    }
    if ( !a4 )
    {
      v15 = -1073741582;
      goto LABEL_32;
    }
    if ( a5 > v24 )
    {
      v15 = -1073741581;
      goto LABEL_32;
    }
    if ( a8 != 4096 )
    {
      v15 = -1073741820;
      goto LABEL_32;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x44456D4Du);
    v28 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v15 = -1073741670;
      goto LABEL_32;
    }
    if ( PreviousMode == 1 )
    {
      v16 = (__int64)a2;
      if ( (unsigned __int64)a2 >= 0x7FFFFFFF0000LL )
        v16 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v16 = *(_QWORD *)v16;
      if ( (a7 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
    }
    v22 = *a2;
    v17 = PoolWithTag;
    v18 = 32LL;
    do
    {
      *v17 = *v11;
      v17[1] = v11[1];
      v17[2] = v11[2];
      v17[3] = v11[3];
      v17[4] = v11[4];
      v17[5] = v11[5];
      v17[6] = v11[6];
      v17 += 8;
      *(v17 - 1) = v11[7];
      v11 += 8;
      --v18;
    }
    while ( v18 );
    if ( v26 == -1LL )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      BugCheckParameter1 = (ULONG_PTR)Process;
    }
    else
    {
      v15 = ObpReferenceObjectByHandleWithTag(
              v26,
              8,
              (__int64)PsProcessType,
              PreviousMode,
              1834380621,
              &BugCheckParameter1,
              0LL,
              0LL);
      if ( v15 < 0 )
        goto LABEL_32;
      Process = (void *)BugCheckParameter1;
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v30);
    }
    v15 = MiCreateEnclave((__int64)Process, &v22, v25, v24, a5, (__int64)PoolWithTag, &v21);
    if ( v26 != -1LL )
    {
      KiUnstackDetachProcess(&v30, 0LL);
      ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
    }
  }
  else
  {
    v15 = -1073741637;
  }
LABEL_32:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v15 >= 0 )
    *a2 = v22;
  if ( a9 )
    *a9 = v21;
  return (unsigned int)v15;
}
