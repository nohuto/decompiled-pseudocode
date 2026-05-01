/*
 * XREFs of DllCanUnloadNow @ 0x180002470
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectCount@ModuleBase@Details@WRL@Microsoft@@UEBAKXZ @ 0x180002B30 (-GetObjectCount@ModuleBase@Details@WRL@Microsoft@@UEBAKXZ.c)
 *     ?Create@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV?$DefaultModule@$00@Details@23@XZ @ 0x180006390 (-Create@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV-$DefaultM.c)
 *     _guard_dispatch_icall_nop @ 0x180007B90 (_guard_dispatch_icall_nop.c)
 */

HRESULT __stdcall DllCanUnloadNow()
{
  Microsoft::WRL::Details::ModuleBase *v0; // rcx
  unsigned int (__fastcall *v1)(Microsoft::WRL::Details::ModuleBase *__hidden); // rax
  unsigned int ObjectCount; // eax

  v0 = (Microsoft::WRL::Details::ModuleBase *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create();
  v1 = *(unsigned int (__fastcall **)(Microsoft::WRL::Details::ModuleBase *__hidden))(*(_QWORD *)v0 + 24LL);
  if ( v1 == Microsoft::WRL::Details::ModuleBase::GetObjectCount )
    ObjectCount = Microsoft::WRL::Details::ModuleBase::GetObjectCount(v0);
  else
    ObjectCount = v1(v0);
  return ObjectCount != 0;
}
