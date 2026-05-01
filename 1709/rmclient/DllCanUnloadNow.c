/*
 * XREFs of DllCanUnloadNow @ 0x1800019C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV?$DefaultModule@$00@Details@23@XZ @ 0x180001B4C (-Create@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV-$DefaultM.c)
 *     ?GetObjectCount@ModuleBase@Details@WRL@Microsoft@@UEBAKXZ @ 0x180003C20 (-GetObjectCount@ModuleBase@Details@WRL@Microsoft@@UEBAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180008290 (_guard_dispatch_icall_nop.c)
 */

HRESULT __stdcall DllCanUnloadNow()
{
  Microsoft::WRL::Details::ModuleBase *v0; // rax
  unsigned int ObjectCount; // eax

  v0 = (Microsoft::WRL::Details::ModuleBase *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create();
  if ( *(unsigned int (__fastcall **)(Microsoft::WRL::Details::ModuleBase *__hidden))(*(_QWORD *)v0 + 24LL) == Microsoft::WRL::Details::ModuleBase::GetObjectCount )
    ObjectCount = Microsoft::WRL::Details::ModuleBase::GetObjectCount(v0);
  else
    ObjectCount = (*(__int64 (__fastcall **)(Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v0 + 24LL))(v0);
  return ObjectCount != 0;
}
