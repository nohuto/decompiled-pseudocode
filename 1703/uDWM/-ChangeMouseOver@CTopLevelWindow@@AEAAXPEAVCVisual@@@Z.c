/*
 * XREFs of ?ChangeMouseOver@CTopLevelWindow@@AEAAXPEAVCVisual@@@Z @ 0x180028C2C
 * Callers:
 *     ?NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ @ 0x180028C98 (-NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ.c)
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x180032100 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTopLevelWindow::ChangeMouseOver(CTopLevelWindow *this, struct CVisual *a2)
{
  CBaseObject *v2; // rbx
  __int64 v4; // rcx

  v2 = (CBaseObject *)*((_QWORD *)this + 91);
  if ( a2 != v2 )
  {
    *((_QWORD *)this + 91) = a2;
    if ( a2 )
      _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
    if ( v2 )
      (*(void (__fastcall **)(CBaseObject *))(*(_QWORD *)v2 + 104LL))(v2);
    v4 = *((_QWORD *)this + 91);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 96LL))(v4);
    if ( v2 )
      CBaseObject::Release(v2);
  }
}
