/*
 * XREFs of ?DuplicateHandleOnTarget@CChannel@@UEAAJIIW4Enum@DwmResourceType@@PEAI@Z @ 0x18001BA20
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?DuplicateHandleOnTarget@CHandleTable@@QEAAJIIW4MIL_RESOURCE_TYPE@@PEAVCChannel@@PEAI@Z @ 0x180088788 (-DuplicateHandleOnTarget@CHandleTable@@QEAAJIIW4MIL_RESOURCE_TYPE@@PEAVCChannel@@PEAI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180089DE4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilTypeFromDwmType@CChannel@@CAJW4Enum@DwmResourceType@@PEAW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C7FD8 (-MilTypeFromDwmType@CChannel@@CAJW4Enum@DwmResourceType@@PEAW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CChannel::DuplicateHandleOnTarget(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5)
{
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  int v12; // eax
  _QWORD v14[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v15; // [rsp+50h] [rbp+8h] BYREF

  v14[0] = a1 + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  v9 = CChannel::MilTypeFromDwmType(a4, &v15);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x2F1u);
  }
  else
  {
    v12 = CHandleTable::DuplicateHandleOnTarget(v10, a2, a3, v15, a1, a5, v14[0]);
    v11 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x2F8u);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(v14);
  return v11;
}
