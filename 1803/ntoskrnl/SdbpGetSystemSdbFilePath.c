/*
 * XREFs of SdbpGetSystemSdbFilePath @ 0x1407D856C
 * Callers:
 *     SdbGetPathCustomSdb @ 0x1407D7B7C (SdbGetPathCustomSdb.c)
 *     SdbResolveDatabaseEx @ 0x1407D7C4C (SdbResolveDatabaseEx.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetSystemSdbFilePath(_WORD *a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rax
  _DWORD *v8; // rdx
  char *v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // r8
  int v12; // eax

  *a1 = 0;
  if ( a3 && a3 < 10 )
  {
    v7 = 1LL;
    v8 = &unk_1402F38B0;
    while ( *v8 != a3 )
    {
      ++v7;
      v8 += 8;
      if ( v7 >= 0xA )
        goto LABEL_8;
    }
    v9 = (char *)&unk_1402F3890 + 32 * v7;
    if ( !v9 )
    {
LABEL_8:
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpGetSystemSdbFilePath",
        1281,
        (unsigned int)"SdbFileDetails missing array item for SdbFileType: %d",
        a3);
      return (unsigned int)-1073741275;
    }
    if ( *((_QWORD *)v9 + 2) )
    {
      v11 = a5;
      if ( !a5 )
        v11 = *((_QWORD *)v9 + 1);
      v12 = (*((__int64 (__fastcall **)(_WORD *, __int64, __int64, __int64))v9 + 2))(a1, 260LL, v11, a6);
      v10 = v12;
      if ( v12 >= 0 )
        return 0;
      else
        AslLogCallPrintf(
          1,
          (unsigned int)"SdbpGetSystemSdbFilePath",
          1305,
          (unsigned int)"GetPathFunction (for SdbFileType %d, IsLtRs3: %d) failed [%x]",
          a3,
          0,
          v12);
    }
    else
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpGetSystemSdbFilePath",
        1295,
        (unsigned int)"SdbFileDetails missing function pointer for path.");
      return (unsigned int)-1073741595;
    }
  }
  else
  {
    return (unsigned int)-1073741583;
  }
  return v10;
}
