/*
 * XREFs of ?Add@?$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardCompareHelper@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardMergeHelper@UPendingViewData@ViewEventDispatcher@@@@@@QEAAJ$$QEAUPendingViewData@ViewEventDispatcher@@PEA_K@Z @ 0x18012801C
 * Callers:
 *     ?ViewCreated@ViewEventDispatcher@@QEAAXIPEAUIUnknown@@@Z @ 0x18011DEC8 (-ViewCreated@ViewEventDispatcher@@QEAAXIPEAUIUnknown@@@Z.c)
 *     ?_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z @ 0x180122D48 (-_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z.c)
 * Callees:
 *     ?Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z @ 0x180024508 (-Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z.c)
 */

__int64 __fastcall CTSimpleArray<ViewEventDispatcher::PendingViewData,4294967294,CTPolicyCoTaskMem<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardCompareHelper<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardMergeHelper<ViewEventDispatcher::PendingViewData>>::Add(
        __int64 a1,
        __int64 a2,
        void *a3)
{
  __int64 v3; // r9
  unsigned __int64 v5; // rcx
  int v6; // r8d
  unsigned __int64 v8; // r9
  __int64 v9; // r10
  unsigned __int64 v10; // rsi
  __int64 v11; // rdx
  _QWORD *v12; // r9
  void *v14; // [rsp+50h] [rbp+18h] BYREF

  v14 = a3;
  v3 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(a1 + 24);
  v6 = 0;
  if ( v3 != v5 )
  {
LABEL_18:
    ++*(_QWORD *)(a1 + 8);
    v11 = *(_QWORD *)a1 + 8 * (3LL * *(_QWORD *)(a1 + 8) - 3);
    if ( v11 )
    {
      *(_DWORD *)v11 = *(_DWORD *)a2;
      v12 = (_QWORD *)(a2 + 8);
      *(_QWORD *)(v11 + 8) = 0LL;
      if ( v11 + 8 != a2 + 8 )
      {
        *(_QWORD *)(v11 + 8) = *v12;
        *v12 = 0LL;
      }
      *(_QWORD *)(v11 + 16) = *(_QWORD *)(a2 + 16);
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
    v14 = 0LL;
    if ( is_mul_ok(v10, 0x18uLL) )
    {
      v6 = CTCoAllocPolicy::Realloc(
             (IMalloc *)&v14,
             (v10 * (unsigned __int128)0x18uLL) >> 64,
             *(void **)a1,
             24 * v10,
             &v14);
      if ( v6 >= 0 )
      {
        *(_QWORD *)a1 = v14;
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
