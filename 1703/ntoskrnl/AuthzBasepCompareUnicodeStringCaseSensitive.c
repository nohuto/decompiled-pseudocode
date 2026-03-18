/*
 * XREFs of AuthzBasepCompareUnicodeStringCaseSensitive @ 0x1402640A4
 * Callers:
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1401157FC (AuthzBasepCompareUnicodeStringOperands.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AuthzBasepCompareUnicodeStringCaseSensitive(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int16 v2; // r10
  unsigned __int16 v3; // r11
  char *v4; // r8
  _WORD *v5; // r9
  char *v6; // rcx
  int v7; // ecx
  int v8; // eax

  v2 = *a1;
  v3 = *a2;
  v4 = (char *)*((_QWORD *)a1 + 1);
  v5 = (_WORD *)*((_QWORD *)a2 + 1);
  if ( *a1 < *a2 )
    a2 = a1;
  v6 = &v4[*a2];
  while ( 1 )
  {
    if ( v4 >= v6 )
    {
      v7 = v3;
      v8 = v2;
      return (unsigned int)(v8 - v7);
    }
    if ( *(_WORD *)v4 != *v5 )
      break;
    v4 += 2;
    ++v5;
  }
  v7 = (unsigned __int16)*v5;
  v8 = *(unsigned __int16 *)v4;
  return (unsigned int)(v8 - v7);
}
