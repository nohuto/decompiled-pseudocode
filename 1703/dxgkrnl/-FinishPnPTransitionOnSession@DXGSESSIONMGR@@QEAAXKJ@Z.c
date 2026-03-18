/*
 * XREFs of ?FinishPnPTransitionOnSession@DXGSESSIONMGR@@QEAAXKJ@Z @ 0x1C011B6A8
 * Callers:
 *     DxgkFinishPnPTransition @ 0x1C011B454 (DxgkFinishPnPTransition.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

void __fastcall DXGSESSIONMGR::FinishPnPTransitionOnSession(
        DXGSESSIONMGR *this,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = a2;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (DXGSESSIONMGR *)((char *)this + 80), a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  if ( (unsigned int)v4 < *((_DWORD *)this + 18) && *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v4) )
  {
    _mm_lfence();
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 8 * v4) + 18504LL) )
    {
      _mm_lfence();
      _InterlockedIncrement(*(volatile signed __int32 **)(*(_QWORD *)(*((_QWORD *)this + 5) + 8 * v4) + 18504LL));
    }
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v10 + 24) = v4;
    WdLogEvent5_WdError(v10);
  }
  if ( v11[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11, v6, v8, v9);
}
