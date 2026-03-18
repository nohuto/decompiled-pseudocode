/*
 * XREFs of HvResetUnreconciledData @ 0x14045D4C8
 * Callers:
 *     HvStoreModifiedData @ 0x1404B7370 (HvStoreModifiedData.c)
 *     HvSyncHive @ 0x14066CBA0 (HvSyncHive.c)
 * Callees:
 *     RtlClearAllBits @ 0x14006E050 (RtlClearAllBits.c)
 */

void __fastcall HvResetUnreconciledData(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 104) )
  {
    RtlClearAllBits((PRTL_BITMAP)(a1 + 96));
    *(_DWORD *)(a1 + 112) = 0;
    *(_BYTE *)(a1 + 175) = 0;
  }
}
