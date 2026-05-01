/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIObjectArray@@@WRL@Microsoft@@UEAA@XZ @ 0x18019145C
 * Callers:
 *     ??_GCGITCallbackArray@@UEAAPEAXI@Z @ 0x180309FB0 (--_GCGITCallbackArray@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IObjectArray>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IObjectArray>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 44) = -1073741823;
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 24));
}
