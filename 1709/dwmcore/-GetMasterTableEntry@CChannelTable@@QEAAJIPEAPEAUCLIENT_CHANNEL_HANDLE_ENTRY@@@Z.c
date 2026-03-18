/*
 * XREFs of ?GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x1800BDE94
 * Callers:
 *     ?PostMessageToClient@CConnection@@QEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x180010490 (-PostMessageToClient@CConnection@@QEAAJPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?SynchronizeChannel@CConnection@@QEAAJI@Z @ 0x1800105A0 (-SynchronizeChannel@CConnection@@QEAAJI@Z.c)
 *     ?DestroyChannel@CConnection@@QEAAJI@Z @ 0x180120988 (-DestroyChannel@CConnection@@QEAAJI@Z.c)
 *     ?OnConnectionLostNotification@CConnection@@AEAAXJ@Z @ 0x180120B74 (-OnConnectionLostNotification@CConnection@@AEAAXJ@Z.c)
 *     ?AssignChannelEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x180120E70 (-AssignChannelEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 *     ?DestroyHandle@CChannelTable@@QEAAXI@Z @ 0x180120F54 (-DestroyHandle@CChannelTable@@QEAAXI@Z.c)
 * Callees:
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x180010228 (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CChannelTable::GetMasterTableEntry(
        CChannelTable *this,
        unsigned int a2,
        struct CLIENT_CHANNEL_HANDLE_ENTRY **a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  _QWORD *v5; // r8
  int v6; // r10d

  v3 = 0;
  if ( HANDLE_TABLE::ValidEntry(this, a2) )
  {
    *v5 = *(_QWORD *)(v4 + 24) + (unsigned int)(v6 * *(_DWORD *)(v4 + 8));
  }
  else
  {
    v3 = -2147024890;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070006, 0x23u);
  }
  return v3;
}
