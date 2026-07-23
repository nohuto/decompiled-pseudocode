/*
 * XREFs of PfpPrivSourceEnum @ 0x1404FD22C
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x1404C4070 (PfQuerySuperfetchInformation.c)
 * Callees:
 *     MmQueryProcessWorkingSetSwapPages @ 0x14000A570 (MmQueryProcessWorkingSetSwapPages.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     MmGetNextSession @ 0x1400B15D0 (MmGetNextSession.c)
 *     RtlStringCbCopyA @ 0x1400B9B10 (RtlStringCbCopyA.c)
 *     SmStoreExistsForProcess @ 0x1400B9BB4 (SmStoreExistsForProcess.c)
 *     MiFillSessionWorkingSetEntry @ 0x14012D7B0 (MiFillSessionWorkingSetEntry.c)
 *     MmQuerySystemMemoryInformation @ 0x14012F138 (MmQuerySystemMemoryInformation.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14017DF80 (ZwQuerySystemInformation.c)
 *     memset @ 0x140192F40 (memset.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     PsQueryProcessAttributes @ 0x140486A80 (PsQueryProcessAttributes.c)
 *     ProbeForWrite @ 0x1404A3950 (ProbeForWrite.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x1404F1C68 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     ExGetNextProcess @ 0x1404FD7E4 (ExGetNextProcess.c)
 *     PfpPrivSourceAdd @ 0x1404FD8F0 (PfpPrivSourceAdd.c)
 *     PsGetProcessDeepFreezeStats @ 0x1404FD958 (PsGetProcessDeepFreezeStats.c)
 *     MmGetSessionGlobalVA @ 0x140593944 (MmGetSessionGlobalVA.c)
 *     SmProcessQueryStoreStats @ 0x140738888 (SmProcessQueryStoreStats.c)
 */

__int64 __fastcall PfpPrivSourceEnum(__int64 a1, KPROCESSOR_MODE a2, _DWORD *a3)
{
  _DWORD *v3; // r12
  __int64 *v5; // rsi
  __int64 v6; // rdi
  unsigned __int64 v7; // r14
  _DWORD *v8; // rbx
  unsigned int v9; // eax
  char v10; // r12
  void *i; // rcx
  __int64 NextSession; // rax
  void *j; // rcx
  __int64 NextProcess; // rax
  unsigned __int64 v15; // rcx
  unsigned int v16; // eax
  int v17; // ebx
  unsigned __int64 v18; // rax
  __int64 *k; // rcx
  int v20; // r12d
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  int v24; // ebx
  unsigned __int64 v25; // rax
  int IsAppContainerOrIdentifyLevelContext; // eax
  char v28; // [rsp+20h] [rbp-208h] BYREF
  char v29[3]; // [rsp+21h] [rbp-207h] BYREF
  int v30; // [rsp+24h] [rbp-204h]
  _DWORD *v31; // [rsp+28h] [rbp-200h]
  unsigned __int64 v32; // [rsp+30h] [rbp-1F8h] BYREF
  unsigned __int64 v33; // [rsp+38h] [rbp-1F0h]
  __int64 v34; // [rsp+40h] [rbp-1E8h]
  unsigned __int64 v35; // [rsp+48h] [rbp-1E0h] BYREF
  _QWORD v36[12]; // [rsp+50h] [rbp-1D8h] BYREF
  __int64 v37; // [rsp+B0h] [rbp-178h]
  PVOID Object; // [rsp+B8h] [rbp-170h]
  _DWORD *v39; // [rsp+C8h] [rbp-160h]
  char v40[8]; // [rsp+D0h] [rbp-158h] BYREF
  __int64 v41; // [rsp+D8h] [rbp-150h]
  __int64 v42; // [rsp+E0h] [rbp-148h]
  __int64 v43; // [rsp+E8h] [rbp-140h]
  __int64 v44; // [rsp+F0h] [rbp-138h]
  __int128 v45; // [rsp+F8h] [rbp-130h] BYREF
  char v46[24]; // [rsp+118h] [rbp-110h] BYREF
  unsigned __int64 v47; // [rsp+130h] [rbp-F8h]
  __int128 v48; // [rsp+140h] [rbp-E8h]
  unsigned __int64 SystemInformation[8]; // [rsp+1B0h] [rbp-78h] BYREF

  v3 = a3;
  v31 = a3;
  v37 = a1;
  v39 = a3;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v5 = 0LL;
  Object = 0LL;
  v6 = 0LL;
  LODWORD(v7) = 0;
  v8 = *(_DWORD **)(a1 + 16);
  v35 = (unsigned __int64)v8;
  v9 = *(_DWORD *)(a1 + 24);
  if ( v9 < 0x10 )
  {
    v17 = -1073741789;
  }
  else
  {
    if ( a2 )
      ProbeForWrite(v8, v9, 8u);
    v48 = *(_OWORD *)v8;
    v8[2] = 0;
    if ( (_DWORD)v48 != 8 || (v30 = DWORD1(v48), (DWORD1(v48) & 0xFFFFFFFC) != 0) || (BYTE4(v48) & 3) == 3 )
    {
      v17 = -1073741811;
    }
    else
    {
      if ( SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a2) )
      {
        v10 = 0;
        v28 = 0;
        goto LABEL_9;
      }
      IsAppContainerOrIdentifyLevelContext = SeIsAppContainerOrIdentifyLevelContext(0LL, &v28);
      v17 = IsAppContainerOrIdentifyLevelContext;
      if ( IsAppContainerOrIdentifyLevelContext == -1073741659 )
      {
        v10 = 1;
        v28 = 1;
        goto LABEL_13;
      }
      if ( IsAppContainerOrIdentifyLevelContext >= 0 )
      {
        v10 = v28;
LABEL_9:
        if ( !v10 )
        {
          v33 = 1LL;
          for ( i = 0LL; ; i = (void *)NextSession )
          {
            NextSession = MmGetNextSession(i);
            v5 = (__int64 *)NextSession;
            if ( !NextSession )
              break;
            ++v33;
          }
        }
LABEL_13:
        for ( j = 0LL; ; j = (void *)NextProcess )
        {
          NextProcess = ExGetNextProcess(j);
          v6 = NextProcess;
          if ( !NextProcess )
            break;
          ++v33;
        }
        if ( v33 > 0xFFFFFFFF || (v15 = 96 * v33 + 16, v15 > 0xFFFFFFFF) )
        {
          v17 = -1073741670;
        }
        else
        {
          LODWORD(v7) = 96 * v33 + 16;
          v16 = *(_DWORD *)(v37 + 24);
          if ( (unsigned int)v15 > v16 )
          {
            v17 = -1073741789;
          }
          else
          {
            HIDWORD(v34) = (v16 - 16) / 0x60;
            v32 = v35;
            if ( v10 )
            {
LABEL_29:
              v6 = ExGetNextProcess(0LL);
              if ( v6 )
              {
                v20 = v30 & 1;
                while ( 1 )
                {
                  memset(v36, 0, sizeof(v36));
                  LODWORD(v36[0]) = 2;
                  HIDWORD(v36[0]) = *(_DWORD *)(v6 + 736);
                  LODWORD(v36[1]) = *(_DWORD *)(v6 + 1180);
                  v36[2] = (v6 ^ *(_QWORD *)(v6 + 776)) & 0x1FFFFFFFFFFFFFFFLL;
                  v36[3] = v6;
                  v21 = *(_QWORD *)(v6 + 1424);
                  v36[4] = v21;
                  v22 = *(_QWORD *)(v6 + 1416);
                  if ( v21 > v22 )
                    v22 = v21;
                  v36[10] = v22;
                  v23 = *(_QWORD *)(v6 + 920);
                  v36[5] = v23;
                  if ( v23 <= v36[4] )
                    v23 = v36[4];
                  v36[5] = v23;
                  LODWORD(v36[6]) = MmGetSessionIdEx(v6);
                  PsQueryProcessAttributes((struct _KPROCESS *)v6, v29, 0LL);
                  v24 = HIDWORD(v36[11]) & 0xFFFFFFF6 | v29[0] & 1 | (8 * SmStoreExistsForProcess());
                  HIDWORD(v36[11]) = v24;
                  PsGetProcessDeepFreezeStats(v6, v46);
                  if ( v47 )
                  {
                    v24 |= 2u;
                    HIDWORD(v36[11]) = v24;
                    LODWORD(v36[11]) = v47 / 0x2710;
                  }
                  if ( *(_BYTE *)(v6 + 1474) == 2 )
                    HIDWORD(v36[11]) = v24 | 4;
                  RtlStringCbCopyA((NTSTRSAFE_PSTR)&v36[6] + 4, 0x10uLL, (NTSTRSAFE_PCSTR)(v6 + 1104));
                  if ( v20 )
                  {
                    MmQueryProcessWorkingSetSwapPages(v6, &v36[9]);
                  }
                  else if ( (BYTE4(v48) & 2) != 0 && (int)SmProcessQueryStoreStats(v6, &v35, 0LL) >= 0 )
                  {
                    v36[9] = v35 >> 12;
                  }
                  v17 = PfpPrivSourceAdd(&v32, v36);
                  if ( v17 < 0 )
                    break;
                  v6 = ExGetNextProcess((PVOID)v6);
                  if ( !v6 )
                    goto LABEL_43;
                }
              }
              else
              {
LABEL_43:
                LODWORD(v7) = 96 * v34 + 16;
                v17 = 0;
              }
              goto LABEL_44;
            }
            memset(v36, 0, sizeof(v36));
            LODWORD(v36[0]) = 0;
            RtlStringCbCopyA((NTSTRSAFE_PSTR)&v36[6] + 4, 0x10uLL, "KernelSpace");
            v17 = ZwQuerySystemInformation(SystemPagedPoolInformationEx, SystemInformation, 0x40u, 0LL);
            if ( v17 >= 0 )
            {
              v17 = MmQuerySystemMemoryInformation(&v45);
              if ( v17 >= 0 )
              {
                v36[4] = SystemInformation[0] >> 12;
                v18 = v45;
                if ( (unsigned __int64)v45 <= SystemInformation[0] >> 12 )
                  v18 = SystemInformation[0] >> 12;
                v36[5] = v18;
                v17 = PfpPrivSourceAdd(&v32, v36);
                if ( v17 >= 0 )
                {
                  for ( k = 0LL; ; k = v5 )
                  {
                    v5 = (__int64 *)MmGetNextSession(k);
                    if ( !v5 )
                      break;
                    memset(v36, 0, sizeof(v36));
                    LODWORD(v36[0]) = 1;
                    HIDWORD(v36[0]) = MmGetSessionIdEx((__int64)v5);
                    v36[3] = MmGetSessionGlobalVA(v5);
                    MiFillSessionWorkingSetEntry((__int64)v40, v5[128]);
                    v36[4] = v44;
                    v36[10] = v41;
                    v36[5] = v42;
                    v36[9] = v43;
                    RtlStringCbCopyA((NTSTRSAFE_PSTR)&v36[6] + 4, 0x10uLL, "Session");
                    v17 = PfpPrivSourceAdd(&v32, v36);
                    if ( v17 < 0 )
                      goto LABEL_44;
                  }
                  goto LABEL_29;
                }
              }
            }
          }
        }
LABEL_44:
        v3 = v31;
      }
    }
  }
  if ( v5 )
    ObfDereferenceObject(v5);
  if ( v6 )
    ObfDereferenceObjectWithTag((PVOID)v6, 0x6E457350u);
  if ( v17 == -1073741789 )
  {
    v25 = v33;
    if ( (unsigned int)(v34 + 1) > v33 )
      v25 = (unsigned int)(v34 + 1);
    v7 = 96 * v25 + 16;
    if ( v7 > 0xFFFFFFFF )
    {
      LODWORD(v7) = 0;
      v17 = -1073741670;
    }
  }
  *v3 = v7;
  return (unsigned int)v17;
}
