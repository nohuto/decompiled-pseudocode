/*
 * XREFs of imp_WdfPdoInitAllocate @ 0x1C003A740
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0006850 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0015D18 (WPP_IFR_SF_.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0017934 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ??0WDFDEVICE_INIT@@QEAA@PEAVFxDriver@@@Z @ 0x1C00208FC (--0WDFDEVICE_INIT@@QEAA@PEAVFxDriver@@@Z.c)
 */

WDFDEVICE_INIT *__fastcall imp_WdfPdoInitAllocate(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *ParentDevice)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  WDFDEVICE_INIT *v3; // rax
  __int64 v4; // rax
  __int64 v5; // rcx
  FxDevice *v6; // rax
  unsigned __int16 v8; // r9
  void *Caller; // [rsp+38h] [rbp+0h]
  FxDevice *pDevice; // [rsp+40h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)ParentDevice,
    0x1002u,
    (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( (int)FxVerifierCheckIrqlLevel(m_Globals, 0) < 0 )
    return 0LL;
  if ( pDevice->m_PkgPnp->m_Type != 4353 )
  {
    v8 = 51;
LABEL_11:
    WPP_IFR_SF_(m_Globals, 2u, 0x12u, v8, WPP_FxDeviceInitApi_cpp_Traceguids);
    return 0LL;
  }
  v3 = (WDFDEVICE_INIT *)FxPoolAllocator(
                           m_Globals,
                           &m_Globals->FxPoolFrameworks,
                           ExDefaultNonPagedPoolType,
                           0x3A8uLL,
                           m_Globals->Tag,
                           Caller);
  if ( v3 )
  {
    WDFDEVICE_INIT::WDFDEVICE_INIT(v3, pDevice->m_Driver);
    v5 = v4;
  }
  else
  {
    v5 = 0LL;
  }
  if ( !v5 )
  {
    v8 = 52;
    goto LABEL_11;
  }
  v6 = pDevice;
  *(_DWORD *)(v5 + 56) |= 0x80u;
  *(_DWORD *)(v5 + 36) = 1;
  *(_QWORD *)(v5 + 792) = v6;
  if ( !v6->m_PowerPageableCapable )
    *(_BYTE *)(v5 + 26) = 0;
  *(_BYTE *)(v5 + 901) = 1;
  return (WDFDEVICE_INIT *)v5;
}
