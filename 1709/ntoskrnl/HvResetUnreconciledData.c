/*
 * XREFs of HvResetUnreconciledData @ 0x14046FB84
 * Callers:
 *     HvStoreModifiedData @ 0x1405138AC (HvStoreModifiedData.c)
 *     HvSyncHive @ 0x140697218 (HvSyncHive.c)
 * Callees:
 *     RtlClearAllBits @ 0x140016020 (RtlClearAllBits.c)
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
