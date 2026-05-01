/*
 * XREFs of ?Add@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@@@QEAAJ$$QEAV?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@PEA_K@Z @ 0x18007472C
 * Callers:
 *     ?_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1800733BC (-_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?HandleApplicationViewChangeSync@ApplicationViewManagerVisibilityDebouncer@@UEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x180078F50 (-HandleApplicationViewChangeSync@ApplicationViewManagerVisibilityDebouncer@@UEAAXPEAUIApplicatio.c)
 *     ?SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z @ 0x180110490 (-SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z.c)
 *     ?s_PropEnumCallback@LightweightPropertySet@@CAHPEAUHWND__@@PEAGPEAX_K@Z @ 0x180110710 (-s_PropEnumCallback@LightweightPropertySet@@CAHPEAUHWND__@@PEAGPEAX_K@Z.c)
 * Callees:
 *     ?Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z @ 0x180023BE8 (-Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z.c)
 */

__int64 __fastcall CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>>::Add(
        __int64 a1,
        _QWORD *a2,
        void *a3)
{
  __int64 v3; // r9
  unsigned __int64 v5; // rcx
  int v6; // r8d
  unsigned __int64 v8; // r9
  __int64 v9; // r10
  unsigned __int64 v10; // rsi
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
    {
      *v11 = 0LL;
      if ( v11 != a2 )
      {
        *v11 = *a2;
        *a2 = 0LL;
      }
    }
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
      v6 = CTCoAllocPolicy::Realloc((IMalloc *)&v13, (v10 * (unsigned __int128)8uLL) >> 64, *(void **)a1, 8 * v10, &v13);
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
