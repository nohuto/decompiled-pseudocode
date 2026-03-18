/*
 * XREFs of ?DXGADAPTER_SignalGuestEvent@@YAXPEAVDXGADAPTER@@PEAX@Z @ 0x1C00343A0
 * Callers:
 *     <none>
 * Callees:
 *     ?VmBusSendAsyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAU_MDL@@@Z @ 0x1C002EB54 (-VmBusSendAsyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAU_MDL@@@Z.c)
 */

void __fastcall DXGADAPTER_SignalGuestEvent(
        struct DXGADAPTER *a1,
        struct VMBCHANNEL__ **a2,
        __int64 a3,
        struct _MDL *a4)
{
  struct VMBCHANNEL__ *v5; // rcx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+28h] [rbp-20h]
  int v13; // [rsp+2Ch] [rbp-1Ch]
  struct VMBCHANNEL__ *v14; // [rsp+30h] [rbp-18h]
  char v15; // [rsp+38h] [rbp-10h]

  v11 = 0LL;
  v13 = 0;
  v5 = *a2;
  v12 = 26;
  v14 = a2[1];
  v15 = *((_BYTE *)a2 + 16);
  v6 = VmBusSendAsyncMessage(v5, (struct DXGKVMB_COMMAND *)&v11, 32LL, a4);
  v9 = v6;
  if ( v6 < 0 )
  {
    v10 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v10 + 24) = v9;
    WdLogEvent5_WdError(v10);
  }
  ExFreePoolWithTag(a2, 0x4B677844u);
}
