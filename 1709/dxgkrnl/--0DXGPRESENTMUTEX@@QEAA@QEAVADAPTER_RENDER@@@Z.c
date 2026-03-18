/*
 * XREFs of ??0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z @ 0x1C0008AB0
 * Callers:
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C00C1650 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPR.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00C6330 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     <none>
 */

DXGPRESENTMUTEX *__fastcall DXGPRESENTMUTEX::DXGPRESENTMUTEX(DXGPRESENTMUTEX *this, struct ADAPTER_RENDER *const a2)
{
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v5; // rax
  __int64 v6; // rax

  *((_QWORD *)this + 1) = a2;
  *((_BYTE *)this + 16) = 0;
  if ( !a2 )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v5 + 24) = 6301LL;
    WdLogEvent5_WdAssertion(v5);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 552LL) == CurrentThread )
  {
    v6 = WdLogNewEntry5_WdAssertion(CurrentThread);
    *(_QWORD *)(v6 + 24) = 6306LL;
    WdLogEvent5_WdAssertion(v6);
  }
  return this;
}
