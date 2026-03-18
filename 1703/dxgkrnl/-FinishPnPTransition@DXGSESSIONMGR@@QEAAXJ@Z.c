/*
 * XREFs of ?FinishPnPTransition@DXGSESSIONMGR@@QEAAXJ@Z @ 0x1C011B734
 * Callers:
 *     DxgkFinishPnPTransition @ 0x1C011B454 (DxgkFinishPnPTransition.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

void __fastcall DXGSESSIONMGR::FinishPnPTransition(DXGSESSIONMGR *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _KEVENT *v9; // rcx
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (DXGSESSIONMGR *)((char *)this + 80), a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  if ( (*((_DWORD *)this + 36))-- == 1 )
  {
    v9 = (struct _KEVENT *)*((_QWORD *)this + 17);
    if ( v9 )
      KeSetEvent(v9, 0, 0);
  }
  if ( v10[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10, v5, v6, v7);
}
