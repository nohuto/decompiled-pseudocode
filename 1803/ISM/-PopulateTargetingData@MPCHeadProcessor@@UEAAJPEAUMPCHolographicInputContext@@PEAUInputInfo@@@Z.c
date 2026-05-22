/*
 * XREFs of ?PopulateTargetingData@MPCHeadProcessor@@UEAAJPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180047E80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCHeadProcessor::PopulateTargetingData(
        MPCHeadProcessor *this,
        struct MPCHolographicInputContext *a2,
        struct InputInfo *a3)
{
  *((_BYTE *)a3 + 500) = 1;
  *((_DWORD *)a3 + 135) = *((_DWORD *)a2 + 38);
  *((_DWORD *)a3 + 136) = *((_DWORD *)a2 + 39);
  *((_DWORD *)a3 + 137) = *((_DWORD *)a2 + 40);
  *((_DWORD *)a3 + 138) = *((_DWORD *)a2 + 41);
  *((_DWORD *)a3 + 139) = *((_DWORD *)a2 + 42);
  *((_DWORD *)a3 + 140) = *((_DWORD *)a2 + 43);
  return 0LL;
}
