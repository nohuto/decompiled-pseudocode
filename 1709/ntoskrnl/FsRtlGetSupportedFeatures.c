/*
 * XREFs of FsRtlGetSupportedFeatures @ 0x140131330
 * Callers:
 *     IopQueryInformation @ 0x14056B730 (IopQueryInformation.c)
 *     IopCopyOffloadCapable @ 0x14059E01C (IopCopyOffloadCapable.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FsRtlGetSupportedFeatures(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = 0;
  if ( FltMgrCallbacks )
    return (*(__int64 (**)(void))(FltMgrCallbacks + 8))();
  return result;
}
