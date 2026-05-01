/*
 * XREFs of ?SetServiceProvider@CApplicationViewBroker@@UEAAJPEAUIServiceProvider@@@Z @ 0x18008EC20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationViewBroker::SetServiceProvider(
        CApplicationViewBroker *this,
        struct IServiceProvider *a2)
{
  char *v2; // rbx

  v2 = (char *)this + 16;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 2);
  return ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))a2->lpVtbl->QueryService)(
           a2,
           &SID_ImmersiveApplicationArrayService,
           &GUID_a3c23ab7_6be2_4778_8eb0_1adb7977f76a,
           v2);
}
