/*
 * XREFs of ?AddAsyncFlushResponse@CLegacySurfaceManager@@QEAAJPEAVCChannelContext@@II@Z @ 0x180020658
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x18001F764 (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacySurfaceManager::AddAsyncFlushResponse(
        CLegacySurfaceManager *this,
        struct CChannelContext *a2,
        int a3)
{
  __int64 v5; // rsi
  LPVOID v6; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v5 = *(_QWORD *)((*(__int64 (__fastcall **)(CLegacySurfaceManager *))(*(_QWORD *)this + 8LL))(this) + 80);
  v6 = HeapAlloc(WPF::g_processHeap, 0, 0x38uLL);
  if ( !v6 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  *((_DWORD *)v6 + 4) = 1;
  *(_QWORD *)v6 = &CMILRefCountBase::`vftable';
  *(_QWORD *)v6 = &CResponseItem::`vftable';
  *((_DWORD *)v6 + 2) = 0;
  *((_QWORD *)v6 + 3) = v5;
  *((_WORD *)v6 + 16) = 0;
  _InterlockedIncrement((volatile signed __int32 *)v6 + 2);
  *((_DWORD *)v6 + 12) = a3;
  *(_QWORD *)v6 = &CAsyncFlushResponse::`vftable';
  *((_QWORD *)v6 + 5) = a2;
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  CResponseItem::ReleaseResponseRef((CResponseItem *)v6);
  return 0LL;
}
