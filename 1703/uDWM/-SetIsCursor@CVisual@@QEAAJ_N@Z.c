/*
 * XREFs of ?SetIsCursor@CVisual@@QEAAJ_N@Z @ 0x18003E970
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180034190 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?IsCursorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18003E8C0 (-IsCursorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::SetIsCursor(CVisual *this, unsigned __int8 a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 256LL))(
         *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
         *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
         a2);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x262u);
  return v3;
}
