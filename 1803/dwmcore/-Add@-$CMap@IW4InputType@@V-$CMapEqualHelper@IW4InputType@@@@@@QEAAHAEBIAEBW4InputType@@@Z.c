/*
 * XREFs of ?Add@?$CMap@IW4InputType@@V?$CMapEqualHelper@IW4InputType@@@@@@QEAAHAEBIAEBW4InputType@@@Z @ 0x1801CE5B4
 * Callers:
 *     ?OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IW4InputType@@_N22@Z @ 0x1801CF274 (-OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IW4InputType@@_N22@Z.c)
 * Callees:
 *     ?ReallocHeap@@YAPEAXPEAX_K@Z @ 0x1800D5F20 (-ReallocHeap@@YAPEAXPEAX_K@Z.c)
 */

__int64 __fastcall CMap<unsigned int,enum InputType,CMapEqualHelper<unsigned int,enum InputType>>::Add(
        __int64 a1,
        _DWORD *a2,
        _DWORD *a3)
{
  LPVOID v6; // rax
  void *v8; // rcx
  char *v9; // rax
  char *v10; // rcx
  __int64 v11; // rdx
  _DWORD *v12; // r8
  char *v13; // rdx

  v6 = ReallocHeap(*(void **)a1, 4LL * (*(_DWORD *)(a1 + 16) + 1));
  if ( !v6 )
    return 0LL;
  v8 = *(void **)(a1 + 8);
  *(_QWORD *)a1 = v6;
  v9 = (char *)ReallocHeap(v8, 4LL * (*(_DWORD *)(a1 + 16) + 1));
  v10 = v9;
  if ( !v9 )
    return 0LL;
  v11 = *(int *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = v9;
  v12 = (_DWORD *)(*(_QWORD *)a1 + 4 * v11);
  if ( v12 )
  {
    *v12 = *a2;
    v10 = *(char **)(a1 + 8);
  }
  v13 = &v10[4 * v11];
  if ( v13 )
    *(_DWORD *)v13 = *a3;
  ++*(_DWORD *)(a1 + 16);
  return 1LL;
}
