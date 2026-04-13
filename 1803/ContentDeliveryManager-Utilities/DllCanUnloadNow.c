/*
 * XREFs of DllCanUnloadNow @ 0x180026050
 * Callers:
 *     <none>
 * Callees:
 *     ?TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEBG_N@Z @ 0x180025238 (-TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEBG_N@Z.c)
 *     ?GetModule@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV?$DefaultModule@$00@Details@23@XZ @ 0x1800262F0 (-GetModule@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV-$Defau.c)
 */

HRESULT __stdcall DllCanUnloadNow()
{
  struct Microsoft::WRL::Details::ModuleBase *v0; // rdx
  Microsoft::WRL::Details *v1; // rcx

  Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::GetModule();
  if ( Microsoft::WRL::Details::TerminateMap(v1, v0, 0LL) )
    return NdrDllCanUnloadNow(&gPFactory);
  else
    return 1;
}
