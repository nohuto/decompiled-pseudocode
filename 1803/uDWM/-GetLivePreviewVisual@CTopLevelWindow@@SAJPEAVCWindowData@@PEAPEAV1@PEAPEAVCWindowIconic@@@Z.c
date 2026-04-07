/*
 * XREFs of ?GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z @ 0x180081A94
 * Callers:
 *     ?_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowState@@PEAVCVisual@@2@Z @ 0x180072800 (-_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowS.c)
 * Callees:
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x18001FB40 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180025D68 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z @ 0x18003AFD4 (-Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z @ 0x180084EB4 (-GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z.c)
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
  int WindowRestoreRect; // eax
  bool v10; // zf
  __int64 v11; // rdi
  signed int LastError; // eax
  int v13; // r9d
  __int64 v14; // rcx
  unsigned int v16; // [rsp+20h] [rbp-58h]
  __int128 v17; // [rsp+30h] [rbp-48h]
  struct tagRECT rc; // [rsp+40h] [rbp-38h] BYREF

  v4 = 0;
  *a2 = 0LL;
  *a3 = 0LL;
  v7 = (CTopLevelWindow *)*((_QWORD *)a1 + 49);
  if ( (*((_BYTE *)a1 + 593) & 1) != 0 )
    goto LABEL_17;
  v8 = *((_QWORD *)a1 + 53);
  if ( !v8 )
  {
    if ( v7 && (*((_DWORD *)a1 + 25) & 0x20000000) == 0 )
    {
      WindowRestoreRect = CTopLevelWindow::CloneVisualTreeForLivePreview(v7, 0, (__int64)v7, a4, a2);
      v4 = WindowRestoreRect;
      if ( WindowRestoreRect < 0 )
      {
        v16 = 5271;
LABEL_19:
        v13 = WindowRestoreRect;
LABEL_20:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, v16);
        return v4;
      }
      return v4;
    }
LABEL_17:
    WindowRestoreRect = CWindowIconic::Create(a1, a3, 1);
    v4 = WindowRestoreRect;
    if ( WindowRestoreRect < 0 )
    {
      v16 = 5250;
      goto LABEL_19;
    }
    *a2 = (struct CTopLevelWindow *)*((_QWORD *)*a3 + 11);
    v14 = *((_QWORD *)*a3 + 11);
    if ( v14 )
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
    return v4;
  }
  v10 = (*((_DWORD *)a1 + 25) & 0x20000000) == 0;
  v11 = *(_QWORD *)(v8 + 24);
  v17 = *(_OWORD *)(v11 + 636);
  rc = *(struct tagRECT *)(*(_QWORD *)(v8 + 32) + 48LL);
  if ( !v10 )
  {
    WindowRestoreRect = CWindowData::GetWindowRestoreRect(a1, &rc, 1);
    v4 = WindowRestoreRect;
    if ( WindowRestoreRect < 0 )
    {
      v16 = 5261;
      goto LABEL_19;
    }
  }
  SetLastError(0);
  if ( !OffsetRect(&rc, -(int)v17, -DWORD2(v17)) )
  {
    LastError = GetLastError();
    v4 = LastError;
    if ( LastError > 0 )
      v4 = (unsigned __int16)LastError | 0x80070000;
    v16 = 5264;
    if ( (v4 & 0x80000000) == 0 )
      v4 = -2003304445;
    v13 = v4;
    goto LABEL_20;
  }
  CVisual::SetOffset((struct tagPOINT *)v11, (const struct tagPOINT *)&rc);
  *a2 = (struct CTopLevelWindow *)v11;
  _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
  return v4;
}
