/*
 * XREFs of ?IsLogLicenseResult@AtmosCheck@@AEAA_NPEAUDolbyLicenseResult@@@Z @ 0x1800E4210
 * Callers:
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x1800020F0 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x180005E94 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 */

bool __fastcall AtmosCheck::IsLogLicenseResult(AtmosCheck *this, struct DolbyLicenseResult *a2)
{
  bool v4; // bl
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::CriticalSection::Lock(
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 32),
    &lpCriticalSection);
  v4 = *(_QWORD *)a2 != *(_QWORD *)((char *)this + 76) || *((_DWORD *)a2 + 2) != *((_DWORD *)this + 21);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return v4;
}
