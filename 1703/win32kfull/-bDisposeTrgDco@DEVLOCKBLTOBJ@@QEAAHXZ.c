/*
 * XREFs of ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C0073288
 * Callers:
 *     NtGdiBitBltInternal @ 0x1C006FAB0 (NtGdiBitBltInternal.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0071D38 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z @ 0x1C0251488 (-vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z.c)
 * Callees:
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00733A4 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?vInheritSurfaceDpiScale@DC@@QEAAXXZ @ 0x1C007B4C4 (-vInheritSurfaceDpiScale@DC@@QEAAXXZ.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bDisposeTrgDco(DEVLOCKBLTOBJ *this)
{
  struct XDCOBJ *v1; // rbx
  __int64 v3; // r8
  __int64 v4; // rax
  DC *v6; // rcx

  v1 = (DEVLOCKBLTOBJ *)((char *)this + 80);
  v3 = *((_QWORD *)this + 10);
  if ( v3 )
  {
    v4 = *(_QWORD *)(v3 + 48);
    if ( (*((_DWORD *)this + 18) & 0x10) != 0 )
    {
      *(_DWORD *)(v3 + 36) &= ~0x4000u;
      v6 = *(DC **)v1;
      *((_QWORD *)v6 + 64) = *(_QWORD *)(v4 + 2568);
      DC::vInheritSurfaceDpiScale(v6);
    }
    DEVLOCKBLTOBJ::vClearRenderState(this, v1);
    if ( *(_QWORD *)v1 )
    {
      XDCOBJ::RestoreAttributes(v1);
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)v1 + 12LL));
      *(_QWORD *)v1 = 0LL;
    }
    *(_QWORD *)v1 = 0LL;
  }
  return 1LL;
}
