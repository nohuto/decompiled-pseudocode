/*
 * XREFs of IopIrpHasExtensionType @ 0x1400A4C7C
 * Callers:
 *     IopFreeIrpExtension @ 0x1400A4884 (IopFreeIrpExtension.c)
 *     IoMakeAssociatedIrpPriv @ 0x1400A4924 (IoMakeAssociatedIrpPriv.c)
 *     IoPropagateActivityIdToThread @ 0x1400A4BF0 (IoPropagateActivityIdToThread.c)
 *     IoGetFsTrackOffsetState @ 0x1400A4C50 (IoGetFsTrackOffsetState.c)
 *     IoReuseIrp @ 0x1400A60A0 (IoReuseIrp.c)
 *     IoSetGenericIrpExtension @ 0x14014B1C0 (IoSetGenericIrpExtension.c)
 *     IoClearAdapterCryptoEngineExtension @ 0x1401A59B0 (IoClearAdapterCryptoEngineExtension.c)
 *     IoClearFsTrackOffsetState @ 0x140237D90 (IoClearFsTrackOffsetState.c)
 *     IoGetAdapterCryptoEngineExtension @ 0x140237DC0 (IoGetAdapterCryptoEngineExtension.c)
 *     IoGetFsZeroingOffset @ 0x140237E00 (IoGetFsZeroingOffset.c)
 *     IoIrpHasFsTrackOffsetExtensionType @ 0x140237E40 (IoIrpHasFsTrackOffsetExtensionType.c)
 *     IoSetFsZeroingOffset @ 0x140237F10 (IoSetFsZeroingOffset.c)
 *     IoSetFsZeroingOffsetRequired @ 0x140237F50 (IoSetFsZeroingOffsetRequired.c)
 *     IopPerfCompleteRequest @ 0x1402381FC (IopPerfCompleteRequest.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall IopIrpHasExtensionType(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  char v3; // r8
  int v4; // eax

  v2 = *(_QWORD *)(a1 + 200);
  v3 = 0;
  if ( *(char *)(a1 + 71) < 0 )
    return a2 == 2;
  if ( v2 )
  {
    v4 = *(unsigned __int16 *)(v2 + 2);
    return _bittest(&v4, a2);
  }
  return v3;
}
