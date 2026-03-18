/*
 * XREFs of qsort @ 0x14015F450
 * Callers:
 *     KiIntSteerCalculateDistribution @ 0x140002B90 (KiIntSteerCalculateDistribution.c)
 *     MiSetProtectionOnSection @ 0x14003B7E0 (MiSetProtectionOnSection.c)
 *     MiZeroPage @ 0x14004E9F0 (MiZeroPage.c)
 *     MiDecommitPages @ 0x140053C40 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x140054A70 (MiDeleteVirtualAddresses.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiAgePte @ 0x14009DA30 (MiAgePte.c)
 *     HvlStartBootLogicalProcessors @ 0x140139988 (HvlStartBootLogicalProcessors.c)
 *     sub_14016A380 @ 0x14016A380 (sub_14016A380.c)
 *     SymCryptParallelHashProcess @ 0x14017A328 (SymCryptParallelHashProcess.c)
 *     MiFillNoReservationCluster @ 0x140225384 (MiFillNoReservationCluster.c)
 *     PpmCheckComputeHeteroResponse @ 0x1402491D0 (PpmCheckComputeHeteroResponse.c)
 *     ?StDmRegionEvict@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@Z @ 0x14026E7F8 (-StDmRegionEvict@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@.c)
 *     ExUpdateLicenseDataInternal @ 0x1404F3810 (ExUpdateLicenseDataInternal.c)
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x14053856C (ExpLoadAndSortLicensingCacheDescriptors.c)
 *     PspBuildCreateProcessContext @ 0x14053D9A0 (PspBuildCreateProcessContext.c)
 *     MiProcessCrcList @ 0x14053FBA0 (MiProcessCrcList.c)
 *     PnpAllocateResources @ 0x140554F4C (PnpAllocateResources.c)
 *     IopRearrangeReqList @ 0x140558F5C (IopRearrangeReqList.c)
 *     PipSortDeviceObjectList @ 0x14055C2E0 (PipSortDeviceObjectList.c)
 *     MmFreeBootRegistry @ 0x1405BF31C (MmFreeBootRegistry.c)
 *     CmpSortedValueEnumStackEntryStart @ 0x14069C048 (CmpSortedValueEnumStackEntryStart.c)
 *     MiRemoveMdlPages @ 0x1406E09D0 (MiRemoveMdlPages.c)
 *     EtwpGetTraceGroupInfo @ 0x1407445C8 (EtwpGetTraceGroupInfo.c)
 *     EtwpUpdateDisallowedGuids @ 0x140751C2C (EtwpUpdateDisallowedGuids.c)
 *     AdtpBuildObjectTypeStrings @ 0x1407785A8 (AdtpBuildObjectTypeStrings.c)
 *     MiInitializeNumaGraph @ 0x140829DFC (MiInitializeNumaGraph.c)
 *     MiCreateFreePfns @ 0x14082A878 (MiCreateFreePfns.c)
 *     KiComputeNumaCosts @ 0x140838CD8 (KiComputeNumaCosts.c)
 *     MiAssignTopLevelRanges @ 0x140839D10 (MiAssignTopLevelRanges.c)
 *     PpmInitPolicyConfiguration @ 0x140850E70 (PpmInitPolicyConfiguration.c)
 *     MmQueryKernelCfgValidRanges @ 0x14086BEF0 (MmQueryKernelCfgValidRanges.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140131CB0 (xHalTimerWatchdogStop.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_check_icall @ 0x1401898B0 (_guard_check_icall.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
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
  size_t v9; // rax
  char *v10; // rbx
  unsigned __int64 v11; // rdi
  size_t v12; // r8
  char *v13; // rdx
  signed __int64 v14; // rbx
  char v15; // cl
  char *v16; // rdi
  size_t v17; // r8
  char *v18; // rdx
  signed __int64 v19; // r9
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
  __int64 v35; // [rsp+30h] [rbp-448h]
  _QWORD v36[124]; // [rsp+40h] [rbp-438h]

  v6 = (char *)Base;
  if ( (Base || !NumOfElements) && SizeOfElements && PtFuncCompare )
  {
    if ( NumOfElements >= 2 )
    {
      v7 = (char *)Base + SizeOfElements * (NumOfElements - 1);
      v8 = 0LL;
      v35 = 0LL;
      while ( 1 )
      {
        while ( 1 )
        {
          v9 = (v7 - v6) / SizeOfElements;
          if ( v9 + 1 <= 8 )
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
              v8 = v35;
            }
            goto LABEL_19;
          }
          v16 = &v6[SizeOfElements * ((v9 + 1) >> 1)];
          if ( ((int (__fastcall *)(char *, char *))PtFuncCompare)(v6, v16) > 0 )
          {
            v17 = SizeOfElements;
            v18 = v16;
            if ( v6 != v16 )
            {
              v19 = v6 - v16;
              do
              {
                v20 = v18[v19];
                v18[v19] = *v18;
                *v18++ = v20;
                --v17;
              }
              while ( v17 );
            }
          }
          if ( ((int (__fastcall *)(char *, char *, size_t))PtFuncCompare)(v6, v7, v17) > 0 )
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
          if ( ((int (__fastcall *)(char *, char *, size_t))PtFuncCompare)(v16, v7, v21) > 0 )
          {
            v25 = SizeOfElements;
            v26 = v7;
            if ( v16 != v7 )
            {
              v27 = v16 - v7;
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
            if ( (unsigned __int64)v16 > v29 )
            {
              while ( 1 )
              {
                v29 += SizeOfElements;
                if ( v29 >= (unsigned __int64)v16 )
                  break;
                if ( ((int (__fastcall *)(unsigned __int64, char *, size_t))PtFuncCompare)(v29, v16, v25) > 0 )
                {
                  if ( (unsigned __int64)v16 > v29 )
                    goto LABEL_40;
                  goto LABEL_38;
                }
              }
            }
            do
LABEL_38:
              v29 += SizeOfElements;
            while ( v29 <= (unsigned __int64)v7
                 && ((int (__fastcall *)(unsigned __int64, char *, size_t))PtFuncCompare)(v29, v16, v25) <= 0 );
            do
            {
LABEL_40:
              v31 = v30;
              v30 -= SizeOfElements;
            }
            while ( v30 > v16 && ((int (__fastcall *)(char *, char *))PtFuncCompare)(v30, v16) > 0 );
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
            if ( v16 == v30 )
              v16 = (char *)v29;
          }
          if ( v16 < v31 )
          {
            while ( 1 )
            {
              v31 -= SizeOfElements;
              if ( v31 <= v16 )
                break;
              if ( ((unsigned int (__fastcall *)(char *, char *))PtFuncCompare)(v31, v16) )
              {
                if ( v16 < v31 )
                  goto LABEL_54;
                goto LABEL_52;
              }
            }
          }
          do
LABEL_52:
            v31 -= SizeOfElements;
          while ( v31 > v6 && !((unsigned int (__fastcall *)(char *, char *))PtFuncCompare)(v31, v16) );
LABEL_54:
          v8 = v35;
          if ( v31 - v6 >= (__int64)&v7[-v29] )
            break;
          if ( v29 < (unsigned __int64)v7 )
          {
            v36[v35] = v29;
            v36[v35 + 62] = v7;
            v8 = ++v35;
          }
          if ( v6 >= v31 )
          {
LABEL_19:
            v35 = --v8;
            if ( v8 < 0 )
              return;
            v6 = (char *)v36[v8];
            v7 = (char *)v36[v8 + 62];
          }
          else
          {
            v7 = v31;
          }
        }
        if ( v6 < v31 )
        {
          v36[v35] = v6;
          v36[v35 + 62] = v31;
          v8 = ++v35;
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
