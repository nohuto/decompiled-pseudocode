/*
 * XREFs of BiLookupObjectByBootEntry @ 0x14077C7B4
 * Callers:
 *     BiBuildIdentifierList @ 0x14077AA54 (BiBuildIdentifierList.c)
 *     BiTranslateBootEntryId @ 0x14077CB5C (BiTranslateBootEntryId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BiLookupObjectByBootEntry(__int64 **a1, int a2, _QWORD *a3)
{
  __int64 *i; // r9

  for ( i = *a1; ; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)a1 )
      return 3221226021LL;
    if ( (i[6] & 3) != 0 && *((_DWORD *)i + 8) == a2 )
      break;
  }
  *a3 = i;
  return 0LL;
}
