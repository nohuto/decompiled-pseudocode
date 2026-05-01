/*
 * XREFs of ??$_FindFirstApplication@VCImmersiveAppFinderByApplication@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByApplication@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x1800F08B0
 * Callers:
 *     ?_SetApplicationPos@CApplicationManager@@AEAAJPEAUIImmersiveApplication@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@W4SET_IMM_APP_POS@@PEAPEAXW4APPLICATION_VIEW_CLOAK_TYPE@@@Z @ 0x1800F167C (-_SetApplicationPos@CApplicationManager@@AEAAJPEAUIImmersiveApplication@@PEBUAPPLICATION_VIEW_DA.c)
 *     ?GetSizeConstraintOverrides@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUtagSIZE@@111@Z @ 0x1801079A0 (-GetSizeConstraintOverrides@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUtagSIZE@@11.c)
 *     ?SetApplicationViewPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewPosition@@W4SET_IMM_APP_POS@@@Z @ 0x18010B390 (-SetApplicationViewPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicatio.c)
 *     ?TerminateApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@W4PLM_TERMINATE_FLAGS@@PEAW4PLM_TASKCOMPLETION_CATEGORY_FLAGS@@@Z @ 0x18010DCF0 (-TerminateApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@W4PLM_TERMINATE_FLAGS.c)
 *     ?_RemoveApplication@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z @ 0x1801113C4 (-_RemoveApplication@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$GetAppPosition@VCImmersiveAppFinderByApplication@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByApplication@@_KPEA_K@Z @ 0x1800F8404 (--$GetAppPosition@VCImmersiveAppFinderByApplication@@@-$CActivationBasedCollection@V-$ComPtr@UII.c)
 */

__int64 __fastcall CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByApplication>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 result; // rax
  __int64 v8; // rsi
  __int64 (__fastcall ***v9)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  if ( a3 )
    *a3 = 0LL;
  result = CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByApplication>(
             a1 + 616,
             a2,
             a3,
             &v10);
  if ( (int)result >= 0 )
  {
    v8 = v10;
    if ( a3 )
    {
      v9 = *(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))(*(_QWORD *)(a1 + 624) + 8 * v10);
      result = (**v9)(v9, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, a3);
    }
    if ( a4 )
      *a4 = v8;
  }
  return result;
}
