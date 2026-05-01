/*
 * XREFs of ?v_LayoutChildren@CGlyphButtonElement@@MEAAXXZ @ 0x18029A650
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802766CC (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x18027674C (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ?_CreateBackground@CGlyphButtonElement@@AEAAJAEBUCSize@Geometry@@@Z @ 0x18029A3E4 (-_CreateBackground@CGlyphButtonElement@@AEAAJAEBUCSize@Geometry@@@Z.c)
 */

void __fastcall CGlyphButtonElement::v_LayoutChildren(CGlyphButtonElement *this)
{
  int v2; // edx
  __int64 v3; // rcx
  int v4; // edx
  int v5; // ecx
  __int64 v7; // rcx
  __int64 v8[2]; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v9; // [rsp+40h] [rbp-30h] BYREF
  int v10; // [rsp+48h] [rbp-28h]
  int v11; // [rsp+4Ch] [rbp-24h]
  _DWORD v12[4]; // [rsp+50h] [rbp-20h] BYREF

  v9 = *((_QWORD *)this + 47);
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v9);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v8, (__int64 *)&v9, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
  v2 = *((_DWORD *)this + 15);
  v3 = *((_QWORD *)this + 11);
  LODWORD(v9) = *((_DWORD *)this + 14);
  v10 = v9 + 1;
  HIDWORD(v9) = v2;
  v11 = v2 + 1;
  (*(void (__fastcall **)(__int64, unsigned __int64 *, _QWORD, _QWORD))(*(_QWORD *)v3 + 24LL))(v3, &v9, 0LL, 0LL);
  v4 = *((_DWORD *)this + 16) - *((_DWORD *)this + 14);
  v5 = *((_DWORD *)this + 17) - *((_DWORD *)this + 15);
  v12[0] = 0;
  v12[1] = 0;
  v12[2] = v4;
  v12[3] = v5;
  if ( *((_DWORD *)this + 100) != v4 || *((_DWORD *)this + 101) != v5 )
  {
    v9 = __PAIR64__(v5, v4);
    CGlyphButtonElement::_CreateBackground(this, (const struct Geometry::CSize *)&v9);
  }
  v7 = *((_QWORD *)this + 49);
  if ( v7 )
    (*(void (__fastcall **)(__int64, _DWORD *, _QWORD, _QWORD))(*(_QWORD *)v7 + 24LL))(v7, v12, 0LL, 0LL);
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v8);
}
