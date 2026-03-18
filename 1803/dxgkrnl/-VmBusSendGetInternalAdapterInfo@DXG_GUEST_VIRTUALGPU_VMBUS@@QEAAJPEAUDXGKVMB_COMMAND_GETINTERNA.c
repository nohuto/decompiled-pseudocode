/*
 * XREFs of ?VmBusSendGetInternalAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN@@@Z @ 0x1C0183248
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C0149978 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C018557C (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetInternalAdapterInfo(
        struct VMBCHANNEL__ **this,
        struct DXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN *a2)
{
  struct VMBCHANNEL__ *v2; // rcx
  __int64 v4; // rcx
  int v5; // ebx
  __int64 result; // rax
  __int64 v7; // rax
  struct _MDL *v8; // [rsp+28h] [rbp-50h]
  unsigned int v9; // [rsp+30h] [rbp-48h] BYREF
  __int64 v10; // [rsp+38h] [rbp-40h] BYREF
  int v11; // [rsp+40h] [rbp-38h]
  int v12; // [rsp+44h] [rbp-34h]
  int v13; // [rsp+48h] [rbp-30h]
  __int128 v14; // [rsp+50h] [rbp-28h] BYREF

  v10 = 0LL;
  v2 = *this;
  v11 = 0;
  v12 = 0;
  v13 = 36;
  v9 = 16;
  v5 = VmBusSendSyncMessage(v2, (struct DXGKVMB_COMMAND_BASE *)&v10, 0x18u, &v14, &v9, v8);
  if ( v5 < 0 || (v5 = -1073741823, v9 < 0x10) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v7 + 24) = v5;
    WdLogEvent5_WdAssertion(v7);
    return (unsigned int)v5;
  }
  else
  {
    result = 0LL;
    *(_OWORD *)a2 = v14;
  }
  return result;
}
