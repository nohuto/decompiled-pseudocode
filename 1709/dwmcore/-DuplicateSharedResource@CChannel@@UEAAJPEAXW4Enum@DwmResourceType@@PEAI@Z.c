/*
 * XREFs of ?DuplicateSharedResource@CChannel@@UEAAJPEAXW4Enum@DwmResourceType@@PEAI@Z @ 0x18000E9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?DuplicateHandleOnTarget@CHandleTable@@QEAAJIIW4MIL_RESOURCE_TYPE@@PEAVCChannel@@PEAI@Z @ 0x18000FF00 (-DuplicateHandleOnTarget@CHandleTable@@QEAAJIIW4MIL_RESOURCE_TYPE@@PEAVCChannel@@PEAI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800106C4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?MilTypeFromDwmType@CChannel@@CAJW4Enum@DwmResourceType@@PEAW4MIL_RESOURCE_TYPE@@@Z @ 0x1800BFAA4 (-MilTypeFromDwmType@CChannel@@CAJW4Enum@DwmResourceType@@PEAW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CChannel::DuplicateSharedResource(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  int v11; // ebx
  unsigned int v13; // [rsp+20h] [rbp-28h]
  unsigned int v14; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v15; // [rsp+34h] [rbp-14h] BYREF
  __int64 v16; // [rsp+38h] [rbp-10h] BYREF
  unsigned int v17; // [rsp+50h] [rbp+8h] BYREF

  v15 = 0;
  v14 = 0;
  v16 = a1 + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  v8 = CChannel::MilTypeFromDwmType(a3, &v17);
  v9 = v8;
  if ( v8 < 0 )
  {
    v13 = 779;
    goto LABEL_8;
  }
  v11 = NtDCompositionReferenceSharedResourceOnDwmChannel(*(unsigned int *)(a1 + 56), a2, v17, &v15, &v14);
  if ( v11 < 0 )
  {
    v9 = v11 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x312u);
    goto LABEL_4;
  }
  v8 = CHandleTable::DuplicateHandleOnTarget(v10, v15, v14, v17, a1, a4);
  v9 = v8;
  if ( v8 < 0 )
  {
    v13 = 793;
LABEL_8:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, v13);
  }
LABEL_4:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v16);
  return v9;
}
