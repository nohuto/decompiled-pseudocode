/*
 * XREFs of PsGetProcessWow64Process @ 0x1400AB0A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessWow64Process(__int64 a1)
{
  _WORD *v1; // rcx
  __int16 v3; // dx

  v1 = *(_WORD **)(a1 + 1064);
  if ( v1 && ((v3 = v1[4], v3 == 332) || v3 == 452) )
    return *(_QWORD *)v1;
  else
    return 0LL;
}
