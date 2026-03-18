/*
 * XREFs of ?StartPnPTransition@DXGSESSIONMGR@@QEAAJXZ @ 0x1C011B794
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x1C0114BE0 (DpiFdoStartAdapterThread.c)
 *     DpiFdoHandleStopDevice @ 0x1C01C4520 (DpiFdoHandleStopDevice.c)
 *     DpiFdoStopAdapter @ 0x1C01C545C (DpiFdoStopAdapter.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 */

__int64 __fastcall DXGSESSIONMGR::StartPnPTransition(DXGSESSIONMGR *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _KEVENT *v8; // rcx
  __int64 i; // rdi
  __int64 v10; // rcx
  unsigned int v11; // edi
  bool v12; // zf
  _BYTE v14[16]; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-48h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (DXGSESSIONMGR *)((char *)this + 80), a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  v8 = (struct _KEVENT *)*((_QWORD *)this + 17);
  if ( v8 )
    KeResetEvent(v8);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 18); i = (unsigned int)(i + 1) )
  {
    v10 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * i);
    if ( v10 && *(_QWORD *)(v10 + 18504) )
    {
      KeStackAttachProcess(*(PRKPROCESS *)(v10 + 18584), &ApcState);
      _InterlockedIncrement(*(volatile signed __int32 **)(*(_QWORD *)(*((_QWORD *)this + 5) + 8 * i) + 18504LL));
      KeUnstackDetachProcess(&ApcState);
    }
  }
  v11 = *((_DWORD *)this + 36) + 1;
  v12 = v14[8] == 0;
  *((_DWORD *)this + 36) = v11;
  if ( !v12 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14, v5, v6, v7);
  return v11;
}
