/*
 * XREFs of ?VmBusSendFlushHeapTransitions@DXGADAPTER@@QEAAJXZ @ 0x1C003039C
 * Callers:
 *     DxgkFlushHeapTransitions @ 0x1C00A06E0 (DxgkFlushHeapTransitions.c)
 * Callees:
 *     ?VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAU_MDL@@@Z @ 0x1C0032468 (-VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAU_MDL@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::VmBusSendFlushHeapTransitions(DXGADAPTER *this, __int64 a2, __int64 a3, struct _MDL *a4)
{
  struct VMBCHANNEL__ *v4; // rcx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v13; // [rsp+20h] [rbp-18h] BYREF
  int v14; // [rsp+28h] [rbp-10h]
  int v15; // [rsp+2Ch] [rbp-Ch]

  v4 = (struct VMBCHANNEL__ *)*((_QWORD *)this + 484);
  v13 = 0LL;
  v15 = 0;
  v14 = 46;
  v5 = VmBusSendSyncMessageStatusReturn(v4, (struct DXGKVMB_COMMAND *)&v13, 0x10u, a4);
  v10 = v5;
  if ( v5 < 0 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v11 + 24) = v10;
    WdLogEvent5_WdAssertion(v11);
  }
  return (unsigned int)v10;
}
