/*
 * XREFs of wil::details::ScopeExitFn__lambda_4eff5e108462e8fe2033590d2106b783___::_ScopeExitFn__lambda_4eff5e108462e8fe2033590d2106b783___ @ 0x1800C8A00
 * Callers:
 *     _Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::StartTracking_::_1_::dtor$2 @ 0x1800E9B0C (_Windows--Internal--Holographic--SpatialGraphDriverHandleWrapper--StartTracking_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_4eff5e108462e8fe2033590d2106b783___::_ScopeExitFn__lambda_4eff5e108462e8fe2033590d2106b783___(
        __int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 8) )
  {
    v1 = *a1;
    *((_BYTE *)a1 + 8) = 0;
    v2 = *(_QWORD *)(v1 + 56);
    if ( !v2 )
    {
      std::_Xbad_function_call();
      __debugbreak();
    }
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
