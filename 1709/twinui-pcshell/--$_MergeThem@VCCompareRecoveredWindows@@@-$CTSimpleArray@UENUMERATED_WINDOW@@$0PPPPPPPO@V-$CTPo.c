/*
 * XREFs of ??$_MergeThem@VCCompareRecoveredWindows@@@?$CTSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardCompareHelper@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardMergeHelper@UENUMERATED_WINDOW@@@@@@QEAAXAEBVCCompareRecoveredWindows@@_K1@Z @ 0x18002CEF4
 * Callers:
 *     ??$_MergeSort@VCCompareRecoveredWindows@@@?$CTSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardCompareHelper@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardMergeHelper@UENUMERATED_WINDOW@@@@@@QEAAXAEBVCCompareRecoveredWindows@@_K1@Z @ 0x18002CE1C (--$_MergeSort@VCCompareRecoveredWindows@@@-$CTSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V-$CTPo.c)
 * Callees:
 *     ?Compare@CCompareRecoveredWindows@@QEBAHAEBUENUMERATED_WINDOW@@0@Z @ 0x18002CB1C (-Compare@CCompareRecoveredWindows@@QEBAHAEBUENUMERATED_WINDOW@@0@Z.c)
 *     memcpy_0 @ 0x1801E5CBD (memcpy_0.c)
 */

void *__fastcall CTSimpleArray<ENUMERATED_WINDOW,4294967294,CTPolicyCoTaskMem<ENUMERATED_WINDOW>,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>,CSimpleArrayStandardMergeHelper<ENUMERATED_WINDOW>>::_MergeThem<CCompareRecoveredWindows>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v4; // rsi
  char *v6; // rdi
  size_t v7; // rbx
  __int64 v8; // rcx
  char *v9; // r12
  __int64 v10; // r13
  char v11; // si
  __int64 v12; // rbp
  __int64 v13; // r14
  char *v14; // rbx
  void *result; // rax
  unsigned __int64 v16; // [rsp+68h] [rbp+10h]

  v4 = a4 >> 1;
  v6 = (char *)(*(_QWORD *)a1 + 16 * a3);
  v7 = 16 * (a4 >> 1);
  v16 = a4 >> 1;
  memcpy_0(*(void **)(a1 + 16), v6, v7);
  v9 = (char *)v4;
  v10 = 0LL;
  v11 = 0;
  v12 = 0LL;
  v13 = 0LL;
  v14 = &v6[v7];
  do
  {
    if ( (int)CCompareRecoveredWindows::Compare(
                (CCompareRecoveredWindows *)v8,
                (const struct ENUMERATED_WINDOW *)(v13 + *(_QWORD *)(a1 + 16)),
                (const struct ENUMERATED_WINDOW *)v14) <= 0 )
    {
      result = memmove(v6, (const void *)(v13 + *(_QWORD *)(a1 + 16)), 0x10uLL);
      v8 = 1LL;
      ++v12;
      ++v10;
      v6 += 16;
      v13 += 16LL;
      if ( v10 == v16 )
        v11 = 1;
    }
    else
    {
      memmove(v6, v14, 0x10uLL);
      v6 += 16;
      ++v12;
      ++v9;
      result = (void *)a4;
      v14 += 16;
      if ( v9 == (char *)a4 )
      {
        result = memcpy_0(v6, (const void *)(v13 + *(_QWORD *)(a1 + 16)), 16 * (a4 - v12));
        v11 = 1;
      }
    }
  }
  while ( !v11 );
  return result;
}
