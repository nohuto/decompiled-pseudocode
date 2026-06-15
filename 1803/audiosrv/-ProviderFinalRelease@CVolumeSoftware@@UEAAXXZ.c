/*
 * XREFs of ?ProviderFinalRelease@CVolumeSoftware@@UEAAXXZ @ 0x1800A37E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180097338 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ?PersistVolumeState@CVolumeSoftware@@AEAAXXZ @ 0x1800A34B0 (-PersistVolumeState@CVolumeSoftware@@AEAAXXZ.c)
 */

void __fastcall CVolumeSoftware::ProviderFinalRelease(const wchar_t **this)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v3; // [rsp+28h] [rbp-10h]

  if ( this[8] )
  {
    if ( *((_BYTE *)this + 300) )
      CVolumeSoftware::PersistVolumeState(this);
    v3 = 0;
    lpCriticalSection = (LPCRITICAL_SECTION)(this + 32);
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)(this + 31));
    if ( v3 )
      LeaveCriticalSection(lpCriticalSection);
  }
}
