/*
 * XREFs of ?RuntimeClassInitialize@CGITCookieObject@@QEAAJPEAUIGlobalInterfaceTable@@PEAUIUnknown@@@Z @ 0x18030A428
 * Callers:
 *     ??$MakeAndInitialize@VCGITCookieObject@@UIGITCookieObject@@PEAUIGlobalInterfaceTable@@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAUIGITCookieObject@@$$QEAPEAUIGlobalInterfaceTable@@AEAPEAUIUnknown@@@Z @ 0x180309D8C (--$MakeAndInitialize@VCGITCookieObject@@UIGITCookieObject@@PEAUIGlobalInterfaceTable@@AEAPEAUIUn.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGITCookieObject::RuntimeClassInitialize(
        CGITCookieObject *this,
        struct IGlobalInterfaceTable *a2,
        struct IUnknown *a3)
{
  struct IGlobalInterfaceTable *v5; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IGlobalInterfaceTable *v11; // [rsp+40h] [rbp+8h] BYREF

  v5 = (struct IGlobalInterfaceTable *)*((_QWORD *)this + 7);
  if ( v5 != a2 )
  {
    v11 = a2;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v11);
    v11 = (struct IGlobalInterfaceTable *)*((_QWORD *)this + 7);
    *((_QWORD *)this + 7) = a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
    v5 = (struct IGlobalInterfaceTable *)*((_QWORD *)this + 7);
  }
  v7 = ((__int64 (__fastcall *)(struct IGlobalInterfaceTable *, struct IUnknown *, GUID *, char *))v5->lpVtbl->RegisterInterfaceInGlobal)(
         v5,
         a3,
         &GUID_00000000_0000_0000_c000_000000000046,
         (char *)this + 48);
  v8 = v7;
  if ( v7 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F,
      (__int64)"shell\\lib\\gitreglist.cpp",
      (const char *)(unsigned int)v7);
  return v8;
}
