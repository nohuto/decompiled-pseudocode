/*
 * XREFs of ?FinishPnPTransition@DXGSESSIONMGR@@QEAAXJ@Z @ 0x1C01CF9F0
 * Callers:
 *     DxgkFinishPnPTransition @ 0x1C01D1058 (DxgkFinishPnPTransition.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

void __fastcall DXGSESSIONMGR::FinishPnPTransition(DXGSESSIONMGR *this)
{
  struct _KEVENT *v3; // rcx
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v4, (DXGSESSIONMGR *)((char *)this + 80), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v4);
  if ( (*((_DWORD *)this + 36))-- == 1 )
  {
    v3 = (struct _KEVENT *)*((_QWORD *)this + 17);
    if ( v3 )
      KeSetEvent(v3, 0, 0);
  }
  if ( v4[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v4);
}
