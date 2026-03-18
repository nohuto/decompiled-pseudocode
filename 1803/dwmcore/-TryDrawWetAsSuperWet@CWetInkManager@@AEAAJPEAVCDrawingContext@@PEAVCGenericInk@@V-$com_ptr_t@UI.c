/*
 * XREFs of ?TryDrawWetAsSuperWet@CWetInkManager@@AEAAJPEAVCDrawingContext@@PEAVCGenericInk@@V?$com_ptr_t@UIDCompositionDirectInkWetStrokePartner@@Uerr_returncode_policy@wil@@@wil@@_NPEA_N@Z @ 0x18017165C
 * Callers:
 *     ?Draw@CWetInkManager@@QEAAJPEAVCDrawingContext@@PEAVCGenericInk@@@Z @ 0x180171320 (-Draw@CWetInkManager@@QEAAJPEAVCDrawingContext@@PEAVCGenericInk@@@Z.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_SuperWetInk@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800BAB4C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_SuperWetInk@@@wil@@CAX_NW4ReportingK.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C5B90 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace_back@$$V@?$vector@USuperWetStroke@CWetInkManager@@V?$allocator@USuperWetStroke@CWetInkManager@@@std@@@std@@QEAAXXZ @ 0x180171188 (--$emplace_back@$$V@-$vector@USuperWetStroke@CWetInkManager@@V-$allocator@USuperWetStroke@CWetIn.c)
 *     ?TryEnqueueSuperWetScribble@CWetInkManager@@AEAAJPEAVCGenericInk@@PEAUIDCompositionDirectInkWetStrokePartner@@PEAVIRenderTargetDisplay@@AEBUDCompWetInkStrokeRenderState@@PEA_N@Z @ 0x180171848 (-TryEnqueueSuperWetScribble@CWetInkManager@@AEAAJPEAVCGenericInk@@PEAUIDCompositionDirectInkWetS.c)
 *     TryFillRenderState @ 0x180171A60 (TryFillRenderState.c)
 *     ?erase@?$vector@USuperWetStroke@CWetInkManager@@V?$allocator@USuperWetStroke@CWetInkManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetStroke@CWetInkManager@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetStroke@CWetInkManager@@@std@@@std@@@2@@Z @ 0x180171C48 (-erase@-$vector@USuperWetStroke@CWetInkManager@@V-$allocator@USuperWetStroke@CWetInkManager@@@st.c)
 */

__int64 __fastcall CWetInkManager::TryDrawWetAsSuperWet(
        CWetInkManager *this,
        __int64 a2,
        struct CGenericInk *a3,
        __int64 *a4,
        unsigned __int8 a5,
        bool *a6)
{
  int (__fastcall ***v10)(_QWORD, GUID *, struct IRenderTargetDisplay **); // rcx
  struct IRenderTargetDisplay *v11; // rcx
  struct CGenericInk *v12; // rax
  __int64 i; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct IDCompositionDirectInkWetStrokePartner *v17; // r8
  int v18; // eax
  unsigned int v19; // edi
  struct IRenderTargetDisplay *v20; // rcx
  __int64 v21; // rdi
  __int128 v22; // xmm0
  struct IRenderTargetDisplay *v24; // [rsp+30h] [rbp-49h] BYREF
  struct CGenericInk *v25; // [rsp+38h] [rbp-41h] BYREF
  struct IRenderTargetDisplay *v26; // [rsp+40h] [rbp-39h] BYREF
  int v27[4]; // [rsp+48h] [rbp-31h] BYREF
  __int128 v28; // [rsp+58h] [rbp-21h]
  __int128 v29; // [rsp+68h] [rbp-11h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+4Fh]

  *a6 = 0;
  wil::Feature<__WilFeatureTraits_Feature_SuperWetInk>::ReportUsageToService((__int64)this, a2, (__int64)a3);
  v10 = *(int (__fastcall ****)(_QWORD, GUID *, struct IRenderTargetDisplay **))(a2 + 360);
  v24 = 0LL;
  if ( (**v10)(v10, &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb, &v24) < 0 )
    goto LABEL_23;
  v11 = v24;
  v12 = a3;
  v25 = a3;
  v26 = v24;
  if ( v24 )
  {
    (*(void (__fastcall **)(struct IRenderTargetDisplay *))(*(_QWORD *)v24 + 8LL))(v24);
    v11 = v26;
    v12 = v25;
  }
  for ( i = *((_QWORD *)this + 1);
        i != *((_QWORD *)this + 2)
     && (*(struct CGenericInk **)i != v12 || *(struct IRenderTargetDisplay **)(i + 8) != v11);
        i += 72LL )
  {
    ;
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v26);
  if ( i == *((_QWORD *)this + 2) )
  {
    wil::Feature<__WilFeatureTraits_Feature_SuperWetInk>::ReportUsageToService(v15, v14, v16);
    if ( *((_QWORD *)this + 1) != *((_QWORD *)this + 2) )
      goto LABEL_23;
  }
  if ( !(unsigned __int8)TryFillRenderState(a2, v27)
    || (v17 = (struct IDCompositionDirectInkWetStrokePartner *)*a4,
        HIDWORD(v29) = a5,
        v18 = CWetInkManager::TryEnqueueSuperWetScribble(
                this,
                a3,
                v17,
                v24,
                (const struct DCompWetInkStrokeRenderState *)v27,
                a6),
        v19 = v18,
        v18 >= 0) )
  {
    if ( *a6 )
    {
      if ( i == *((_QWORD *)this + 2) )
      {
        std::vector<CWetInkManager::SuperWetStroke>::emplace_back<>((__int64 *)this + 1);
        i = *((_QWORD *)this + 2) - 72LL;
        *(_QWORD *)i = a3;
        v20 = v24;
        v21 = *(_QWORD *)(i + 8);
        *(_QWORD *)(i + 8) = v24;
        if ( v20 )
          (*(void (__fastcall **)(struct IRenderTargetDisplay *))(*(_QWORD *)v20 + 8LL))(v20);
        if ( v21 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      }
      *(_OWORD *)(i + 16) = *(_OWORD *)v27;
      *(_OWORD *)(i + 32) = v28;
      v22 = v29;
      *(_BYTE *)(i + 64) = 1;
      *(_OWORD *)(i + 48) = v22;
    }
    else if ( i != *((_QWORD *)this + 2) )
    {
      std::vector<CWetInkManager::SuperWetStroke>::erase((char *)this + 8, &v25, i);
    }
LABEL_23:
    v19 = 0;
    goto LABEL_24;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x139,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\wetinkmanager.cpp",
    (const char *)(unsigned int)v18);
LABEL_24:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v24);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(a4);
  return v19;
}
