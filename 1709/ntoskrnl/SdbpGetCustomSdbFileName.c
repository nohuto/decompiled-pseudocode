/*
 * XREFs of SdbpGetCustomSdbFileName @ 0x140770D0C
 * Callers:
 *     SdbGetPathCustomSdb @ 0x1407708A0 (SdbGetPathCustomSdb.c)
 * Callees:
 *     AslGuidToString @ 0x140771CF4 (AslGuidToString.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetCustomSdbFileName(_WORD *a1)
{
  int v2; // edi
  const char *v3; // r9
  int v4; // r8d
  __int64 v6; // rax
  _WORD *v7; // rcx
  __int64 v8; // rcx
  char *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rdx
  signed __int64 v12; // rcx
  __int16 v13; // r8

  *a1 = 0;
  v2 = AslGuidToString(a1, 43LL);
  if ( v2 < 0 )
  {
    v3 = "AslGuidToString failed [%x]";
    v4 = 790;
LABEL_3:
    AslLogCallPrintf(1, (unsigned int)"SdbpGetCustomSdbFileName", v4, (_DWORD)v3);
    return (unsigned int)v2;
  }
  v6 = 43LL;
  v7 = a1;
  do
  {
    if ( !*v7 )
      break;
    ++v7;
    --v6;
  }
  while ( v6 );
  v2 = -1073741811;
  if ( v6 )
  {
    v2 = 0;
    v8 = 43 - v6;
  }
  else
  {
    v8 = 0LL;
  }
  if ( v6 )
  {
    v9 = (char *)&a1[v8];
    v2 = 0;
    v10 = 43 - v8;
    if ( 43 == v8 )
      goto LABEL_18;
    v11 = 2147483646LL;
    v12 = (char *)L".sdb" - v9;
    while ( v11 )
    {
      v13 = *(_WORD *)&v9[v12];
      if ( !v13 )
        break;
      *(_WORD *)v9 = v13;
      --v11;
      v9 += 2;
      if ( !--v10 )
        goto LABEL_18;
    }
    if ( !v10 )
    {
LABEL_18:
      v9 -= 2;
      v2 = -2147483643;
    }
    *(_WORD *)v9 = 0;
  }
  if ( v2 < 0 )
  {
    v3 = "RtlStringCchCatW failed [%x]";
    v4 = 796;
    goto LABEL_3;
  }
  return 0LL;
}
