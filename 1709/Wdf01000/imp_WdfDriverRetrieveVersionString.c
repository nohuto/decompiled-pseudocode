/*
 * XREFs of imp_WdfDriverRetrieveVersionString @ 0x1C007A1A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C0017810 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0017934 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00816D8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDriverRetrieveVersionString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDRIVER__ *Driver,
        WDFSTRING__ *String)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  __int64 result; // rax
  FxString *v6; // rbx
  const wchar_t *v7; // rdx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  void *retaddr; // [rsp+38h] [rbp+0h]
  FxDriver *pDriver; // [rsp+40h] [rbp+8h] BYREF
  FxString *pString; // [rsp+50h] [rbp+18h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Driver,
    0x1001u,
    (void **)&pDriver);
  m_Globals = pDriver->m_Globals;
  if ( !String )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    FxObjectHandleGetPtr(m_Globals, (unsigned __int64)String, 0x1007u, (void **)&pString);
    v6 = pString;
    v7 = L"Kernel Mode Driver Framework (verifier on) version 01.023.0";
    if ( !m_Globals->FxVerifierOn )
      v7 = L"Kernel Mode Driver Framework version 01.023.0";
    RtlInitUnicodeString(&DestinationString, v7);
    return FxDuplicateUnicodeString(v6->m_Globals, &DestinationString, &v6->m_UnicodeString);
  }
  return result;
}
