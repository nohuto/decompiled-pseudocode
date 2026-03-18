/*
 * XREFs of ?OnConnectionLostNotification@CConnection@@AEAAXJ@Z @ 0x180143878
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x18005E608 (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x180088964 (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180089DE4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x1800C63C0 (-GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 */

void __fastcall CConnection::OnConnectionLostNotification(CConnection *this)
{
  unsigned int i; // edi
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v3; // rbx
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v4; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 112);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  for ( i = 1; i < *((_DWORD *)this + 7); ++i )
  {
    if ( HANDLE_TABLE::ValidEntry((CConnection *)((char *)this + 16), i)
      && (int)CChannelTable::GetMasterTableEntry((CConnection *)((char *)this + 16), i, &v4) >= 0 )
    {
      v3 = v4;
      SetEvent(*(HANDLE *)(*((_QWORD *)v4 + 1) + 80LL));
      SetEvent(*((HANDLE *)v3 + 2));
    }
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v5);
}
