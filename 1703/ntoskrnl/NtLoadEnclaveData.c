/*
 * XREFs of NtLoadEnclaveData @ 0x1406BC4E4
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 *     MiCopyPagesIntoEnclave @ 0x1406BAD94 (MiCopyPagesIntoEnclave.c)
 */

__int64 __fastcall NtLoadEnclaveData(
        ULONG_PTR BugCheckParameter1,
        unsigned __int64 a2,
        void *a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 *a8,
        _DWORD *a9)
{
  char PreviousMode; // r15
  __int64 v14; // r8
  __int64 v15; // rcx
  int v16; // ebx
  __int64 v18; // [rsp+48h] [rbp-40h] BYREF
  PVOID Object; // [rsp+50h] [rbp-38h] BYREF
  __int64 v20[3]; // [rsp+58h] [rbp-30h] BYREF

  v20[0] = 0LL;
  LODWORD(v18) = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode == 1 )
  {
    v14 = 0x7FFFFFFF0000LL;
    if ( a9 )
    {
      v15 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a9 < 0x7FFFFFFF0000LL )
        v15 = (__int64)a9;
      *(_DWORD *)v15 = *(_DWORD *)v15;
    }
    if ( a8 )
    {
      if ( (unsigned __int64)a8 < 0x7FFFFFFF0000LL )
        v14 = (__int64)a8;
      *(_QWORD *)v14 = *(_QWORD *)v14;
    }
  }
  if ( !a4 )
    goto LABEL_11;
  if ( (a2 & 0xFFF) != 0 )
  {
    v16 = -1073741584;
    goto LABEL_22;
  }
  if ( (a4 & 0xFFF) != 0 )
  {
LABEL_11:
    v16 = -1073741582;
    goto LABEL_22;
  }
  if ( a7 )
  {
    v16 = -1073741820;
    goto LABEL_22;
  }
  if ( BugCheckParameter1 == -1LL )
  {
    Object = KeGetCurrentThread()->ApcState.Process;
  }
  else
  {
    v16 = ObpReferenceObjectByHandleWithTag(
            BugCheckParameter1,
            8,
            (__int64)PsProcessType,
            PreviousMode,
            1834380621,
            &Object,
            0LL,
            0LL);
    if ( v16 < 0 )
      goto LABEL_22;
  }
  v16 = MiCopyPagesIntoEnclave((_KPROCESS *)Object, PreviousMode, a2, a3, a4, a5, v20, &v18);
  if ( BugCheckParameter1 != -1LL )
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
LABEL_22:
  if ( a8 )
    *a8 = v20[0];
  if ( a9 )
    *a9 = v18;
  return (unsigned int)v16;
}
