/*
 * XREFs of imp_WdfDeviceGetSelfIoTarget @ 0x1C0076D40
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

unsigned __int64 __fastcall imp_WdfDeviceGetSelfIoTarget(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  FxPkgPnp *m_PkgPnp; // rax
  unsigned __int64 result; // rax
  __int16 v4; // cx
  FxDevice *pDevice; // [rsp+30h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice);
  m_PkgPnp = pDevice->m_PkgPnp;
  if ( m_PkgPnp && m_PkgPnp->m_Type == 4353 )
    result = *(_QWORD *)&m_PkgPnp[1].m_ObjectFlags;
  else
    result = 0LL;
  if ( result )
  {
    v4 = *(_WORD *)(result + 10);
    result ^= 0xFFFFFFFFFFFFFFF8uLL;
    if ( !v4 )
      return 0LL;
  }
  return result;
}
