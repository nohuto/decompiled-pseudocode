/*
 * XREFs of ?_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ @ 0x18025A314
 * Callers:
 *     ?OnNotificationEvent@AccessibilityExperienceManager@@UEAAXPEBXK@Z @ 0x180259350 (-OnNotificationEvent@AccessibilityExperienceManager@@UEAAXPEBXK@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18007150C (--4-$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_0fb00ab6edbf68260218bf5bc91a9d04___ @ 0x18025751C (Windows--Internal--ComTaskPool--QueueTask__lambda_0fb00ab6edbf68260218bf5bc91a9d04___.c)
 *     ?ExcludeWindowFromCapture@AccessibilityExperienceManager@@AEAA_NXZ @ 0x1802589F4 (-ExcludeWindowFromCapture@AccessibilityExperienceManager@@AEAA_NXZ.c)
 *     ?SetNoActivate@AccessibilityExperienceManager@@UEAAX_N@Z @ 0x180259AA0 (-SetNoActivate@AccessibilityExperienceManager@@UEAAX_N@Z.c)
 *     ?_ChangeExperiencePropertiesForView@AccessibilityExperienceManager@@AEAAJPEAUAccessibilityViewInfo@@@Z @ 0x18025A258 (-_ChangeExperiencePropertiesForView@AccessibilityExperienceManager@@AEAAJPEAUAccessibilityViewIn.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall AccessibilityExperienceManager::_CreateModalExperienceAsync(AccessibilityExperienceManager *this)
{
  __int64 v2; // rbx
  HMONITOR v3; // rax
  int ScaleFactorForMonitor; // eax
  int v5; // edi
  unsigned int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rbx
  __int64 v11; // rbx
  int v12; // eax
  int v13; // eax
  const unsigned __int16 *v14; // r8
  int v15; // eax
  int v16; // eax
  int v17; // eax
  void *v18; // rdx
  wil::details::in1diag3 *v19; // rcx
  _BYTE v21[8]; // [rsp+28h] [rbp-18h] BYREF
  AccessibilityExperienceManager *v22; // [rsp+30h] [rbp-10h]
  char v23; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v25; // [rsp+70h] [rbp+30h] BYREF
  __int64 v26; // [rsp+78h] [rbp+38h] BYREF
  __int64 v27; // [rsp+80h] [rbp+40h] BYREF
  __int64 v28; // [rsp+88h] [rbp+48h] BYREF

  v2 = *((_QWORD *)this + 51);
  v28 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v26 = 0LL;
  v25 = 0LL;
  v27 = 0LL;
  *((_DWORD *)this + 101) = 100;
  v3 = MonitorFromWindow(0LL, 1u);
  ScaleFactorForMonitor = GetScaleFactorForMonitor(v3, (char *)this + 404);
  v5 = ScaleFactorForMonitor;
  if ( ScaleFactorForMonitor >= 0 )
    v5 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F6,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)ScaleFactorForMonitor);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      596LL,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
  v22 = this;
  v23 = 1;
  *(_OWORD *)((char *)this + 440) = 0LL;
  if ( v2 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
    v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 24LL))(v2, &v26);
    v6 = v9;
    if ( v9 >= 0 )
    {
      Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=((__int64 *)this + 48, &v26);
      v10 = v26;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
      v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 32LL))(v10, &v25);
      v6 = v9;
      if ( v9 >= 0 )
      {
        v9 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v25 + 24LL))(v25, v21);
        v6 = v9;
        if ( v9 >= 0 )
        {
          AccessibilityExperienceManager::ExcludeWindowFromCapture(this);
          AccessibilityExperienceManager::SetNoActivate(
            (AccessibilityExperienceManager *)((char *)this + 152),
            *((_DWORD *)this + 119) == 0x8000000);
          v11 = v25;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
          v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 144LL))(v11, &v27);
          v6 = v9;
          if ( v9 >= 0 )
          {
            v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v27 + 104LL))(v27, 255LL, 0LL);
            if ( v12 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                621LL,
                (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
                (const char *)(unsigned int)v12);
            v13 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v27 + 64LL))(v27, 1LL, 1LL);
            if ( v13 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                622LL,
                (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
                (const char *)(unsigned int)v13);
            v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v25 + 112LL))(v25, 255LL, 16LL);
            v6 = v9;
            if ( v9 >= 0 )
            {
              v9 = AccessibilityExperienceManager::_ChangeExperiencePropertiesForView(
                     this,
                     (struct IApplicationFrameWrapper **)this + 47,
                     v14);
              v6 = v9;
              if ( v9 >= 0 )
              {
                v15 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v27 + 32LL))(v27, 0LL);
                if ( v15 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    630LL,
                    (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
                    (const char *)(unsigned int)v15);
                v16 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD))(*(_QWORD *)v25 + 72LL))(
                        v25,
                        L"Microsoft.ECApp_8wekyb3d8bbwe!App",
                        0LL);
                if ( v16 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    633LL,
                    (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
                    (const char *)(unsigned int)v16);
                v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v26 + 48LL))(v26, 3LL);
                v6 = v9;
                if ( v9 >= 0 )
                {
                  v17 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v26 + 128LL))(v26, 1LL);
                  v19 = retaddr;
                  if ( v17 < 0 )
                    wil::details::in1diag3::_Log_Hr(
                      retaddr,
                      638LL,
                      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
                      (const char *)(unsigned int)v17);
                  v9 = Windows::Internal::ComTaskPool::QueueTask__lambda_0fb00ab6edbf68260218bf5bc91a9d04___(
                         (__int64)v19,
                         v18);
                  v6 = v9;
                  if ( v9 >= 0 )
                  {
                    v6 = 0;
                    goto LABEL_39;
                  }
                  v8 = 648LL;
                }
                else
                {
                  v8 = 636LL;
                }
              }
              else
              {
                v8 = 628LL;
              }
            }
            else
            {
              v8 = 624LL;
            }
          }
          else
          {
            v8 = 619LL;
          }
        }
        else
        {
          v8 = 612LL;
        }
      }
      else
      {
        v8 = 609LL;
      }
    }
    else
    {
      v8 = 606LL;
    }
    v7 = (unsigned int)v9;
  }
  else
  {
    v6 = -2144927145;
    v7 = 2150040151LL;
    v8 = 605LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
    (const char *)v7);
LABEL_39:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
  return v6;
}
