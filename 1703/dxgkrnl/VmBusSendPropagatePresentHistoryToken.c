/*
 * XREFs of VmBusSendPropagatePresentHistoryToken @ 0x1C00341E0
 * Callers:
 *     <none>
 * Callees:
 *     ?VmBusSendAsyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAU_MDL@@@Z @ 0x1C002EB54 (-VmBusSendAsyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAU_MDL@@@Z.c)
 */

__int64 __fastcall VmBusSendPropagatePresentHistoryToken(
        struct VMBCHANNEL__ *a1,
        __int64 a2,
        __int64 a3,
        struct _MDL *a4)
{
  __int64 v5; // [rsp+20h] [rbp-38h] BYREF
  int v6; // [rsp+28h] [rbp-30h]
  int v7; // [rsp+2Ch] [rbp-2Ch]
  __int64 v8; // [rsp+30h] [rbp-28h]
  __int64 v9; // [rsp+38h] [rbp-20h]
  struct _MDL *v10; // [rsp+40h] [rbp-18h]

  v5 = 0LL;
  v7 = 0;
  v9 = a3;
  v8 = a2;
  v6 = 41;
  v10 = a4;
  return VmBusSendAsyncMessage(a1, (struct DXGKVMB_COMMAND *)&v5, 40LL, a4);
}
