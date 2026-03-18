/*
 * XREFs of ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x1C001A878
 * Callers:
 *     ??1CWin32kLocks@@QEAA@XZ @ 0x1C001A854 (--1CWin32kLocks@@QEAA@XZ.c)
 *     ?Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z @ 0x1C0023ED0 (-Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0101F80 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C01B1648 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 * Callees:
 *     ?vUnlock@DXGSTABLEVISRGNANDSPRITE@@QEAAXXZ @ 0x1C001AF24 (-vUnlock@DXGSTABLEVISRGNANDSPRITE@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
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
