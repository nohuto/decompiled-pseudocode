/*
 * XREFs of ?PropagatePendingReturned@FxIrp@@QEAAXXZ @ 0x1C0065688
 * Callers:
 *     ?_CompletionRoutineForRemlockMaintenance@FxDevice@@CAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C007DBE0 (-_CompletionRoutineForRemlockMaintenance@FxDevice@@CAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?_CreateCompletionRoutine2@FxPkgGeneral@@CAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C00A3F40 (-_CreateCompletionRoutine2@FxPkgGeneral@@CAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxIrp::PropagatePendingReturned(FxIrp *this)
{
  _IRP *m_Irp; // rdx

  m_Irp = this->m_Irp;
  if ( this->m_Irp->PendingReturned )
  {
    if ( m_Irp->CurrentLocation <= m_Irp->StackCount )
      m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  }
}
