/*
 * XREFs of ?NotifyDismissalPolicy@XamlLauncherState@@UEAAXPEAUIStartDismissalPolicy@@@Z @ 0x18022F7A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall XamlLauncherState::NotifyDismissalPolicy(XamlLauncherState *this, struct IStartDismissalPolicy *a2)
{
  struct IStartDismissalPolicy *v2; // rax
  struct IStartDismissalPolicy *v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct IStartDismissalPolicy *)*((_QWORD *)this + 10);
  if ( v2 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct IStartDismissalPolicy *))(*(_QWORD *)a2 + 8LL))(a2);
      v2 = (struct IStartDismissalPolicy *)*((_QWORD *)this + 10);
    }
    v5 = v2;
    *((_QWORD *)this + 10) = a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v5);
  }
}
