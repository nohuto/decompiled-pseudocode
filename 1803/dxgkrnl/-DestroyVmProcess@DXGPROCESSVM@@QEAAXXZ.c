/*
 * XREFs of ?DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ @ 0x1C01B6788
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F71CC (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C001654C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00165E0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleaseReferenceSafe@DXGPROCESS@@QEAAXXZ @ 0x1C002D1C8 (-ReleaseReferenceSafe@DXGPROCESS@@QEAAXXZ.c)
 *     ?DecrementNumVmProcesses@DXGPROCESSVMWP@@QEAAXXZ @ 0x1C0034450 (-DecrementNumVmProcesses@DXGPROCESSVMWP@@QEAAXXZ.c)
 */

void __fastcall DXGPROCESSVM::DestroyVmProcess(DXGPROCESSVM *this)
{
  _QWORD *v1; // rdi
  __int64 v3; // rsi
  __int64 v4; // rdx
  _QWORD *v5; // rax
  unsigned int v6; // edx

  v1 = (_QWORD *)((char *)this + 472);
  v3 = *(_QWORD *)(*((_QWORD *)this + 57) + 456LL);
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v3 + 64));
  v4 = *v1;
  if ( *(_QWORD **)(*v1 + 8LL) != v1 || (v5 = (_QWORD *)v1[1], (_QWORD *)*v5 != v1) )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  *(_QWORD *)(v3 + 72) = 0LL;
  ExReleasePushLockExclusiveEx(v3 + 64, 0LL);
  KeLeaveCriticalRegion();
  v1[1] = 0LL;
  *v1 = 0LL;
  v6 = *((_DWORD *)this + 125);
  if ( v6 )
  {
    DXGPROCESS::FreeHandleSafe(*((DXGPROCESS **)this + 57), v6);
    *((_DWORD *)this + 125) = 0;
  }
  DXGPROCESSVMWP::DecrementNumVmProcesses(*((DXGVIRTUALMACHINE ***)this + 57));
  DXGPROCESS::ReleaseReferenceSafe(*((DXGPROCESS **)this + 57));
  *((_QWORD *)this + 57) = 0LL;
}
