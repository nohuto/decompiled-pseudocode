/*
 * XREFs of ?DestroyHandle@CChannelTable@@QEAAXI@Z @ 0x1801439A4
 * Callers:
 *     ?CreateKernelChannel@CConnection@@AEAAJPEAPEAVCChannel@@@Z @ 0x18005EADC (-CreateKernelChannel@CConnection@@AEAAJPEAPEAVCChannel@@@Z.c)
 *     ?DestroyChannel@CConnection@@QEAAJI@Z @ 0x180143724 (-DestroyChannel@CConnection@@QEAAJI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180089DE4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x1800C63C0 (-GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 */

void __fastcall CChannelTable::DestroyHandle(struct _RTL_CRITICAL_SECTION *this, unsigned int a2)
{
  int MasterTableEntry; // eax
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v5; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0LL;
  v6 = this + 1;
  EnterCriticalSection(this + 1);
  MasterTableEntry = CChannelTable::GetMasterTableEntry((CChannelTable *)this, a2, &v5);
  if ( MasterTableEntry < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, MasterTableEntry, 0x4Fu);
  }
  else
  {
    CloseHandle(*((HANDLE *)v5 + 2));
    memset_0((char *)this->LockSemaphore + a2 * this->LockCount, 0, (unsigned int)this->LockCount);
    --LODWORD(this->SpinCount);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v6);
}
