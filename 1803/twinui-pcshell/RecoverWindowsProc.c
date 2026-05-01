/*
 * XREFs of RecoverWindowsProc @ 0x1801131C0
 * Callers:
 *     <none>
 * Callees:
 *     ShouldWindowBeConsideredForRecovery @ 0x180113220 (ShouldWindowBeConsideredForRecovery.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutItem@GridLayoutFactory@@@@@@QEAAJ_K0@Z @ 0x1801C541C (-_EnsureCapacity@-$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 */

__int64 __fastcall RecoverWindowsProc(HWND a1, _QWORD *a2)
{
  __int64 v3; // rdx
  _OWORD *v4; // r8
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  if ( (unsigned __int8)ShouldWindowBeConsideredForRecovery(a1, &v6) )
  {
    v3 = a2[1];
    if ( v3 != a2[3]
      || (int)CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::_EnsureCapacity(
                a2,
                v3 + 1) >= 0 )
    {
      ++a2[1];
      v4 = (_OWORD *)(16LL * a2[1] + *a2 - 16LL);
      if ( v4 )
        *v4 = v6;
    }
  }
  return 1LL;
}
