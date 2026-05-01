/*
 * XREFs of ?_MakeRoomAt@?$CTSimpleArray@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x1800F8E8C
 * Callers:
 *     ?_InsertWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJPEAUITaskWindow@@_K@Z @ 0x1800F9254 (-_InsertWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJPEAUITaskWindow@@_K@Z.c)
 *     ?PositionNewActiveApp@?$CActivationBasedCollection@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@QEAAJAEBV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@_K@Z @ 0x18011CAAC (-PositionNewActiveApp@-$CActivationBasedCollection@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@QEA.c)
 *     ?AddOrphanedWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z @ 0x18012D174 (-AddOrphanedWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@_K$0PPPPPPPO@V?$CTPolicyCoTaskMem@_K@@V?$CSimpleArrayStandardCompareHelper@_K@@V?$CSimpleArrayStandardMergeHelper@_K@@@@QEAAJ_K0@Z @ 0x18008CC0C (-_EnsureCapacity@-$CTSimpleArray@_K$0PPPPPPPO@V-$CTPolicyCoTaskMem@_K@@V-$CSimpleArrayStandardCo.c)
 */

__int64 __fastcall CTSimpleArray<Microsoft::WRL::ComPtr<ITaskWindow>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<ITaskWindow>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskWindow>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<ITaskWindow>>>::_MakeRoomAt(
        _QWORD *a1,
        unsigned __int64 a2,
        IMalloc *a3)
{
  int v3; // esi
  unsigned __int64 v4; // rbp
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // r8

  v3 = 0;
  v4 = a2;
  if ( a2 < a1[1] )
    v4 = a1[1];
  v7 = v4 + 1;
  if ( v7 <= a1[3]
    || (v3 = CTSimpleArray<unsigned __int64,4294967294,CTPolicyCoTaskMem<unsigned __int64>,CSimpleArrayStandardCompareHelper<unsigned __int64>,CSimpleArrayStandardMergeHelper<unsigned __int64>>::_EnsureCapacity(
               (__int64)a1,
               v7,
               a3),
        v3 >= 0) )
  {
    v8 = a1[1];
    if ( a2 < v8 )
      memmove((void *)(*a1 + 8 * a2 + 8), (const void *)(*a1 + 8 * a2), 8 * (v8 - a2));
    a1[1] = v7;
  }
  return (unsigned int)v3;
}
