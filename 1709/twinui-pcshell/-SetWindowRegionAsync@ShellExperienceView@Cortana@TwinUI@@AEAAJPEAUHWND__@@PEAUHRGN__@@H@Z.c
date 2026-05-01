/*
 * XREFs of ?SetWindowRegionAsync@ShellExperienceView@Cortana@TwinUI@@AEAAJPEAUHWND__@@PEAUHRGN__@@H@Z @ 0x1800CF9A8
 * Callers:
 *     ?SetDrawingRegion@ShellExperienceView@Cortana@TwinUI@@UEAAJ_KE@Z @ 0x1800CEFB0 (-SetDrawingRegion@ShellExperienceView@Cortana@TwinUI@@UEAAJ_KE@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_2743f96ca4684a8efa4b094fa43a59d9___ @ 0x1800CFDA8 (Windows--Internal--ComTaskPool--QueueTask__lambda_2743f96ca4684a8efa4b094fa43a59d9___.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TwinUI::Cortana::ShellExperienceView::SetWindowRegionAsync(
        TwinUI::Cortana::ShellExperienceView *this,
        HWND a2,
        HRGN a3,
        int a4)
{
  HRGN v8; // rbx
  HRGN RectRgn; // rax
  int v10; // edi
  __int64 v11; // rdx
  HWND v13; // [rsp+28h] [rbp-30h] BYREF
  HGDIOBJ ho; // [rsp+30h] [rbp-28h]
  int v15; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v8 = 0LL;
  if ( a3 )
  {
    RectRgn = CreateRectRgn(0, 0, 0, 0);
    v8 = RectRgn;
    if ( !RectRgn )
    {
      v10 = -2147467259;
      v11 = 378LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanashellexperienceview.cpp",
        (const char *)(unsigned int)v10);
      goto LABEL_11;
    }
    if ( !CombineRgn(RectRgn, a3, 0LL, 5) )
    {
      v10 = -2147467259;
      v11 = 379LL;
      goto LABEL_10;
    }
  }
  v13 = a2;
  ho = v8;
  v8 = 0LL;
  v15 = a4;
  v10 = ((__int64 (__fastcall *)(TwinUI::Cortana::ShellExperienceView *, __int64, _QWORD, HWND *, __int64))Windows::Internal::ComTaskPool::QueueTask__lambda_2743f96ca4684a8efa4b094fa43a59d9___)(
          this,
          258LL,
          *((unsigned int *)this + 74),
          &v13,
          -2LL);
  if ( ho )
    DeleteObject(ho);
  if ( v10 < 0 )
  {
    v11 = 387LL;
    goto LABEL_10;
  }
LABEL_11:
  if ( v8 )
    DeleteObject(v8);
  return (unsigned int)v10;
}
