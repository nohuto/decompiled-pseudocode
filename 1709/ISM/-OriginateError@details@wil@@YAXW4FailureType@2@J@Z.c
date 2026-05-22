/*
 * XREFs of ?OriginateError@details@wil@@YAXW4FailureType@2@J@Z @ 0x180002C88
 * Callers:
 *     ??0SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAA@PEAUHSTRING__@@AEBU_GUID@@W4HandleWrapperDesiredAccess@123@_NPEAX@Z @ 0x1800B7340 (--0SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAA@PEAUHSTRING__@@AEBU_GUID@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 (*wil::details::OriginateError())(void)
{
  __int64 (*result)(void); // rax

  result = wil::details::g_pfnOriginateCallback;
  if ( wil::details::g_pfnOriginateCallback )
    return (__int64 (*)(void))wil::details::g_pfnOriginateCallback();
  return result;
}
