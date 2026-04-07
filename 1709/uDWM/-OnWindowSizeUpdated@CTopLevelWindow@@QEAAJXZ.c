/*
 * XREFs of ?OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ @ 0x1800381A8
 * Callers:
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x180037414 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 * Callees:
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x1800180A0 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ @ 0x18001D4E4 (-NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTopLevelWindow::OnWindowSizeUpdated(CTopLevelWindow *this)
{
  _DWORD *v1; // rdx
  LONG v3; // eax
  LONG v4; // eax
  int v5; // eax
  unsigned int v6; // ebx
  struct tagSIZE v8; // [rsp+40h] [rbp+8h] BYREF

  v1 = (_DWORD *)*((_QWORD *)this + 90);
  v3 = v1[14] - v1[12];
  if ( v3 < 0 )
    v3 = 0;
  v8.cx = v3;
  v4 = v1[15] - v1[13];
  if ( v4 < 0 )
    v4 = 0;
  v8.cy = v4;
  v5 = CVisual::SetSize((struct tagSIZE *)this, &v8);
  v6 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x56Bu);
  else
    CTopLevelWindow::NotifyMouseLeave(this);
  return v6;
}
