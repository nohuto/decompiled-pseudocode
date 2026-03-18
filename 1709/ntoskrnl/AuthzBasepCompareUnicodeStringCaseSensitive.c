/*
 * XREFs of AuthzBasepCompareUnicodeStringCaseSensitive @ 0x14028E3D0
 * Callers:
 *     AuthzBasepCompareUnicodeStringOperands @ 0x140016D80 (AuthzBasepCompareUnicodeStringOperands.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AuthzBasepCompareUnicodeStringCaseSensitive(__int16 *a1, unsigned __int16 *a2)
{
  unsigned __int16 v2; // r10
  unsigned __int16 v3; // r11
  unsigned __int16 v4; // ax
  __int64 v5; // r9
  char *v6; // r8
  char *v7; // rdx
  __int64 v8; // r9
  int v9; // eax
  int v10; // ecx

  v2 = *a2;
  v3 = *a1;
  v4 = *a2;
  v5 = *((_QWORD *)a2 + 1);
  v6 = (char *)*((_QWORD *)a1 + 1);
  if ( (unsigned __int16)*a1 < *a2 )
    v4 = *a1;
  v7 = &v6[v4];
  if ( v6 >= v7 )
  {
LABEL_7:
    v10 = v2;
    v9 = v3;
  }
  else
  {
    v8 = v5 - (_QWORD)v6;
    while ( 1 )
    {
      LOWORD(v9) = *(_WORD *)v6;
      LOWORD(v10) = *(_WORD *)&v6[v8];
      if ( *(_WORD *)v6 != (_WORD)v10 )
        break;
      v6 += 2;
      if ( v6 >= v7 )
        goto LABEL_7;
    }
    v10 = (unsigned __int16)v10;
    v9 = (unsigned __int16)v9;
  }
  return (unsigned int)(v9 - v10);
}
