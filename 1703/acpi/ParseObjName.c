/*
 * XREFs of ParseObjName @ 0x1C001C334
 * Callers:
 *     ParsePackage @ 0x1C00148B0 (ParsePackage.c)
 *     ParseArg @ 0x1C001681C (ParseArg.c)
 * Callees:
 *     HeapAlloc @ 0x1C00039C0 (HeapAlloc.c)
 *     ParseName @ 0x1C00143AC (ParseName.c)
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C001D034 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C001D178 (LogError.c)
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 *     memmove @ 0x1C002C840 (memmove.c)
 */

__int64 __fastcall ParseObjName(__int64 a1, char **a2, __int64 a3, char a4)
{
  __int64 v7; // rax
  unsigned int v8; // ebx
  __int64 v9; // rax
  void *v10; // rax
  char *v12; // r8
  char *v13; // rdx
  int v14; // ecx
  char Src[256]; // [rsp+30h] [rbp-128h] BYREF

  v7 = (__int64)*(&OpcodeTable + (unsigned __int8)**a2);
  if ( !v7 || (*(_DWORD *)(v7 + 28) & 0x20) == 0 )
  {
    v8 = -1072431103;
    if ( a4 )
      return v8;
    LogError(3222536193LL);
    AcpiDiagTraceAmlError(a1, 3222536193LL);
    v12 = *a2;
    v14 = 132;
    LODWORD(v13) = (unsigned __int8)**a2;
    goto LABEL_12;
  }
  v8 = ParseName(a1, a2, Src);
  if ( !v8 )
  {
    *(_WORD *)(a3 + 2) = 2;
    v9 = -1LL;
    do
      ++v9;
    while ( Src[v9] );
    *(_DWORD *)(a3 + 24) = v9 + 1;
    v10 = (void *)HeapAlloc(gpheapGlobal, 1381258056, (int)v9 + 1);
    *(_QWORD *)(a3 + 32) = v10;
    if ( v10 )
    {
      memmove(v10, Src, *(unsigned int *)(a3 + 24));
      return v8;
    }
    v8 = -1073741670;
    LogError(3221225626LL);
    AcpiDiagTraceAmlError(a1, 3221225626LL);
    LODWORD(v12) = 0;
    v13 = Src;
    v14 = 131;
LABEL_12:
    PrintDebugMessage(v14, (_DWORD)v13, (_DWORD)v12, 0, 0LL);
  }
  return v8;
}
