/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@UEAA@XZ @ 0x1800040C0
 * Callers:
 *     _Windows::Internal::ComTaskPool::CRemoteReleaseStub::_scalar_deleting_destructor__::_1_::dtor$1 @ 0x1800B50D6 (_Windows--Internal--ComTaskPool--CRemoteReleaseStub--_scalar_deleting_destructor__--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 12) = -1073741823;
}
