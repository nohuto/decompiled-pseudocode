/*
 * XREFs of ?Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z @ 0x1C01703F4
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00C6330 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C01B5800 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x1C0170384 (-Unlock@CWin32kLocks@@QEAAXXZ.c)
 *     ?vLock@DXGSTABLEVISRGNANDSPRITE@@QEAAXPEAUHDC__@@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@HH@Z @ 0x1C0170918 (-vLock@DXGSTABLEVISRGNANDSPRITE@@QEAAXPEAUHDC__@@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@H.c)
 */

__int64 __fastcall CWin32kLocks::Lock(CWin32kLocks *this, HWND a2, int a3, int a4, int a5)
{
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rax

  v10 = 0;
  if ( DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)this + 7)) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v11 + 24) = 704LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( *(_QWORD *)this || *((_QWORD *)this + 1) || *((_QWORD *)this + 2) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v12 + 24) = 706LL;
    WdLogEvent5_WdAssertion(v12);
  }
  v13 = (*(__int64 (__fastcall **)(HWND, unsigned __int64))(*((_QWORD *)this + 3) + 48LL))(
          a2,
          ((unsigned __int64)this + 8) & -(__int64)(a5 != 0));
  *(_QWORD *)this = v13;
  if ( v13 )
  {
    if ( a5 && !*((_QWORD *)this + 1) )
    {
      v18 = WdLogNewEntry5_WdAssertion(v15);
      *(_QWORD *)(v18 + 24) = 712LL;
      WdLogEvent5_WdAssertion(v18);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(*((_QWORD *)this + 3) + 296LL))(*(_QWORD *)this, 1LL);
    DXGSTABLEVISRGNANDSPRITE::vLock(
      (CWin32kLocks *)((char *)this + 32),
      *(HDC *)this,
      *((const struct _DXGKWIN32KENG_INTERFACE *const *)this + 3),
      *((struct DXGADAPTER **)this + 7),
      a3,
      a4);
    v19 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)this + 3) + 16LL))(*(_QWORD *)this);
    *((_QWORD *)this + 2) = v19;
    if ( !v19 )
    {
      v24 = WdLogNewEntry5_WdEvent(v21, v20, v22, v23);
      *(_QWORD *)(v24 + 24) = *(_QWORD *)this;
      WdLogEvent5_WdEvent(v24);
      CWin32kLocks::Unlock(this);
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    v10 = -1071775731;
    v25 = WdLogNewEntry5_WdEvent(v15, v14, v16, v17);
    *(_QWORD *)(v25 + 24) = a2;
    WdLogEvent5_WdEvent(v25);
  }
  return v10;
}
