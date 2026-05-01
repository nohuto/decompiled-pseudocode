/*
 * XREFs of DllGetClassObject @ 0x180096170
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetClassObject@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGAEBU_GUID@@2PEAPEAX@Z @ 0x18008DAE4 (--$GetClassObject@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGAEBU_GUID@@2PEAPEAX@Z.c)
 *     ?Create@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV?$DefaultModule@$00@Details@23@XZ @ 0x1800926E0 (-Create@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV-$DefaultM.c)
 */

HRESULT __stdcall DllGetClassObject(const IID *const rclsid, const IID *const riid, LPVOID *ppv)
{
  __int64 *v6; // rax
  __int64 v7; // rdx

  v6 = Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create();
  return Microsoft::WRL::Details::GetClassObject<1>(
           (Microsoft::WRL::Details *)v6,
           v7,
           rclsid,
           &riid->Data1,
           (struct Microsoft::WRL::Details::CreatorMap *)ppv);
}
