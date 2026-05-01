/*
 * XREFs of ?DragLeave@CMultitaskingViewElementBase@@UEAAXXZ @ 0x18028A160
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4PointerTracking@CMultitaskingViewElementBase@@QEAAAEAU01@$$QEAU01@@Z @ 0x180289D10 (--4PointerTracking@CMultitaskingViewElementBase@@QEAAAEAU01@$$QEAU01@@Z.c)
 */

void __fastcall CMultitaskingViewElementBase::DragLeave(CMultitaskingViewElementBase *this)
{
  __int64 v2; // rcx
  __int128 v3; // [rsp+20h] [rbp-58h] BYREF
  int v4; // [rsp+30h] [rbp-48h]
  int v5; // [rsp+34h] [rbp-44h]
  int v6; // [rsp+38h] [rbp-40h]
  _OWORD v7[2]; // [rsp+40h] [rbp-38h] BYREF
  int v8; // [rsp+60h] [rbp-18h]

  v2 = *((_QWORD *)this + 17);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 464LL))(v2);
  memset_0(&v3, 0, 0x48uLL);
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v8 = 0;
  v3 = 0LL;
  memset(v7, 0, sizeof(v7));
  CMultitaskingViewElementBase::PointerTracking::operator=((__int64)this + 96, (__int64)&v3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v7 + 1);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v7);
  (*(void (__fastcall **)(CMultitaskingViewElementBase *))(*(_QWORD *)this + 624LL))(this);
}
