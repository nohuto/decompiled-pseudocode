/*
 * XREFs of ?SetExcludeFromDDA@CTopLevelWindow@@QEAAJ_N@Z @ 0x18001EFF0
 * Callers:
 *     ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x1800198A0 (-CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?SetExcludeFromDDA@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x18002BCB0 (-SetExcludeFromDDA@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::SetExcludeFromDDA(CTopLevelWindow *this, unsigned __int8 a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rax
  __int64 v6; // rdx
  int v7; // eax

  v2 = 0;
  if ( a2 != ((*((_BYTE *)this + 241) & 8) != 0) )
  {
    v5 = *((_QWORD *)this + 2);
    *((_BYTE *)this + 241) = (8 * a2) | *((_BYTE *)this + 241) & 0xF7;
    if ( v5 )
      v6 = *(unsigned int *)(v5 + 24);
    else
      v6 = 0LL;
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v5 + 16) + 280LL))(
           *(_QWORD *)(v5 + 16),
           v6,
           a2);
    v2 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xE9u);
  }
  return v2;
}
