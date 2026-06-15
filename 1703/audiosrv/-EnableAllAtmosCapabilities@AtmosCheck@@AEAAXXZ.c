/*
 * XREFs of ?EnableAllAtmosCapabilities@AtmosCheck@@AEAAXXZ @ 0x1800D5910
 * Callers:
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x18004D5A4 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 */

void __fastcall AtmosCheck::EnableAllAtmosCapabilities(AtmosCheck *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)this + 32, (__int64)&lpCriticalSection);
  v2 = lpCriticalSection;
  *(_WORD *)((char *)this + 73) = 257;
  *((_BYTE *)this + 75) = 1;
  if ( v2 )
    LeaveCriticalSection(v2);
}
