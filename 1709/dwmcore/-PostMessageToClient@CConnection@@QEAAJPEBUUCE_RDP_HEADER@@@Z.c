/*
 * XREFs of ?PostMessageToClient@CConnection@@QEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x180010490
 * Callers:
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x18000B0A8 (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 * Callees:
 *     ?PostMessageToChannel@CChannel@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x18000F3AC (-PostMessageToChannel@CChannel@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x180010228 (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800106C4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x1800BDE94 (-GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 */

__int64 __fastcall CConnection::PostMessageToClient(CConnection *this, const struct UCE_RDP_HEADER *a2)
{
  signed int v4; // ebx
  const struct MIL_MESSAGE *v5; // rdi
  unsigned int v6; // edx
  int MasterTableEntry; // eax
  int v8; // eax
  __int64 v10; // rcx
  unsigned int i; // esi
  CChannel *v12; // rcx
  int v13; // eax
  int v14; // r15d
  signed int LastError; // eax
  unsigned int v16; // [rsp+20h] [rbp-10h]
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v17; // [rsp+70h] [rbp+40h] BYREF
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v18; // [rsp+80h] [rbp+50h] BYREF
  char *v19; // [rsp+88h] [rbp+58h] BYREF

  v4 = 0;
  v19 = (char *)this + 112;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  if ( !*((_BYTE *)this + 168) )
    goto LABEL_12;
  if ( *((_DWORD *)a2 + 1) < 0x44u || (unsigned int)(*(_DWORD *)a2 - 10) > 1 )
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x78u);
    v16 = 443;
    goto LABEL_35;
  }
  v5 = (const struct UCE_RDP_HEADER *)((char *)a2 + 40);
  if ( *(_DWORD *)a2 != 11 )
  {
    v6 = *((_DWORD *)a2 + 4);
    v17 = 0LL;
    MasterTableEntry = CChannelTable::GetMasterTableEntry((CConnection *)((char *)this + 16), v6, &v17);
    v4 = MasterTableEntry;
    if ( MasterTableEntry < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, MasterTableEntry, 0x1D8u);
      v4 = 0;
      goto LABEL_12;
    }
    if ( *(_DWORD *)v5 != 1 )
    {
      if ( *(_DWORD *)v5 == 2 || *(_DWORD *)v5 == 17 || *(_DWORD *)v5 == 19 )
      {
        v10 = *((_QWORD *)v17 + 1);
        *(_OWORD *)(v10 + 128) = *(_OWORD *)v5;
        *(_QWORD *)(v10 + 144) = *((_QWORD *)a2 + 7);
        *(_DWORD *)(v10 + 152) = *((_DWORD *)a2 + 16);
      }
      else
      {
        v8 = CChannel::PostMessageToChannel(*((CChannel **)v17 + 1), (const struct UCE_RDP_HEADER *)((char *)a2 + 40));
        v4 = v8;
        if ( v8 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x20Fu);
      }
      goto LABEL_12;
    }
    SetLastError(0);
    if ( SetEvent(*((HANDLE *)v17 + 2)) )
      goto LABEL_12;
    LastError = GetLastError();
    v4 = LastError;
    if ( LastError > 0 )
      v4 = (unsigned __int16)LastError | 0x80070000;
    v16 = 482;
    if ( v4 >= 0 )
      v4 = -2003304445;
LABEL_35:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, v16);
    goto LABEL_12;
  }
  for ( i = 1; i < *((_DWORD *)this + 7); ++i )
  {
    if ( HANDLE_TABLE::ValidEntry((CConnection *)((char *)this + 16), i) )
    {
      v18 = 0LL;
      if ( (int)CChannelTable::GetMasterTableEntry((CConnection *)((char *)this + 16), i, &v18) >= 0 )
      {
        v12 = (CChannel *)*((_QWORD *)v18 + 1);
        if ( *((_BYTE *)v12 + 210) )
        {
          v13 = CChannel::PostMessageToChannel(v12, v5);
          v14 = v13;
          if ( v13 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x1CDu);
          if ( !v4 || v4 >= 0 && v14 < 0 )
            v4 = v14;
        }
      }
    }
  }
LABEL_12:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v19);
  return (unsigned int)v4;
}
