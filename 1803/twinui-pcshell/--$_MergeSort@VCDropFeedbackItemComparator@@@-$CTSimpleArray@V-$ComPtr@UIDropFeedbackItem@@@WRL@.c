/*
 * XREFs of ??$_MergeSort@VCDropFeedbackItemComparator@@@?$CTSimpleArray@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@@@QEAAXAEBVCDropFeedbackItemComparator@@_K1@Z @ 0x1802ECD64
 * Callers:
 *     ??$_MergeSort@VCDropFeedbackItemComparator@@@?$CTSimpleArray@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@@@QEAAXAEBVCDropFeedbackItemComparator@@_K1@Z @ 0x1802ECD64 (--$_MergeSort@VCDropFeedbackItemComparator@@@-$CTSimpleArray@V-$ComPtr@UIDropFeedbackItem@@@WRL@.c)
 *     ?Sort@CDropFeedbackList@@UEAAJXZ @ 0x1802ED9B0 (-Sort@CDropFeedbackList@@UEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_MergeSort@VCDropFeedbackItemComparator@@@?$CTSimpleArray@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@@@QEAAXAEBVCDropFeedbackItemComparator@@_K1@Z @ 0x1802ECD64 (--$_MergeSort@VCDropFeedbackItemComparator@@@-$CTSimpleArray@V-$ComPtr@UIDropFeedbackItem@@@WRL@.c)
 *     ??$_MergeThem@VCDropFeedbackItemComparator@@@?$CTSimpleArray@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@@@QEAAXAEBVCDropFeedbackItemComparator@@_K1@Z @ 0x1802ECE5C (--$_MergeThem@VCDropFeedbackItemComparator@@@-$CTSimpleArray@V-$ComPtr@UIDropFeedbackItem@@@WRL@.c)
 *     ?Compare@CDropFeedbackItemComparator@@QEBAHV?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@0@Z @ 0x1802ED278 (-Compare@CDropFeedbackItemComparator@@QEBAHV-$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@0@Z.c)
 */

void *__fastcall CTSimpleArray<Microsoft::WRL::ComPtr<IDropFeedbackItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IDropFeedbackItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IDropFeedbackItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IDropFeedbackItem>>>::_MergeSort<CDropFeedbackItemComparator>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4)
{
  void *result; // rax
  unsigned __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  result = (void *)(a4 - 1);
  if ( a4 != 1 )
  {
    if ( a4 == 2 )
    {
      v13 = *(_QWORD *)(*(_QWORD *)a1 + 8 * a3 + 8);
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v13);
      v11[0] = *(_QWORD *)(*(_QWORD *)a1 + 8 * a3);
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v11);
      result = (void *)CDropFeedbackItemComparator::Compare(v10, v11, &v13);
      if ( (int)result > 0 )
      {
        memmove(*(void **)(a1 + 16), (const void *)(*(_QWORD *)a1 + 8 * a3), 8uLL);
        memmove((void *)(*(_QWORD *)a1 + 8 * a3), (const void *)(*(_QWORD *)a1 + 8 * a3 + 8), 8uLL);
        return memmove((void *)(*(_QWORD *)a1 + 8 * (a3 + 1)), *(const void **)(a1 + 16), 8uLL);
      }
    }
    else
    {
      v8 = a4 >> 1;
      CTSimpleArray<Microsoft::WRL::ComPtr<IDropFeedbackItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IDropFeedbackItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IDropFeedbackItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IDropFeedbackItem>>>::_MergeSort<CDropFeedbackItemComparator>(
        a1,
        a2,
        a3,
        a4 >> 1);
      CTSimpleArray<Microsoft::WRL::ComPtr<IDropFeedbackItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IDropFeedbackItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IDropFeedbackItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IDropFeedbackItem>>>::_MergeSort<CDropFeedbackItemComparator>(
        a1,
        a2,
        v8 + a3,
        a4 - v8);
      return (void *)CTSimpleArray<Microsoft::WRL::ComPtr<IDropFeedbackItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IDropFeedbackItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IDropFeedbackItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IDropFeedbackItem>>>::_MergeThem<CDropFeedbackItemComparator>(
                       a1,
                       v9,
                       a3,
                       a4);
    }
  }
  return result;
}
