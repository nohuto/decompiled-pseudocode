/*
 * XREFs of _CAudioResourceManager::DestroyStream_::_1_::dtor$103 @ 0x180068D98
 * Callers:
 *     <none>
 * Callees:
 *     ?OnEndpointUnavailableForUse@CBaseStreamGroupProxy@@UEAAXPEBG@Z @ 0x180044230 (-OnEndpointUnavailableForUse@CBaseStreamGroupProxy@@UEAAXPEBG@Z.c)
 */

void __fastcall CAudioResourceManager::DestroyStream_::_1_::dtor_103(__int64 a1, __int64 a2)
{
  CBaseStreamGroupProxy::OnEndpointUnavailableForUse(
    *(CBaseStreamGroupProxy **)(a2 + 160),
    (const unsigned __int16 *)(*(_QWORD *)(a2 + 168) + 16LL));
}
