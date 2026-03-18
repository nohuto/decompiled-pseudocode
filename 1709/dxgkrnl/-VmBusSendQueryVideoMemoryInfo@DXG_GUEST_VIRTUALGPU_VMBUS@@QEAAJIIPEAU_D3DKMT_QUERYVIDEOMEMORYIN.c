/*
 * XREFs of ?VmBusSendQueryVideoMemoryInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAU_D3DKMT_QUERYVIDEOMEMORYINFO@@@Z @ 0x1C0197A6C
 * Callers:
 *     DxgkQueryVideoMemoryInfo @ 0x1C007CCE0 (DxgkQueryVideoMemoryInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0198920 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryVideoMemoryInfo(
        struct VMBCHANNEL__ **this,
        int a2,
        int a3,
        struct _D3DKMT_QUERYVIDEOMEMORYINFO *a4)
{
  D3DKMT_MEMORY_SEGMENT_GROUP MemorySegmentGroup; // eax
  struct VMBCHANNEL__ *v6; // rcx
  struct _MDL *v8; // [rsp+28h] [rbp-11h]
  unsigned int v9; // [rsp+30h] [rbp-9h] BYREF
  __int64 v10; // [rsp+38h] [rbp-1h] BYREF
  int v11; // [rsp+40h] [rbp+7h]
  int v12; // [rsp+44h] [rbp+Bh]
  int v13; // [rsp+48h] [rbp+Fh]
  int v14; // [rsp+50h] [rbp+17h]
  D3DKMT_MEMORY_SEGMENT_GROUP v15; // [rsp+54h] [rbp+1Bh]
  UINT PhysicalAdapterIndex; // [rsp+58h] [rbp+1Fh]
  _QWORD v17[4]; // [rsp+60h] [rbp+27h] BYREF

  MemorySegmentGroup = a4->MemorySegmentGroup;
  v6 = *this;
  v10 = 0LL;
  v12 = 0;
  v15 = MemorySegmentGroup;
  PhysicalAdapterIndex = a4->PhysicalAdapterIndex;
  v11 = a2;
  v14 = a3;
  v13 = 21;
  v9 = 32;
  VmBusSendSyncMessage(v6, (struct DXGKVMB_COMMAND_BASE *)&v10, 0x28u, v17, &v9, v8);
  if ( v9 < 0x20 )
    return 3221225473LL;
  a4->Budget = v17[0];
  a4->AvailableForReservation = v17[3];
  a4->CurrentReservation = v17[2];
  a4->CurrentUsage = v17[1];
  return 0LL;
}
