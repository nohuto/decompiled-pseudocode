/*
 * XREFs of ?Add@?$CMap@IKV?$CMapEqualHelper@IK@@@@QEAAHAEBIAEBK@Z @ 0x1801959D8
 * Callers:
 *     ?OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z @ 0x180196C84 (-OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z.c)
 * Callees:
 *     ?ReallocHeap@@YAPEAXPEAX_K@Z @ 0x1800B5AB4 (-ReallocHeap@@YAPEAXPEAX_K@Z.c)
 */

__int64 __fastcall CMap<unsigned int,unsigned long,CMapEqualHelper<unsigned int,unsigned long>>::Add(
        __int64 a1,
        _DWORD *a2,
        _DWORD *a3)
{
  LPVOID v6; // rax
  void *v8; // rcx
  LPVOID v9; // rax
  __int64 v10; // r8
  _DWORD *v11; // rdx
  _DWORD *v12; // rdx

  v6 = ReallocHeap(*(void **)a1, 4LL * (*(_DWORD *)(a1 + 16) + 1));
  if ( !v6 )
    return 0LL;
  v8 = *(void **)(a1 + 8);
  *(_QWORD *)a1 = v6;
  v9 = ReallocHeap(v8, 4LL * (*(_DWORD *)(a1 + 16) + 1));
  if ( !v9 )
    return 0LL;
  v10 = *(int *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = v9;
  v11 = (_DWORD *)(*(_QWORD *)a1 + 4 * v10);
  if ( v11 )
    *v11 = *a2;
  v12 = (_DWORD *)(*(_QWORD *)(a1 + 8) + 4 * v10);
  if ( v12 )
    *v12 = *a3;
  ++*(_DWORD *)(a1 + 16);
  return 1LL;
}
