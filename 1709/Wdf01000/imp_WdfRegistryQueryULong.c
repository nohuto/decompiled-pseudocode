/*
 * XREFs of imp_WdfRegistryQueryULong @ 0x1C0014820
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C00178E8 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0017934 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     __security_check_cookie @ 0x1C003B880 (__security_check_cookie.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00816D8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

NTSTATUS __fastcall imp_WdfRegistryQueryULong(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *Key,
        _UNICODE_STRING *ValueName,
        unsigned int *Value)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  NTSTATUS result; // eax
  NTSTATUS _a2; // ebx
  unsigned int ResultLength; // [rsp+40h] [rbp-58h] BYREF
  FxRegKey *pKey; // [rsp+48h] [rbp-50h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+50h] [rbp-48h] BYREF
  int v13; // [rsp+54h] [rbp-44h]
  unsigned int v14; // [rsp+5Ch] [rbp-3Ch]
  void *retaddr; // [rsp+98h] [rbp+0h]

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Key,
    0x1006u,
    (void **)&pKey);
  m_Globals = pKey->FxPagedObject::FxObject::m_Globals;
  if ( !ValueName )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( !Value )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( result >= 0 )
  {
    result = FxValidateUnicodeString(m_Globals, ValueName);
    if ( result >= 0 )
    {
      ResultLength = 16;
      _a2 = ZwQueryValueKey(
              pKey->m_Key,
              ValueName,
              KeyValuePartialInformation,
              KeyValueInformation,
              0x10u,
              &ResultLength);
      if ( ((int)(_a2 + 0x80000000) < 0 || _a2 == -2147483643) && v13 != 4 )
        _a2 = -1073741788;
      if ( _a2 < 0 )
        WPP_IFR_SF_qd(m_Globals, 2u, 2u, 0x1Fu, WPP_FxRegistryAPI_cpp_Traceguids, Key, _a2);
      else
        *Value = v14;
      return _a2;
    }
  }
  return result;
}
