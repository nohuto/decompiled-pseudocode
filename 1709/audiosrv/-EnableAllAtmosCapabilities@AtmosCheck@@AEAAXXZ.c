/*
 * XREFs of ?EnableAllAtmosCapabilities@AtmosCheck@@AEAAXXZ @ 0x1800E30F8
 * Callers:
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x1800020F0 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x180005E94 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 */

void __fastcall AtmosCheck::EnableAllAtmosCapabilities(AtmosCheck *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::CriticalSection::Lock(
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 32),
    &lpCriticalSection);
  v2 = lpCriticalSection;
  *(_QWORD *)((char *)this + 76) = 0LL;
  *((_DWORD *)this + 21) = 0;
  if ( v2 )
    LeaveCriticalSection(v2);
}
