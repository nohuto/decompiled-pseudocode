/*
 * XREFs of ?Add@?$CMap@PEAVCManipulation@@PEAVCInteraction@@V?$CMapEqualHelper@PEAVCManipulation@@PEAVCInteraction@@@@@@QEAAHAEBQEAVCManipulation@@AEBQEAVCInteraction@@@Z @ 0x18016BF80
 * Callers:
 *     ?ProcessSetManipulations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS@@PEBXI@Z @ 0x18012C7B4 (-ProcessSetManipulations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRA.c)
 * Callees:
 *     ?ReallocHeap@@YAPEAXPEAX_K@Z @ 0x1800C4738 (-ReallocHeap@@YAPEAXPEAX_K@Z.c)
 */

__int64 __fastcall CMap<CManipulation *,CInteraction *,CMapEqualHelper<CManipulation *,CInteraction *>>::Add(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  LPVOID v6; // rax
  void *v8; // rcx
  LPVOID v9; // rax
  __int64 v10; // r8
  _QWORD *v11; // rdx
  _QWORD *v12; // rdx

  v6 = ReallocHeap(*(void **)a1, 8LL * (*(_DWORD *)(a1 + 16) + 1));
  if ( !v6 )
    return 0LL;
  v8 = *(void **)(a1 + 8);
  *(_QWORD *)a1 = v6;
  v9 = ReallocHeap(v8, 8LL * (*(_DWORD *)(a1 + 16) + 1));
  if ( !v9 )
    return 0LL;
  v10 = *(int *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = v9;
  v11 = (_QWORD *)(*(_QWORD *)a1 + 8 * v10);
  if ( v11 )
    *v11 = *a2;
  v12 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v10);
  if ( v12 )
    *v12 = *a3;
  ++*(_DWORD *)(a1 + 16);
  return 1LL;
}
