/*
 * XREFs of ?ApplyCortanaWindowRegion@CortanaDesktopExperienceView@@AEAAJUtagRECT@@00_N1PEAUHMONITOR__@@@Z @ 0x1800C6820
 * Callers:
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x1800C727C (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSpeechTextInputHeight@CortanaDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z @ 0x1800C7088 (-GetSpeechTextInputHeight@CortanaDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z.c)
 *     ?RemoveRectFromRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@HHHH@Z @ 0x1800C79EC (-RemoveRectFromRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@HHHH@Z.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x18018C37C (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaDesktopExperienceView::ApplyCortanaWindowRegion(
        CortanaDesktopExperienceView *this,
        __m128i *a2,
        struct tagRECT *a3,
        struct tagRECT *a4,
        bool a5,
        bool a6,
        HMONITOR a7)
{
  int v10; // eax
  int v11; // ecx
  HRGN RectRgn; // rbx
  HMONITOR v13; // r8
  __int64 v14; // rdx
  unsigned __int64 v15; // xmm0_8
  __int64 v16; // rax
  ExperienceManagerUtils *v17; // rcx
  HMONITOR v18; // rsi
  int SpeechTextInputHeight; // edi
  HMONITOR v20; // r8
  int v21; // eax
  int v22; // esi
  int v23; // eax
  int v24; // edi
  __int64 v25; // rdx
  LANGID ThreadUILanguage; // ax
  LANGID v27; // ax
  int v28; // edi
  int v29; // eax
  unsigned __int64 v30; // r9
  __int64 v31; // rdx
  HRGN v32; // rsi
  DWORD v33; // edi
  HRGN v34; // rsi
  DWORD LastError; // edi
  struct tagRECT *v36; // rsi
  int v37; // eax
  LANGID v38; // ax
  LONG left; // edi
  LANGID v40; // ax
  CortanaDesktopExperienceView *v41; // rcx
  int v42; // r8d
  HRGN v43; // rsi
  DWORD v44; // edi
  int v45; // eax
  WCHAR LCData[2]; // [rsp+30h] [rbp-30h] BYREF
  WCHAR v48[2]; // [rsp+34h] [rbp-2Ch] BYREF
  int v49; // [rsp+38h] [rbp-28h]
  int v50; // [rsp+3Ch] [rbp-24h]
  int v51; // [rsp+40h] [rbp-20h]
  HRGN v52; // [rsp+48h] [rbp-18h]
  __int64 v53; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  __int64 v55; // [rsp+A0h] [rbp+40h] BYREF
  int v56; // [rsp+A8h] [rbp+48h]
  struct tagRECT *v57; // [rsp+B0h] [rbp+50h]

  v57 = a3;
  v53 = -2LL;
  v10 = a2->m128i_i32[2] - a2->m128i_i32[0];
  v50 = v10;
  v11 = a2->m128i_i32[3] - a2->m128i_i32[1];
  v51 = v11;
  RectRgn = 0LL;
  v52 = 0LL;
  if ( *((_DWORD *)this + 34) != 4 )
    goto LABEL_22;
  RectRgn = CreateRectRgn(0, 0, v10, v11);
  v52 = RectRgn;
  if ( !RectRgn )
  {
    v14 = 1828LL;
LABEL_54:
    v24 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)0x80004005LL);
    goto LABEL_58;
  }
  v15 = _mm_srli_si128(*a2, 8).m128i_u64[0];
  v16 = a2->m128i_i64[0];
  v56 = v15 - a2->m128i_i64[0];
  v55 = (unsigned int)(HIDWORD(v15) - HIDWORD(v16));
  if ( (unsigned int)(*((_DWORD *)this + 33) - 3) <= 1 )
    v17 = 0LL;
  else
    v17 = (ExperienceManagerUtils *)(*((_BYTE *)this + 204) != 0 ? 56 : 48);
  v18 = a7;
  v49 = ExperienceManagerUtils::ScaleByPerMonitorDPI(v17, (int)a7, v13);
  SpeechTextInputHeight = CortanaDesktopExperienceView::GetSpeechTextInputHeight(this, v18);
  v21 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)0x87, (int)v18, v20);
  v22 = v55;
  v23 = CortanaDesktopExperienceView::RemoveRectFromRegion(
          (CortanaDesktopExperienceView *)(unsigned int)(v55 - (v21 + SpeechTextInputHeight)),
          RectRgn,
          0,
          0,
          v56,
          v55 - (v21 + SpeechTextInputHeight));
  v24 = v23;
  if ( v23 >= 0 )
  {
    ThreadUILanguage = GetThreadUILanguage();
    LODWORD(v55) = 0;
    if ( GetLocaleInfoW(ThreadUILanguage, 0x20000070u, LCData, 2) > 0 )
      LODWORD(v55) = *(_DWORD *)LCData == 1;
    v27 = GetThreadUILanguage();
    v28 = 0;
    if ( GetLocaleInfoW(v27, 0x20000070u, v48, 2) > 0 )
      LOBYTE(v28) = *(_DWORD *)v48 == 1;
    v29 = v49;
    if ( (_DWORD)v55 )
      v29 = v56;
    v23 = CortanaDesktopExperienceView::RemoveRectFromRegion(
            (CortanaDesktopExperienceView *)(unsigned int)(v56 - v49),
            RectRgn,
            v28 != 0 ? v56 - v49 : 0,
            0,
            v29,
            v22);
    v24 = v23;
    if ( v23 >= 0 )
    {
      v24 = 0;
      goto LABEL_19;
    }
    v25 = 1915LL;
  }
  else
  {
    v25 = 1908LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v25,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)v23);
LABEL_19:
  if ( v24 < 0 )
  {
    v30 = (unsigned int)v24;
    v31 = 1832LL;
LABEL_48:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v31,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)v30);
    goto LABEL_58;
  }
  v10 = v50;
  v11 = v51;
LABEL_22:
  if ( a5 )
  {
    if ( !a6 )
    {
      if ( *((_DWORD *)this + 34) != 4 )
      {
        v34 = CreateRectRgn(0, 0, v10, v11);
        if ( RectRgn )
        {
          LastError = GetLastError();
          DeleteObject(RectRgn);
          SetLastError(LastError);
        }
        RectRgn = v34;
        v52 = v34;
        if ( !v34 )
        {
          v14 = 1852LL;
          goto LABEL_54;
        }
      }
      v36 = v57;
      v37 = CortanaDesktopExperienceView::RemoveRectFromRegion(
              (CortanaDesktopExperienceView *)(unsigned int)(v57->bottom - a2->m128i_i32[1]),
              RectRgn,
              v57->left - a2->m128i_i32[0],
              v57->top - a2->m128i_i32[1],
              v57->right - a2->m128i_i32[0],
              v57->bottom - a2->m128i_i32[1]);
      v24 = v37;
      if ( v37 >= 0 )
      {
        if ( *((_DWORD *)this + 33) != 1 || *((_DWORD *)this + 34) == 6 )
          goto LABEL_55;
        v38 = GetThreadUILanguage();
        if ( GetLocaleInfoW(v38, 0x20000070u, (LPWSTR)&v55, 2) > 0 && (_DWORD)v55 == 1 )
          left = a4->left;
        else
          left = a2->m128i_i32[2];
        v40 = GetThreadUILanguage();
        if ( GetLocaleInfoW(v40, 0x20000070u, (LPWSTR)&v55, 2) > 0 && (_DWORD)v55 == 1 )
          v42 = 0;
        else
          v42 = a4->right - a2->m128i_i32[0];
        v37 = CortanaDesktopExperienceView::RemoveRectFromRegion(
                v41,
                RectRgn,
                v42,
                v36->top - a2->m128i_i32[1],
                left - a2->m128i_i32[0],
                v36->bottom - a2->m128i_i32[1]);
        v24 = v37;
        if ( v37 >= 0 )
          goto LABEL_55;
        v31 = 1870LL;
      }
      else
      {
        v31 = 1860LL;
      }
      v30 = (unsigned int)v37;
      goto LABEL_48;
    }
    v32 = CreateRectRgn(
            a4->left - a2->m128i_i32[0],
            a4->top - a2->m128i_i32[1],
            a4->right - a2->m128i_i32[0],
            a4->bottom - a2->m128i_i32[1]);
    if ( RectRgn )
    {
      v33 = GetLastError();
      DeleteObject(RectRgn);
      SetLastError(v33);
    }
    RectRgn = v32;
    v52 = v32;
    if ( !v32 )
    {
      v14 = 1845LL;
      goto LABEL_54;
    }
  }
  else if ( a6 )
  {
    v43 = CreateRectRgn(0, 0, 0, 0);
    if ( RectRgn )
    {
      v44 = GetLastError();
      DeleteObject(RectRgn);
      SetLastError(v44);
    }
    RectRgn = v43;
    v52 = v43;
    if ( !v43 )
    {
      v14 = 1879LL;
      goto LABEL_54;
    }
  }
LABEL_55:
  LOBYTE(a3) = 1;
  v45 = (*(__int64 (__fastcall **)(_QWORD, HRGN, struct tagRECT *))(**((_QWORD **)this + 18) + 144LL))(
          *((_QWORD *)this + 18),
          RectRgn,
          a3);
  if ( v45 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x75A,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v45);
  v24 = 0;
LABEL_58:
  if ( RectRgn )
    DeleteObject(RectRgn);
  return (unsigned int)v24;
}
