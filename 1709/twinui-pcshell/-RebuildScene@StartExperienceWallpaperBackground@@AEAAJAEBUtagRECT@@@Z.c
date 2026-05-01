/*
 * XREFs of ?RebuildScene@StartExperienceWallpaperBackground@@AEAAJAEBUtagRECT@@@Z @ 0x1800D1B6C
 * Callers:
 *     ?RuntimeClassInitialize@StartExperienceWallpaperBackground@@QEAAJPEAUHWND__@@PEAUIDCompositionDevice@@@Z @ 0x1800D1A0C (-RuntimeClassInitialize@StartExperienceWallpaperBackground@@QEAAJPEAUHWND__@@PEAUIDCompositionDe.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

__int64 __fastcall StartExperienceWallpaperBackground::RebuildScene(
        StartExperienceWallpaperBackground *this,
        const struct tagRECT *a2)
{
  char **v2; // rdi
  char *v4; // r14
  DWORD LastError; // ebx
  HWND ShellWindow; // r14
  int v8; // ebx
  int SystemMetrics; // ebx
  int v10; // eax
  LONG right; // r8d
  LONG bottom; // edx
  LONG left; // ecx
  LONG v14; // ecx
  int v15; // r8d
  LONG v16; // ecx
  int v17; // edx
  char *v18; // r15
  DWORD v19; // ebx
  int SharedThumbnailVisual; // eax
  __int128 v22; // [rsp+40h] [rbp-19h]
  _DWORD v23[12]; // [rsp+50h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v2 = (char **)((char *)this + 48);
  v4 = (char *)*((_QWORD *)this + 6);
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    LastError = GetLastError();
    DwmUnregisterThumbnail(v4);
    SetLastError(LastError);
  }
  *v2 = 0LL;
  ShellWindow = GetShellWindow();
  if ( !ShellWindow )
  {
    v8 = -2147023496;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5F,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencewallpaperbackground.cpp",
      (const char *)0x80070578LL);
LABEL_11:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x54,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencewallpaperbackground.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  memset(v23, 0, 0x2DuLL);
  v23[0] |= 2u;
  SystemMetrics = GetSystemMetrics(76);
  v10 = GetSystemMetrics(77);
  right = a2->right;
  bottom = a2->bottom;
  left = a2->left;
  *(_QWORD *)&v22 = 0LL;
  v23[0] |= 0x19u;
  v23[5] = left - SystemMetrics;
  v14 = right;
  v15 = right - a2->left;
  v23[7] = v14 - SystemMetrics;
  DWORD2(v22) = v15;
  v23[6] = a2->top - v10;
  v16 = bottom;
  v17 = bottom - a2->top;
  v18 = *v2;
  HIDWORD(v22) = v17;
  *(_DWORD *)((char *)&v23[9] + 1) = 1;
  *(_DWORD *)((char *)&v23[10] + 1) = 1;
  v23[8] = v16 - v10;
  *(_OWORD *)&v23[1] = v22;
  if ( (unsigned __int64)(v18 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v19 = GetLastError();
    DwmUnregisterThumbnail(v18);
    SetLastError(v19);
  }
  *v2 = 0LL;
  SharedThumbnailVisual = DwmpCreateSharedThumbnailVisual(
                            *((_QWORD *)this + 3),
                            ShellWindow,
                            0LL,
                            v23,
                            *((_QWORD *)this + 4),
                            (char *)this + 40,
                            v2);
  v8 = SharedThumbnailVisual;
  if ( SharedThumbnailVisual >= 0 )
    v8 = 0;
  else
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x80,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencewallpaperbackground.cpp",
      (const char *)(unsigned int)SharedThumbnailVisual);
  if ( v8 < 0 )
    goto LABEL_11;
  return 0LL;
}
