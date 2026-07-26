/*
 * XREFs of ndisDeletePatternEntry @ 0x1C004AF30
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C00185E4 (ndisIndicateStatusInternal.c)
 *     ndisFilterIndicatePMOffloadReject @ 0x1C004B080 (ndisFilterIndicatePMOffloadReject.c)
 *     ndisFilterIndicateWoLPatternReject @ 0x1C004B0D0 (ndisFilterIndicateWoLPatternReject.c)
 *     ndisOidPostPMRemoveWOLPattern @ 0x1C004BD90 (ndisOidPostPMRemoveWOLPattern.c)
 *     ndisOidPostRemovePMProtocolOffload @ 0x1C004BF00 (ndisOidPostRemovePMProtocolOffload.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisDeletePatternEntry(_DWORD *a1, int a2)
{
  char result; // al
  _QWORD *v3; // r8

  result = 0;
  while ( 1 )
  {
    v3 = a1;
    a1 = *(_DWORD **)a1;
    if ( !a1 )
      break;
    if ( a1[10] == a2 )
    {
      *v3 = *(_QWORD *)a1;
      ExFreePoolWithTag(a1, 0);
      return 1;
    }
  }
  return result;
}
