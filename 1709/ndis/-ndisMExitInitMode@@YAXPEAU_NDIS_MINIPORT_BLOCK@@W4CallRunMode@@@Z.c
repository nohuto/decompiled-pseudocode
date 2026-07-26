/*
 * XREFs of ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00C5BE8
 * Callers:
 *     ndisInitialBindCompleted @ 0x1C0012CC8 (ndisInitialBindCompleted.c)
 *     ?DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00B418C (-DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ndisInitModeTimeoutWorkItem @ 0x1C00C8F00 (ndisInitModeTimeoutWorkItem.c)
 * Callees:
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00BAD34 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BC16C (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisCancelInitModeTimeoutTimer @ 0x1C00C5CB4 (ndisCancelInitModeTimeoutTimer.c)
 *     ?ndisAoAcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00F32B0 (-ndisAoAcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisMExitInitMode(struct _NDIS_MINIPORT_BLOCK *a1, enum CallRunMode a2)
{
  struct _NDIS_MINIPORT_BLOCK *v4; // rdx
  bool m_isDirty; // al
  char v6; // si
  struct _NDIS_MINIPORT_BLOCK *m_miniport; // rcx

  if ( !a1->InitModeNotNeededAnymore )
  {
    a1->InitModeNotNeededAnymore = 1;
    ndisCancelInitModeTimeoutTimer(a1, 0LL);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
    a1->BindEngine.m_isDirty = 1;
    m_isDirty = a1->BindEngine.m_isDirty;
    v6 = 0;
    do
    {
      m_miniport = a1->BindEngine.m_miniport;
      v6 |= m_isDirty;
      a1->BindEngine.m_isDirty = 0;
      Ndis::BindRules::Apply(m_miniport, v4);
      m_isDirty = a1->BindEngine.m_isDirty;
    }
    while ( m_isDirty );
    a1->BindEngine.m_isDirty = v6;
    ExReleasePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
    KeLeaveCriticalRegion();
    Ndis::BindEngine::ApplyBindChanges(&a1->BindEngine, a2, 0);
    if ( (a1->Flags & 0x80u) == 0 )
    {
      if ( a1->AoAc )
        ndisAoAcStart(a1);
    }
  }
}
