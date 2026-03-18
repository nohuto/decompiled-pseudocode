/*
 * XREFs of ?VmBusSendFlushDevice@DXGDEVICE@@QEAAJW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C0030334
 * Callers:
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00CA330 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 * Callees:
 *     ?VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAU_MDL@@@Z @ 0x1C0032468 (-VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAU_MDL@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::VmBusSendFlushDevice(__int64 a1, int a2)
{
  struct VMBCHANNEL__ *v2; // r9
  int v3; // r8d
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+2Ch] [rbp-1Ch]
  int v10; // [rsp+30h] [rbp-18h]
  int v11; // [rsp+34h] [rbp-14h]

  v2 = 0LL;
  v3 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 384LL);
  v10 = *(_DWORD *)(a1 + 336);
  v4 = *(_QWORD *)(a1 + 16);
  v7 = 0LL;
  v8 = 54;
  v9 = v3;
  v11 = a2;
  v5 = *(_QWORD *)(v4 + 16);
  if ( *(_BYTE *)(v5 + 3880) )
    v2 = *(struct VMBCHANNEL__ **)(v5 + 3872);
  return VmBusSendSyncMessageStatusReturn(v2, (struct DXGKVMB_COMMAND *)&v7, 0x18u, (struct _MDL *)v2);
}
