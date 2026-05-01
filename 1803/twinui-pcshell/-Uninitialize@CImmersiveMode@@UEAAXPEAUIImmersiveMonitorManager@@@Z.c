/*
 * XREFs of ?Uninitialize@CImmersiveMode@@UEAAXPEAUIImmersiveMonitorManager@@@Z @ 0x180117F80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CImmersiveMode::Uninitialize(CImmersiveMode *this, struct IImmersiveMonitorManager *a2)
{
  __int64 v4; // rcx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
  if ( (**(int (__fastcall ***)(struct IImmersiveMonitorManager *, GUID *, __int64 *))a2)(
         a2,
         &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
         &v5) >= 0 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 32LL))(v5, *((unsigned int *)this + 68));
  v4 = *((_QWORD *)this + 36);
  if ( v4 )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion(v4);
    *((_QWORD *)this + 36) = 0LL;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
}
