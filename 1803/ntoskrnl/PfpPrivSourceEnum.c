/*
 * XREFs of PfpPrivSourceEnum @ 0x140538648
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x1405B0640 (PfQuerySuperfetchInformation.c)
 * Callees:
 *     MmGetNextSession @ 0x140074C10 (MmGetNextSession.c)
 *     MmQueryProcessWorkingSetSwapPages @ 0x14007F3AC (MmQueryProcessWorkingSetSwapPages.c)
 *     RtlStringCbCopyA @ 0x14008BC44 (RtlStringCbCopyA.c)
 *     SmStoreExistsForProcess @ 0x14008BCF0 (SmStoreExistsForProcess.c)
 *     MiFillSessionWorkingSetEntry @ 0x1400CD5E4 (MiFillSessionWorkingSetEntry.c)
 *     MmQuerySystemMemoryInformation @ 0x1400CF52C (MmQuerySystemMemoryInformation.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1401A7B80 (ZwQuerySystemInformation.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     PsQueryProcessAttributes @ 0x1404F8F34 (PsQueryProcessAttributes.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x140524180 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     ExGetNextProcess @ 0x140538C34 (ExGetNextProcess.c)
 *     PfpPrivSourceAdd @ 0x140538D6C (PfpPrivSourceAdd.c)
 *     PsGetProcessDeepFreezeStats @ 0x140538DD4 (PsGetProcessDeepFreezeStats.c)
 *     MmGetSessionGlobalVA @ 0x14057AAE0 (MmGetSessionGlobalVA.c)
 *     ProbeForWrite @ 0x14059C6A0 (ProbeForWrite.c)
 *     SmProcessQueryStoreStats @ 0x14079BE04 (SmProcessQueryStoreStats.c)
 */

__int64 __fastcall PfpPrivSourceEnum(__int64 a1, KPROCESSOR_MODE a2, _DWORD *a3)
{
  __int64 *v4; // r14
  __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  _DWORD *v7; // rbx
  SIZE_T v8; // rax
  int v9; // ebx
  _DWORD *v10; // r15
  int IsAppContainerOrIdentifyLevelContext; // eax
  char v12; // r15
  void *i; // rcx
  __int64 NextSession; // rax
  void *j; // rcx
  __int64 NextProcess; // rax
  unsigned __int64 v17; // rcx
  unsigned int v18; // eax
  unsigned __int64 v19; // rax
  __int64 *k; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  int v25; // ebx
  unsigned __int64 v26; // rax
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
  __int64 v38; // [rsp+B8h] [rbp-170h]
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

  v31 = a3;
  v37 = a1;
  v39 = a3;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v4 = 0LL;
  v38 = 0LL;
  v5 = 0LL;
  LODWORD(v6) = 0;
  v7 = *(_DWORD **)(a1 + 16);
  v35 = (unsigned __int64)v7;
  v8 = *(unsigned int *)(a1 + 24);
  if ( (unsigned int)v8 < 0x10 )
  {
    v9 = -1073741789;
    v10 = a3;
    goto LABEL_58;
  }
  if ( a2 )
    ProbeForWrite(v7, v8, 8u);
  v48 = *(_OWORD *)v7;
  v7[2] = 0;
  if ( (_DWORD)v48 != 8 || (v30 = DWORD1(v48), (DWORD1(v48) & 0xFFFFFFFC) != 0) || (BYTE4(v48) & 3) == 3 )
  {
    v9 = -1073741811;
    goto LABEL_7;
  }
  if ( SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a2) )
  {
    v12 = 0;
    v28 = 0;
  }
  else
  {
    IsAppContainerOrIdentifyLevelContext = SeIsAppContainerOrIdentifyLevelContext(0LL, &v28);
    v9 = IsAppContainerOrIdentifyLevelContext;
    if ( IsAppContainerOrIdentifyLevelContext == -1073741659 )
    {
      v12 = 1;
      v28 = 1;
      goto LABEL_20;
    }
    if ( IsAppContainerOrIdentifyLevelContext < 0 )
      goto LABEL_7;
    v12 = v28;
  }
  if ( !v12 )
  {
    v33 = 1LL;
    for ( i = 0LL; ; i = (void *)NextSession )
    {
      NextSession = MmGetNextSession(i);
      v4 = (__int64 *)NextSession;
      if ( !NextSession )
        break;
      ++v33;
    }
  }
LABEL_20:
  for ( j = 0LL; ; j = (void *)NextProcess )
  {
    NextProcess = ExGetNextProcess(j);
    v5 = NextProcess;
    if ( !NextProcess )
      break;
    ++v33;
  }
  if ( v33 > 0xFFFFFFFF || (v17 = 96 * v33 + 16, v17 > 0xFFFFFFFF) )
  {
    v9 = -1073741670;
  }
  else
  {
    LODWORD(v6) = 96 * v33 + 16;
    v18 = *(_DWORD *)(v37 + 24);
    if ( (unsigned int)v17 <= v18 )
    {
      HIDWORD(v34) = (v18 - 16) / 0x60;
      v32 = v35;
      if ( !v12 )
      {
        memset(v36, 0, sizeof(v36));
        LODWORD(v36[0]) = 0;
        RtlStringCbCopyA((NTSTRSAFE_PSTR)&v36[6] + 4, 0x10uLL, "KernelSpace");
        v9 = ZwQuerySystemInformation(SystemPagedPoolInformationEx, SystemInformation, 0x40u, 0LL);
        if ( v9 < 0 )
          goto LABEL_7;
        v9 = MmQuerySystemMemoryInformation(&v45);
        if ( v9 < 0 )
          goto LABEL_7;
        v36[4] = SystemInformation[0] >> 12;
        v19 = v45;
        if ( (unsigned __int64)v45 <= SystemInformation[0] >> 12 )
          v19 = SystemInformation[0] >> 12;
        v36[5] = v19;
        v9 = PfpPrivSourceAdd(&v32, v36);
        if ( v9 < 0 )
          goto LABEL_7;
        for ( k = 0LL; ; k = v4 )
        {
          v4 = (__int64 *)MmGetNextSession(k);
          if ( !v4 )
            break;
          memset(v36, 0, sizeof(v36));
          LODWORD(v36[0]) = 1;
          HIDWORD(v36[0]) = MmGetSessionIdEx((__int64)v4);
          v36[3] = MmGetSessionGlobalVA(v4);
          MiFillSessionWorkingSetEntry((__int64)v40, v4[128]);
          v36[4] = v44;
          v36[10] = v41;
          v36[5] = v42;
          v36[9] = v43;
          RtlStringCbCopyA((NTSTRSAFE_PSTR)&v36[6] + 4, 0x10uLL, "Session");
          v9 = PfpPrivSourceAdd(&v32, v36);
          if ( v9 < 0 )
            goto LABEL_7;
        }
      }
      v5 = ExGetNextProcess(0LL);
      if ( v5 )
      {
        v30 &= 1u;
        while ( 1 )
        {
          memset(v36, 0, sizeof(v36));
          LODWORD(v36[0]) = 2;
          HIDWORD(v36[0]) = *(_DWORD *)(v5 + 736);
          LODWORD(v36[1]) = *(_DWORD *)(v5 + 1180);
          v36[2] = (v5 ^ *(_QWORD *)(v5 + 776)) & 0x1FFFFFFFFFFFFFFFLL;
          v21 = v36[3];
          if ( !v12 )
            v21 = v5;
          v36[3] = v21;
          v22 = *(_QWORD *)(v5 + 1424);
          v36[4] = v22;
          v23 = *(_QWORD *)(v5 + 1416);
          if ( v22 > v23 )
            v23 = v22;
          v36[10] = v23;
          v24 = *(_QWORD *)(v5 + 920);
          v36[5] = v24;
          if ( v24 <= v36[4] )
            v24 = v36[4];
          v36[5] = v24;
          LODWORD(v36[6]) = MmGetSessionIdEx(v5);
          PsQueryProcessAttributes((struct _KPROCESS *)v5, (__int64)v29, 0LL);
          v25 = HIDWORD(v36[11]) & 0xFFFFFFF6 | v29[0] & 1 | (8 * SmStoreExistsForProcess());
          HIDWORD(v36[11]) = v25;
          PsGetProcessDeepFreezeStats(v5, v46);
          if ( v47 )
          {
            v25 |= 2u;
            HIDWORD(v36[11]) = v25;
            LODWORD(v36[11]) = v47 / 0x2710;
          }
          if ( *(_BYTE *)(v5 + 1466) == 2 )
            HIDWORD(v36[11]) = v25 | 4;
          RtlStringCbCopyA((NTSTRSAFE_PSTR)&v36[6] + 4, 0x10uLL, (NTSTRSAFE_PCSTR)(v5 + 1104));
          if ( v30 )
          {
            MmQueryProcessWorkingSetSwapPages(v5, &v36[9]);
          }
          else if ( (BYTE4(v48) & 2) != 0 && (int)SmProcessQueryStoreStats(v5, &v35, 0LL) >= 0 )
          {
            v36[9] = v35 >> 12;
          }
          v9 = PfpPrivSourceAdd(&v32, v36);
          if ( v9 < 0 )
            break;
          v12 = v28;
          v5 = ExGetNextProcess((PVOID)v5);
          if ( !v5 )
            goto LABEL_57;
        }
      }
      else
      {
LABEL_57:
        LODWORD(v6) = 96 * v34 + 16;
        v9 = 0;
      }
      goto LABEL_7;
    }
    v9 = -1073741789;
  }
LABEL_7:
  v10 = v31;
LABEL_58:
  if ( v4 )
    ObfDereferenceObject(v4);
  if ( v5 )
    ObfDereferenceObjectWithTag((PVOID)v5, 0x6E457350u);
  if ( v9 == -1073741789 )
  {
    v26 = v33;
    if ( (unsigned int)(v34 + 1) > v33 )
      v26 = (unsigned int)(v34 + 1);
    v6 = 96 * v26 + 16;
    if ( v6 > 0xFFFFFFFF )
    {
      LODWORD(v6) = 0;
      v9 = -1073741670;
    }
  }
  *v10 = v6;
  return (unsigned int)v9;
}
