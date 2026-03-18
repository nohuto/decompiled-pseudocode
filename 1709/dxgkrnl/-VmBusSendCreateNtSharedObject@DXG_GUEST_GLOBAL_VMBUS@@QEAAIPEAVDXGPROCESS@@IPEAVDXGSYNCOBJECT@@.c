/*
 * XREFs of ?VmBusSendCreateNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@@Z @ 0x1C0195C00
 * Callers:
 *     ?CreateSharedSyncNtObject@@YAJW4_HMGRENTRY_TYPE@@IPEAU_OBJECT_ATTRIBUTES@@PEAPEAX@Z @ 0x1C00BC620 (-CreateSharedSyncNtObject@@YAJW4_HMGRENTRY_TYPE@@IPEAU_OBJECT_ATTRIBUTES@@PEAPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0198920 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01B9AF8 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x1C01BF8A4 (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendCreateNtSharedObject(
        struct VMBCHANNEL__ **this,
        struct DXGPROCESS *a2,
        unsigned int a3,
        struct DXGSYNCOBJECT *a4,
        struct DXGDEVICESYNCOBJECT *a5)
{
  unsigned int v8; // ebx
  unsigned __int8 v9; // r8
  unsigned int HostHandle; // eax
  struct VMBCHANNEL__ *v11; // rcx
  struct _MDL *v13; // [rsp+28h] [rbp-50h]
  unsigned int v14; // [rsp+30h] [rbp-48h] BYREF
  __int64 v15; // [rsp+38h] [rbp-40h] BYREF
  unsigned int HostProcess; // [rsp+40h] [rbp-38h]
  int v17; // [rsp+44h] [rbp-34h]
  int v18; // [rsp+48h] [rbp-30h]
  unsigned int v19; // [rsp+50h] [rbp-28h]
  unsigned int v20; // [rsp+58h] [rbp-20h] BYREF

  v8 = 0;
  HostProcess = DXGPROCESS::GetHostProcess(a2);
  v15 = 0LL;
  v17 = 1;
  v18 = 52;
  if ( a5 )
    HostHandle = *((_DWORD *)a5 + 11);
  else
    HostHandle = DXGSYNCOBJECT::GetHostHandle(a4, a3, v9);
  v11 = *this;
  v19 = HostHandle;
  v14 = 8;
  VmBusSendSyncMessage(v11, (struct DXGKVMB_COMMAND_BASE *)&v15, 0x20u, &v20, &v14, v13);
  if ( v14 >= 4 )
    return v20;
  return v8;
}
