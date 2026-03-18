/*
 * XREFs of IoClearFsTrackOffsetState @ 0x1401FAFF0
 * Callers:
 *     <none>
 * Callees:
 *     IopFreeIrpExtension @ 0x140117B28 (IopFreeIrpExtension.c)
 *     IopIrpHasExtensionType @ 0x140117EC8 (IopIrpHasExtensionType.c)
 */

__int64 __fastcall IoClearFsTrackOffsetState(__int64 a1)
{
  int v1; // edx
  __int64 v2; // rcx

  if ( !IopIrpHasExtensionType(a1, 5u) )
    return 3221226021LL;
  IopFreeIrpExtension(v2, v1, 0LL);
  return 0LL;
}
