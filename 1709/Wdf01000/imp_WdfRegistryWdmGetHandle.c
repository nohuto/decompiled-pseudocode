/*
 * XREFs of imp_WdfRegistryWdmGetHandle @ 0x1C0084F90
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

void *__fastcall imp_WdfRegistryWdmGetHandle(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFKEY__ *Key)
{
  FxRegKey *pKey; // [rsp+30h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Key,
    0x1006u,
    (void **)&pKey);
  return pKey->m_Key;
}
