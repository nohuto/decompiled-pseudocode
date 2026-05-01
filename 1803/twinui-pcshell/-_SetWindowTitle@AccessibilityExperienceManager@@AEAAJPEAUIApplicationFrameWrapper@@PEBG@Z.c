/*
 * XREFs of ?_SetWindowTitle@AccessibilityExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEBG@Z @ 0x18025AE30
 * Callers:
 *     ?_ChangeExperiencePropertiesForView@AccessibilityExperienceManager@@AEAAJPEAUAccessibilityViewInfo@@@Z @ 0x18025A258 (-_ChangeExperiencePropertiesForView@AccessibilityExperienceManager@@AEAAJPEAUAccessibilityViewIn.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AccessibilityExperienceManager::_SetWindowTitle(
        AccessibilityExperienceManager *this,
        struct IApplicationFrameWrapper *a2,
        const unsigned __int16 *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  const unsigned __int16 *v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = a3;
  v11 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  v4 = (*(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, __int64 *))(*(_QWORD *)a2 + 32LL))(a2, &v11);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v12 = 0LL;
    v6 = v11;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
    v7 = (*(__int64 (__fastcall **)(__int64, const unsigned __int16 **))(*(_QWORD *)v6 + 144LL))(v6, &v12);
    v5 = v7;
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(const unsigned __int16 *, const WCHAR *))(*(_QWORD *)v12 + 24LL))(
             v12,
             &word_18035ABCC);
      v5 = v7;
      if ( v7 >= 0 )
      {
        v5 = 0;
        goto LABEL_9;
      }
      v8 = 211LL;
    }
    else
    {
      v8 = 209LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
LABEL_9:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xCE,
    (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_10:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  return v5;
}
