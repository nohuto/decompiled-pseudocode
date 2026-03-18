/*
 * XREFs of ?vUnlock@DXGSTABLEVISRGNANDSPRITE@@QEAAXXZ @ 0x1C016CF8C
 * Callers:
 *     ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x1C016CC60 (-Unlock@CWin32kLocks@@QEAAXXZ.c)
 *     ??1CWin32kLocks@@QEAA@XZ @ 0x1C016CE44 (--1CWin32kLocks@@QEAA@XZ.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C019EEA8 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
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
