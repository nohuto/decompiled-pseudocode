/*
 * XREFs of ?SetExcludeFromDDA@CTopLevelWindow@@QEAAJ_N@Z @ 0x18002ABC4
 * Callers:
 *     ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180024A00 (-CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?SetExcludeFromDDA@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x180032D50 (-SetExcludeFromDDA@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
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
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v5 + 16) + 272LL))(
           *(_QWORD *)(v5 + 16),
           v6,
           a2);
    v2 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xF0u);
  }
  return v2;
}
