/*
 * XREFs of Match @ 0x1C0061A20
 * Callers:
 *     <none>
 * Callees:
 *     IsCompatableDSDTRevision @ 0x1C001F658 (IsCompatableDSDTRevision.c)
 *     Match_32 @ 0x1C0061AF4 (Match_32.c)
 *     Match_64 @ 0x1C0061C14 (Match_64.c)
 */

__int64 __fastcall Match(__int64 a1, __int64 a2)
{
  if ( IsCompatableDSDTRevision() )
    return Match_64(a1, a2);
  else
    return Match_32(a1, a2);
}
