/*
 * XREFs of ?ChangeVideoMemoryReservation@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_CHANGEVIDEOMMEMORYRESERVATION@@@Z @ 0x1C017349C
 * Callers:
 *     DxgkChangeVideoMemoryReservation @ 0x1C017F8F0 (DxgkChangeVideoMemoryReservation.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::ChangeVideoMemoryReservation(
        ADAPTER_RENDER *this,
        struct DXGPROCESS *a2,
        const struct _D3DKMT_CHANGEVIDEOMMEMORYRESERVATION *a3)
{
  __int64 v3; // r10
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // rdx
  UINT64 Reservation; // r11
  D3DKMT_MEMORY_SEGMENT_GROUP MemorySegmentGroup; // ebx
  __int64 PhysicalAdapterIndex; // r8

  v3 = *((_QWORD *)this + 55);
  v4 = *((_QWORD *)this + 54);
  v5 = *((_QWORD *)a2 + 8);
  v6 = 0LL;
  Reservation = a3->Reservation;
  MemorySegmentGroup = a3->MemorySegmentGroup;
  PhysicalAdapterIndex = a3->PhysicalAdapterIndex;
  if ( v5 )
    v6 = *(_QWORD *)(v5 + 8LL * (unsigned int)(*(_DWORD *)v4 - 1));
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, UINT64))(*(_QWORD *)(v4 + 8) + 1032LL))(
           v3,
           v6,
           PhysicalAdapterIndex,
           (unsigned int)MemorySegmentGroup,
           Reservation);
}
