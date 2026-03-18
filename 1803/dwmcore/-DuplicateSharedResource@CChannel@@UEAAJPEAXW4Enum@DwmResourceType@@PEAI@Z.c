/*
 * XREFs of ?DuplicateSharedResource@CChannel@@UEAAJPEAXW4Enum@DwmResourceType@@PEAI@Z @ 0x180087120
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?DuplicateHandleOnTarget@CHandleTable@@QEAAJIIW4MIL_RESOURCE_TYPE@@PEAVCChannel@@PEAI@Z @ 0x180088788 (-DuplicateHandleOnTarget@CHandleTable@@QEAAJIIW4MIL_RESOURCE_TYPE@@PEAVCChannel@@PEAI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180089DE4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilTypeFromDwmType@CChannel@@CAJW4Enum@DwmResourceType@@PEAW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C7FD8 (-MilTypeFromDwmType@CChannel@@CAJW4Enum@DwmResourceType@@PEAW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CChannel::DuplicateSharedResource(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  int v11; // ebx
  unsigned int v13; // [rsp+20h] [rbp-28h]
  __int64 v14; // [rsp+30h] [rbp-18h] BYREF
  __int64 v15; // [rsp+38h] [rbp-10h] BYREF
  unsigned int v16; // [rsp+50h] [rbp+8h] BYREF

  v14 = 0LL;
  v15 = a1 + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  v8 = CChannel::MilTypeFromDwmType(a3, &v16);
  v9 = v8;
  if ( v8 < 0 )
  {
    v13 = 782;
    goto LABEL_8;
  }
  v11 = NtDCompositionReferenceSharedResourceOnDwmChannel(*(unsigned int *)(a1 + 56), a2, v16, (char *)&v14 + 4, &v14);
  if ( v11 < 0 )
  {
    v9 = v11 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, (const int *)"\b", 1u, v9, 0x315u);
    goto LABEL_4;
  }
  v8 = CHandleTable::DuplicateHandleOnTarget(v10, HIDWORD(v14), (unsigned int)v14, v16, a1, a4, v14);
  v9 = v8;
  if ( v8 < 0 )
  {
    v13 = 796;
LABEL_8:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, (const int *)"\b", 1u, v8, v13);
  }
LABEL_4:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v15);
  return v9;
}
