/*
 * XREFs of ?OnKeyUp@CAltTabViewController@@UEAAXPEAUIMultitaskingViewFrame@@IW4ModifierKeys@@@Z @ 0x18027EB30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAltTabViewController::OnKeyUp(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  __int64 v4[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 32);
  if ( v3 && a3 == 18 )
  {
    v5 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
    (*(void (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v3 + 24LL))(
      v3,
      &GUID_23a47bb4_c26c_4ecf_a5e8_5fbeefdb55d6,
      &v5);
    if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5) )
    {
      v4[0] = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v4);
      (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v5)(v5, &GUID_405444d2_baa5_48ed_abfe_a673f70be863, v4);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4[0] + 64LL))(v4[0]);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v4);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
  }
}
