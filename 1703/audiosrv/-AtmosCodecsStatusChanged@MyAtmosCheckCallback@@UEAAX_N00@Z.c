/*
 * XREFs of ?AtmosCodecsStatusChanged@MyAtmosCheckCallback@@UEAAX_N00@Z @ 0x1800C7F40
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MyAtmosCheckCallback::AtmosCodecsStatusChanged(MyAtmosCheckCallback *this)
{
  LPCRITICAL_SECTION v1; // rbx
  LPCRITICAL_SECTION v2; // rcx
  LPCRITICAL_SECTION lpCriticalSection[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( MyAtmosCheckCallback::m_pCallback )
  {
    Microsoft::WRL::Wrappers::CriticalSection::Lock(
      (__int64)&CSpatialAudioTech::s_atmosLock,
      (__int64)lpCriticalSection);
    v1 = lpCriticalSection[0];
    v2 = lpCriticalSection[0];
    if ( CSpatialAudioTech::s_spAtmosCheck )
      v1 = (LPCRITICAL_SECTION)MyAtmosCheckCallback::m_pCallback;
    if ( lpCriticalSection[0] )
      LeaveCriticalSection(lpCriticalSection[0]);
    if ( v1 )
      ((void (__fastcall *)(LPCRITICAL_SECTION))v1)(v2);
  }
}
