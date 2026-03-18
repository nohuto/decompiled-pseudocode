/*
 * XREFs of ?vLock@DXGSTABLEVISRGNANDSPRITE@@QEAAXPEAUHDC__@@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@HH@Z @ 0x1C016CFE8
 * Callers:
 *     ?Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z @ 0x1C016CCD0 (-Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGSTABLEVISRGNANDSPRITE::vLock(
        DXGSTABLEVISRGNANDSPRITE *this,
        HDC a2,
        const struct _DXGKWIN32KENG_INTERFACE *a3,
        struct DXGADAPTER *a4,
        int a5,
        int a6)
{
  unsigned int v6; // ebx
  __int64 v10; // rax
  __int64 v11; // rax

  v6 = 0;
  *(_QWORD *)this = a3;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 4) = a5;
  if ( *((_DWORD *)this + 5) )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v10 + 24) = 602LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( a2 && a4 )
  {
    v11 = *(_QWORD *)this;
    *((_QWORD *)this + 1) = a4;
    (*(void (__fastcall **)(HDC))(v11 + 264))(a2);
    if ( a6 )
    {
      LOBYTE(v6) = *((_DWORD *)this + 4) == 0;
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)this + 280LL))(*((_QWORD *)this + 1), v6);
      *((_DWORD *)this + 5) = 1;
    }
  }
}
