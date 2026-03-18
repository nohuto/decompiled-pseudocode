/*
 * XREFs of ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x1C016CC60
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00B43A0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z @ 0x1C016CCD0 (-Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z.c)
 *     ??1CWin32kLocks@@QEAA@XZ @ 0x1C016CE44 (--1CWin32kLocks@@QEAA@XZ.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C019EEA8 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?vUnlock@DXGSTABLEVISRGNANDSPRITE@@QEAAXXZ @ 0x1C016CF8C (-vUnlock@DXGSTABLEVISRGNANDSPRITE@@QEAAXXZ.c)
 */

void __fastcall CWin32kLocks::Unlock(CWin32kLocks *this)
{
  if ( *((_QWORD *)this + 2) )
  {
    (*(void (**)(void))(*((_QWORD *)this + 3) + 24LL))();
    *((_QWORD *)this + 2) = 0LL;
  }
  if ( *(_QWORD *)this )
  {
    DXGSTABLEVISRGNANDSPRITE::vUnlock((CWin32kLocks *)((char *)this + 32));
    (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)this + 3) + 296LL))(*(_QWORD *)this, 0LL);
    (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)this + 3) + 64LL))(*(_QWORD *)this, *((_QWORD *)this + 1));
    *(_QWORD *)this = 0LL;
  }
}
