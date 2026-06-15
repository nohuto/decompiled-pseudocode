/*
 * XREFs of ?MmeOnDefaultDeviceChanged@@YAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEBG@Z @ 0x1800A1650
 * Callers:
 *     s_mmeNotifyDefaultDeviceChanged @ 0x1800A1A40 (s_mmeNotifyDefaultDeviceChanged.c)
 * Callees:
 *     WPP_SF_ddS @ 0x1800A199C (WPP_SF_ddS.c)
 */

__int64 __fastcall MmeOnDefaultDeviceChanged(
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a1,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002 a2,
        const unsigned __int16 *a3)
{
  char v4; // di
  int v6; // edx
  int v7; // r8d

  v4 = a2;
  if ( (unsigned int)IsMmeDefaultDeviceChangedSupported() )
  {
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x20) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_ddS(*((_QWORD *)WPP_GLOBAL_Control + 2), v6, v7, a1, v4, (__int64)a3);
    }
    RtlAcquireResourceExclusive(&PnpInfoResource, 1u);
    _InterlockedIncrement((volatile signed __int32 *)g_pPnpInfoShared + 1);
    _InterlockedIncrement((volatile signed __int32 *)g_pPnpInfoActual + 1);
    RtlReleaseResource(&PnpInfoResource);
  }
  return 0LL;
}
