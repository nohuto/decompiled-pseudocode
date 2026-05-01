/*
 * XREFs of _lambda_114373a7e1561dd71911e06c6b6df4ef_::operator() @ 0x1800A1480
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_114373a7e1561dd71911e06c6b6df4ef___::Run @ 0x1800A2300 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_114373a7e1561dd71911e06c6b6df4ef___--Run.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180003904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AFF4 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18001B0F4 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x18023D284 (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ClipboardHistoryBuffer@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1802412EC (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_ClipboardHistoryBuffer@@@wil@@CAX_NW.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_DictationPanel@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1802413F8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_DictationPanel@@@wil@@CAX_NW4Reporti.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_InputHostingRS4Enhancement@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1802414B0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_InputHostingRS4Enhancement@@@wil@@CA.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_MultiViewInputApp@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180241564 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_MultiViewInputApp@@@wil@@CAX_NW4Repo.c)
 *     ?SetHostedPos@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUIApplicationFrame@@PEBUtagRECT@@@Z @ 0x18024179C (-SetHostedPos@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUIApplicatio.c)
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEBUKBViewInfo@@@Z @ 0x1802418F8 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEBUKBViewInfo@@@Z.c)
 *     ?UpdateBorder@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x180243754 (-UpdateBorder@TouchKeyboardExperienceManager@@AEAAJI_N@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_114373a7e1561dd71911e06c6b6df4ef_::operator()(unsigned int *a1)
{
  int v2; // eax
  __int64 v3; // rdx
  wil::details::in1diag3 *v4; // rcx
  unsigned int v5; // ebx
  int ViewInfo; // eax
  const struct KBViewInfo *v7; // rsi
  __int64 v8; // rbx
  int updated; // eax
  TouchKeyboardExperienceManager *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  char v13; // al
  unsigned __int8 v14; // dl
  __int64 v15; // rcx
  __int64 v16; // rcx
  std::_Ref_count_base *v18[2]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  struct IApplicationFrame *v20; // [rsp+70h] [rbp+30h] BYREF
  struct IInspectable *v21; // [rsp+78h] [rbp+38h] BYREF

  v21 = 0LL;
  v2 = Microsoft::WRL::WeakRef::As<IInspectable>((Microsoft::WRL::Details::WeakReferenceImpl **)a1 + 3, &v21);
  v4 = retaddr;
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      253LL,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  if ( !v21 )
  {
    v5 = 0;
    goto LABEL_33;
  }
  *(_OWORD *)v18 = 0LL;
  LOBYTE(v3) = 3;
  wil::Feature<__WilFeatureTraits_Feature_MultiViewInputApp>::ReportUsageToService(v4, v3);
  *(_DWORD *)(*((_QWORD *)a1 + 4) + 672LL) = *a1;
  ViewInfo = TouchKeyboardExperienceManager::FindViewInfo(*((_QWORD *)a1 + 4), *a1, v18);
  v5 = ViewInfo;
  if ( ViewInfo < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x108,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)ViewInfo);
    goto LABEL_31;
  }
  v20 = 0LL;
  v7 = v18[0];
  v8 = *((_QWORD *)v18[0] + 1);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
  updated = (*(__int64 (__fastcall **)(__int64, struct IApplicationFrame **))(*(_QWORD *)v8 + 32LL))(v8, &v20);
  v5 = updated;
  if ( updated < 0 )
  {
    v11 = 273LL;
    goto LABEL_28;
  }
  updated = TouchKeyboardExperienceManager::SetHostedPos(
              v10,
              *((struct IApplicationFrameWrapper **)v7 + 1),
              v20,
              (const struct tagRECT *)(a1 + 1));
  v5 = updated;
  if ( updated < 0 )
  {
    v11 = 274LL;
    goto LABEL_28;
  }
  if ( *((_BYTE *)a1 + 20) || (v13 = 0, *((_BYTE *)a1 + 21)) )
    v13 = 1;
  if ( *a1 == 1 )
    goto LABEL_17;
  if ( *a1 == 4 )
  {
    wil::Feature<__WilFeatureTraits_Feature_DictationPanel>::ReportUsageToService(v12);
LABEL_17:
    v14 = 0;
    goto LABEL_20;
  }
  v14 = v13;
  if ( *a1 == 5 )
    v14 = 0;
LABEL_20:
  updated = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v7 + 2) + 32LL))(*((_QWORD *)v7 + 2), v14);
  v5 = updated;
  if ( updated >= 0 )
  {
    updated = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v7 + 2) + 96LL))(*((_QWORD *)v7 + 2));
    v5 = updated;
    if ( updated >= 0 )
    {
      updated = TouchKeyboardExperienceManager::UpdateBorder(
                  *((TouchKeyboardExperienceManager **)a1 + 4),
                  *a1,
                  *((_BYTE *)a1 + 22));
      v5 = updated;
      if ( updated >= 0 )
      {
        wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::ReportUsageToService(v15);
        *(_OWORD *)((char *)v7 + 40) = *(_OWORD *)(a1 + 1);
        updated = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)v7 + 336LL))(*(_QWORD *)v7, 4LL);
        v5 = updated;
        if ( updated >= 0 )
        {
          TouchKeyboardExperienceManager::ShowView(*((TouchKeyboardExperienceManager **)a1 + 4), v7);
          wil::Feature<__WilFeatureTraits_Feature_ClipboardHistoryBuffer>::ReportUsageToService(v16);
          v5 = 0;
          goto LABEL_30;
        }
        v11 = 306LL;
      }
      else
      {
        v11 = 298LL;
      }
    }
    else
    {
      v11 = 296LL;
    }
  }
  else
  {
    v11 = 295LL;
  }
LABEL_28:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)updated);
LABEL_30:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
LABEL_31:
  if ( v18[1] )
    std::_Ref_count_base::_Decref(v18[1]);
LABEL_33:
  Microsoft::WRL::ComPtr<IInspectable>::InternalRelease((UAPViewWrapper **)&v21);
  return v5;
}
