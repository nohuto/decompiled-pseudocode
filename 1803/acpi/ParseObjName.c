/*
 * XREFs of ParseObjName @ 0x1C0055CEC
 * Callers:
 *     ParsePackage @ 0x1C0052430 (ParsePackage.c)
 *     ParseArg @ 0x1C00545E8 (ParseArg.c)
 * Callees:
 *     HeapAlloc @ 0x1C0003394 (HeapAlloc.c)
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     memmove @ 0x1C0004200 (memmove.c)
 *     AcpiDiagTraceAmlError @ 0x1C0006B18 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C004905C (LogError.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 *     ParseName @ 0x1C0055960 (ParseName.c)
 */

__int64 __fastcall ParseObjName(__int64 a1, char **a2, __int64 a3, char a4)
{
  __int64 v7; // rax
  unsigned int v8; // ebx
  __int64 v9; // rax
  void *v10; // rax
  char *v11; // r8
  unsigned __int64 v12; // rdx
  int v13; // ecx
  char Src[256]; // [rsp+30h] [rbp-128h] BYREF

  v7 = (__int64)*(&OpcodeTable + (unsigned __int8)**a2);
  if ( v7 && (*(_DWORD *)(v7 + 28) & 0x20) != 0 )
  {
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
      if ( !v10 )
      {
        v8 = -1073741670;
        LogError(-1073741670);
        AcpiDiagTraceAmlError(a1, -1073741670);
        v11 = 0LL;
        v12 = (unsigned __int64)Src;
        v13 = 131;
LABEL_11:
        PrintDebugMessage(v13, (const void *)v12, v11, 0LL, 0LL);
        return v8;
      }
      memmove(v10, Src, *(unsigned int *)(a3 + 24));
    }
  }
  else
  {
    v8 = -1072431103;
    if ( !a4 )
    {
      LogError(-1072431103);
      AcpiDiagTraceAmlError(a1, -1072431103);
      v11 = *a2;
      v13 = 132;
      v12 = (unsigned __int8)**a2;
      goto LABEL_11;
    }
  }
  return v8;
}
