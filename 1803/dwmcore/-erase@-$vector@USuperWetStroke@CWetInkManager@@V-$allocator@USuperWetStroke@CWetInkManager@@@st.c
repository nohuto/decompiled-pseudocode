/*
 * XREFs of ?erase@?$vector@USuperWetStroke@CWetInkManager@@V?$allocator@USuperWetStroke@CWetInkManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetStroke@CWetInkManager@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetStroke@CWetInkManager@@@std@@@std@@@2@@Z @ 0x180171C48
 * Callers:
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x180061DB0 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?TryDrawWetAsSuperWet@CWetInkManager@@AEAAJPEAVCDrawingContext@@PEAVCGenericInk@@V?$com_ptr_t@UIDCompositionDirectInkWetStrokePartner@@Uerr_returncode_policy@wil@@@wil@@_NPEA_N@Z @ 0x18017165C (-TryDrawWetAsSuperWet@CWetInkManager@@AEAAJPEAVCDrawingContext@@PEAVCGenericInk@@V-$com_ptr_t@UI.c)
 *     ??1CGenericInk@@UEAA@XZ @ 0x18018EC6C (--1CGenericInk@@UEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C5B90 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::vector<CWetInkManager::SuperWetStroke>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 *v3; // rbp
  __int64 *v4; // r14
  __int64 *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rcx
  _QWORD *result; // rax

  v3 = *(__int64 **)(a1 + 8);
  v4 = (__int64 *)(a3 + 72);
  if ( (__int64 *)(a3 + 72) != v3 )
  {
    v8 = (__int64 *)(a3 + 8);
    do
    {
      *(v8 - 1) = *v4;
      v9 = v8[9];
      v8[9] = 0LL;
      v10 = *v8;
      *v8 = v9;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      v4 += 9;
      *(_OWORD *)(v8 + 1) = *((_OWORD *)v8 + 5);
      *(_OWORD *)(v8 + 3) = *((_OWORD *)v8 + 6);
      *(_OWORD *)(v8 + 5) = *((_OWORD *)v8 + 7);
      *((_BYTE *)v8 + 56) = *((_BYTE *)v8 + 128);
      v8 += 9;
    }
    while ( v4 != v3 );
    v3 = *(__int64 **)(a1 + 8);
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v3 - 8);
  *(_QWORD *)(a1 + 8) -= 72LL;
  result = a2;
  *a2 = a3;
  return result;
}
