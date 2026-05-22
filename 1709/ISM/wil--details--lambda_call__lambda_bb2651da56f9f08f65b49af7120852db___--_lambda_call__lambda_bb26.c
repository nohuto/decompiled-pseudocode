/*
 * XREFs of wil::details::lambda_call__lambda_bb2651da56f9f08f65b49af7120852db___::_lambda_call__lambda_bb2651da56f9f08f65b49af7120852db___ @ 0x1800963D4
 * Callers:
 *     _SpatialInputControllerCollection::DoDeviceAttach_::_1_::dtor$1 @ 0x1800D0E23 (_SpatialInputControllerCollection--DoDeviceAttach_--_1_--dtor$1.c)
 * Callees:
 *     ?Stop@DeviceAttached@RawInputProvidersTracing@@QEAAXJK@Z @ 0x18008D47C (-Stop@DeviceAttached@RawInputProvidersTracing@@QEAAXJK@Z.c)
 */

void __fastcall wil::details::lambda_call__lambda_bb2651da56f9f08f65b49af7120852db___::_lambda_call__lambda_bb2651da56f9f08f65b49af7120852db___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    RawInputProvidersTracing::DeviceAttached::Stop(
      *(RawInputProvidersTracing::DeviceAttached **)(a1 + 16),
      **(_DWORD **)a1,
      **(_DWORD **)(a1 + 8));
  }
}
