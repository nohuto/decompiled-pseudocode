/*
 * XREFs of IopIrpHasExtensionType @ 0x14012C50C
 * Callers:
 *     IopFreeIrpExtension @ 0x14003AE54 (IopFreeIrpExtension.c)
 *     IoMakeAssociatedIrpPriv @ 0x14012C03C (IoMakeAssociatedIrpPriv.c)
 *     IoPropagateActivityIdToThread @ 0x14012C2F0 (IoPropagateActivityIdToThread.c)
 *     IoGetFsTrackOffsetState @ 0x14012C330 (IoGetFsTrackOffsetState.c)
 *     IoReuseIrp @ 0x14012C360 (IoReuseIrp.c)
 *     IoGetGenericIrpExtension @ 0x140134080 (IoGetGenericIrpExtension.c)
 *     IoSetGenericIrpExtension @ 0x140135070 (IoSetGenericIrpExtension.c)
 *     IoClearFsTrackOffsetState @ 0x1401F5280 (IoClearFsTrackOffsetState.c)
 *     IoGetAdapterCryptoEngineExtension @ 0x1401F52B0 (IoGetAdapterCryptoEngineExtension.c)
 *     IoGetFsZeroingOffset @ 0x1401F52F0 (IoGetFsZeroingOffset.c)
 *     IoIrpHasFsTrackOffsetExtensionType @ 0x1401F5330 (IoIrpHasFsTrackOffsetExtensionType.c)
 *     IoSetFsZeroingOffset @ 0x1401F53F0 (IoSetFsZeroingOffset.c)
 *     IoSetFsZeroingOffsetRequired @ 0x1401F5430 (IoSetFsZeroingOffsetRequired.c)
 *     IopPerfCompleteRequest @ 0x1401F56E8 (IopPerfCompleteRequest.c)
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
