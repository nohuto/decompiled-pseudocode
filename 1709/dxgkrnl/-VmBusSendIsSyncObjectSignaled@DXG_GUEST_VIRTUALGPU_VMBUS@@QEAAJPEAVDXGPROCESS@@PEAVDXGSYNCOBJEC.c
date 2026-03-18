/*
 * XREFs of ?VmBusSendIsSyncObjectSignaled@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGSYNCOBJECT@@IPEAE@Z @ 0x1C0196A04
 * Callers:
 *     ?IsFenceObjectSignaled@@YAJIPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEAH@Z @ 0x1C01BFA98 (-IsFenceObjectSignaled@@YAJIPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEAH@Z.c)
 * Callees:
 *     ?VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C0198BC8 (-VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x1C01BF8A4 (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendIsSyncObjectSignaled(
        struct VMBCHANNEL__ **this,
        struct DXGPROCESS *a2,
        struct DXGSYNCOBJECT *a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  int v5; // ebx
  unsigned int HostHandle; // eax
  struct VMBCHANNEL__ *v8; // rcx
  struct _MDL *v9; // r9
  __int64 result; // rax
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+28h] [rbp-20h]
  int v13; // [rsp+2Ch] [rbp-1Ch]
  int v14; // [rsp+30h] [rbp-18h]
  unsigned int v15; // [rsp+38h] [rbp-10h]

  v5 = *((_DWORD *)a2 + 106);
  HostHandle = DXGSYNCOBJECT::GetHostHandle(a3, a4, (unsigned __int8)a3);
  v8 = *this;
  v11 = 0LL;
  v13 = 0;
  v12 = v5;
  v14 = 47;
  v15 = HostHandle;
  result = VmBusSendSyncMessageStatusReturn(v8, (struct DXGKVMB_COMMAND_BASE *)&v11, 0x20u, v9);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result != -1071775484 )
      return result;
    *a5 = 0;
  }
  else
  {
    *a5 = 1;
  }
  return 0LL;
}
