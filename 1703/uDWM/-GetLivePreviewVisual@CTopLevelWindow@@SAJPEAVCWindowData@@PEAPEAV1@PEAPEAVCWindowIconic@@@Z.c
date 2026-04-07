/*
 * XREFs of ?GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z @ 0x18008054C
 * Callers:
 *     ?_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowState@@PEAVCVisual@@2@Z @ 0x180076774 (-_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowS.c)
 * Callees:
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x18000B6E8 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180023604 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z @ 0x18003E7AC (-Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z @ 0x180083EC4 (-GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z.c)
 */

__int64 __fastcall CTopLevelWindow::GetLivePreviewVisual(
        struct CWindowData *a1,
        struct CTopLevelWindow **a2,
        struct CWindowIconic **a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  CTopLevelWindow *v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdi
  int WindowRestoreRect; // eax
  signed int LastError; // eax
  int v12; // r9d
  __int64 v13; // rcx
  unsigned int v15; // [rsp+20h] [rbp-58h]
  __int128 v16; // [rsp+30h] [rbp-48h]
  struct tagRECT rc; // [rsp+40h] [rbp-38h] BYREF

  v4 = 0;
  *a2 = 0LL;
  *a3 = 0LL;
  v7 = (CTopLevelWindow *)*((_QWORD *)a1 + 50);
  if ( (*((_BYTE *)a1 + 593) & 1) != 0 )
    goto LABEL_18;
  v8 = *((_QWORD *)a1 + 53);
  if ( !v8 )
  {
    if ( v7 && (*((_DWORD *)a1 + 25) & 0x20000000) == 0 )
    {
      WindowRestoreRect = CTopLevelWindow::CloneVisualTreeForLivePreview(v7, 0, (__int64)v7, a4, a2);
      v4 = WindowRestoreRect;
      if ( WindowRestoreRect < 0 )
      {
        v15 = 5195;
        goto LABEL_20;
      }
      return v4;
    }
LABEL_18:
    WindowRestoreRect = CWindowIconic::Create(a1, a3, 1);
    v4 = WindowRestoreRect;
    if ( WindowRestoreRect < 0 )
    {
      v15 = 5174;
      goto LABEL_20;
    }
    *a2 = (struct CTopLevelWindow *)*((_QWORD *)*a3 + 11);
    v13 = *((_QWORD *)*a3 + 11);
    if ( v13 )
      _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
    return v4;
  }
  v9 = *(_QWORD *)(v8 + 24);
  v16 = *(_OWORD *)(v9 + 636);
  rc = *(struct tagRECT *)(*(_QWORD *)(v8 + 32) + 48LL);
  if ( (*((_DWORD *)a1 + 25) & 0x20000000) != 0 )
  {
    WindowRestoreRect = CWindowData::GetWindowRestoreRect(a1, &rc, 1);
    v4 = WindowRestoreRect;
    if ( WindowRestoreRect < 0 )
    {
      v15 = 5185;
LABEL_20:
      v12 = WindowRestoreRect;
LABEL_21:
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, v15);
      return v4;
    }
  }
  SetLastError(0);
  if ( !OffsetRect(&rc, -(int)v16, -DWORD2(v16)) )
  {
    LastError = GetLastError();
    v4 = LastError;
    if ( LastError > 0 )
      v4 = (unsigned __int16)LastError | 0x80070000;
    v15 = 5188;
    if ( (v4 & 0x80000000) == 0 )
      v4 = -2003304445;
    v12 = v4;
    goto LABEL_21;
  }
  CVisual::SetOffset((struct tagPOINT *)v9, (const struct tagPOINT *)&rc);
  *a2 = (struct CTopLevelWindow *)v9;
  _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
  return v4;
}
