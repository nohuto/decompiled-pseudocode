/*
 * XREFs of imp_WdfDeviceGetIoTarget @ 0x1C0033C70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x1C008045C (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0081680 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

unsigned __int64 __fastcall imp_WdfDeviceGetIoTarget(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Device)
{
  FxDeviceBase *flags; // rbx
  __int64 v4; // rcx
  FxDeviceBase_vtbl *v5; // rax
  __int64 (__fastcall *QueryInterface)(FxDevice *, FxQueryInterfaceParams *); // rax
  _FX_DRIVER_GLOBALS *(__fastcall *GetDefaultIoTarget)(FxDevice *); // rax
  __int64 v8; // rax
  unsigned __int64 result; // rax
  unsigned __int8 v10; // dl
  unsigned int v11; // r8d
  unsigned __int16 v12; // r9
  const _GUID *v13; // [rsp+20h] [rbp-48h]
  FxDeviceBase **p_pDeviceBase; // [rsp+50h] [rbp-18h] BYREF
  __int16 v15; // [rsp+58h] [rbp-10h]
  __int16 v16; // [rsp+5Ah] [rbp-Eh]
  FxDeviceBase *pDeviceBase; // [rsp+78h] [rbp+10h] BYREF

  if ( !Device )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1030uLL);
  flags = (FxDeviceBase *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(v4) = 0;
  if ( (Device & 1) != 0 )
  {
    v4 = LOWORD(flags->FxNonPagedObject::FxObject::__vftable);
    flags = (FxDeviceBase *)((char *)flags - v4);
  }
  if ( flags->m_Type == 4144 )
  {
    pDeviceBase = flags;
  }
  else
  {
    pDeviceBase = 0LL;
    p_pDeviceBase = &pDeviceBase;
    v5 = flags->FxNonPagedObject::FxObject::__vftable;
    v16 = v4;
    v15 = 4144;
    QueryInterface = (__int64 (__fastcall *)(FxDevice *, FxQueryInterfaceParams *))v5->QueryInterface;
    if ( QueryInterface == FxDevice::QueryInterface )
    {
      pDeviceBase = flags;
    }
    else
    {
      if ( (int)QueryInterface((FxDevice *)flags, (FxQueryInterfaceParams *)&p_pDeviceBase) < 0 )
      {
        WPP_IFR_SF_qDqD(flags->m_Globals, v10, v11, v12, v13, (const void *)Device, 0x1030u, flags, flags->m_Type);
        FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Device, 0x1030uLL);
      }
      flags = pDeviceBase;
    }
  }
  GetDefaultIoTarget = (_FX_DRIVER_GLOBALS *(__fastcall *)(FxDevice *))flags->GetDefaultIoTarget;
  if ( GetDefaultIoTarget == FxDevice::GetDefaultIoTarget )
  {
    v8 = *(_QWORD *)&flags[3].m_SpinLock.m_DbgFlagIsInitialized;
    if ( v8 && *(_WORD *)(v8 + 8) == 4353 )
      result = *(_QWORD *)(v8 + 1608);
    else
      result = 0LL;
  }
  else
  {
    result = (__int64)GetDefaultIoTarget((FxDevice *)flags);
  }
  if ( result )
  {
    if ( *(_WORD *)(result + 10) )
      result ^= 0xFFFFFFFFFFFFFFF8uLL;
    else
      return 0LL;
  }
  return result;
}
