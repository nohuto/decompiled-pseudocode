/*
 * XREFs of ?vUnlock@DXGSTABLEVISRGNANDSPRITE@@QEAAXXZ @ 0x1C01708BC
 * Callers:
 *     ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x1C0170384 (-Unlock@CWin32kLocks@@QEAAXXZ.c)
 *     ??1CWin32kLocks@@QEAA@XZ @ 0x1C0170568 (--1CWin32kLocks@@QEAA@XZ.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C01B5800 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGSTABLEVISRGNANDSPRITE::vUnlock(DXGSTABLEVISRGNANDSPRITE *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    if ( *((_DWORD *)this + 5) )
      (*(void (__fastcall **)(__int64, bool))(*(_QWORD *)this + 288LL))(v2, *((_DWORD *)this + 4) == 0);
    (*(void (**)(void))(*(_QWORD *)this + 272LL))();
    *((_QWORD *)this + 1) = 0LL;
    *((_DWORD *)this + 4) = 0;
    *((_DWORD *)this + 5) = 0;
  }
}
