/*
 * XREFs of ?_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1800760F0
 * Callers:
 *     ?AddWin32ApplicationView@CApplicationViewManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUIApplicationView@@@Z @ 0x180075BF0 (-AddWin32ApplicationView@CApplicationViewManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUIAppli.c)
 *     ?AddWinRTApplicationView@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x180075D70 (-AddWinRTApplicationView@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@@Z.c)
 *     ?AddApplicationView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x180075FF0 (-AddApplicationView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800764A0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ?Add@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@@@QEAAJ$$QEAV?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@PEA_K@Z @ 0x18007752C (-Add@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@ULightweightProperty@LightweightPropertySet@.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewManager::_AddApplicationView(
        CApplicationViewManager *this,
        struct IApplicationView *a2)
{
  int v4; // edi
  struct IApplicationView *v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 8LL))(a2);
  v4 = CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>>::Add(
         (char *)this + 528,
         &v6);
  if ( v6 )
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v4 >= 0 )
    CApplicationViewManager::RaiseApplicationViewChanged((char *)this + 144, a2, 0LL);
  return (unsigned int)v4;
}
