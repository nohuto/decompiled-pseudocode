/*
 * XREFs of ?RemoveRange@?$CMap@IUTargetingInfo@@V?$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAHHH@Z @ 0x1801A2B88
 * Callers:
 *     ?RemoveKey@?$CMap@IUTargetingInfo@@V?$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAHAEBI@Z @ 0x1801A2B38 (-RemoveKey@-$CMap@IUTargetingInfo@@V-$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAHAEBI@Z.c)
 *     ?SetLastPointerTarget@CManipulationContext@@UEAAJIPEAUTargetingInfo@@@Z @ 0x1801A3D70 (-SetLastPointerTarget@CManipulationContext@@UEAAJIPEAUTargetingInfo@@@Z.c)
 * Callees:
 *     ?ReallocHeap@@YAPEAXPEAX_K@Z @ 0x1800B5AB4 (-ReallocHeap@@YAPEAXPEAX_K@Z.c)
 *     ??_GTargetingInfo@@QEAAPEAXI@Z @ 0x1801A10DC (--_GTargetingInfo@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CMap<unsigned int,TargetingInfo,CMapEqualHelper<unsigned int,TargetingInfo>>::RemoveRange(
        __int64 a1,
        int a2)
{
  __int64 v2; // rsi
  __int64 v4; // r14
  int v5; // ecx
  LPVOID v6; // rax
  LPVOID v7; // rax

  v2 = a2;
  if ( a2 < 0 || a2 + 1 > *(_DWORD *)(a1 + 16) )
    return 0LL;
  v4 = 16LL * a2;
  TargetingInfo::`scalar deleting destructor'((TargetingInfo *)(v4 + *(_QWORD *)(a1 + 8)));
  v5 = *(_DWORD *)(a1 + 16);
  if ( (_DWORD)v2 + 1 != v5 )
  {
    memmove((void *)(*(_QWORD *)a1 + 4 * v2), (const void *)(*(_QWORD *)a1 + 4 * (v2 + 1)), 4LL * (v5 - (int)v2 - 1));
    memmove(
      (void *)(v4 + *(_QWORD *)(a1 + 8)),
      (const void *)(*(_QWORD *)(a1 + 8) + 16 * (v2 + 1)),
      16LL * (*(_DWORD *)(a1 + 16) - (int)v2 - 1));
  }
  v6 = ReallocHeap(*(void **)a1, 4LL * (*(_DWORD *)(a1 + 16) - 1));
  if ( v6 )
    *(_QWORD *)a1 = v6;
  v7 = ReallocHeap(*(void **)(a1 + 8), 16LL * (*(_DWORD *)(a1 + 16) - 1));
  if ( v7 )
    *(_QWORD *)(a1 + 8) = v7;
  --*(_DWORD *)(a1 + 16);
  return 1LL;
}
