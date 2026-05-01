/*
 * XREFs of ??$_MergeThem@VCCompareRecoveredWindows@@@?$CTSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardCompareHelper@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardMergeHelper@UENUMERATED_WINDOW@@@@@@QEAAXAEBVCCompareRecoveredWindows@@_K1@Z @ 0x180112EB4
 * Callers:
 *     ??$_MergeSort@VCCompareRecoveredWindows@@@?$CTSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardCompareHelper@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardMergeHelper@UENUMERATED_WINDOW@@@@@@QEAAXAEBVCCompareRecoveredWindows@@_K1@Z @ 0x180112DDC (--$_MergeSort@VCCompareRecoveredWindows@@@-$CTSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V-$CTPo.c)
 * Callees:
 *     memcpy_0 @ 0x1800A2789 (memcpy_0.c)
 *     ?Compare@CCompareRecoveredWindows@@QEBAHAEBUENUMERATED_WINDOW@@0@Z @ 0x180112FDC (-Compare@CCompareRecoveredWindows@@QEBAHAEBUENUMERATED_WINDOW@@0@Z.c)
 */

char *__fastcall CTSimpleArray<ENUMERATED_WINDOW,4294967294,CTPolicyCoTaskMem<ENUMERATED_WINDOW>,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>,CSimpleArrayStandardMergeHelper<ENUMERATED_WINDOW>>::_MergeThem<CCompareRecoveredWindows>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v4; // rdi
  char *v6; // r14
  size_t v7; // rbx
  char *v8; // rbp
  char *v9; // r13
  CCompareRecoveredWindows *v10; // rcx
  char v11; // di
  __int64 v12; // rsi
  char *v13; // rbx
  char *v14; // r12
  char *result; // rax
  char *v16; // [rsp+70h] [rbp+8h]
  char *v17; // [rsp+78h] [rbp+10h]
  CCompareRecoveredWindows *v18; // [rsp+80h] [rbp+18h]

  v4 = a4 >> 1;
  v6 = (char *)(*(_QWORD *)a1 + 16 * a3);
  v7 = 16 * (a4 >> 1);
  v16 = (char *)(a4 >> 1);
  memcpy_0(*(void **)(a1 + 16), v6, v7);
  v17 = 0LL;
  v8 = &v6[v7];
  v9 = (char *)v4;
  v10 = 0LL;
  v11 = 0;
  v12 = 0LL;
  do
  {
    v13 = (char *)v10 + 1;
    v18 = (CCompareRecoveredWindows *)((char *)v10 + 1);
    v14 = &v6[16 * (_QWORD)v10];
    if ( (int)CCompareRecoveredWindows::Compare(
                v10,
                (const struct ENUMERATED_WINDOW *)(v12 + *(_QWORD *)(a1 + 16)),
                (const struct ENUMERATED_WINDOW *)v8) <= 0 )
    {
      memmove(v14, (const void *)(v12 + *(_QWORD *)(a1 + 16)), 0x10uLL);
      result = v17 + 1;
      v12 += 16LL;
      v17 = result;
      if ( result == v16 )
        v11 = 1;
    }
    else
    {
      memmove(v14, v8, 0x10uLL);
      result = (char *)a4;
      ++v9;
      v8 += 16;
      if ( v9 == (char *)a4 )
      {
        result = (char *)memcpy_0(
                           &v6[16 * (_QWORD)v13],
                           (const void *)(v12 + *(_QWORD *)(a1 + 16)),
                           16 * (a4 - (_QWORD)v13));
        v11 = 1;
      }
    }
    v10 = v18;
  }
  while ( !v11 );
  return result;
}
