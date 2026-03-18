/*
 * XREFs of imp_WdfCmResourceListGetCount @ 0x1C0037C60
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C003CA08 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C003CBC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

__int64 __fastcall imp_WdfCmResourceListGetCount(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFCMRESLIST__ *List)
{
  unsigned __int8 v2; // r8
  FxCmResList *v3; // rbx
  unsigned __int8 v4; // al
  unsigned __int8 v5; // r8
  unsigned int m_Count; // edi
  FxVerifierLock *m_Lock; // rcx
  FxVerifierLock *v9; // rcx
  unsigned __int8 PreviousIrql; // [rsp+30h] [rbp+8h] BYREF
  FxCmResList *pList; // [rsp+40h] [rbp+18h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)List,
    0x1036u,
    (void **)&pList);
  v3 = pList;
  if ( SLOBYTE(pList->m_ObjectFlags) < 0 && (m_Lock = (FxVerifierLock *)pList[-1].m_NPLock.m_Lock) != 0LL )
  {
    FxVerifierLock::Lock(m_Lock, &PreviousIrql, v2);
    v4 = PreviousIrql;
  }
  else
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&pList->m_NPLock.m_Lock);
  }
  m_Count = v3->m_Count;
  if ( SLOBYTE(v3->m_ObjectFlags) < 0 && (v9 = (FxVerifierLock *)v3[-1].m_NPLock.m_Lock) != 0LL )
    FxVerifierLock::Unlock(v9, v4, v5);
  else
    KeReleaseSpinLock(&v3->m_NPLock.m_Lock, v4);
  return m_Count;
}
