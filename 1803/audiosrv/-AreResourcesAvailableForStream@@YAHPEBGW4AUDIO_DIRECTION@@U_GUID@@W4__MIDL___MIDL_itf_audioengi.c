/*
 * XREFs of ?AreResourcesAvailableForStream@@YAHPEBGW4AUDIO_DIRECTION@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KH@Z @ 0x1800C08B8
 * Callers:
 *     AudioServerIsFormatSupported @ 0x180001740 (AudioServerIsFormatSupported.c)
 *     ?UseSupportedConnectorMode@@YAJPEAVCEndpointCharacteristics@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@HAEA_N@Z @ 0x180011900 (-UseSupportedConnectorMode@@YAJPEAVCEndpointCharacteristics@@KW4__MIDL___MIDL_itf_audioengineend.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AreResourcesAvailableForStream(
        __int64 a1,
        unsigned int a2,
        __int128 *a3,
        int a4,
        unsigned int a5,
        int a6)
{
  unsigned int v7; // ebx
  __int128 v12; // [rsp+40h] [rbp-28h] BYREF
  int v13; // [rsp+78h] [rbp+10h] BYREF

  v7 = 0;
  v13 = 0;
  if ( (*(int (__fastcall **)(struct IAudioPolicyManager *, bool, _QWORD, _QWORD, int, int *))(*(_QWORD *)g_PolicyManager
                                                                                             + 64LL))(
         g_PolicyManager,
         a2 != 0,
         a5,
         0LL,
         a6,
         &v13) >= 0 )
  {
    v12 = *a3;
    return (*(unsigned int (__fastcall **)(CAudioResourceManager *, __int64, _QWORD, __int128 *, int, int))(*(_QWORD *)g_AudioResourceManager + 80LL))(
             g_AudioResourceManager,
             a1,
             a2,
             &v12,
             a4,
             v13);
  }
  return v7;
}
