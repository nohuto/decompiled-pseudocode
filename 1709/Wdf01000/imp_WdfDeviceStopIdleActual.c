/*
 * XREFs of imp_WdfDeviceStopIdleActual @ 0x1C0013010
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0002E5C (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z @ 0x1C000CC40 (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0017934 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_qdd @ 0x1C00701C4 (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0081680 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

__int64 __fastcall imp_WdfDeviceStopIdleActual(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        unsigned __int8 WaitForD0,
        void *Tag,
        int Line,
        char *File)
{
  WDFDEVICE__ *v8; // rdi
  FxObject *v9; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  FxPowerIdleMachine *v11; // rcx
  int _a3; // eax
  int v13; // ebx
  __int64 v14; // rcx
  __int64 v16; // rax
  void *PPObject; // [rsp+68h] [rbp+10h] BYREF

  v8 = (WDFDEVICE__ *)Device;
  if ( !Device )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1002uLL);
  v9 = (FxObject *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Device) = 0;
  if ( ((unsigned __int8)v8 & 1) != 0 )
  {
    Device = LOWORD(v9->__vftable);
    v9 = (FxObject *)((char *)v9 - Device);
  }
  if ( v9->m_Type == 4098 )
  {
    PPObject = v9;
  }
  else
  {
    FxObjectHandleGetPtrQI(v9, &PPObject, v8, 0x1002u, Device);
    v9 = (FxObject *)PPObject;
  }
  m_Globals = v9->m_Globals;
  if ( WaitForD0 )
  {
    v13 = FxVerifierCheckIrqlLevel(v9->m_Globals, 0);
    if ( v13 < 0 )
      return (unsigned int)v13;
    v9 = (FxObject *)PPObject;
  }
  v11 = *(FxPowerIdleMachine **)(*(_QWORD *)&v9[6].m_ObjectFlags + 880LL);
  if ( v11 )
  {
    _a3 = FxPowerIdleMachine::PowerReferenceWorker(v11, WaitForD0, FxPowerReferenceDefault, Tag, Line, File);
    v13 = _a3;
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_qdd(m_Globals, 5u, 0x12u, 0x25u, WPP_FxDeviceApi_cpp_Traceguids, v8, WaitForD0, _a3);
    if ( v13 >= 0 )
    {
      v14 = *((_QWORD *)PPObject + 81);
      if ( *(_BYTE *)(v14 + 1220) == 1 && _InterlockedIncrement((volatile signed __int32 *)(v14 + 1216)) == 1 )
      {
        v16 = *(_QWORD *)(v14 + 1208);
        if ( v16 )
        {
          if ( *(_QWORD *)(v16 + 16) )
            SleepstudyHelper_ComponentActive();
        }
      }
    }
  }
  else
  {
    v13 = -1073741436;
    WPP_IFR_SF_qd(m_Globals, 2u, 0x12u, 0x24u, WPP_FxDeviceApi_cpp_Traceguids, v8, -1073741436);
  }
  return (unsigned int)v13;
}
