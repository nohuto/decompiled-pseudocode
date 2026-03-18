/*
 * XREFs of qsort @ 0x140189210
 * Callers:
 *     MiDecommitPages @ 0x14000C050 (MiDecommitPages.c)
 *     MiDeleteVa @ 0x140011580 (MiDeleteVa.c)
 *     MmUnmapViewInSystemCache @ 0x140018AE0 (MmUnmapViewInSystemCache.c)
 *     MiMoveDirtyBitsToPfns @ 0x140023A70 (MiMoveDirtyBitsToPfns.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiZeroPage @ 0x1400299B0 (MiZeroPage.c)
 *     KiIntSteerCalculateDistribution @ 0x140034EA0 (KiIntSteerCalculateDistribution.c)
 *     MiFillNoReservationCluster @ 0x1400BC0FC (MiFillNoReservationCluster.c)
 *     MiSetProtectionOnSection @ 0x1401147F0 (MiSetProtectionOnSection.c)
 *     MiClearPteAccessed @ 0x140128A30 (MiClearPteAccessed.c)
 *     HvlStartBootLogicalProcessors @ 0x14017692C (HvlStartBootLogicalProcessors.c)
 *     sub_1401944D0 @ 0x1401944D0 (sub_1401944D0.c)
 *     SymCryptParallelHashProcess @ 0x1401A4BA8 (SymCryptParallelHashProcess.c)
 *     VslInitializeSecureKernelCfg @ 0x14022FB28 (VslInitializeSecureKernelCfg.c)
 *     PpmCheckComputeHeteroResponse @ 0x14027F160 (PpmCheckComputeHeteroResponse.c)
 *     ?StDmRegionEvict@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@Z @ 0x1402A5708 (-StDmRegionEvict@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@.c)
 *     PspBuildCreateProcessContext @ 0x1404BA110 (PspBuildCreateProcessContext.c)
 *     ExUpdateLicenseDataInternal @ 0x140548390 (ExUpdateLicenseDataInternal.c)
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x140549988 (ExpLoadAndSortLicensingCacheDescriptors.c)
 *     MiProcessCrcList @ 0x1405B6E90 (MiProcessCrcList.c)
 *     PipSortDeviceObjectList @ 0x1405C9E0C (PipSortDeviceObjectList.c)
 *     PnpAllocateResources @ 0x1405DB260 (PnpAllocateResources.c)
 *     MmFreeBootRegistry @ 0x1406335E4 (MmFreeBootRegistry.c)
 *     IopRearrangeReqList @ 0x14064A918 (IopRearrangeReqList.c)
 *     CmpSortedValueEnumStackEntryStart @ 0x140700CA4 (CmpSortedValueEnumStackEntryStart.c)
 *     MiRemoveMdlPages @ 0x14074B900 (MiRemoveMdlPages.c)
 *     EtwpGetTraceGroupInfo @ 0x1407A5FA4 (EtwpGetTraceGroupInfo.c)
 *     EtwpUpdateDisallowedGuids @ 0x1407B2A2C (EtwpUpdateDisallowedGuids.c)
 *     AdtpBuildObjectTypeStrings @ 0x1407E1334 (AdtpBuildObjectTypeStrings.c)
 *     MiInitializeNumaGraph @ 0x140899660 (MiInitializeNumaGraph.c)
 *     MiCreateFreePfns @ 0x140899EBC (MiCreateFreePfns.c)
 *     KiComputeNumaCosts @ 0x1408B32B4 (KiComputeNumaCosts.c)
 *     MiAssignTopLevelRanges @ 0x1408BB5B0 (MiAssignTopLevelRanges.c)
 *     PpmInitPolicyConfiguration @ 0x1408C19C4 (PpmInitPolicyConfiguration.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14016CD90 (xHalTimerWatchdogStop.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_check_icall @ 0x1401B3510 (_guard_check_icall.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

void __cdecl qsort(
        void *Base,
        size_t NumOfElements,
        size_t SizeOfElements,
        int (__cdecl *PtFuncCompare)(const void *, const void *))
{
  char *v6; // r13
  char *v7; // r15
  __int64 v8; // rcx
  size_t v9; // rbx
  char *v10; // rbx
  unsigned __int64 v11; // rdi
  size_t v12; // r8
  char *v13; // rdx
  signed __int64 v14; // rbx
  char v15; // cl
  size_t v16; // rbx
  char *v17; // rdi
  char *v18; // r8
  size_t v19; // r9
  char v20; // cl
  size_t v21; // r8
  char *v22; // rdx
  signed __int64 v23; // r9
  char v24; // cl
  size_t v25; // r8
  char *v26; // rdx
  signed __int64 v27; // r9
  char v28; // cl
  unsigned __int64 v29; // rbx
  char *v30; // rsi
  char *v31; // rbp
  char *v32; // rdx
  unsigned __int64 v33; // r9
  char v34; // cl
  char *v35; // rax
  __int64 v36; // [rsp+30h] [rbp-448h]
  _QWORD v37[124]; // [rsp+40h] [rbp-438h]

  v6 = (char *)Base;
  if ( (Base || !NumOfElements) && SizeOfElements && PtFuncCompare )
  {
    if ( NumOfElements >= 2 )
    {
      v7 = (char *)Base + SizeOfElements * (NumOfElements - 1);
      v8 = 0LL;
      v36 = 0LL;
      while ( 1 )
      {
        while ( 1 )
        {
          v9 = (v7 - v6) / SizeOfElements + 1;
          if ( v9 <= 8 )
          {
            if ( v7 > v6 )
            {
              do
              {
                v10 = v6;
                v11 = (unsigned __int64)&v6[SizeOfElements];
                if ( &v6[SizeOfElements] <= v7 )
                {
                  do
                  {
                    if ( ((int (__fastcall *)(unsigned __int64, char *))PtFuncCompare)(v11, v10) > 0 )
                      v10 = (char *)v11;
                    v11 += SizeOfElements;
                  }
                  while ( v11 <= (unsigned __int64)v7 );
                }
                v12 = SizeOfElements;
                v13 = v7;
                if ( v10 != v7 )
                {
                  v14 = v10 - v7;
                  do
                  {
                    v15 = v13[v14];
                    v13[v14] = *v13;
                    *v13++ = v15;
                    --v12;
                  }
                  while ( v12 );
                }
                v7 -= SizeOfElements;
              }
              while ( v7 > v6 );
              v8 = v36;
            }
            goto LABEL_19;
          }
          v16 = SizeOfElements * (v9 >> 1);
          v17 = &v6[v16];
          if ( ((int (__fastcall *)(char *, char *))PtFuncCompare)(v6, &v6[v16]) > 0 )
          {
            v19 = SizeOfElements;
            v18 = &v6[v16];
            if ( v6 != v17 )
            {
              do
              {
                v20 = v18[-v16];
                v18[-v16] = *v18;
                *v18++ = v20;
                --v19;
              }
              while ( v19 );
            }
          }
          if ( ((int (__fastcall *)(char *, char *, char *, size_t))PtFuncCompare)(v6, v7, v18, v19) > 0 )
          {
            v21 = SizeOfElements;
            v22 = v7;
            if ( v6 != v7 )
            {
              v23 = v6 - v7;
              do
              {
                v24 = v22[v23];
                v22[v23] = *v22;
                *v22++ = v24;
                --v21;
              }
              while ( v21 );
            }
          }
          if ( ((int (__fastcall *)(char *, char *, size_t))PtFuncCompare)(&v6[v16], v7, v21) > 0 )
          {
            v25 = SizeOfElements;
            v26 = v7;
            if ( v17 != v7 )
            {
              v27 = v17 - v7;
              do
              {
                v28 = v26[v27];
                v26[v27] = *v26;
                *v26++ = v28;
                --v25;
              }
              while ( v25 );
            }
          }
          v29 = (unsigned __int64)v6;
          v30 = v7;
          while ( 1 )
          {
            if ( (unsigned __int64)v17 > v29 )
            {
              while ( 1 )
              {
                v29 += SizeOfElements;
                if ( v29 >= (unsigned __int64)v17 )
                  break;
                if ( ((int (__fastcall *)(unsigned __int64, char *, size_t))PtFuncCompare)(v29, v17, v25) > 0 )
                {
                  if ( (unsigned __int64)v17 > v29 )
                    goto LABEL_39;
                  goto LABEL_37;
                }
              }
            }
            do
LABEL_37:
              v29 += SizeOfElements;
            while ( v29 <= (unsigned __int64)v7
                 && ((int (__fastcall *)(unsigned __int64, char *, size_t))PtFuncCompare)(v29, v17, v25) <= 0 );
            do
            {
LABEL_39:
              v31 = v30;
              v30 -= SizeOfElements;
            }
            while ( v30 > v17 && ((int (__fastcall *)(char *, char *))PtFuncCompare)(v30, v17) > 0 );
            if ( (unsigned __int64)v30 < v29 )
              break;
            v25 = SizeOfElements;
            v32 = v30;
            if ( (char *)v29 != v30 )
            {
              v33 = v29 - (_QWORD)v30;
              do
              {
                v34 = v32[v33];
                v32[v33] = *v32;
                *v32++ = v34;
                --v25;
              }
              while ( v25 );
            }
            v35 = (char *)v29;
            if ( v17 != v30 )
              v35 = v17;
            v17 = v35;
          }
          if ( v17 < v31 )
          {
            while ( 1 )
            {
              v31 -= SizeOfElements;
              if ( v31 <= v17 )
                break;
              if ( ((unsigned int (__fastcall *)(char *, char *))PtFuncCompare)(v31, v17) )
              {
                if ( v17 < v31 )
                  goto LABEL_54;
                goto LABEL_52;
              }
            }
          }
          do
LABEL_52:
            v31 -= SizeOfElements;
          while ( v31 > v6 && !((unsigned int (__fastcall *)(char *, char *))PtFuncCompare)(v31, v17) );
LABEL_54:
          v8 = v36;
          if ( v31 - v6 >= (__int64)&v7[-v29] )
            break;
          if ( v29 < (unsigned __int64)v7 )
          {
            v37[v36] = v29;
            v37[v36 + 62] = v7;
            v8 = ++v36;
          }
          if ( v6 >= v31 )
          {
LABEL_19:
            v36 = --v8;
            if ( v8 < 0 )
              return;
            v6 = (char *)v37[v8];
            v7 = (char *)v37[v8 + 62];
          }
          else
          {
            v7 = v31;
          }
        }
        if ( v6 < v31 )
        {
          v37[v36] = v6;
          v37[v36 + 62] = v31;
          v8 = ++v36;
        }
        if ( v29 >= (unsigned __int64)v7 )
          goto LABEL_19;
        v6 = (char *)v29;
      }
    }
  }
  else
  {
    xHalTimerWatchdogStop();
  }
}
