/*
 * XREFs of ?HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEAU2@PEA_KPEAPEAVBamoDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@@Z @ 0x180064E18
 * Callers:
 *     ?CancelDrag@DragManagerHost@@MEAAJPEAVBamoDragNDropContextualProcessorStub@@IPEAVBamoDragManagerClientProxy@@@Z @ 0x1800629C0 (-CancelDrag@DragManagerHost@@MEAAJPEAVBamoDragNDropContextualProcessorStub@@IPEAVBamoDragManager.c)
 *     ?StartGestureRecognition@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@K@Z @ 0x18006411C (-StartGestureRecognition@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@K@Z.c)
 *     ?OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180064530 (-OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorRespon.c)
 *     ?StartDrag@DragNDropProcessor@@QEAAJKU_GUID@@PEAVBamoDragManagerClientProxy@@@Z @ 0x180064C08 (-StartDrag@DragNDropProcessor@@QEAAJKU_GUID@@PEAVBamoDragManagerClientProxy@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18000C024 (-GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV-$vector@V-$ComPtr@VInputSite@@@WRL.c)
 *     ?_Tidy@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x18000C750 (-_Tidy@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 *     ?GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ @ 0x1800190B8 (-GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KPEAUIViewHierarchy@@I@Z @ 0x180019640 (-GetWindowIdFromViewId@ViewHelper@@SA_KPEAUIViewHierarchy@@I@Z.c)
 *     ApplyInverseTransformToPoint @ 0x1800630CC (ApplyInverseTransformToPoint.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DragNDropProcessor::HitTest(
        DragNDropProcessor *this,
        struct tagPOINT a2,
        HMONITOR a3,
        struct tagPOINT *a4,
        unsigned __int64 *a5,
        struct BamoDragSourceClientProxy **a6,
        struct BamoDragManagerClientProxy **a7)
{
  struct tagPOINT v7; // rbx
  unsigned __int64 *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // r14
  __int64 v12; // r15
  __int64 v13; // rdi
  char v14; // r12
  __int64 v15; // r13
  __int64 v16; // r14
  __int64 v17; // r15
  struct BamoDragSourceClientProxy **v18; // rdi
  struct BamoDragSourceClientProxy *v19; // rcx
  __int64 v20; // r14
  __int64 v21; // r15
  struct BamoDragManagerClientProxy **v22; // rdi
  struct BamoDragManagerClientProxy *v23; // rcx
  __int64 v24; // rcx
  unsigned __int64 v25; // r11
  unsigned int ViewInstanceIdFromInputSiteList; // edi
  struct IViewHierarchy *ViewHierarchy; // rax
  int v28; // eax
  int v30[2]; // [rsp+30h] [rbp-B1h] BYREF
  struct BamoDragSourceClientProxy **v31; // [rsp+38h] [rbp-A9h] BYREF
  struct tagPOINT *v32; // [rsp+40h] [rbp-A1h]
  struct BamoDragManagerClientProxy **v33; // [rsp+48h] [rbp-99h]
  struct tagPOINT v34; // [rsp+50h] [rbp-91h]
  __int64 v35; // [rsp+58h] [rbp-89h]
  char v36[8]; // [rsp+60h] [rbp-81h] BYREF
  __int64 v37; // [rsp+68h] [rbp-79h] BYREF
  __int64 v38; // [rsp+70h] [rbp-71h]
  __int64 v39; // [rsp+80h] [rbp-61h]
  float v40[18]; // [rsp+88h] [rbp-59h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+47h]

  v35 = -2LL;
  v32 = a4;
  v7 = a2;
  v34 = a2;
  v8 = a5;
  *(_QWORD *)v30 = a5;
  v31 = a6;
  v33 = a7;
  (*(void (__fastcall **)(_QWORD, char *, struct tagPOINT, HMONITOR, int))(**((_QWORD **)this + 3) + 32LL))(
    *((_QWORD *)this + 3),
    v36,
    a2,
    a3,
    2);
  if ( a6 && a7 )
  {
    v10 = v37;
    if ( v37 != v38 )
    {
      v11 = *(_QWORD *)(*(_QWORD *)v37 + 24LL);
      v12 = *(_QWORD *)(*(_QWORD *)v37 + 32LL);
      if ( v11 == v12 )
      {
LABEL_12:
        v13 = 0LL;
      }
      else
      {
        while ( 1 )
        {
          v13 = v11 + 8;
          if ( v11 == -8
            || (*(_QWORD *)(v11 + 64) & 0xFFFFFFFFFFFFFFFCuLL) == 0
            || (unsigned int)__std_type_info_compare(
                               (*(_QWORD *)(v11 + 64) & 0xFFFFFFFFFFFFFFFCuLL) + 8,
                               &qword_180134858) )
          {
            v13 = 0LL;
          }
          if ( v13 )
            break;
          v11 += 72LL;
          if ( v11 == v12 )
          {
            v10 = v37;
            goto LABEL_12;
          }
        }
        v10 = v37;
      }
      if ( v13 )
      {
        v14 = 0;
        v15 = v38;
        while ( v10 != v15 )
        {
          v16 = *(_QWORD *)(*(_QWORD *)v10 + 24LL);
          v17 = *(_QWORD *)(*(_QWORD *)v10 + 32LL);
          while ( v16 != v17 )
          {
            v18 = (struct BamoDragSourceClientProxy **)(v16 + 8);
            if ( v16 == -8
              || (*(_QWORD *)(v16 + 64) & 0xFFFFFFFFFFFFFFFCuLL) == 0
              || (unsigned int)__std_type_info_compare(
                                 (*(_QWORD *)(v16 + 64) & 0xFFFFFFFFFFFFFFFCuLL) + 8,
                                 &qword_180134858) )
            {
              v18 = 0LL;
            }
            if ( v18 )
            {
              if ( v14 )
                goto LABEL_31;
              v14 = 1;
              v19 = *v18;
              if ( *v18 )
              {
                (**(void (__fastcall ***)(struct BamoDragSourceClientProxy *))v19)(v19);
                v19 = *v18;
              }
              *v31 = v19;
              break;
            }
            v16 += 72LL;
          }
          if ( !v14 )
            goto LABEL_39;
LABEL_31:
          v20 = *(_QWORD *)(*(_QWORD *)v10 + 24LL);
          v21 = *(_QWORD *)(*(_QWORD *)v10 + 32LL);
          while ( v20 != v21 )
          {
            v22 = (struct BamoDragManagerClientProxy **)(v20 + 8);
            if ( v20 == -8
              || (*(_QWORD *)(v20 + 64) & 0xFFFFFFFFFFFFFFFCuLL) == 0
              || (unsigned int)__std_type_info_compare(
                                 (*(_QWORD *)(v20 + 64) & 0xFFFFFFFFFFFFFFFCuLL) + 8,
                                 &qword_1801348A8) )
            {
              v22 = 0LL;
            }
            if ( v22 )
            {
              v23 = *v22;
              if ( *v22 )
              {
                (**(void (__fastcall ***)(struct BamoDragManagerClientProxy *))v23)(v23);
                v23 = *v22;
              }
              *v33 = v23;
              goto LABEL_43;
            }
            v20 += 72LL;
          }
LABEL_39:
          v10 += 8LL;
        }
      }
    }
LABEL_43:
    v8 = *(unsigned __int64 **)v30;
  }
  if ( v32 || v8 )
  {
    v25 = 0LL;
    v24 = v39;
    if ( v36[0] && (unsigned __int64)(v39 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      ViewInstanceIdFromInputSiteList = InputSiteManager::GetViewInstanceIdFromInputSiteList(&v37);
      if ( ViewInstanceIdFromInputSiteList )
      {
        ViewHierarchy = ISMStatics::GetViewHierarchy();
        ViewHelper::GetWindowIdFromViewId(ViewHierarchy, ViewInstanceIdFromInputSiteList);
      }
      v28 = ApplyInverseTransformToPoint(v40, v7.x, v34.y, &v31, v30);
      if ( v28 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x2AE,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\d"
                   "ragndropprocessor.cpp",
          (const char *)(unsigned int)v28);
        JUMPOUT(0x180065109LL);
      }
      HIDWORD(v31) = v30[0];
      v7 = (struct tagPOINT)v31;
      v24 = v39;
    }
    if ( v32 )
      *v32 = v7;
    if ( v8 )
      *v8 = v25;
  }
  else
  {
    v24 = v39;
  }
  if ( (unsigned __int64)(v24 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    NtCloseCompositionInputSink(v24);
  std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy((__int64)&v37, v9);
  return 0LL;
}
