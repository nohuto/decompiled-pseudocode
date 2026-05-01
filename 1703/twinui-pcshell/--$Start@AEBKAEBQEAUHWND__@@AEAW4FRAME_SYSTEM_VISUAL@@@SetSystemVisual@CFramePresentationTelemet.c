/*
 * XREFs of ??$Start@AEBKAEBQEAUHWND__@@AEAW4FRAME_SYSTEM_VISUAL@@@SetSystemVisual@CFramePresentationTelemetry@@SA?AV01@AEBKAEBQEAUHWND__@@AEAW4FRAME_SYSTEM_VISUAL@@@Z @ 0x18006A098
 * Callers:
 *     ?SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z @ 0x180066C80 (-SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z.c)
 * Callees:
 *     ?StartActivity@SetSystemVisual@CFramePresentationTelemetry@@QEAAXIPEAUHWND__@@W4FRAME_SYSTEM_VISUAL@@@Z @ 0x18006D690 (-StartActivity@SetSystemVisual@CFramePresentationTelemetry@@QEAAXIPEAUHWND__@@W4FRAME_SYSTEM_VIS.c)
 *     memset @ 0x180194E50 (memset.c)
 */

__int64 __fastcall CFramePresentationTelemetry::SetSystemVisual::Start<unsigned long const &,HWND__ * const &,enum FRAME_SYSTEM_VISUAL &>(
        __int64 a1,
        unsigned int *a2,
        _QWORD *a3,
        unsigned int *a4)
{
  __int64 v4; // rbx
  _QWORD *v8; // rcx

  *(_QWORD *)(a1 + 16) = a1;
  v4 = a1 + 56;
  *(_QWORD *)(a1 + 40) = a1 + 96;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 48) = a1 + 56;
  *(_DWORD *)(a1 + 56) = 0;
  v8 = (_QWORD *)(a1 + 136);
  *(_BYTE *)(v4 + 4) = 0;
  *(_BYTE *)(v4 + 64) = 0;
  *(_DWORD *)(v4 + 40) = 0;
  *(_QWORD *)(v4 + 48) = "SetSystemVisual";
  *(_QWORD *)(v4 + 56) = 0LL;
  *(_QWORD *)(v4 + 72) = 1LL;
  v8[18] = 0LL;
  v8[19] = 0LL;
  memset(v8, 0, 0x90uLL);
  *(_QWORD *)(v4 + 240) = 0LL;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_QWORD *)a1 = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
  CFramePresentationTelemetry::SetSystemVisual::StartActivity(a1, *a2, *a3, *a4);
  return a1;
}
