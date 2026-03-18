/*
 * XREFs of ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C002238C
 * Callers:
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0020A9C (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z @ 0x1C0252F78 (-vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z.c)
 * Callees:
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00225E0 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vInheritSurfaceDpiScale@DC@@QEAAXXZ @ 0x1C0027F84 (-vInheritSurfaceDpiScale@DC@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bDisposeSrcDco(DEVLOCKBLTOBJ *this)
{
  struct XDCOBJ *v1; // rdi
  __int64 v3; // rcx
  __int64 v5; // rax
  __int64 v6; // rbx
  DC *v7; // rcx
  __int64 v8; // rbx
  __int64 CurrentProcess; // rax

  v1 = (DEVLOCKBLTOBJ *)((char *)this + 96);
  v3 = *((_QWORD *)this + 12);
  if ( v3 )
  {
    v5 = *(_QWORD *)(v3 + 48);
    if ( (*((_DWORD *)this + 18) & 0x20) != 0 )
    {
      *(_DWORD *)(v3 + 36) &= ~0x4000u;
      v7 = *(DC **)v1;
      *((_QWORD *)v7 + 64) = *(_QWORD *)(v5 + 2568);
      DC::vInheritSurfaceDpiScale(v7);
    }
    v6 = *((_QWORD *)this + 14);
    if ( v6 )
    {
      v8 = *(_QWORD *)(v6 + 72);
      CurrentProcess = PsGetCurrentProcess();
      MmUnmapViewOfSection(CurrentProcess, v8);
    }
    DEVLOCKBLTOBJ::vClearRenderState(this, v1);
    if ( *(_QWORD *)v1 )
      XDCOBJ::vUnlockFast(v1);
    *(_QWORD *)v1 = 0LL;
    *(_QWORD *)v1 = 0LL;
  }
  return 1LL;
}
