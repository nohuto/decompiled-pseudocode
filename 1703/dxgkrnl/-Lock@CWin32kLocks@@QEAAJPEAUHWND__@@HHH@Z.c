/*
 * XREFs of ?Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z @ 0x1C016CCD0
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00B43A0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C019EEA8 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x1C016CC60 (-Unlock@CWin32kLocks@@QEAAXXZ.c)
 *     ?vLock@DXGSTABLEVISRGNANDSPRITE@@QEAAXPEAUHDC__@@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@HH@Z @ 0x1C016CFE8 (-vLock@DXGSTABLEVISRGNANDSPRITE@@QEAAXPEAUHDC__@@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@H.c)
 */

__int64 __fastcall CWin32kLocks::Lock(CWin32kLocks *this, HWND a2, int a3, int a4, int a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax

  v13 = 0;
  if ( DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)this + 7)) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    *(_QWORD *)(v14 + 24) = 703LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( *(_QWORD *)this || *((_QWORD *)this + 1) || *((_QWORD *)this + 2) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    *(_QWORD *)(v15 + 24) = 705LL;
    WdLogEvent5_WdAssertion(v15);
  }
  v16 = (*(__int64 (__fastcall **)(HWND, unsigned __int64))(*((_QWORD *)this + 3) + 48LL))(
          a2,
          ((unsigned __int64)this + 8) & -(__int64)(a5 != 0));
  *(_QWORD *)this = v16;
  if ( v16 )
  {
    if ( a5 && !*((_QWORD *)this + 1) )
    {
      v21 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
      *(_QWORD *)(v21 + 24) = 711LL;
      WdLogEvent5_WdAssertion(v21);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(*((_QWORD *)this + 3) + 296LL))(*(_QWORD *)this, 1LL);
    DXGSTABLEVISRGNANDSPRITE::vLock(
      (CWin32kLocks *)((char *)this + 32),
      *(HDC *)this,
      *((const struct _DXGKWIN32KENG_INTERFACE *const *)this + 3),
      *((struct DXGADAPTER **)this + 7),
      a3,
      a4);
    v22 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)this + 3) + 16LL))(*(_QWORD *)this);
    *((_QWORD *)this + 2) = v22;
    if ( !v22 )
    {
      v24 = WdLogNewEntry5_WdEvent(v23);
      *(_QWORD *)(v24 + 24) = *(_QWORD *)this;
      WdLogEvent5_WdEvent(v24);
      CWin32kLocks::Unlock(this);
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    v13 = -1071775731;
    v25 = WdLogNewEntry5_WdEvent(v18);
    *(_QWORD *)(v25 + 24) = a2;
    WdLogEvent5_WdEvent(v25);
  }
  return v13;
}
