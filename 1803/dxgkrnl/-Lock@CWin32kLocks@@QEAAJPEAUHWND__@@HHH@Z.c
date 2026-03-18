/*
 * XREFs of ?Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z @ 0x1C0023ED0
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0101F80 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C01B1648 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x1C001A878 (-Unlock@CWin32kLocks@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?vLock@DXGSTABLEVISRGNANDSPRITE@@QEAAXPEAUHDC__@@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@HH@Z @ 0x1C0024C98 (-vLock@DXGSTABLEVISRGNANDSPRITE@@QEAAXPEAUHDC__@@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@H.c)
 */

__int64 __fastcall CWin32kLocks::Lock(CWin32kLocks *this, HWND a2, int a3, int a4, int a5)
{
  __int64 v9; // rcx
  unsigned int v10; // edi
  __int64 v11; // rax
  unsigned __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  DXGADAPTER *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax

  v10 = 0;
  if ( DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)this + 7)) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v11 + 24) = 557LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( *(_QWORD *)this || (v12 = (unsigned __int64)this + 8, *((_QWORD *)this + 1)) || *((_QWORD *)this + 2) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v13 + 24) = 559LL;
    WdLogEvent5_WdAssertion(v13);
    v12 = (unsigned __int64)this + 8;
  }
  v14 = (*(__int64 (__fastcall **)(HWND, unsigned __int64))(*((_QWORD *)this + 3) + 48LL))(
          a2,
          v12 & -(__int64)(a5 != 0));
  *(_QWORD *)this = v14;
  v15 = (DXGADAPTER *)v14;
  if ( v14 )
  {
    if ( a5 && !*(_QWORD *)v12 )
    {
      v16 = WdLogNewEntry5_WdAssertion(v14);
      *(_QWORD *)(v16 + 24) = 565LL;
      WdLogEvent5_WdAssertion(v16);
      v15 = *(DXGADAPTER **)this;
    }
    (*(void (__fastcall **)(DXGADAPTER *, __int64))(*((_QWORD *)this + 3) + 296LL))(v15, 1LL);
    DXGSTABLEVISRGNANDSPRITE::vLock(
      (CWin32kLocks *)((char *)this + 32),
      *(HDC *)this,
      *((const struct _DXGKWIN32KENG_INTERFACE *const *)this + 3),
      *((struct DXGADAPTER **)this + 7),
      a3,
      a4);
    v17 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)this + 3) + 16LL))(*(_QWORD *)this);
    *((_QWORD *)this + 2) = v17;
    if ( !v17 )
    {
      v18 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v18 + 24) = *(_QWORD *)this;
      WdLogEvent5_WdEvent(v18);
      CWin32kLocks::Unlock(this);
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    v10 = -1071775731;
    v19 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v19 + 24) = a2;
    WdLogEvent5_WdEvent(v19);
  }
  return v10;
}
