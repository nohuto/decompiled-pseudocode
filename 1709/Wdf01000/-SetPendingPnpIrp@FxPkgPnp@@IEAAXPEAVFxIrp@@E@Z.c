/*
 * XREFs of ?SetPendingPnpIrp@FxPkgPnp@@IEAAXPEAVFxIrp@@E@Z @ 0x1C00635BC
 * Callers:
 *     ?_PnpEject@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C00988C0 (-_PnpEject@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?PnpSurpriseRemoval@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C009DFCC (-PnpSurpriseRemoval@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?_PnpCancelRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C009E5A0 (-_PnpCancelRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?_PnpCancelStopDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C009E5E0 (-_PnpCancelStopDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?_PnpQueryRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C009E640 (-_PnpQueryRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?_PnpQueryStopDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C009E680 (-_PnpQueryStopDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?_PnpStopDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C009E810 (-_PnpStopDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0081680 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_cqcqq @ 0x1C009ED30 (WPP_IFR_SF_cqcqq.c)
 */

void __fastcall FxPkgPnp::SetPendingPnpIrp(FxPkgPnp *this, FxIrp *Irp, unsigned __int8 MarkIrpPending)
{
  _IRP *m_PendingPnPIrp; // rax
  FxDeviceBase *m_DeviceBase; // r8
  _IRP *m_Irp; // r9
  unsigned __int16 m_ObjectSize; // dx
  const void *v9; // r8
  FxDeviceBase *v10; // r8
  unsigned __int16 v11; // ax
  unsigned __int64 v12; // r8
  const _GUID *v13; // [rsp+20h] [rbp-38h]

  m_PendingPnPIrp = this->m_PendingPnPIrp;
  if ( m_PendingPnPIrp )
  {
    m_DeviceBase = this->m_DeviceBase;
    m_Irp = Irp->m_Irp;
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    v9 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v9 = 0LL;
    WPP_IFR_SF_cqcqq(
      this->m_Globals,
      (unsigned __int8)m_Irp->Tail.Overlay.CurrentStackLocation,
      (unsigned int)v9,
      (unsigned __int16)m_Irp,
      v13,
      m_Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
      m_Irp,
      m_PendingPnPIrp->Tail.Overlay.CurrentStackLocation->MinorFunction,
      m_PendingPnPIrp,
      v9);
    v10 = this->m_DeviceBase;
    v11 = v10->m_ObjectSize;
    v12 = (unsigned __int64)v10 ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !v11 )
      v12 = 0LL;
    FxVerifierBugCheckWorker(this->m_Globals, WDF_PNP_FATAL_ERROR, v12, (unsigned __int64)Irp->m_Irp);
  }
  if ( MarkIrpPending )
    Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  this->m_PendingPnPIrp = Irp->m_Irp;
}
