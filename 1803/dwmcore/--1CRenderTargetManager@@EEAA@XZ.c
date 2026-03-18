/*
 * XREFs of ??1CRenderTargetManager@@EEAA@XZ @ 0x1801521BC
 * Callers:
 *     ??_GCRenderTargetManager@@EEAAPEAXI@Z @ 0x180152200 (--_GCRenderTargetManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800CCF78 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ReleaseTargets@CRenderTargetManager@@QEAAXXZ @ 0x180152540 (-ReleaseTargets@CRenderTargetManager@@QEAAXXZ.c)
 */

void __fastcall CRenderTargetManager::~CRenderTargetManager(void **this)
{
  *this = &CRenderTargetManager::`vftable';
  CRenderTargetManager::ReleaseTargets((CRenderTargetManager *)this);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(this + 7));
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 3);
  *this = &CMILRefCountBase::`vftable';
}
