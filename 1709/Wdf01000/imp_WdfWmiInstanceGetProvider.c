/*
 * XREFs of imp_WdfWmiInstanceGetProvider @ 0x1C0071210
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

WDFWMIPROVIDER__ *__fastcall imp_WdfWmiInstanceGetProvider(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFWMIINSTANCE__ *WmiInstance)
{
  FxWmiProvider *m_Provider; // rax
  unsigned __int16 m_ObjectSize; // cx
  WDFWMIPROVIDER__ *result; // rax
  FxWmiInstanceExternal *pInstance; // [rsp+30h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)WmiInstance,
    0x1034u,
    (void **)&pInstance);
  m_Provider = pInstance->m_Provider;
  m_ObjectSize = m_Provider->m_ObjectSize;
  result = (WDFWMIPROVIDER__ *)((unsigned __int64)m_Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    return 0LL;
  return result;
}
