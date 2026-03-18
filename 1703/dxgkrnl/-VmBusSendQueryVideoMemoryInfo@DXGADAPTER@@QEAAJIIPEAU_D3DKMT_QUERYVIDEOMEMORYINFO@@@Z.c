/*
 * XREFs of ?VmBusSendQueryVideoMemoryInfo@DXGADAPTER@@QEAAJIIPEAU_D3DKMT_QUERYVIDEOMEMORYINFO@@@Z @ 0x1C0031464
 * Callers:
 *     DxgkQueryVideoMemoryInfo @ 0x1C008AD40 (DxgkQueryVideoMemoryInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0032214 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::VmBusSendQueryVideoMemoryInfo(
        DXGADAPTER *this,
        int a2,
        int a3,
        struct _D3DKMT_QUERYVIDEOMEMORYINFO *a4)
{
  D3DKMT_MEMORY_SEGMENT_GROUP MemorySegmentGroup; // eax
  struct VMBCHANNEL__ *v6; // rcx
  struct _MDL *v8; // [rsp+28h] [rbp-58h]
  unsigned int v9; // [rsp+30h] [rbp-50h] BYREF
  __int64 v10; // [rsp+38h] [rbp-48h] BYREF
  int v11; // [rsp+40h] [rbp-40h]
  int v12; // [rsp+44h] [rbp-3Ch]
  int v13; // [rsp+48h] [rbp-38h]
  D3DKMT_MEMORY_SEGMENT_GROUP v14; // [rsp+4Ch] [rbp-34h]
  UINT PhysicalAdapterIndex; // [rsp+50h] [rbp-30h]
  _QWORD v16[4]; // [rsp+58h] [rbp-28h] BYREF

  MemorySegmentGroup = a4->MemorySegmentGroup;
  v6 = (struct VMBCHANNEL__ *)*((_QWORD *)this + 484);
  v10 = 0LL;
  v14 = MemorySegmentGroup;
  PhysicalAdapterIndex = a4->PhysicalAdapterIndex;
  v12 = a2;
  v13 = a3;
  v11 = 24;
  v9 = 32;
  VmBusSendSyncMessage(v6, (struct DXGKVMB_COMMAND *)&v10, 0x20u, v16, &v9, v8);
  if ( v9 < 0x20 )
    return 3221225473LL;
  a4->Budget = v16[0];
  a4->AvailableForReservation = v16[3];
  a4->CurrentReservation = v16[2];
  a4->CurrentUsage = v16[1];
  return 0LL;
}
