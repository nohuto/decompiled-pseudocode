/*
 * XREFs of imp_WdfTimerCreate @ 0x1C00142C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00044B0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_Dd @ 0x1C0012824 (WPP_IFR_SF_Dd.c)
 *     ?_Create@FxTimer@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_TIMER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x1C00143F0 (-_Create@FxTimer@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_TIMER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0016B8C (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00208B4 (-FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTE.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_DDd @ 0x1C0068380 (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00816D8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfTimerCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_TIMER_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFTIMER__ **Timer)
{
  _FX_DRIVER_GLOBALS *DriverName; // rbx
  int result; // eax
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned int Size; // edx
  unsigned int _a1; // eax
  unsigned int v12; // r9d
  unsigned __int16 v13; // r9
  int v14; // edi
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxObject *pParent; // [rsp+50h] [rbp+8h] BYREF

  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  result = FxValidateObjectAttributesForParentHandle(
             (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
             Attributes,
             0x18u);
  if ( result >= 0 )
  {
    FxObjectHandleGetPtr(DriverName, (unsigned __int64)Attributes->ParentObject, 0x1000u, (void **)&pParent);
    m_Globals = pParent->m_Globals;
    if ( !Config )
      FxVerifierNullBugCheck(pParent->m_Globals, retaddr);
    if ( !Timer )
      FxVerifierNullBugCheck(pParent->m_Globals, retaddr);
    Size = Config->Size;
    if ( ((Config->Size - 24) & 0xFFFFFFE7) != 0 || Size == 48 )
    {
      v14 = -1073741820;
      WPP_IFR_SF_DDd(m_Globals, Size, 0x12u, 0xAu, WPP_FxTimerApi_cpp_Traceguids, Size, 40, -1073741820);
      return v14;
    }
    _a1 = Config->Period;
    LOWORD(v12) = -1;
    if ( _a1 > 0x7FFFFFFF )
    {
      v13 = 11;
      goto LABEL_23;
    }
    if ( Size > 0x18 && !_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(pParent->m_Globals, Size, 0xDu) )
    {
      _a1 = Config->TolerableDelay;
      if ( _a1 > v12 )
      {
        v13 = 12;
        goto LABEL_23;
      }
    }
    if ( Size > 0x20 )
    {
      _a1 = Config->TolerableDelay;
      if ( _a1 )
      {
        if ( Config->UseHighResolutionTimer )
        {
          v13 = 14;
LABEL_23:
          v14 = -1073741811;
          WPP_IFR_SF_Dd(m_Globals, 2u, 0x12u, v13, WPP_FxTimerApi_cpp_Traceguids, _a1, -1073741811);
          return v14;
        }
      }
    }
    result = FxValidateObjectAttributes(m_Globals, Attributes, 2, v12);
    if ( result >= 0 )
    {
      if ( Config->Period && Attributes->ExecutionLevel == WdfExecutionLevelPassive )
      {
        v14 = -1073741637;
        WPP_IFR_SF_d(m_Globals, 2u, 0x12u, 0xFu, WPP_FxTimerApi_cpp_Traceguids, -1073741637);
        return v14;
      }
      return FxTimer::_Create(m_Globals, Config, Attributes, pParent, Timer);
    }
  }
  return result;
}
