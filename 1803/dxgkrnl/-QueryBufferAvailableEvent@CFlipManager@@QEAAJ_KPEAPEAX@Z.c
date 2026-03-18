/*
 * XREFs of ?QueryBufferAvailableEvent@CFlipManager@@QEAAJ_KPEAPEAX@Z @ 0x1C0050BC0
 * Callers:
 *     ?QueryBufferAvailableEvent@FlipManagerObject@@QEAAJ_KPEAPEAX@Z @ 0x1C004E06C (-QueryBufferAvailableEvent@FlipManagerObject@@QEAAJ_KPEAPEAX@Z.c)
 * Callees:
 *     ?FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@@@Z @ 0x1C0051364 (-FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@.c)
 */

NTSTATUS __fastcall CFlipManager::QueryBufferAvailableEvent(CFlipManager *this, unsigned __int64 a2, void **a3)
{
  struct CFlipResourceState *ResourceState; // rdx
  void **Handle; // r11
  NTSTATUS result; // eax

  ResourceState = CEndpointResourceStateManager::FindResourceState(this, a2, (struct _LIST_ENTRY *)((char *)this + 56));
  result = ResourceState == 0LL ? 0xC000000D : 0;
  if ( ResourceState )
    return ObOpenObjectByPointer(
             *(PVOID *)(*((_QWORD *)ResourceState + 3) + 56LL),
             0,
             0LL,
             0x1F0001u,
             (POBJECT_TYPE)ExEventObjectType,
             1,
             Handle);
  return result;
}
