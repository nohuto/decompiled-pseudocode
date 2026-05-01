/*
 * XREFs of ?s_CreateInstance_Buffer@CAppLayoutItem@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x1803158C8
 * Callers:
 *     ?CreateEmptyAppLayout@TabletModePositioner@@CAJAEBULAYOUT_ENVIRONMENT_DETAILS@@PEAPEAUIAppLayout@@@Z @ 0x1802C5E34 (-CreateEmptyAppLayout@TabletModePositioner@@CAJAEBULAYOUT_ENVIRONMENT_DETAILS@@PEAPEAUIAppLayout.c)
 *     ?AddBuffer@CAppLayout@@UEAAJW4APP_LAYOUT_INSERT_LOCATION@@PEAUIAppLayoutItem@@PEAPEAU3@@Z @ 0x180312090 (-AddBuffer@CAppLayout@@UEAAJW4APP_LAYOUT_INSERT_LOCATION@@PEAUIAppLayoutItem@@PEAPEAU3@@Z.c)
 *     ?_ReplaceView@CAppLayout@@AEAAJPEAUIApplicationView@@0W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x180314930 (-_ReplaceView@CAppLayout@@AEAAJPEAUIApplicationView@@0W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Attach@?$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@QEAAXPEAVSizeConversionViewInfo@@@Z @ 0x1800F7954 (-Attach@-$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@QEAAXPEAVSizeConversionViewInfo@@@Z.c)
 *     ??0CAppLayoutItem@@QEAA@W4APP_LAYOUT_ITEM_TYPE@@PEAUtagRECT@@1@Z @ 0x180314DA4 (--0CAppLayoutItem@@QEAA@W4APP_LAYOUT_ITEM_TYPE@@PEAUtagRECT@@1@Z.c)
 */

__int64 __fastcall CAppLayoutItem::s_CreateInstance_Buffer(const struct _GUID *a1, void **a2)
{
  __int64 v4; // rbx
  void *v5; // rax
  __int64 v6; // rax
  bool v7; // cl
  unsigned int v8; // edi
  __int64 v10; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v11[2]; // [rsp+28h] [rbp-30h] BYREF

  *a2 = 0LL;
  v11[0] = 0LL;
  v11[1] = 0LL;
  v4 = 0LL;
  v10 = 0LL;
  v5 = operator new(0x80uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0;
  if ( v5 )
  {
    v6 = CAppLayoutItem::CAppLayoutItem((__int64)v5, 4, v11, v11);
    Microsoft::WRL::ComPtr<SizeConversionViewInfo>::Attach(&v10, v6);
    v4 = v10;
    if ( v10 )
      v7 = 1;
  }
  v8 = !v7 ? 0x8007000E : 0;
  if ( v7 )
    v8 = (**(__int64 (__fastcall ***)(__int64, const struct _GUID *, void **))v4)(v4, a1, a2);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v8;
}
