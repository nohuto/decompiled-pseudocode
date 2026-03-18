/*
 * XREFs of ?SynchronizeChannel@CConnection@@QEAAJI@Z @ 0x1800105A0
 * Callers:
 *     ?SyncFlush@CChannel@@UEAAJXZ @ 0x18000EE70 (-SyncFlush@CChannel@@UEAAJXZ.c)
 * Callees:
 *     ?SynchronizedCommit@CChannel@@UEAAJPEAX@Z @ 0x18000EEB0 (-SynchronizedCommit@CChannel@@UEAAJPEAX@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18000F1E8 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x1800BDE94 (-GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 */

__int64 __fastcall CConnection::SynchronizeChannel(CConnection *this, unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  char v5; // al
  int MasterTableEntry; // eax
  unsigned int v7; // ebx
  CChannel *v8; // xmm0_8
  int v9; // eax
  signed int LastError; // eax
  int v12; // r9d
  unsigned int v13; // [rsp+20h] [rbp-48h]
  __m128i v14; // [rsp+30h] [rbp-38h]
  HANDLE hHandle; // [rsp+50h] [rbp-18h]
  int v16; // [rsp+70h] [rbp+8h] BYREF
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v17; // [rsp+80h] [rbp+18h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 112);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  v5 = *((_BYTE *)this + 168);
  v17 = 0LL;
  v16 = 43;
  if ( !v5 )
  {
    v7 = -2003303402;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303402, 0x12Eu);
LABEL_9:
    LeaveCriticalSection(v2);
    return v7;
  }
  MasterTableEntry = CChannelTable::GetMasterTableEntry((CConnection *)((char *)this + 16), a2, &v17);
  v7 = MasterTableEntry;
  if ( MasterTableEntry < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, MasterTableEntry, 0x132u);
    goto LABEL_9;
  }
  v14 = *(__m128i *)v17;
  hHandle = (HANDLE)*((_QWORD *)v17 + 2);
  LeaveCriticalSection(v2);
  v8 = (CChannel *)_mm_srli_si128(v14, 8).m128i_u64[0];
  v9 = CChannel::SendCommand(v8, &v16, 4u);
  v7 = v9;
  if ( v9 < 0 )
  {
    v13 = 318;
    goto LABEL_17;
  }
  v9 = CChannel::SynchronizedCommit(v8, 0LL);
  v7 = v9;
  if ( v9 < 0 )
  {
    v13 = 323;
LABEL_17:
    v12 = v9;
LABEL_18:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, v13);
    return v7;
  }
  SetLastError(0);
  if ( WaitForSingleObject(hHandle, 0xFFFFFFFF) == -1 )
  {
    LastError = GetLastError();
    v7 = LastError;
    if ( LastError > 0 )
      v7 = (unsigned __int16)LastError | 0x80070000;
    v13 = 334;
    if ( (v7 & 0x80000000) == 0 )
      v7 = -2003304445;
    v12 = v7;
    goto LABEL_18;
  }
  return v7;
}
