/*
 * XREFs of ?VmBusSendSignalGuestEvent@DXG_HOST_GLOBAL_VMBUS@@SAXPEAX@Z @ 0x1C002DEB0
 * Callers:
 *     <none>
 * Callees:
 *     ?VmBusSendAsyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C002DC2C (-VmBusSendAsyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 */

void __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusSendSignalGuestEvent(_QWORD *P, __int64 a2, __int64 a3, struct _MDL *a4)
{
  char v5; // al
  struct VMBCHANNEL__ *v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // [rsp+20h] [rbp-38h] BYREF
  int v12; // [rsp+28h] [rbp-30h]
  int v13; // [rsp+2Ch] [rbp-2Ch]
  int v14; // [rsp+30h] [rbp-28h]
  __int64 v15; // [rsp+38h] [rbp-20h]
  char v16; // [rsp+40h] [rbp-18h]

  v11 = 0LL;
  v12 = 0;
  v14 = 0;
  v13 = 2;
  v15 = P[1];
  v5 = *((_BYTE *)P + 16);
  v6 = (struct VMBCHANNEL__ *)*P;
  v16 = v5;
  v7 = VmBusSendAsyncMessage(v6, (struct DXGKVMB_COMMAND_BASE *)&v11, 40LL, a4);
  v9 = v7;
  if ( v7 < 0 )
  {
    v10 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v10 + 24) = v9;
    WdLogEvent5_WdError(v10);
  }
  if ( !*((_BYTE *)P + 17) )
    ExFreePoolWithTag(P, 0x4B677844u);
}
