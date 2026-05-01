/*
 * XREFs of ?ApplyCortanaWindowRegion@CortanaDesktopExperienceView@@AEAAJUtagRECT@@00_N1PEAUHMONITOR__@@@Z @ 0x180063344
 * Callers:
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x180062350 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?ApplyCortanaWindowRegionWithCustomRects@CortanaDesktopExperienceView@@AEAAJURect@Foundation@Windows@@@Z @ 0x18018503C (-ApplyCortanaWindowRegionWithCustomRects@CortanaDesktopExperienceView@@AEAAJURect@Foundation@Win.c)
 * Callees:
 *     ?RemoveRectFromRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@HHHH@Z @ 0x1800622E4 (-RemoveRectFromRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@HHHH@Z.c)
 *     ?SetDrawingRegion@ShellExperienceView@Cortana@TwinUI@@UEAAJ_KE@Z @ 0x1800682E0 (-SetDrawingRegion@ShellExperienceView@Cortana@TwinUI@@UEAAJ_KE@Z.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x18007DE0C (-IsBiDiLocale@@YAHK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHRGN__@@@Z @ 0x180095DF8 (-reset@-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?ApplyCortiniWindowRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@UtagRECT@@PEAUHMONITOR__@@@Z @ 0x18018538C (-ApplyCortiniWindowRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@UtagRECT@@PEAUHMONITOR_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaDesktopExperienceView::ApplyCortanaWindowRegion(
        TwinUI::Cortana::ShellExperienceView **this,
        struct tagRECT *a2,
        struct tagRECT *a3,
        struct tagRECT *a4,
        bool a5,
        bool a6,
        HMONITOR a7)
{
  struct tagRECT *v8; // rdi
  int v11; // r12d
  int v12; // r13d
  HRGN v13; // rbx
  HRGN v14; // rsi
  TwinUI::Cortana::ShellExperienceView *v15; // rcx
  int (*v16)(TwinUI::Cortana::ShellExperienceView *__hidden, unsigned __int64, unsigned __int8); // rax
  int v17; // eax
  unsigned int v18; // edi
  HRGN v20; // rax
  int v21; // eax
  HRGN RectRgn; // rax
  __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // r9
  DWORD LastError; // edi
  LANGID ThreadUILanguage; // ax
  LONG v28; // edi
  LANGID v29; // ax
  int v30; // eax
  CortanaDesktopExperienceView *left; // rcx
  int v32; // r8d
  int v33; // eax
  HRGN v34; // rax
  int v35; // [rsp+20h] [rbp-30h]
  struct tagRECT v36; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  HRGN v38; // [rsp+90h] [rbp+40h] BYREF
  struct tagRECT *v39; // [rsp+A0h] [rbp+50h]

  v39 = a3;
  v8 = a3;
  v11 = a2->right - a2->left;
  v12 = a2->bottom - a2->top;
  v13 = 0LL;
  v38 = 0LL;
  if ( *((_DWORD *)this + 34) == 4 )
  {
    RectRgn = CreateRectRgn(0, 0, v11, v12);
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,0,std::nullptr_t>>::reset(
      &v38,
      RectRgn);
    v13 = v38;
    if ( !v38 )
    {
      v23 = 2024LL;
      goto LABEL_40;
    }
    v36 = *a2;
    v24 = CortanaDesktopExperienceView::ApplyCortiniWindowRegion((CortanaDesktopExperienceView *)this, v38, &v36, a7);
    v18 = v24;
    if ( v24 < 0 )
    {
      v25 = (unsigned int)v24;
      v23 = 2028LL;
LABEL_41:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v23,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)v25,
        v35);
      goto LABEL_12;
    }
    v8 = v39;
  }
  if ( !a5 )
  {
    if ( !a6 )
      goto LABEL_7;
    v34 = CreateRectRgn(0, 0, 0, 0);
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,0,std::nullptr_t>>::reset(
      &v38,
      v34);
    v13 = v38;
    if ( v38 )
      goto LABEL_7;
    v23 = 2075LL;
LABEL_40:
    v18 = -2147467259;
    v25 = 2147500037LL;
    goto LABEL_41;
  }
  if ( a6 )
  {
    v14 = CreateRectRgn(a4->left - a2->left, a4->top - a2->top, a4->right - a2->left, a4->bottom - a2->top);
    if ( v13 )
    {
      LastError = GetLastError();
      DeleteObject(v13);
      SetLastError(LastError);
    }
    v13 = v14;
    v38 = v14;
    if ( v14 )
      goto LABEL_7;
    v23 = 2041LL;
    goto LABEL_40;
  }
  if ( *((_DWORD *)this + 34) != 4 )
  {
    v20 = CreateRectRgn(0, 0, v11, v12);
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,0,std::nullptr_t>>::reset(
      &v38,
      v20);
    v13 = v38;
    if ( !v38 )
    {
      v23 = 2048LL;
      goto LABEL_40;
    }
  }
  v21 = CortanaDesktopExperienceView::RemoveRectFromRegion(
          (CortanaDesktopExperienceView *)(unsigned int)(v8->bottom - a2->top),
          v13,
          v8->left - a2->left,
          v8->top - a2->top,
          v8->right - a2->left,
          v8->bottom - a2->top);
  v18 = v21;
  if ( v21 < 0 )
  {
    v25 = (unsigned int)v21;
    v23 = 2056LL;
    goto LABEL_41;
  }
  if ( *((_DWORD *)this + 33) == 1 && *((_DWORD *)this + 34) != 6 )
  {
    ThreadUILanguage = GetThreadUILanguage();
    v28 = (unsigned int)IsBiDiLocale(ThreadUILanguage) ? a4->left : a2->right;
    v29 = GetThreadUILanguage();
    v30 = IsBiDiLocale(v29);
    left = (CortanaDesktopExperienceView *)(unsigned int)a2->left;
    v32 = v30 ? 0 : a4->right - (_DWORD)left;
    v33 = CortanaDesktopExperienceView::RemoveRectFromRegion(
            left,
            v13,
            v32,
            v39->top - a2->top,
            v28 - (int)left,
            v39->bottom - a2->top);
    v18 = v33;
    if ( v33 < 0 )
    {
      v25 = (unsigned int)v33;
      v23 = 2066LL;
      goto LABEL_41;
    }
  }
LABEL_7:
  v15 = this[18];
  v16 = *(int (**)(TwinUI::Cortana::ShellExperienceView *__hidden, unsigned __int64, unsigned __int8))(*(_QWORD *)v15 + 144LL);
  LOBYTE(a3) = 1;
  if ( v16 == TwinUI::Cortana::ShellExperienceView::SetDrawingRegion )
    v17 = TwinUI::Cortana::ShellExperienceView::SetDrawingRegion(v15, (unsigned __int64)v13, 1u);
  else
    v17 = ((__int64 (__fastcall *)(TwinUI::Cortana::ShellExperienceView *, HRGN, struct tagRECT *))v16)(v15, v13, a3);
  if ( v17 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x81E,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v17,
      v35);
  v18 = 0;
LABEL_12:
  if ( v13 )
    DeleteObject(v13);
  return v18;
}
