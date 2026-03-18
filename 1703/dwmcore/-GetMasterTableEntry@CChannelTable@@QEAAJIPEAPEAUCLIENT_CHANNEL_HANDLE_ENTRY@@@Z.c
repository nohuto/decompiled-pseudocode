/*
 * XREFs of ?GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x18007E2F4
 * Callers:
 *     ?PostMessageToClient@CConnection@@QEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x1800655D8 (-PostMessageToClient@CConnection@@QEAAJPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?SynchronizeChannel@CConnection@@QEAAJI@Z @ 0x1800656E8 (-SynchronizeChannel@CConnection@@QEAAJI@Z.c)
 *     ?AssignChannelEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x18007E254 (-AssignChannelEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 *     ?DestroyChannel@CConnection@@QEAAJI@Z @ 0x180138950 (-DestroyChannel@CConnection@@QEAAJI@Z.c)
 *     ?OnConnectionLostNotification@CConnection@@AEAAXJ@Z @ 0x180138AA4 (-OnConnectionLostNotification@CConnection@@AEAAXJ@Z.c)
 *     ?DestroyHandle@CChannelTable@@QEAAXI@Z @ 0x180138BA0 (-DestroyHandle@CChannelTable@@QEAAXI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x18007F61C (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
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
  if ( (unsigned int)HANDLE_TABLE::ValidEntry(this, a2) )
  {
    *v5 = *(_QWORD *)(v4 + 24) + (unsigned int)(v6 * *(_DWORD *)(v4 + 8));
  }
  else
  {
    v3 = -2147024890;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024890, 0x23u);
  }
  return v3;
}
