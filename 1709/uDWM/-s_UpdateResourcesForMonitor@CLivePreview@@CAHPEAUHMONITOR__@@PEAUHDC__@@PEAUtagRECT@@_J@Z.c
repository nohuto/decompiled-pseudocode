/*
 * XREFs of ?s_UpdateResourcesForMonitor@CLivePreview@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z @ 0x18006CDB0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     memset_0 @ 0x180045938 (memset_0.c)
 *     ?AddMultipleAndSet@?$DynArray@ULivePreviewResource@@$0A@@@QEAAJPEFBULivePreviewResource@@I@Z @ 0x1800698D0 (-AddMultipleAndSet@-$DynArray@ULivePreviewResource@@$0A@@@QEAAJPEFBULivePreviewResource@@I@Z.c)
 *     ?_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z @ 0x18006C508 (-_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z.c)
 */

__int64 __fastcall CLivePreview::s_UpdateResourcesForMonitor(HMONITOR a1, HDC a2, const RECT *a3, CLivePreview *a4)
{
  int updated; // eax
  unsigned int v7; // r8d
  unsigned int v8; // ebx
  int v9; // edi
  _BYTE v11[112]; // [rsp+30h] [rbp-A8h] BYREF
  struct tagRECT rcDst; // [rsp+A0h] [rbp-38h] BYREF

  memset_0(v11, 0, 0x88uLL);
  CopyRect(&rcDst, a3);
  updated = CLivePreview::_UpdateResourcesForMonitor(a4, (struct LivePreviewResource *)v11);
  v8 = 0;
  v9 = updated;
  if ( updated >= 0 )
    DynArray<LivePreviewResource,0>::AddMultipleAndSet((__int64)a4 + 368, (__int64)v11, v7);
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x5A0u);
  LOBYTE(v8) = v9 >= 0;
  return v8;
}
