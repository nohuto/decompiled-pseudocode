/*
 * XREFs of SdbpGetCustomSdbFileName @ 0x1407D7FE8
 * Callers:
 *     SdbGetPathCustomSdb @ 0x1407D7B7C (SdbGetPathCustomSdb.c)
 * Callees:
 *     AslGuidToString @ 0x14061FDD0 (AslGuidToString.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetCustomSdbFileName(wchar_t *a1, __int64 a2, unsigned int *a3)
{
  int v4; // edi
  const char *v5; // r9
  int v6; // r8d
  __int64 v8; // rcx
  wchar_t *v9; // rax
  __int64 v10; // rax
  char *v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  signed __int64 v14; // rdx
  __int16 v15; // r8
  char *v16; // rax
  int v17; // [rsp+20h] [rbp-18h]

  *a1 = 0;
  v4 = AslGuidToString(a1, 0x2Bu, a3);
  if ( v4 < 0 )
  {
    v5 = "AslGuidToString failed [%x]";
    v6 = 811;
LABEL_3:
    v17 = v4;
    AslLogCallPrintf(1, (unsigned int)"SdbpGetCustomSdbFileName", v6, (_DWORD)v5, v17);
    return (unsigned int)v4;
  }
  v8 = 43LL;
  v9 = a1;
  do
  {
    if ( !*v9 )
      break;
    ++v9;
    --v8;
  }
  while ( v8 );
  v4 = -1073741811;
  if ( v8 )
    v4 = 0;
  v10 = 43 - v8;
  if ( v8 )
  {
    v11 = (char *)&a1[v10];
    v12 = 43 - v10;
    if ( 43 != v10 )
    {
      v13 = 2147483646LL;
      v14 = (char *)L".sdb" - v11;
      do
      {
        if ( !v13 )
          break;
        v15 = *(_WORD *)&v11[v14];
        if ( !v15 )
          break;
        *(_WORD *)v11 = v15;
        --v13;
        v11 += 2;
        --v12;
      }
      while ( v12 );
    }
    v16 = v11 - 2;
    v4 = -2147483643;
    if ( v12 )
    {
      v16 = v11;
      v4 = 0;
    }
    *(_WORD *)v16 = 0;
  }
  if ( v4 < 0 )
  {
    v5 = "RtlStringCchCatW failed [%x]";
    v6 = 817;
    goto LABEL_3;
  }
  return 0LL;
}
