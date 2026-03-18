/*
 * XREFs of ?ChangeVideoMemoryReservation@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_CHANGEVIDEOMMEMORYRESERVATION@@@Z @ 0x1C0158BDC
 * Callers:
 *     DxgkChangeVideoMemoryReservationInternal @ 0x1C016BBEC (DxgkChangeVideoMemoryReservationInternal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?VmBusSendChangeVideoMemoryReservation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IW4_D3DKMT_MEMORY_SEGMENT_GROUP@@_K@Z @ 0x1C0181A5C (-VmBusSendChangeVideoMemoryReservation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IW4_D3DK.c)
 */

__int64 __fastcall ADAPTER_RENDER::ChangeVideoMemoryReservation(
        ADAPTER_RENDER *this,
        struct DXGPROCESS *a2,
        const struct _D3DKMT_CHANGEVIDEOMMEMORYRESERVATION *a3)
{
  __int64 v3; // rax
  __int64 v5; // rdx
  __int64 v7; // r11
  __int64 v8; // r9
  __int64 v9; // rcx
  UINT64 Reservation; // rbx
  D3DKMT_MEMORY_SEGMENT_GROUP MemorySegmentGroup; // edi
  __int64 PhysicalAdapterIndex; // r8

  v3 = *((_QWORD *)this + 2);
  v5 = 0LL;
  if ( *(_BYTE *)(v3 + 185) )
    return DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendChangeVideoMemoryReservation(
             (DXG_GUEST_VIRTUALGPU_VMBUS *)(v3 + 4080),
             a2,
             a3->PhysicalAdapterIndex,
             a3->MemorySegmentGroup,
             a3->Reservation);
  v7 = *((_QWORD *)this + 69);
  v8 = *((_QWORD *)this + 68);
  v9 = *((_QWORD *)a2 + 9);
  Reservation = a3->Reservation;
  MemorySegmentGroup = a3->MemorySegmentGroup;
  PhysicalAdapterIndex = a3->PhysicalAdapterIndex;
  if ( v9 )
    v5 = *(_QWORD *)(v9 + 8LL * (unsigned int)(*(_DWORD *)v8 - 1));
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, UINT64))(*(_QWORD *)(v8 + 8) + 1048LL))(
           v7,
           v5,
           PhysicalAdapterIndex,
           (unsigned int)MemorySegmentGroup,
           Reservation);
}
