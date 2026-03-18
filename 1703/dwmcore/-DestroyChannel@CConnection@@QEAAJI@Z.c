/*
 * XREFs of ?DestroyChannel@CConnection@@QEAAJI@Z @ 0x180138950
 * Callers:
 *     ?Destroy@CChannel@@UEAAJXZ @ 0x1801391F0 (-Destroy@CChannel@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x18007E2F4 (-GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 *     ??$ReleaseInterface@VCChannel@@@@YAXAEAPEAVCChannel@@@Z @ 0x1800CA74C (--$ReleaseInterface@VCChannel@@@@YAXAEAPEAVCChannel@@@Z.c)
 *     ?DestroyKernelChannel@CConnection@@AEAAJI@Z @ 0x180138A14 (-DestroyKernelChannel@CConnection@@AEAAJI@Z.c)
 *     ?DestroyHandle@CChannelTable@@QEAAXI@Z @ 0x180138BA0 (-DestroyHandle@CChannelTable@@QEAAXI@Z.c)
 */

__int64 __fastcall CConnection::DestroyChannel(CConnection *this, unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  CChannelTable *v3; // rbp
  int MasterTableEntry; // eax
  unsigned int v6; // ebx
  CConnection *v7; // rcx
  int v8; // eax
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 112);
  v3 = (CConnection *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  MasterTableEntry = CChannelTable::GetMasterTableEntry(v3, a2, &v10);
  v6 = MasterTableEntry;
  if ( MasterTableEntry < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, MasterTableEntry, 0xDEu);
    LeaveCriticalSection(v2);
  }
  else
  {
    ReleaseInterface<CChannel>((CChannel **)v10 + 1);
    CChannelTable::DestroyHandle(v3, a2);
    LeaveCriticalSection(v2);
    v8 = CConnection::DestroyKernelChannel(v7, a2);
    v6 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xF7u);
  }
  return v6;
}
