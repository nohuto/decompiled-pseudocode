/*
 * XREFs of ?RemoveAll@?$CTSimpleArray@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x180050280
 * Callers:
 *     ??_ECApplicationFrameService@@UEAAPEAXI@Z @ 0x18004D840 (--_ECApplicationFrameService@@UEAAPEAXI@Z.c)
 *     ??1?$CCoSimpleArray@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@@@QEAA@XZ @ 0x18004D994 (--1-$CCoSimpleArray@V-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V-$CSimpleAr.c)
 *     ?EndFrameRecovery@CApplicationFrameService@@UEAAXXZ @ 0x18004DEE0 (-EndFrameRecovery@CApplicationFrameService@@UEAAXXZ.c)
 *     ?_HandleFrameManagerCrash@CApplicationFrameService@@AEAAXXZ @ 0x18004FB84 (-_HandleFrameManagerCrash@CApplicationFrameService@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTSimpleArray<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>>::RemoveAll(
        __int64 a1)
{
  unsigned __int64 i; // rdi
  volatile signed __int32 *v3; // rcx

  for ( i = 0LL; i < *(_QWORD *)(a1 + 8); ++i )
  {
    v3 = *(volatile signed __int32 **)(*(_QWORD *)a1 + 8 * i);
    if ( v3 )
    {
      *(_QWORD *)(*(_QWORD *)a1 + 8 * i) = 0LL;
      if ( _InterlockedExchangeAdd(v3 + 13, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v3 + 256LL))(v3, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
  }
  CoTaskMemFree(*(LPVOID *)a1);
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
}
