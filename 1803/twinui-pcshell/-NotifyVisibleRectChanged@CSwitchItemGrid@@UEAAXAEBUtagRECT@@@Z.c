/*
 * XREFs of ?NotifyVisibleRectChanged@CSwitchItemGrid@@UEAAXAEBUtagRECT@@@Z @ 0x18028F650
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z @ 0x180185E7C (-Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z.c)
 */

void __fastcall CSwitchItemGrid::NotifyVisibleRectChanged(CSwitchItemGrid *this, const struct tagRECT *a2)
{
  __int64 *v2; // rbx
  __int64 *v4; // rsi
  __int64 v5; // rdi
  Geometry::CRect *v6; // rax
  bool v7; // al
  __int64 v8; // rdx
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v10[16]; // [rsp+28h] [rbp-20h] BYREF

  v2 = (__int64 *)*((_QWORD *)this - 28);
  v4 = &v2[*((_QWORD *)this - 27)];
  while ( v2 != v4 )
  {
    v9 = *v2;
    v5 = v9;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v9);
    v6 = (Geometry::CRect *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v5 + 88LL))(v5, v10);
    v7 = Geometry::CRect::Intersects(v6, a2);
    v8 = *(_QWORD *)v5;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(v8 + 136))(v5);
    else
      (*(void (__fastcall **)(__int64))(v8 + 144))(v5);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
    ++v2;
  }
}
