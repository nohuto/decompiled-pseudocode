/*
 * XREFs of ?OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ @ 0x18001EF88
 * Callers:
 *     ?OnWindowSizeUpdated@CWindowData@@QEAAJXZ @ 0x180016664 (-OnWindowSizeUpdated@CWindowData@@QEAAJXZ.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18003A078 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 * Callees:
 *     ?SetMouseCapture@CButton@@QEAAX_N@Z @ 0x180005518 (-SetMouseCapture@CButton@@QEAAX_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x1800256C0 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::OnWindowSizeUpdated(CTopLevelWindow *this)
{
  _DWORD *v1; // rdx
  LONG v3; // eax
  LONG v4; // eax
  int v5; // eax
  unsigned int v6; // esi
  CButton *v7; // rcx
  CBaseObject *v8; // rdi
  CBaseObject *v10; // rcx
  __int64 v11; // rcx
  struct tagSIZE v12; // [rsp+40h] [rbp+8h] BYREF

  v1 = (_DWORD *)*((_QWORD *)this + 90);
  v3 = v1[14] - v1[12];
  if ( v3 < 0 )
    v3 = 0;
  v12.cx = v3;
  v4 = v1[15] - v1[13];
  if ( v4 < 0 )
    v4 = 0;
  v12.cy = v4;
  v5 = CVisual::SetSize(this, &v12);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x5AAu);
  }
  else
  {
    v7 = (CButton *)*((_QWORD *)this + 92);
    if ( v7 )
    {
      CButton::SetMouseCapture(v7, 0);
      v10 = (CBaseObject *)*((_QWORD *)this + 92);
      if ( v10 )
      {
        CBaseObject::Release(v10);
        *((_QWORD *)this + 92) = 0LL;
      }
    }
    v8 = (CBaseObject *)*((_QWORD *)this + 91);
    if ( v8 )
    {
      *((_QWORD *)this + 91) = 0LL;
      (*(void (__fastcall **)(CBaseObject *))(*(_QWORD *)v8 + 104LL))(v8);
      v11 = *((_QWORD *)this + 91);
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 96LL))(v11);
      CBaseObject::Release(v8);
    }
  }
  return v6;
}
