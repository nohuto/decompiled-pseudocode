/*
 * XREFs of AuthzBasepCompareUnicodeStringCaseSensitive @ 0x1402C4048
 * Callers:
 *     AuthzBasepCompareUnicodeStringOperands @ 0x140044640 (AuthzBasepCompareUnicodeStringOperands.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AuthzBasepCompareUnicodeStringCaseSensitive(__int16 *a1, unsigned __int16 *a2)
{
  unsigned __int16 v2; // r10
  unsigned __int16 v3; // ax
  char *v4; // r8
  char *v5; // r9
  __int64 v6; // rax
  int v7; // ecx
  int v8; // eax

  v2 = *a1;
  v3 = *a1;
  v4 = (char *)*((_QWORD *)a1 + 1);
  if ( (unsigned __int16)*a1 >= *a2 )
    v3 = *a2;
  v5 = &v4[v3];
  if ( v4 >= v5 )
  {
LABEL_7:
    v7 = *a2;
    v8 = v2;
  }
  else
  {
    v6 = *((_QWORD *)a2 + 1) - (_QWORD)v4;
    while ( 1 )
    {
      LOWORD(v7) = *(_WORD *)&v4[v6];
      if ( *(_WORD *)v4 != (_WORD)v7 )
        break;
      v4 += 2;
      if ( v4 >= v5 )
        goto LABEL_7;
    }
    v7 = (unsigned __int16)v7;
    v8 = *(unsigned __int16 *)v4;
  }
  return (unsigned int)(v8 - v7);
}
