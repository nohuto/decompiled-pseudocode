/*
 * XREFs of imp_WdfDeviceCreateSymbolicLink @ 0x1C0038B70
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C00178E8 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0017934 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C001ED8C (-CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ??1FxAutoString@@QEAA@XZ @ 0x1C0038C30 (--1FxAutoString@@QEAA@XZ.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00816D8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDeviceCreateSymbolicLink(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        const _UNICODE_STRING *SymbolicLinkName)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  int SymbolicLink; // ebx
  unsigned __int16 v8; // r9
  FxAutoString pdoName; // [rsp+40h] [rbp-28h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]
  FxDevice *pDevice; // [rsp+70h] [rbp+8h] BYREF

  *(_QWORD *)&pdoName.m_UnicodeString.Length = 0LL;
  pdoName.m_UnicodeString.Buffer = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( !SymbolicLinkName )
    FxVerifierNullBugCheck(pDevice->m_Globals, retaddr);
  if ( !SymbolicLinkName->Length )
  {
    v8 = 28;
    goto LABEL_11;
  }
  SymbolicLink = FxVerifierCheckIrqlLevel(pDevice->m_Globals, 0);
  if ( SymbolicLink >= 0 )
  {
    SymbolicLink = FxValidateUnicodeString(m_Globals, SymbolicLinkName);
    if ( SymbolicLink >= 0 )
    {
      if ( !pDevice->m_SymbolicLinkName.Buffer )
      {
        SymbolicLink = FxDevice::CreateSymbolicLink(pDevice, m_Globals, SymbolicLinkName);
        goto LABEL_7;
      }
      v8 = 29;
LABEL_11:
      SymbolicLink = -1073741808;
      WPP_IFR_SF_qd(m_Globals, 2u, 0x12u, v8, WPP_FxDeviceApi_cpp_Traceguids, Device, -1073741808);
    }
  }
LABEL_7:
  FxAutoString::~FxAutoString(&pdoName);
  return (unsigned int)SymbolicLink;
}
