/*
 * XREFs of ?WaitForPnPTransitionDone@DXGSESSIONMGR@@QEAAJW4_KWAIT_REASON@@DPEAT_LARGE_INTEGER@@@Z @ 0x1C00DD958
 * Callers:
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C009800C (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONMGR::WaitForPnPTransitionDone(
        DXGSESSIONMGR *this,
        KWAIT_REASON a2,
        __int64 a3,
        union _LARGE_INTEGER *a4)
{
  KPROCESSOR_MODE v6; // si
  __int64 v7; // rdx
  __int64 v8; // rcx
  void *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18; // rax
  _BYTE v19[24]; // [rsp+30h] [rbp-18h] BYREF

  v6 = a3;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, (DXGSESSIONMGR *)((char *)this + 80), a3, (__int64)a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
  v9 = (void *)*((_QWORD *)this + 17);
  if ( v9 )
  {
    ObfReferenceObject(*((PVOID *)this + 17));
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19, v10, v11, v12);
    v13 = KeWaitForSingleObject(v9, a2, v6, 0, 0LL);
    ObfDereferenceObject(v9);
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(v8, v7);
    v13 = -1073741811;
    *(_QWORD *)(v18 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v18);
  }
  if ( v19[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19, v14, v15, v16);
  return v13;
}
