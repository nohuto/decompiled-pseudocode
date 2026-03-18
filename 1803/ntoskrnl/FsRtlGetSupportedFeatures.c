/*
 * XREFs of FsRtlGetSupportedFeatures @ 0x1400D2080
 * Callers:
 *     IopQueryInformation @ 0x1405540A0 (IopQueryInformation.c)
 *     IopCopyOffloadCapable @ 0x140583A90 (IopCopyOffloadCapable.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
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
