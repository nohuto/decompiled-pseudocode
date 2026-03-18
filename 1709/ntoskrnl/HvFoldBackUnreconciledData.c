/*
 * XREFs of HvFoldBackUnreconciledData @ 0x140696D80
 * Callers:
 *     CmpFlushHive @ 0x1404DD950 (CmpFlushHive.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     RtlNumberOfSetBits @ 0x1400D4B40 (RtlNumberOfSetBits.c)
 *     RtlMergeBitMaps @ 0x140116B14 (RtlMergeBitMaps.c)
 *     CmpLockRegistry @ 0x14047E6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     HvFreeUnreconciledData @ 0x14058F61C (HvFreeUnreconciledData.c)
 */

void __fastcall HvFoldBackUnreconciledData(__int64 a1)
{
  ULONG v2; // eax
  bool v3; // zf

  CmpLockRegistry();
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 2848), 1u);
  RtlMergeBitMaps((unsigned int *)(a1 + 96), a1 + 2904);
  v2 = RtlNumberOfSetBits((PRTL_BITMAP)(a1 + 96));
  v3 = *(_BYTE *)(a1 + 2896) == 0;
  *(_DWORD *)(a1 + 112) = v2;
  if ( !v3 )
    *(_BYTE *)(a1 + 175) = 1;
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 2848));
  CmpUnlockRegistry();
  HvFreeUnreconciledData(a1);
}
