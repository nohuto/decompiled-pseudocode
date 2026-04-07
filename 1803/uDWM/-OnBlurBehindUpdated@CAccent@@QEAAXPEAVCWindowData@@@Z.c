/*
 * XREFs of ?OnBlurBehindUpdated@CAccent@@QEAAXPEAVCWindowData@@@Z @ 0x1800807C8
 * Callers:
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x18001F010 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?UpdateAccentBlurBehind@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x180026D58 (-UpdateAccentBlurBehind@CWindowList@@QEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?IsBlurBehindDirty@CAccentBlurBehind@@QEAA_NPEAVCWindowData@@AEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x1800806BC (-IsBlurBehindDirty@CAccentBlurBehind@@QEAA_NPEAVCWindowData@@AEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 */

void __fastcall CAccent::OnBlurBehindUpdated(CAccent *this, struct CWindowData *a2)
{
  CAccentBlurBehind *v3; // rcx

  v3 = (CAccentBlurBehind *)*((_QWORD *)this + 42);
  if ( v3
    && (*((_QWORD *)a2 + 5) == *((_QWORD *)this + 47)
     || CAccentBlurBehind::IsBlurBehindDirty(
          v3,
          a2,
          (const struct tagRECT *)this + 37,
          *((_QWORD *)this + 48),
          *((HWND *)this + 47))) )
  {
    (*(void (__fastcall **)(CAccent *, __int64))(*(_QWORD *)this + 24LL))(this, 0x10000LL);
  }
}
