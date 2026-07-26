/*
 * XREFs of GetMiniportFromReqTracker @ 0x1C00BB01C
 * Callers:
 *     ndisOidPreProtocolOptions @ 0x1C0048F70 (ndisOidPreProtocolOptions.c)
 *     ndisOidPrePMHaltOnSuspend @ 0x1C004C110 (ndisOidPrePMHaltOnSuspend.c)
 *     ndisPreSetPMParameters @ 0x1C00BAE84 (ndisPreSetPMParameters.c)
 *     ndisOidPreAddPMProtocolOffload @ 0x1C00D50A0 (ndisOidPreAddPMProtocolOffload.c)
 *     ndisPreQueryPMParameters @ 0x1C00D628C (ndisPreQueryPMParameters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetMiniportFromReqTracker(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // rax

  result = *a1;
  if ( !*a1 )
  {
    v2 = a1[3];
    if ( v2 )
    {
      return *(_QWORD *)(v2 + 16);
    }
    else
    {
      result = a1[1];
      if ( result )
        return *(_QWORD *)(result + 32);
      result = a1[2];
      if ( result )
        return *(_QWORD *)(result + 32);
    }
  }
  return result;
}
