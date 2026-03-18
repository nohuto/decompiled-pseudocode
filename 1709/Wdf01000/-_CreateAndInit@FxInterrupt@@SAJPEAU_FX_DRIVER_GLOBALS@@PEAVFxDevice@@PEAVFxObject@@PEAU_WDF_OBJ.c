/*
 * XREFs of ?_CreateAndInit@FxInterrupt@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_INTERRUPT_CONFIG@@PEAPEAV1@@Z @ 0x1C00354D8
 * Callers:
 *     imp_WdfInterruptCreate @ 0x1C00352C0 (imp_WdfInterruptCreate.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C001FEF0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0031E50 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?Initialize@FxInterrupt@@QEAAJPEAVFxDevice@@PEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C0035C28 (-Initialize@FxInterrupt@@QEAAJPEAVFxDevice@@PEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z.c)
 *     ??0FxInterrupt@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0035D28 (--0FxInterrupt@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0065088 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?CreateWakeInterruptMachine@FxInterrupt@@QEAAJXZ @ 0x1C00A1B00 (-CreateWakeInterruptMachine@FxInterrupt@@QEAAJXZ.c)
 */

__int64 __fastcall FxInterrupt::_CreateAndInit(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxDevice *Device,
        FxDevice *Parent,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        _WDF_INTERRUPT_CONFIG *Configuration,
        FxInterrupt **Interrupt)
{
  FxInterrupt *v10; // rax
  FxInterrupt *v11; // rax
  FxInterrupt *v12; // rbx
  FxDevice *v13; // rbp
  int WakeInterruptMachine; // edi
  int v15; // eax

  v10 = (FxInterrupt *)FxObjectHandleAlloc(
                         FxDriverGlobals,
                         ExDefaultNonPagedPoolType,
                         0x1C8uLL,
                         0,
                         Attributes,
                         0,
                         FxObjectTypeExternal);
  if ( v10 )
  {
    FxInterrupt::FxInterrupt(v10, FxDriverGlobals);
    v12 = v11;
  }
  else
  {
    v12 = 0LL;
  }
  if ( v12 )
  {
    v13 = Device;
    if ( Parent )
      v13 = Parent;
    WakeInterruptMachine = FxInterrupt::Initialize(v12, Device, v13, Configuration);
    if ( WakeInterruptMachine >= 0 )
    {
      v15 = FxObject::Commit(v12, (_FX_DRIVER_GLOBALS *)Attributes, 0LL, v13, 1u);
      WakeInterruptMachine = v15;
      if ( v15 < 0 )
      {
        WPP_IFR_SF_d(FxDriverGlobals, 2u, 0xCu, 0x11u, WPP_InterruptObject_cpp_Traceguids, v15);
      }
      else
      {
        *Interrupt = v12;
        if ( Configuration->CanWakeDevice )
          WakeInterruptMachine = FxInterrupt::CreateWakeInterruptMachine(v12);
        if ( WakeInterruptMachine >= 0 )
          return (unsigned int)WakeInterruptMachine;
      }
    }
    FxObject::DeleteFromFailedCreate(v12);
    return (unsigned int)WakeInterruptMachine;
  }
  WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0xCu, 0x10u, WPP_InterruptObject_cpp_Traceguids, Device, -1073741670);
  return 3221225626LL;
}
