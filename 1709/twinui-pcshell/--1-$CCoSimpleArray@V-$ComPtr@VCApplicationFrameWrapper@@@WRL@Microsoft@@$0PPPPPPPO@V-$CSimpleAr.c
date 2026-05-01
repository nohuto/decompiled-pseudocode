/*
 * XREFs of ??1?$CCoSimpleArray@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@@@QEAA@XZ @ 0x18004D994
 * Callers:
 *     _CApplicationFrameService::_scalar_deleting_destructor__::_1_::dtor$1 @ 0x1801E8947 (_CApplicationFrameService--_scalar_deleting_destructor__--_1_--dtor$1.c)
 *     _CApplicationFrameService::_scalar_deleting_destructor__::_1_::dtor$2 @ 0x1801E8957 (_CApplicationFrameService--_scalar_deleting_destructor__--_1_--dtor$2.c)
 *     _CApplicationFrameService::EndFrameRecovery_::_1_::dtor$0 @ 0x1801E89EB (_CApplicationFrameService--EndFrameRecovery_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCoSimpleArray<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>>::~CCoSimpleArray<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>>(
        _QWORD *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *a1 )
    return CTSimpleArray<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>>::RemoveAll(a1);
  a1[1] = 0LL;
  a1[3] = 0LL;
  return result;
}
