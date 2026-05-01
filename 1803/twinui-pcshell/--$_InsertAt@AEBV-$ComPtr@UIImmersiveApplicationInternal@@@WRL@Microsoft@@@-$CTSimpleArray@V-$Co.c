/*
 * XREFs of ??$_InsertAt@AEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@?$CTSimpleArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@_K@Z @ 0x1800F84CC
 * Callers:
 *     ?PositionNewActiveApp@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@_K@Z @ 0x18010980C (-PositionNewActiveApp@-$CActivationBasedCollection@V-$ComPtr@UIImmersiveApplicationInternal@@@WR.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@_K$0PPPPPPPO@V?$CTPolicyCoTaskMem@_K@@V?$CSimpleArrayStandardCompareHelper@_K@@V?$CSimpleArrayStandardMergeHelper@_K@@@@QEAAJ_K0@Z @ 0x18008CC0C (-_EnsureCapacity@-$CTSimpleArray@_K$0PPPPPPPO@V-$CTPolicyCoTaskMem@_K@@V-$CSimpleArrayStandardCo.c)
 */

__int64 __fastcall CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::_InsertAt<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal> const &>(
        _QWORD *a1,
        __int64 *a2,
        IMalloc *a3)
{
  int v3; // edi
  IMalloc *v4; // rbp
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // r8
  __int64 *v10; // rcx

  v3 = 0;
  v4 = a3;
  if ( (unsigned __int64)a3 < a1[1] )
    v4 = (IMalloc *)a1[1];
  v8 = (unsigned __int64)&v4->lpVtbl + 1;
  if ( v8 <= a1[3]
    || (v3 = CTSimpleArray<unsigned __int64,4294967294,CTPolicyCoTaskMem<unsigned __int64>,CSimpleArrayStandardCompareHelper<unsigned __int64>,CSimpleArrayStandardMergeHelper<unsigned __int64>>::_EnsureCapacity(
               (__int64)a1,
               v8,
               a3),
        v3 >= 0) )
  {
    v9 = a1[1];
    if ( (unsigned __int64)a3 < v9 )
      memmove((void *)(*a1 + 8LL * (_QWORD)a3 + 8), (const void *)(*a1 + 8LL * (_QWORD)a3), 8 * (v9 - (_QWORD)a3));
    a1[1] = v8;
    if ( v3 >= 0 )
    {
      v10 = (__int64 *)(*a1 + 8LL * (_QWORD)a3);
      if ( v10 )
      {
        *v10 = *a2;
        Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v10);
      }
    }
  }
  return (unsigned int)v3;
}
