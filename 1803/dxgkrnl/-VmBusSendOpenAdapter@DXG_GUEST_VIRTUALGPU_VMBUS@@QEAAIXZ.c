/*
 * XREFs of ?VmBusSendOpenAdapter@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIXZ @ 0x1C0183B54
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C0149978 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C018557C (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOpenAdapter(struct VMBCHANNEL__ **this)
{
  struct DXGGLOBAL *Global; // rax
  struct VMBCHANNEL__ *v3; // rcx
  int v4; // edx
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v8; // rax
  struct _MDL *v9; // [rsp+28h] [rbp-48h]
  unsigned int v10; // [rsp+30h] [rbp-40h] BYREF
  __int64 v11; // [rsp+38h] [rbp-38h] BYREF
  int v12; // [rsp+40h] [rbp-30h]
  int v13; // [rsp+44h] [rbp-2Ch]
  int v14; // [rsp+48h] [rbp-28h]
  int v15; // [rsp+50h] [rbp-20h]
  int v16; // [rsp+54h] [rbp-1Ch]
  int v17; // [rsp+58h] [rbp-18h]
  unsigned int v18; // [rsp+60h] [rbp-10h] BYREF

  Global = DXGGLOBAL::GetGlobal((__int64)this);
  v3 = *this;
  v10 = 8;
  v4 = *((_DWORD *)Global + 311);
  v11 = 0LL;
  v12 = 0;
  v13 = 0;
  v17 = v4;
  v14 = 14;
  v15 = 10;
  v16 = 51;
  v6 = VmBusSendSyncMessage(v3, (struct DXGKVMB_COMMAND_BASE *)&v11, 0x28u, &v18, &v10, v9);
  if ( v6 >= 0 )
  {
    v6 = -1073741823;
    if ( v10 >= 4 )
      return v18;
  }
  v8 = WdLogNewEntry5_WdAssertion(v5);
  *(_QWORD *)(v8 + 24) = v6;
  WdLogEvent5_WdAssertion(v8);
  return 0LL;
}
