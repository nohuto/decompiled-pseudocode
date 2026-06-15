/*
 * XREFs of ?CodecStatusChanged@AtmosCheck@@AEAA_NPEAUDolbyLicenseResult@@@Z @ 0x1800267D4
 * Callers:
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180029798 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x180017CB8 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18006010C (--1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 */

char __fastcall AtmosCheck::CodecStatusChanged(AtmosCheck *this, struct DolbyLicenseResult *a2)
{
  char v4; // bl
  int v5; // eax
  int v6; // eax
  int v7; // eax
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::CriticalSection::Lock((struct _RTL_CRITICAL_SECTION *)((char *)this + 32), &v9);
  v4 = 0;
  if ( *((_BYTE *)this + 74) )
    v5 = *((_DWORD *)this + 24);
  else
    v5 = 0;
  if ( *(_DWORD *)a2 >= 0 != v5 >= 0
    || (!*((_BYTE *)this + 74) ? (v6 = 0) : (v6 = *((_DWORD *)this + 25)),
        *((_DWORD *)a2 + 1) >= 0 != v6 >= 0
     || (!*((_BYTE *)this + 74) ? (v7 = 0) : (v7 = *((_DWORD *)this + 26)), *((_DWORD *)a2 + 2) >= 0 != v7 >= 0)) )
  {
    v4 = 1;
  }
  Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection((Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *)&v9);
  return v4;
}
