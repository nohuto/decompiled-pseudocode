/*
 * XREFs of MiLoadSectionIntoVsmEnclave @ 0x1406E8AAC
 * Callers:
 *     NtLoadEnclaveData @ 0x1406E9B24 (NtLoadEnclaveData.c)
 * Callees:
 *     MiCommitExistingVad @ 0x14003AFF0 (MiCommitExistingVad.c)
 *     MiDereferenceControlAreaFile @ 0x140067894 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x1400679F0 (MiReferenceControlAreaFile.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     MiSectionControlArea @ 0x1400A1610 (MiSectionControlArea.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiCountCommittedPages @ 0x140229554 (MiCountCommittedPages.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MiDecommitRegion @ 0x1404952E0 (MiDecommitRegion.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     MiPrefetchControlArea @ 0x1404F605C (MiPrefetchControlArea.c)
 *     MiValidateSectionCreate @ 0x1404F6218 (MiValidateSectionCreate.c)
 *     MiUnmapImageInSystemSpace @ 0x1404F73D4 (MiUnmapImageInSystemSpace.c)
 *     MiMapImageInSystemSpace @ 0x1404F7424 (MiMapImageInSystemSpace.c)
 *     VslLoadEnclaveModule @ 0x1406B3F54 (VslLoadEnclaveModule.c)
 *     MiGetSectionStrongImageReference @ 0x1406EC490 (MiGetSectionStrongImageReference.c)
 */

NTSTATUS __fastcall MiLoadSectionIntoVsmEnclave(
        __int64 a1,
        ULONG_PTR a2,
        void *a3,
        KPROCESSOR_MODE a4,
        ULONG_PTR a5,
        unsigned __int64 a6,
        __int64 a7,
        _QWORD *a8)
{
  _DWORD *PoolWithTag; // rsi
  NTSTATUS result; // eax
  _DWORD *v12; // r13
  unsigned __int64 v13; // r14
  int EnclaveModule; // edi
  unsigned __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r13
  ULONG_PTR v19; // rbx
  unsigned __int64 v20; // rbx
  __int64 v21; // rax
  _QWORD *v22; // rcx
  _BYTE v23[8]; // [rsp+40h] [rbp-99h] BYREF
  PVOID Object; // [rsp+48h] [rbp-91h] BYREF
  int v25; // [rsp+50h] [rbp-89h] BYREF
  unsigned __int64 v26; // [rsp+58h] [rbp-81h]
  __int64 v27; // [rsp+60h] [rbp-79h]
  __int64 v28; // [rsp+68h] [rbp-71h]
  _QWORD *v29; // [rsp+70h] [rbp-69h]
  __int64 v30[10]; // [rsp+80h] [rbp-59h] BYREF

  v28 = a7;
  PoolWithTag = 0LL;
  v29 = a8;
  v30[0] = 0LL;
  v26 = 0LL;
  result = ObReferenceObjectByHandle(a3, 4u, MmSectionObjectType, a4, &Object, 0LL);
  if ( result < 0 )
    return result;
  v12 = Object;
  v13 = MiSectionControlArea((__int64)Object);
  if ( (v12[14] & 0x20) == 0 )
  {
    EnclaveModule = -1073741751;
    goto LABEL_26;
  }
  v15 = *((_QWORD *)v12 + 6);
  if ( v15 > (((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) + 1) << 12) - a6
    || (v26 = v15 + a6 - 1, MiCountCommittedPages(a6, v26, a2, a1 + 1280)) )
  {
    EnclaveModule = -1073741800;
    goto LABEL_26;
  }
  v18 = *(_QWORD *)(v13 + 96);
  if ( (*(_DWORD *)(v13 + 92) & 0xC0000) != 0 )
    goto LABEL_34;
  if ( (*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF8uLL) <= 8 )
  {
    v19 = MiReferenceControlAreaFile(v13);
    EnclaveModule = MiValidateSectionCreate(v19, v13, 0xFFFFFFFF, a5, 0x40000000, 4, 0);
    MiDereferenceControlAreaFile(v13, v19);
    if ( EnclaveModule < 0 )
      goto LABEL_25;
    if ( (*(_DWORD *)(v13 + 92) & 0xC0000) != 0 )
    {
LABEL_34:
      if ( *(_QWORD *)(v18 + 16)
        || (EnclaveModule = MiGetSectionStrongImageReference(v18, v16, v17), EnclaveModule >= 0) )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x4D456D4Du);
        if ( PoolWithTag )
        {
          EnclaveModule = MiMapImageInSystemSpace((__int64 *)v13, 1, (__int64)v30);
          if ( EnclaveModule >= 0 )
          {
            v25 = 0;
            v20 = v13 + 128;
            v21 = *(_QWORD *)(v13 + 136);
            v27 = v21;
            while ( 1 )
            {
              EnclaveModule = MiCommitExistingVad(
                                a2,
                                a6 + (((*(_QWORD *)(v20 + 8) - v21) << 9) & 0xFFFFFFFFFFFFF000uLL),
                                (unsigned __int64)*(unsigned int *)(v20 + 44) << 12,
                                4u,
                                &v25);
              if ( EnclaveModule < 0 )
                break;
              v20 = *(_QWORD *)(v20 + 16);
              v21 = v27;
              if ( !v20 )
              {
                MiPrefetchControlArea(v13, RtlpInterceptorRoutines, 0LL, 1LL, 0, 0xFFFFFFFF);
                EnclaveModule = VslLoadEnclaveModule(
                                  *(_QWORD *)(*(_QWORD *)(a2 + 72) + 24LL),
                                  a6,
                                  *(_QWORD *)(v18 + 16),
                                  v30[0],
                                  v28,
                                  v23,
                                  PoolWithTag + 9,
                                  PoolWithTag + 10);
                if ( EnclaveModule >= 0 && v23[0] )
                {
                  PoolWithTag[8] = 2;
                  *((_QWORD *)PoolWithTag + 2) = a6;
                  v22 = *(_QWORD **)(a2 + 88);
                  if ( *v22 != a2 + 80 )
                    __fastfail(3u);
                  *(_QWORD *)PoolWithTag = a2 + 80;
                  *((_QWORD *)PoolWithTag + 1) = v22;
                  *v22 = PoolWithTag;
                  *(_QWORD *)(a2 + 88) = PoolWithTag;
                  *v29 = PoolWithTag;
                  PoolWithTag = 0LL;
                }
                goto LABEL_25;
              }
            }
          }
        }
        else
        {
          EnclaveModule = -1073741670;
        }
      }
      goto LABEL_25;
    }
  }
  EnclaveModule = -1073740760;
LABEL_25:
  v12 = Object;
LABEL_26:
  if ( v30[0] )
  {
    MiUnmapImageInSystemSpace((__int64)v30);
    if ( EnclaveModule < 0 )
      MiDecommitRegion(a2, a6, v26);
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  ObfDereferenceObject(v12);
  return EnclaveModule;
}
