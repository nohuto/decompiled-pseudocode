/*
 * XREFs of ?ConsumerQueryBufferInfo@CFlipManager@@QEAAJ_KPEAU_LUID@@PEAPEAX@Z @ 0x1C00501D0
 * Callers:
 *     ?ConsumerQueryBufferInfo@FlipManagerObject@@QEAAJ_KPEAU_LUID@@PEAPEAX@Z @ 0x1C004DE94 (-ConsumerQueryBufferInfo@FlipManagerObject@@QEAAJ_KPEAU_LUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@@@Z @ 0x1C0051364 (-FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@.c)
 *     DxgkGetSharedAllocationObjectType @ 0x1C00D44A0 (DxgkGetSharedAllocationObjectType.c)
 */

NTSTATUS __fastcall CFlipManager::ConsumerQueryBufferInfo(
        CFlipManager *this,
        unsigned __int64 a2,
        struct _LUID *a3,
        void **a4)
{
  __int64 ResourceState; // rdi
  NTSTATUS result; // eax
  __int64 v8; // rbx
  struct _OBJECT_TYPE *ObjectType; // rax

  ResourceState = (__int64)CEndpointResourceStateManager::FindResourceState(
                             this,
                             a2,
                             (struct _LIST_ENTRY *)((char *)this + 88));
  result = ResourceState == 0 ? 0xC000000D : 0;
  if ( ResourceState )
  {
    v8 = *(_QWORD *)(ResourceState + 24);
    ObjectType = (struct _OBJECT_TYPE *)DxgkGetSharedAllocationObjectType(-ResourceState);
    result = ObOpenObjectByPointer(*(PVOID *)(v8 + 48), 0, 0LL, 0xF0000u, ObjectType, 0, a4);
  }
  if ( result >= 0 )
    *a3 = *(struct _LUID *)(*(_QWORD *)(ResourceState + 24) + 64LL);
  return result;
}
