/*
 * XREFs of ?VmBusSendQueryVideoMemoryInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAU_D3DKMT_QUERYVIDEOMEMORYINFO@@@Z @ 0x1C018463C
 * Callers:
 *     DxgkQueryVideoMemoryInfo @ 0x1C009AB00 (DxgkQueryVideoMemoryInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C018557C (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryVideoMemoryInfo(
        struct VMBCHANNEL__ **this,
        int a2,
        int a3,
        struct _D3DKMT_QUERYVIDEOMEMORYINFO *a4)
{
  D3DKMT_MEMORY_SEGMENT_GROUP MemorySegmentGroup; // eax
  struct VMBCHANNEL__ *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // r8
  __int64 v11; // rax
  struct _MDL *v13; // [rsp+28h] [rbp-21h]
  unsigned int v14; // [rsp+30h] [rbp-19h] BYREF
  __int64 v15; // [rsp+38h] [rbp-11h] BYREF
  int v16; // [rsp+40h] [rbp-9h]
  int v17; // [rsp+44h] [rbp-5h]
  int v18; // [rsp+48h] [rbp-1h]
  int v19; // [rsp+50h] [rbp+7h]
  D3DKMT_MEMORY_SEGMENT_GROUP v20; // [rsp+54h] [rbp+Bh]
  UINT PhysicalAdapterIndex; // [rsp+58h] [rbp+Fh]
  _QWORD v22[4]; // [rsp+60h] [rbp+17h] BYREF

  MemorySegmentGroup = a4->MemorySegmentGroup;
  v6 = *this;
  v15 = 0LL;
  v17 = 0;
  v20 = MemorySegmentGroup;
  PhysicalAdapterIndex = a4->PhysicalAdapterIndex;
  v16 = a2;
  v19 = a3;
  v18 = 21;
  v14 = 32;
  v9 = VmBusSendSyncMessage(v6, (struct DXGKVMB_COMMAND_BASE *)&v15, 0x28u, v22, &v14, v13);
  if ( v9 < 0 || (v9 = -1073741823, v14 < 0x20) )
  {
    v11 = WdLogNewEntry5_WdWarning(v8, v7, v10);
    *(_QWORD *)(v11 + 24) = v9;
    WdLogEvent5_WdWarning(v11);
  }
  else
  {
    v9 = 0;
    a4->Budget = v22[0];
    a4->AvailableForReservation = v22[3];
    a4->CurrentReservation = v22[2];
    a4->CurrentUsage = v22[1];
  }
  return (unsigned int)v9;
}
