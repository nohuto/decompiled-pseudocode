/*
 * XREFs of ?ProviderFinalRelease@CVolumeSoftware@@UEAAXXZ @ 0x1800862A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x18007B17C (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ?PersistVolumeState@CVolumeSoftware@@AEAAXXZ @ 0x180085FD0 (-PersistVolumeState@CVolumeSoftware@@AEAAXXZ.c)
 */

void __fastcall CVolumeSoftware::ProviderFinalRelease(const wchar_t **this)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v3; // [rsp+28h] [rbp-10h]

  if ( this[8] )
  {
    if ( *((_BYTE *)this + 292) )
      CVolumeSoftware::PersistVolumeState(this);
    v3 = 0;
    lpCriticalSection = (LPCRITICAL_SECTION)(this + 31);
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)(this + 30));
    if ( v3 )
      LeaveCriticalSection(lpCriticalSection);
  }
}
