/*
 * XREFs of ??1CRenderTargetManager@@EEAA@XZ @ 0x180144990
 * Callers:
 *     ??_GCRenderTargetManager@@EEAAPEAXI@Z @ 0x1801449E0 (--_GCRenderTargetManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ReleaseTargets@CRenderTargetManager@@QEAAXXZ @ 0x180144EF0 (-ReleaseTargets@CRenderTargetManager@@QEAAXXZ.c)
 */

void __fastcall CRenderTargetManager::~CRenderTargetManager(void **this)
{
  *this = &CRenderTargetManager::`vftable';
  CRenderTargetManager::ReleaseTargets((CRenderTargetManager *)this);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 14);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 7);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 3);
  *this = &CMILRefCountBase::`vftable';
}
