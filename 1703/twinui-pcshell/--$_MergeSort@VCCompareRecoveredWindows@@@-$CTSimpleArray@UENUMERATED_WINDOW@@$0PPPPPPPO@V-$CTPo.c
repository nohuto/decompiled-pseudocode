/*
 * XREFs of ??$_MergeSort@VCCompareRecoveredWindows@@@?$CTSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardCompareHelper@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardMergeHelper@UENUMERATED_WINDOW@@@@@@QEAAXAEBVCCompareRecoveredWindows@@_K1@Z @ 0x18002B644
 * Callers:
 *     ?RecoverApplicationWindows@@YAJPEAUIImmersiveShellHookNotification@@@Z @ 0x18002B3D4 (-RecoverApplicationWindows@@YAJPEAUIImmersiveShellHookNotification@@@Z.c)
 *     ??$_MergeSort@VCCompareRecoveredWindows@@@?$CTSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardCompareHelper@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardMergeHelper@UENUMERATED_WINDOW@@@@@@QEAAXAEBVCCompareRecoveredWindows@@_K1@Z @ 0x18002B644 (--$_MergeSort@VCCompareRecoveredWindows@@@-$CTSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V-$CTPo.c)
 * Callees:
 *     ?Compare@CCompareRecoveredWindows@@QEBAHAEBUENUMERATED_WINDOW@@0@Z @ 0x18002B33C (-Compare@CCompareRecoveredWindows@@QEBAHAEBUENUMERATED_WINDOW@@0@Z.c)
 *     ??$_MergeSort@VCCompareRecoveredWindows@@@?$CTSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardCompareHelper@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardMergeHelper@UENUMERATED_WINDOW@@@@@@QEAAXAEBVCCompareRecoveredWindows@@_K1@Z @ 0x18002B644 (--$_MergeSort@VCCompareRecoveredWindows@@@-$CTSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V-$CTPo.c)
 *     ??$_MergeThem@VCCompareRecoveredWindows@@@?$CTSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardCompareHelper@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardMergeHelper@UENUMERATED_WINDOW@@@@@@QEAAXAEBVCCompareRecoveredWindows@@_K1@Z @ 0x18002B71C (--$_MergeThem@VCCompareRecoveredWindows@@@-$CTSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V-$CTPo.c)
 */

void *__fastcall CTSimpleArray<ENUMERATED_WINDOW,4294967294,CTPolicyCoTaskMem<ENUMERATED_WINDOW>,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>,CSimpleArrayStandardMergeHelper<ENUMERATED_WINDOW>>::_MergeSort<CCompareRecoveredWindows>(
        void **a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4)
{
  void *result; // rax
  unsigned __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rdi

  result = (void *)(a4 - 1);
  if ( a4 != 1 )
  {
    if ( a4 == 2 )
    {
      v10 = 16 * a3;
      result = (void *)CCompareRecoveredWindows::Compare(
                         (CCompareRecoveredWindows *)a1,
                         (const struct ENUMERATED_WINDOW *)((char *)*a1 + v10),
                         (const struct ENUMERATED_WINDOW *)((char *)*a1 + v10 + 16));
      if ( (int)result > 0 )
      {
        memmove(a1[2], (char *)*a1 + v10, 0x10uLL);
        memmove((char *)*a1 + v10, (char *)*a1 + v10 + 16, 0x10uLL);
        return memmove((char *)*a1 + v10 + 16, a1[2], 0x10uLL);
      }
    }
    else
    {
      v8 = a4 >> 1;
      CTSimpleArray<ENUMERATED_WINDOW,4294967294,CTPolicyCoTaskMem<ENUMERATED_WINDOW>,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>,CSimpleArrayStandardMergeHelper<ENUMERATED_WINDOW>>::_MergeSort<CCompareRecoveredWindows>(
        a1,
        a2,
        a3,
        a4 >> 1);
      CTSimpleArray<ENUMERATED_WINDOW,4294967294,CTPolicyCoTaskMem<ENUMERATED_WINDOW>,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>,CSimpleArrayStandardMergeHelper<ENUMERATED_WINDOW>>::_MergeSort<CCompareRecoveredWindows>(
        a1,
        a2,
        v8 + a3,
        a4 - v8);
      return (void *)CTSimpleArray<ENUMERATED_WINDOW,4294967294,CTPolicyCoTaskMem<ENUMERATED_WINDOW>,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>,CSimpleArrayStandardMergeHelper<ENUMERATED_WINDOW>>::_MergeThem<CCompareRecoveredWindows>(
                       a1,
                       v9,
                       a3,
                       a4);
    }
  }
  return result;
}
