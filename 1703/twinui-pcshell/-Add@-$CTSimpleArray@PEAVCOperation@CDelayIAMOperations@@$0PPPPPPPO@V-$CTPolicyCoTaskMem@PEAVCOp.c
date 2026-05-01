/*
 * XREFs of ?Add@?$CTSimpleArray@PEAVCOperation@CDelayIAMOperations@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAVCOperation@CDelayIAMOperations@@@@V?$CSimpleArrayStandardCompareHelper@PEAVCOperation@CDelayIAMOperations@@@@V?$CSimpleArrayStandardMergeHelper@PEAVCOperation@CDelayIAMOperations@@@@@@QEAAJAEBQEAVCOperation@CDelayIAMOperations@@PEA_K@Z @ 0x18001A0F8
 * Callers:
 *     ?SetForegroundWindowSafe@CApplicationManager@@UEAAXPEAUHWND__@@@Z @ 0x18000D360 (-SetForegroundWindowSafe@CApplicationManager@@UEAAXPEAUHWND__@@@Z.c)
 *     ?AddDelayedOperationInternal@CApplicationManager@@UEAAJPEAUIAsyncCallback@@W4DELAY_OPERATION_TYPE@@@Z @ 0x18000D7B0 (-AddDelayedOperationInternal@CApplicationManager@@UEAAJPEAUIAsyncCallback@@W4DELAY_OPERATION_TYP.c)
 *     ?DisplaySettingsChange@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18000F3C0 (-DisplaySettingsChange@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISP.c)
 *     ?AsyncInvokeWithApplicationViewSerialization@CApplicationManager@@UEAAJPEAUIAsyncCallback@@@Z @ 0x18000FA40 (-AsyncInvokeWithApplicationViewSerialization@CApplicationManager@@UEAAJPEAUIAsyncCallback@@@Z.c)
 *     ?_WindowServiceAvailabilityChanged@CApplicationManager@@AEAAXPEAUHWND__@@AEBU_GUID@@H@Z @ 0x180015800 (-_WindowServiceAvailabilityChanged@CApplicationManager@@AEAAXPEAUHWND__@@AEBU_GUID@@H@Z.c)
 *     CDelayIAMOperations::AddOperation__lambda_9f5e0378c1f80d1f3850aec2e7057c94___ @ 0x180017ED8 (CDelayIAMOperations--AddOperation__lambda_9f5e0378c1f80d1f3850aec2e7057c94___.c)
 *     CDelayIAMOperations::AddOperation__lambda_bb299bb733d931796faa9380238be063___ @ 0x1800185B8 (CDelayIAMOperations--AddOperation__lambda_bb299bb733d931796faa9380238be063___.c)
 *     CDelayIAMOperations::AddOperation__lambda_af154e0da4f5cefd6500f7ba4b7c8077___ @ 0x180018E90 (CDelayIAMOperations--AddOperation__lambda_af154e0da4f5cefd6500f7ba4b7c8077___.c)
 *     CDelayIAMOperations::AddOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___ @ 0x180018FA8 (CDelayIAMOperations--AddOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___.c)
 * Callees:
 *     ?Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z @ 0x180023BE8 (-Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z.c)
 */

__int64 __fastcall CTSimpleArray<CDelayIAMOperations::COperation *,4294967294,CTPolicyCoTaskMem<CDelayIAMOperations::COperation *>,CSimpleArrayStandardCompareHelper<CDelayIAMOperations::COperation *>,CSimpleArrayStandardMergeHelper<CDelayIAMOperations::COperation *>>::Add(
        __int64 a1,
        _QWORD *a2,
        void *a3)
{
  __int64 v3; // r9
  unsigned __int64 v5; // rcx
  int v6; // r8d
  unsigned __int64 v8; // r9
  __int64 v9; // r10
  unsigned __int64 v10; // rdi
  _QWORD *v11; // r9
  void *v13; // [rsp+50h] [rbp+18h] BYREF

  v13 = a3;
  v3 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(a1 + 24);
  v6 = 0;
  if ( v3 != v5 )
  {
LABEL_18:
    v11 = (_QWORD *)(*(_QWORD *)a1 + 8 * (*(_QWORD *)(a1 + 8))++);
    if ( v11 )
      *v11 = *a2;
    return (unsigned int)v6;
  }
  v8 = v3 + 1;
  v6 = -2147024774;
  if ( v8 > 0xFFFFFFFE || (v6 = 0, v8 <= v5) )
  {
LABEL_17:
    if ( v6 < 0 )
      return (unsigned int)v6;
    goto LABEL_18;
  }
  v9 = 2 * v5;
  if ( !is_mul_ok(v5, 2uLL) )
  {
    v9 = -1LL;
    v6 = -2147024362;
  }
  if ( v6 >= 0 )
  {
    v10 = v5 + 4096;
    if ( v9 - v5 <= 0x1000 )
      v10 = v9;
    if ( v8 > v10 )
      v10 = v8;
    if ( v10 > 0xFFFFFFFE )
      v10 = 4294967294LL;
    v13 = 0LL;
    if ( is_mul_ok(v10, 8uLL) )
    {
      v6 = CTCoAllocPolicy::Realloc(&v13, (v10 * (unsigned __int128)8uLL) >> 64, *(void **)a1, 8 * v10, &v13);
      if ( v6 >= 0 )
      {
        *(_QWORD *)a1 = v13;
        *(_QWORD *)(a1 + 24) = v10;
      }
    }
    else
    {
      v6 = -2147024362;
    }
    goto LABEL_17;
  }
  return (unsigned int)v6;
}
