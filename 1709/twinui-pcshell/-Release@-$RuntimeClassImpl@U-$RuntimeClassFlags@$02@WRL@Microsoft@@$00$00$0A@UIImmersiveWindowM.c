/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIImmersiveWindowMessageNotification@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180066A50
 * Callers:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIImmersiveWindowMessageNotification@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180067340 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIImm_ea_180067340.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIImmersiveWindowMessageNotification@@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x180067350 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIImm_ea_180067350.c)
 *     ?_RegisterMessages@CortanaSharedExperienceManager@@AEAAJXZ @ 0x1800A3B38 (-_RegisterMessages@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ??1?$ComPtr@VAppViewIconLoader@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A5578 (--1-$ComPtr@VAppViewIconLoader@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?CreateImageSource@AppViewIconFactory@@UEAAJUIconProperties@Multitasking@ComposableShell@Internal@Windows@@PEAPEAUIImageSource@Media@Xaml@UI@6@@Z @ 0x180197ED0 (-CreateImageSource@AppViewIconFactory@@UEAAJUIconProperties@Multitasking@ComposableShell@Interna.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IImmersiveWindowMessageNotification>::Release(
        volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  unsigned __int32 v2; // ebx
  signed __int64 v3; // rtt

  v1 = *((_QWORD *)a1 + 4);
  while ( v1 >= 0 )
  {
    v2 = v1 - 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64(a1 + 4, v1 - 1, v1);
    if ( v3 == v1 )
      goto LABEL_5;
  }
  v2 = _InterlockedDecrement((volatile signed __int32 *)(2 * v1 + 16));
LABEL_5:
  if ( !v2 )
  {
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*a1 + 48))(a1, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v2;
}
