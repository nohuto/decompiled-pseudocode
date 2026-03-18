/*
 * XREFs of ?SyncFlush@CChannel@@UEAAJXZ @ 0x180087560
 * Callers:
 *     ?SendSyncCommand@CChannel@@AEAAJPEBXIPEAUMIL_MESSAGE@@@Z @ 0x1800876A8 (-SendSyncCommand@CChannel@@AEAAJPEBXIPEAUMIL_MESSAGE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SynchronizeChannel@CConnection@@QEAAJI@Z @ 0x18005E9D8 (-SynchronizeChannel@CConnection@@QEAAJI@Z.c)
 */

__int64 __fastcall CChannel::SyncFlush(CChannel *this)
{
  unsigned int v1; // edx
  int v3; // eax
  unsigned int v4; // edi

  v1 = *((_DWORD *)this + 14);
  *((_BYTE *)this + 208) = 1;
  v3 = CConnection::SynchronizeChannel(*((CConnection **)this + 6), v1);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x24Fu);
  *((_BYTE *)this + 208) = 0;
  return v4;
}
