/*
 * XREFs of IoClearFsTrackOffsetState @ 0x1401F5280
 * Callers:
 *     <none>
 * Callees:
 *     IopFreeIrpExtension @ 0x14003AE54 (IopFreeIrpExtension.c)
 *     IopIrpHasExtensionType @ 0x14012C50C (IopIrpHasExtensionType.c)
 */

__int64 __fastcall IoClearFsTrackOffsetState(__int64 a1)
{
  int v1; // edx
  __int64 v2; // rcx

  if ( !IopIrpHasExtensionType(a1, 5u) )
    return 3221226021LL;
  IopFreeIrpExtension(v2, v1, 0);
  return 0LL;
}
