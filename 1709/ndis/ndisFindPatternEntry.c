/*
 * XREFs of ndisFindPatternEntry @ 0x1C00AC08C
 * Callers:
 *     ndisOidPrePMRemoveWOLPattern @ 0x1C00ABEA0 (ndisOidPrePMRemoveWOLPattern.c)
 *     ndisOidPreRemovePMProtocolOffload @ 0x1C00E0090 (ndisOidPreRemovePMProtocolOffload.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall ndisFindPatternEntry(__int64 **a1, int a2)
{
  __int64 *result; // rax

  for ( result = *a1; result && *((_DWORD *)result + 10) != a2; result = (__int64 *)*result )
    ;
  return result;
}
