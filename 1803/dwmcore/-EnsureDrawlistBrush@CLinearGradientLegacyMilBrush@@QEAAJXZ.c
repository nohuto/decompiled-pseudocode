/*
 * XREFs of ?EnsureDrawlistBrush@CLinearGradientLegacyMilBrush@@QEAAJXZ @ 0x1801B34C4
 * Callers:
 *     ?DrawAsDrawList@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEBUMilRectF@@@Z @ 0x1801B309C (-DrawAsDrawList@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuild.c)
 * Callees:
 *     ??0CLinearGradientBrush@@QEAA@PEAVCComposition@@@Z @ 0x1800118AC (--0CLinearGradientBrush@@QEAA@PEAVCComposition@@@Z.c)
 *     ?SetStops@CGradientBrush@@QEAAXAEBV?$span@PEAVCColorGradientStop@@$0?0@gsl@@_N@Z @ 0x180012104 (-SetStops@CGradientBrush@@QEAAXAEBV-$span@PEAVCColorGradientStop@@$0-0@gsl@@_N@Z.c)
 *     ??$emplace_back@PEAVCColorGradientStop@@@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@QEAAX$$QEAPEAVCColorGradientStop@@@Z @ 0x180012DB4 (--$emplace_back@PEAVCColorGradientStop@@@-$vector@PEAVCColorGradientStop@@V-$allocator@PEAVCColo.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18002B3E4 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@VCColorGradientStop@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorGradientStop@@@Z @ 0x1801B3050 (--4-$com_ptr_t@VCColorGradientStop@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorGradi.c)
 */

__int64 __fastcall CLinearGradientLegacyMilBrush::EnsureDrawlistBrush(CLinearGradientLegacyMilBrush *this)
{
  unsigned int v2; // edi
  CLinearGradientBrush *v3; // rax
  CLinearGradientBrush *v4; // rcx
  __int64 v5; // rsi
  unsigned int v6; // eax
  char *v7; // rax
  __int64 v8; // rdx
  char *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  char *v14; // rsi
  CResource *v15; // rcx
  __int64 v17[2]; // [rsp+30h] [rbp-30h] BYREF
  void *lpMem[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v19; // [rsp+50h] [rbp-10h]
  __int64 v20; // [rsp+90h] [rbp+30h] BYREF

  v2 = 0;
  if ( *((_QWORD *)this + 33) )
    return v2;
  v3 = (CLinearGradientBrush *)WPF::ProcessHeapImpl::AllocClear(0xC0uLL);
  if ( v3 )
    v4 = CLinearGradientBrush::CLinearGradientBrush(v3, *((struct CComposition **)this + 2));
  else
    v4 = 0LL;
  v5 = *((_QWORD *)this + 33);
  *((_QWORD *)this + 33) = v4;
  if ( v4 )
    (*(void (__fastcall **)(CLinearGradientBrush *))(*(_QWORD *)v4 + 8LL))(v4);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  if ( !*((_QWORD *)this + 33) )
  {
    v6 = 108;
LABEL_21:
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, v6);
    v11 = *((_QWORD *)this + 33);
    *((_QWORD *)this + 33) = 0LL;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    v12 = *((_QWORD *)this + 34);
    *((_QWORD *)this + 34) = 0LL;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    v13 = *((_QWORD *)this + 35);
    *((_QWORD *)this + 35) = 0LL;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    return v2;
  }
  v7 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x50uLL);
  v8 = (__int64)v7;
  if ( v7 )
  {
    *((_QWORD *)v7 + 2) = *((_QWORD *)this + 2);
    *((_DWORD *)v7 + 2) = 0;
    *((_QWORD *)v7 + 3) = 0LL;
    *((_QWORD *)v7 + 5) = 0LL;
    *((_DWORD *)v7 + 8) = 0;
    *(_QWORD *)v7 = &CColorGradientStop::`vftable';
    *((_DWORD *)v7 + 14) = 0;
    *(_OWORD *)(v7 + 60) = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  wil::com_ptr_t<CColorGradientStop,wil::err_returncode_policy>::operator=((__int64 *)this + 34, v8);
  if ( !*((_QWORD *)this + 34) )
  {
    v6 = 110;
    goto LABEL_21;
  }
  v9 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x50uLL);
  v10 = (__int64)v9;
  if ( v9 )
  {
    *((_QWORD *)v9 + 2) = *((_QWORD *)this + 2);
    *((_DWORD *)v9 + 2) = 0;
    *((_QWORD *)v9 + 3) = 0LL;
    *((_QWORD *)v9 + 5) = 0LL;
    *((_DWORD *)v9 + 8) = 0;
    *(_QWORD *)v9 = &CColorGradientStop::`vftable';
    *((_DWORD *)v9 + 14) = 0;
    *(_OWORD *)(v9 + 60) = 0LL;
  }
  else
  {
    v10 = 0LL;
  }
  wil::com_ptr_t<CColorGradientStop,wil::err_returncode_policy>::operator=((__int64 *)this + 35, v10);
  if ( !*((_QWORD *)this + 35) )
  {
    v6 = 112;
    goto LABEL_21;
  }
  v20 = *((_QWORD *)this + 34);
  v19 = 0LL;
  *(_OWORD *)lpMem = 0LL;
  std::vector<CColorGradientStop *>::emplace_back<CColorGradientStop *>((__int64)lpMem, &v20);
  v20 = *((_QWORD *)this + 35);
  std::vector<CColorGradientStop *>::emplace_back<CColorGradientStop *>((__int64)lpMem, &v20);
  v14 = (char *)lpMem[0];
  v15 = (CResource *)*((_QWORD *)this + 33);
  v17[0] = (int)(((char *)lpMem[1] - (char *)lpMem[0]) >> 3);
  v17[1] = (__int64)lpMem[0];
  CGradientBrush::SetStops(v15, v17, 0);
  if ( v14 )
    std::_Deallocate(v14, (v19 - (__int64)v14) >> 3, 8uLL);
  return v2;
}
