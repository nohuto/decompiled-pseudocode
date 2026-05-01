/*
 * XREFs of ?s_CreateInstance_Clone@CAppLayoutItem@@SAJW4APP_LAYOUT_ITEM_TYPE@@W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@PEAUIApplicationView@@PEAUAPPLICATION_VIEW_DATA@@PEAUtagRECT@@4AEBU_GUID@@PEAPEAX@Z @ 0x1803159A4
 * Callers:
 *     ?Clone@CAppLayoutItem@@UEAAJPEAPEAUIAppLayoutItem@@@Z @ 0x180314F70 (-Clone@CAppLayoutItem@@UEAAJPEAPEAUIAppLayoutItem@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Attach@?$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@QEAAXPEAVSizeConversionViewInfo@@@Z @ 0x1800F7954 (-Attach@-$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@QEAAXPEAVSizeConversionViewInfo@@@Z.c)
 *     ??0CAppLayoutItem@@QEAA@W4APP_LAYOUT_ITEM_TYPE@@W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@PEAUIApplicationView@@PEAUAPPLICATION_VIEW_DATA@@PEAUtagRECT@@4@Z @ 0x180314E60 (--0CAppLayoutItem@@QEAA@W4APP_LAYOUT_ITEM_TYPE@@W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@PEAUIApplicati.c)
 */

__int64 __fastcall CAppLayoutItem::s_CreateInstance_Clone(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        _DWORD *a6,
        __int64 a7,
        _QWORD *a8)
{
  _QWORD *v8; // rsi
  __int64 v11; // rbx
  void *v14; // rax
  __int64 v15; // rax
  bool v16; // cl
  unsigned int v17; // edi

  v8 = a8;
  v11 = 0LL;
  a8 = 0LL;
  *v8 = 0LL;
  v14 = operator new(0x80uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16 = 0;
  if ( v14 )
  {
    v15 = CAppLayoutItem::CAppLayoutItem((__int64)v14, a1, a2, a3, a4, a5, a6);
    Microsoft::WRL::ComPtr<SizeConversionViewInfo>::Attach((__int64 *)&a8, v15);
    v11 = (__int64)a8;
    if ( a8 )
      v16 = 1;
  }
  v17 = !v16 ? 0x8007000E : 0;
  if ( v16 )
    v17 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v11)(
            v11,
            &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
            v8);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  return v17;
}
