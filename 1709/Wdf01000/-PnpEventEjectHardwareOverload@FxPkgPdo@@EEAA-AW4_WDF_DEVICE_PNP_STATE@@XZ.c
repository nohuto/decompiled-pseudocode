/*
 * XREFs of ?PnpEventEjectHardwareOverload@FxPkgPdo@@EEAA?AW4_WDF_DEVICE_PNP_STATE@@XZ @ 0x1C0098520
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C00140BC (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_ @ 0x1C0015D18 (WPP_IFR_SF_.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0016B8C (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0066834 (WPP_IFR_SF_qid.c)
 *     ?UpdateAsMissing@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z @ 0x1C006FFA8 (-UpdateAsMissing@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z.c)
 */

__int64 __fastcall FxPkgPdo::PnpEventEjectHardwareOverload(FxPkgPdo *this)
{
  FxDeviceBase *m_DeviceBase; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *); // rax
  unsigned __int16 m_ObjectSize; // dx
  unsigned __int64 v5; // rcx
  int _a3; // edi
  FxDeviceDescriptionEntry *m_Description; // rdx
  FxChildList *m_DeviceList; // rbp
  FxDeviceBase *v9; // rdx
  const void *_a1; // rcx
  FxDeviceBase *v11; // rdx
  const void *v12; // rcx
  MxEvent *p_m_ScanEvent; // rcx
  _FX_DRIVER_GLOBALS *v14; // rax
  unsigned int v15; // ebp
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  _FX_DRIVER_GLOBALS *v17; // rdx
  MxEvent *event; // [rsp+60h] [rbp+8h] BYREF

  m_DeviceBase = this->m_DeviceBase;
  m_Method = this->m_DeviceEject.m_Method;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  if ( m_Method )
  {
    v5 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !m_ObjectSize )
      v5 = 0LL;
    _a3 = m_Method((WDFDEVICE__ *)v5);
  }
  else
  {
    _a3 = 0;
  }
  if ( _a3 < 0 )
  {
    v15 = 258;
    WPP_IFR_SF_d(this->m_Globals, 2u, 0xCu, 0x11u, WPP_FxPkgPdo_cpp_Traceguids, _a3);
    if ( _a3 == -1073741637 )
    {
      WPP_IFR_SF_(this->m_Globals, 2u, 0x12u, 0x12u, WPP_FxPkgPdo_cpp_Traceguids);
      m_Globals = this->m_Globals;
      if ( m_Globals->FxVerifierOn )
      {
        if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(this->m_Globals, (unsigned int)m_Globals, 0xBu)
          || v17->FxVerifyDownlevel )
        {
          FxVerifierDbgBreakPoint(v17);
        }
      }
    }
  }
  else
  {
    m_Description = this->m_Description;
    m_DeviceList = m_Description->m_DeviceList;
    _a3 = FxChildList::UpdateAsMissing(m_DeviceList, m_Description->m_IdentificationDescription);
    if ( _a3 < 0 )
    {
      v11 = this->m_DeviceBase;
      v12 = (const void *)((unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v11->m_ObjectSize )
        v12 = 0LL;
      WPP_IFR_SF_qid(
        this->m_Globals,
        2u,
        0xCu,
        0xFu,
        WPP_FxPkgPdo_cpp_Traceguids,
        v12,
        (__int64)v11->m_DeviceObject.m_DeviceObject,
        _a3);
    }
    else
    {
      v9 = this->m_DeviceBase;
      _a1 = (const void *)((unsigned __int64)v9 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v9->m_ObjectSize )
        _a1 = 0LL;
      WPP_IFR_SF_qq(
        this->m_Globals,
        4u,
        0xCu,
        0xEu,
        WPP_FxPkgPdo_cpp_Traceguids,
        _a1,
        v9->m_DeviceObject.m_DeviceObject);
    }
    p_m_ScanEvent = &m_DeviceList->m_ScanEvent;
    event = &m_DeviceList->m_ScanEvent;
    v14 = this->m_Globals;
    if ( v14->FxVerboseOn )
    {
      WPP_IFR_SF_q(v14, 5u, 0xCu, 0x10u, WPP_FxPkgPdo_cpp_Traceguids, &event);
      p_m_ScanEvent = event;
    }
    KeWaitForSingleObject(p_m_ScanEvent, Executive, 0, 0, 0LL);
    v15 = 260;
  }
  this->m_PendingPnPIrp->IoStatus.Status = _a3;
  KeSetEvent(&this->m_DeviceEjectProcessed->m_Event, 0, 0);
  return v15;
}
