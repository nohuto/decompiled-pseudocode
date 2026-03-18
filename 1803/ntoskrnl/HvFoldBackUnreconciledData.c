/*
 * XREFs of HvFoldBackUnreconciledData @ 0x1406FB800
 * Callers:
 *     CmpFlushHive @ 0x14049D2A8 (CmpFlushHive.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x14008B0F0 (RtlNumberOfSetBits.c)
 *     RtlMergeBitMaps @ 0x1400B6478 (RtlMergeBitMaps.c)
 *     HvFreeUnreconciledData @ 0x14057915C (HvFreeUnreconciledData.c)
 */

void __fastcall HvFoldBackUnreconciledData(__int64 a1)
{
  ULONG v2; // eax
  bool v3; // zf

  RtlMergeBitMaps(a1 + 112, (unsigned int *)(a1 + 1728));
  v2 = RtlNumberOfSetBits((PRTL_BITMAP)(a1 + 112));
  v3 = *(_BYTE *)(a1 + 1720) == 0;
  *(_DWORD *)(a1 + 128) = v2;
  if ( !v3 )
    *(_BYTE *)(a1 + 191) = 1;
  HvFreeUnreconciledData(a1);
}
