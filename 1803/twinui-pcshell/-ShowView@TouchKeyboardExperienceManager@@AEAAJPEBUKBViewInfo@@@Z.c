/*
 * XREFs of ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEBUKBViewInfo@@@Z @ 0x1802418F8
 * Callers:
 *     _lambda_114373a7e1561dd71911e06c6b6df4ef_::operator() @ 0x1800A1480 (_lambda_114373a7e1561dd71911e06c6b6df4ef_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     _anonymous_namespace_::GetFocusedWindow @ 0x18023E028 (_anonymous_namespace_--GetFocusedWindow.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_MultiViewInputApp@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180241564 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_MultiViewInputApp@@@wil@@CAX_NW4Repo.c)
 *     ?NotifyOcclusionToCoreInputViewManager@TabTipAdapter@KeyboardHosting@@QEAAJAEBUtagRECT@@W4CoreInputViewOcclusionKind@Core@ViewManagement@UI@Windows@@@Z @ 0x18024A144 (-NotifyOcclusionToCoreInputViewManager@TabTipAdapter@KeyboardHosting@@QEAAJAEBUtagRECT@@W4CoreIn.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::ShowView(
        TouchKeyboardExperienceManager *this,
        const struct KBViewInfo *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  unsigned int v12; // edi
  __int64 v13; // r8
  int v14; // eax
  HWND FocusedWindow; // rax
  HWND Ancestor; // rax
  __int64 v18[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v19; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v18[1] = -2LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 1) + 112LL))(*((_QWORD *)a2 + 1));
  v5 = v4;
  if ( v4 >= 0 )
  {
    v18[0] = 0LL;
    v6 = *((_QWORD *)a2 + 1);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v18);
    v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 32LL))(v6, v18);
    v5 = v7;
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)a2 + 1) + 128LL))(*((_QWORD *)a2 + 1), 0LL);
      v5 = v7;
      if ( v7 >= 0 )
      {
        wil::Feature<__WilFeatureTraits_Feature_MultiViewInputApp>::ReportUsageToService(v9, 3u, v10);
        v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)a2 + 1) + 40LL))(*((_QWORD *)a2 + 1), 0LL);
        v5 = v7;
        if ( v7 >= 0 )
        {
          v19 = *(_OWORD *)((char *)a2 + 40);
          v11 = *((_QWORD *)this + 83);
          v12 = *(_DWORD *)(*(_QWORD *)(v11 + 96) + 396LL);
          v13 = 2LL;
          v14 = *((_DWORD *)this + 168);
          if ( (v14 & 0xFFFFFFFA) == 0 && v14 != 1 )
            v13 = v12 != 3;
          v7 = KeyboardHosting::TabTipAdapter::NotifyOcclusionToCoreInputViewManager(v11, &v19, v13);
          v5 = v7;
          if ( v7 >= 0 )
          {
            if ( *((_DWORD *)this + 168)
              || (FocusedWindow = anonymous_namespace_::GetFocusedWindow(),
                  Ancestor = GetAncestor(FocusedWindow, 2u),
                  v7 = (*(__int64 (__fastcall **)(_QWORD, HWND, __int128 *, _QWORD))(**((_QWORD **)this + 41) + 24LL))(
                         *((_QWORD *)this + 41),
                         Ancestor,
                         &v19,
                         v12),
                  v5 = v7,
                  v7 >= 0) )
            {
              v5 = 0;
              goto LABEL_19;
            }
            v8 = 1774LL;
          }
          else
          {
            v8 = 1767LL;
          }
        }
        else
        {
          v8 = 1754LL;
        }
      }
      else
      {
        v8 = 1750LL;
      }
    }
    else
    {
      v8 = 1746LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
LABEL_19:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v18);
    return v5;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6CF,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
