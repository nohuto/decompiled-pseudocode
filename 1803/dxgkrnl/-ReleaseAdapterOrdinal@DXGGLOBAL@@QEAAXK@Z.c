/*
 * XREFs of ?ReleaseAdapterOrdinal@DXGGLOBAL@@QEAAXK@Z @ 0x1C01A07E8
 * Callers:
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C01489E8 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014EF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 */

void __fastcall DXGGLOBAL::ReleaseAdapterOrdinal(DXGGLOBAL *this, ULONG a2)
{
  __int64 v4; // rax

  if ( a2 >= *((_DWORD *)this + 224) )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 2664LL;
    WdLogEvent5_WdAssertion(v4);
  }
  DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 464));
  RtlClearBits((PRTL_BITMAP)((char *)this + 504), a2, 1u);
  DXGFASTMUTEX::Release((struct _KTHREAD **)this + 58);
}
