/*
 * XREFs of _ATL::CAtlArray_CAudioSessionNotificationProcess_ATL::CElementTraits_CAudioSessionNotificationProcess___::Add_::_1_::dtor$0 @ 0x1800B1761
 * Callers:
 *     <none>
 * Callees:
 *     ?OnEndpointUnavailableForUse@CBaseStreamGroupProxy@@UEAAXPEBG@Z @ 0x180044230 (-OnEndpointUnavailableForUse@CBaseStreamGroupProxy@@UEAAXPEBG@Z.c)
 */

void __fastcall ATL::CAtlArray_CAudioSessionNotificationProcess_ATL::CElementTraits_CAudioSessionNotificationProcess___::Add_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  CBaseStreamGroupProxy::OnEndpointUnavailableForUse(
    *(CBaseStreamGroupProxy **)(a2 + 104),
    (const unsigned __int16 *)(8LL * *(_QWORD *)(a2 + 96) + **(_QWORD **)(a2 + 80)));
}
