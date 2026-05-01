/*
 * XREFs of DllGetClassObject @ 0x1800050C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetClassObject@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAJAEBU_GUID@@0PEAPEAXPEBG@Z @ 0x180005310 (-GetClassObject@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAJAEB.c)
 *     ?GetModule@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV?$DefaultModule@$00@Details@23@XZ @ 0x1800053BC (-GetModule@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV-$Defau.c)
 */

HRESULT __stdcall DllGetClassObject(const IID *const rclsid, const IID *const riid, LPVOID *ppv)
{
  Microsoft::WRL::Details *Module; // rax

  Module = (Microsoft::WRL::Details *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::GetModule(rclsid);
  return Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::GetClassObject(Module);
}
