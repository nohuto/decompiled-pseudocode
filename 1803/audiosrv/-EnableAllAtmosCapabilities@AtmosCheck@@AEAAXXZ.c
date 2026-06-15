/*
 * XREFs of ?EnableAllAtmosCapabilities@AtmosCheck@@AEAAXXZ @ 0x180110138
 * Callers:
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x180026B40 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x180017CB8 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 */

void __fastcall AtmosCheck::EnableAllAtmosCapabilities(AtmosCheck *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::CriticalSection::Lock(
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 32),
    &lpCriticalSection);
  v2 = lpCriticalSection;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 0;
  if ( v2 )
    LeaveCriticalSection(v2);
}
