/*
 * XREFs of ?ReassociateUserHandleForIOCP@IOCPDispatcher@@QEAAJPEAPEAXPEAU_MITUserModeHandleEntry@@K@Z @ 0x1C004CBE4
 * Callers:
 *     UserProcessMITInput @ 0x1C004C450 (UserProcessMITInput.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0007B88 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 */

__int64 __fastcall IOCPDispatcher::ReassociateUserHandleForIOCP(
        IOCPDispatcher *this,
        void **a2,
        struct _MITUserModeHandleEntry *a3,
        int a4)
{
  struct _LIST_ENTRY *Blink; // rcx
  _BYTE *v5; // rsi
  int v7; // eax
  int v8; // edx
  unsigned int v9; // ebx
  __int64 v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+30h] [rbp-18h]

  Blink = WPP_MAIN_CB.Queue.ListEntry.Blink;
  v5 = (char *)a3 + 32;
  *((_BYTE *)a3 + 32) = 0;
  v7 = ZwAssociateWaitCompletionPacket(*(_QWORD *)a3, Blink[161].Flink, a2[a4], a3, 2LL, 0, 0LL, (char *)a3 + 32);
  v9 = v7;
  if ( v7 < 0 )
  {
    LODWORD(v12) = v7;
    LODWORD(v11) = a4;
    WPP_RECORDER_SF_dd(gBaseLog, 2u, 2u, 0x13u, (__int64)&WPP_78a9c3fec3703cfbc35f8dcb850995ce_Traceguids, v11, v12);
  }
  if ( *v5 )
  {
    LOBYTE(v8) = 2;
    WPP_RECORDER_SF_D(gBaseLog, v8, 2, 20, (__int64)&WPP_78a9c3fec3703cfbc35f8dcb850995ce_Traceguids, a4);
  }
  return v9;
}
