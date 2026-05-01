/*
 * XREFs of ?RuntimeClassInitialize@StartExperienceWallpaperBackground@@QEAAJPEAUHWND__@@PEAUIDCompositionDevice@@@Z @ 0x1800D1A0C
 * Callers:
 *     ??$MakeAndInitialize@VStartExperienceWallpaperBackground@@V1@AEAPEAUHWND__@@PEAUIDCompositionDevice@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VStartExperienceWallpaperBackground@@@WRL@Microsoft@@@012@AEAPEAUHWND__@@$$QEAPEAUIDCompositionDevice@@@Z @ 0x1800B9E90 (--$MakeAndInitialize@VStartExperienceWallpaperBackground@@V1@AEAPEAUHWND__@@PEAUIDCompositionDev.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0dddd @ 0x180034C0C (McTemplateU0dddd.c)
 *     McTemplateU0q @ 0x180034D08 (McTemplateU0q.c)
 *     ?RebuildScene@StartExperienceWallpaperBackground@@AEAAJAEBUtagRECT@@@Z @ 0x1800D1B6C (-RebuildScene@StartExperienceWallpaperBackground@@AEAAJAEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall StartExperienceWallpaperBackground::RuntimeClassInitialize(
        StartExperienceWallpaperBackground *this,
        HWND a2,
        struct IDCompositionDevice *a3)
{
  __int64 v5; // rcx
  int updated; // eax
  HWND v7; // rcx
  int v8; // edi
  __int64 v9; // rcx
  signed int v10; // ebx
  signed int LastError; // eax
  LONG right; // [rsp+20h] [rbp-30h]
  LONG bottom; // [rsp+28h] [rbp-28h]
  struct tagRECT Rect; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  *((_QWORD *)this + 3) = a2;
  if ( *((struct IDCompositionDevice **)this + 4) != a3 )
  {
    if ( a3 )
      (*(void (__fastcall **)(struct IDCompositionDevice *))(*(_QWORD *)a3 + 8LL))(a3);
    v5 = *((_QWORD *)this + 4);
    *((_QWORD *)this + 4) = a3;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  updated = UpdateWallpaperTransition(13LL, 1LL);
  v7 = (HWND)*((_QWORD *)this + 3);
  v8 = updated;
  Rect = 0LL;
  if ( GetWindowRect(v7, &Rect) )
  {
    v10 = 0;
  }
  else
  {
    LastError = GetLastError();
    v10 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v10 = LastError;
    if ( v10 >= 0 )
      v10 = -2147467259;
  }
  if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
  {
    bottom = Rect.bottom;
    right = Rect.right;
    McTemplateU0dddd(v9, &WallpaperBackground_SceneInitialization_Start, Rect.left, Rect.top, right, bottom);
  }
  if ( v10 >= 0 )
  {
    *((_BYTE *)this + 16) = v8 >= 0;
    if ( v8 >= 0 )
      v8 = StartExperienceWallpaperBackground::RebuildScene(this, &Rect);
    v10 = v8;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x2C,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencewallpaperbackground.cpp",
      (const char *)(unsigned int)v10);
    v8 = v10;
  }
  if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
    McTemplateU0q(v9, &WallpaperBackground_SceneInitialization_Stop, v8);
  return (unsigned int)v10;
}
