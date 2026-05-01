/*
 * XREFs of ?PositionNewCreatedApp@?$CActivationBasedCollection@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@UEAAJAEBV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@Z @ 0x18011CB20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@_K$0PPPPPPPO@V?$CTPolicyCoTaskMem@_K@@V?$CSimpleArrayStandardCompareHelper@_K@@V?$CSimpleArrayStandardMergeHelper@_K@@@@QEAAJ_K0@Z @ 0x18008CC0C (-_EnsureCapacity@-$CTSimpleArray@_K$0PPPPPPPO@V-$CTPolicyCoTaskMem@_K@@V-$CSimpleArrayStandardCo.c)
 */

__int64 __fastcall CActivationBasedCollection<Microsoft::WRL::ComPtr<ITaskWindow>>::PositionNewCreatedApp(
        _QWORD *a1,
        __int64 *a2,
        IMalloc *a3)
{
  _QWORD *v3; // rbx
  __int64 v5; // rdx
  int v6; // edi
  __int64 *v7; // rcx

  v3 = a1 + 1;
  v5 = a1[2];
  v6 = 0;
  if ( v5 != a1[4]
    || (v6 = CTSimpleArray<unsigned __int64,4294967294,CTPolicyCoTaskMem<unsigned __int64>,CSimpleArrayStandardCompareHelper<unsigned __int64>,CSimpleArrayStandardMergeHelper<unsigned __int64>>::_EnsureCapacity(
               (__int64)(a1 + 1),
               v5 + 1,
               a3),
        v6 >= 0) )
  {
    ++v3[1];
    v7 = (__int64 *)(*v3 + 8LL * v3[1] - 8);
    if ( *v3 + 8LL * v3[1] != 8 )
    {
      *v7 = *a2;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v7);
    }
  }
  return (unsigned int)v6;
}
