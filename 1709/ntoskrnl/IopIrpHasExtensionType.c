/*
 * XREFs of IopIrpHasExtensionType @ 0x140117EC8
 * Callers:
 *     IoGetFsTrackOffsetState @ 0x140008A40 (IoGetFsTrackOffsetState.c)
 *     IoReuseIrp @ 0x1400B4070 (IoReuseIrp.c)
 *     IopFreeIrpExtension @ 0x140117B28 (IopFreeIrpExtension.c)
 *     IoMakeAssociatedIrpPriv @ 0x140117BC4 (IoMakeAssociatedIrpPriv.c)
 *     IoPropagateActivityIdToThread @ 0x140117E90 (IoPropagateActivityIdToThread.c)
 *     IoClearFsTrackOffsetState @ 0x1401FAFF0 (IoClearFsTrackOffsetState.c)
 *     IoGetAdapterCryptoEngineExtension @ 0x1401FB020 (IoGetAdapterCryptoEngineExtension.c)
 *     IoGetFsZeroingOffset @ 0x1401FB060 (IoGetFsZeroingOffset.c)
 *     IoIrpHasFsTrackOffsetExtensionType @ 0x1401FB0A0 (IoIrpHasFsTrackOffsetExtensionType.c)
 *     IoSetFsZeroingOffset @ 0x1401FB170 (IoSetFsZeroingOffset.c)
 *     IoSetFsZeroingOffsetRequired @ 0x1401FB1B0 (IoSetFsZeroingOffsetRequired.c)
 *     IoSetGenericIrpExtension @ 0x1401FB210 (IoSetGenericIrpExtension.c)
 *     IopPerfCompleteRequest @ 0x1401FB4C4 (IopPerfCompleteRequest.c)
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
