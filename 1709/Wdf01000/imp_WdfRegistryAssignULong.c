/*
 * XREFs of imp_WdfRegistryAssignULong @ 0x1C0084550
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C00178E8 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0017934 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00816D8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfRegistryAssignULong(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *Key,
        _UNICODE_STRING *ValueName,
        unsigned int Value)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  __int64 result; // rax
  NTSTATUS _a2; // eax
  unsigned int v9; // edi
  ULONG_PTR retaddr; // [rsp+48h] [rbp+0h]
  FxRegKey *pKey; // [rsp+50h] [rbp+8h] BYREF
  unsigned int Data; // [rsp+68h] [rbp+20h] BYREF

  Data = Value;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Key,
    0x1006u,
    (void **)&pKey);
  m_Globals = pKey->FxPagedObject::FxObject::m_Globals;
  if ( !ValueName )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateUnicodeString(m_Globals, ValueName);
    if ( (int)result >= 0 )
    {
      _a2 = ZwSetValueKey(pKey->m_Key, ValueName, 0, 4u, &Data, 4u);
      v9 = _a2;
      if ( _a2 < 0 )
        WPP_IFR_SF_qd(m_Globals, 2u, 2u, 0x24u, WPP_FxRegistryAPI_cpp_Traceguids, Key, _a2);
      return v9;
    }
  }
  return result;
}
