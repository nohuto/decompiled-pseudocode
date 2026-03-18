/*
 * XREFs of HvFoldBackUnreconciledData @ 0x14066C70C
 * Callers:
 *     CmpFlushHive @ 0x1404D6DE0 (CmpFlushHive.c)
 * Callees:
 *     RtlMergeBitMaps @ 0x14006DC7C (RtlMergeBitMaps.c)
 *     RtlNumberOfSetBits @ 0x14006E280 (RtlNumberOfSetBits.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     CmpLockRegistry @ 0x1404FF6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 */

void __fastcall HvFoldBackUnreconciledData(__int64 a1)
{
  ULONG v2; // eax
  bool v3; // zf

  CmpLockRegistry();
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 2848), 1u);
  RtlMergeBitMaps(a1 + 96, (unsigned int *)(a1 + 2904));
  v2 = RtlNumberOfSetBits((PRTL_BITMAP)(a1 + 96));
  v3 = *(_BYTE *)(a1 + 2896) == 0;
  *(_DWORD *)(a1 + 112) = v2;
  if ( !v3 )
    *(_BYTE *)(a1 + 175) = 1;
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 2848));
  CmpUnlockRegistry();
  HvFreeUnreconciledData(a1);
}
