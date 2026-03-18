/*
 * XREFs of MiAgeWorkingSet @ 0x14000BA50
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x14000B2A0 (MiTrimOrAgeWorkingSet.c)
 *     MiSharePages @ 0x1400326D0 (MiSharePages.c)
 *     MiForceAgeWorkingSet @ 0x1402598AC (MiForceAgeWorkingSet.c)
 * Callees:
 *     MiWalkPageTables @ 0x14000D8E0 (MiWalkPageTables.c)
 *     _TlgCreateSz @ 0x140076288 (_TlgCreateSz.c)
 *     _TlgWriteEx @ 0x14007A058 (_TlgWriteEx.c)
 *     MiGenerateRandomPte @ 0x140084070 (MiGenerateRandomPte.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140089F80 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiIsStoreProcess @ 0x1400D5C14 (MiIsStoreProcess.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402BA6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402BA844 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

_BOOL8 __fastcall MiAgeWorkingSet(__int64 a1, char a2, int a3, unsigned int a4)
{
  __int64 v7; // rdx
  __int64 v8; // r9
  _BYTE *v9; // r11
  unsigned __int64 v10; // rsi
  int v11; // r12d
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rsi
  unsigned int v14; // r15d
  LONG *v15; // r14
  volatile signed __int32 *v16; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v19; // edx
  unsigned __int64 v20; // rbx
  struct _KPRCB *v21; // rcx
  _DWORD *v22; // rdx
  _BYTE *v23; // rax
  unsigned __int64 v24; // r14
  unsigned __int128 v25; // rax
  unsigned __int64 v26; // r14
  __int64 v27; // rcx
  _BYTE *PoolWithTag; // rbx
  _QWORD *v29; // r8
  __int64 v30; // rsi
  _BYTE *v31; // rcx
  _BYTE *v32; // r9
  int v33; // r15d
  unsigned __int8 v34; // al
  int v35; // eax
  char v36; // al
  unsigned __int8 v37; // al
  int v38; // eax
  __int64 RandomPte; // rax
  unsigned __int8 v40; // dl
  int v41; // r8d
  const CHAR *v42; // rdi
  __int64 v45; // rdx
  int v46; // eax
  int v47; // eax
  bool v48; // zf
  signed __int32 v49; // eax
  int v50; // eax
  TraceLoggingHProvider v51; // r10
  char v52; // [rsp+48h] [rbp-C0h]
  unsigned __int8 v53; // [rsp+49h] [rbp-BFh] BYREF
  __int64 v54; // [rsp+50h] [rbp-B8h]
  int v55; // [rsp+58h] [rbp-B0h] BYREF
  int v56; // [rsp+5Ch] [rbp-ACh]
  int v57; // [rsp+60h] [rbp-A8h] BYREF
  int v58; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v59; // [rsp+68h] [rbp-A0h]
  __int64 v60; // [rsp+70h] [rbp-98h] BYREF
  __int64 v61; // [rsp+78h] [rbp-90h] BYREF
  __int64 v62; // [rsp+80h] [rbp-88h] BYREF
  __int64 v63; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v64[32]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v65[22]; // [rsp+198h] [rbp+90h] BYREF
  _DWORD v66[68]; // [rsp+248h] [rbp+140h] BYREF
  _BYTE v67[192]; // [rsp+358h] [rbp+250h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+418h] [rbp+310h] BYREF
  char *v69; // [rsp+438h] [rbp+330h]
  __int64 v70; // [rsp+440h] [rbp+338h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+448h] [rbp+340h] BYREF
  int *v72; // [rsp+458h] [rbp+350h]
  __int64 v73; // [rsp+460h] [rbp+358h]
  __int64 *v74; // [rsp+468h] [rbp+360h]
  __int64 v75; // [rsp+470h] [rbp+368h]
  __int64 *v76; // [rsp+478h] [rbp+370h]
  __int64 v77; // [rsp+480h] [rbp+378h]
  __int64 *v78; // [rsp+488h] [rbp+380h]
  __int64 v79; // [rsp+490h] [rbp+388h]
  __int64 *v80; // [rsp+498h] [rbp+390h]
  __int64 v81; // [rsp+4A0h] [rbp+398h]
  int *v82; // [rsp+4A8h] [rbp+3A0h]
  __int64 v83; // [rsp+4B0h] [rbp+3A8h]
  void *retaddr; // [rsp+510h] [rbp+408h]

  v52 = a2;
  memset(v64, 0, sizeof(v64));
  memset(v65, 0, sizeof(v65));
  v8 = *(_QWORD *)(a1 + 16);
  v9 = 0LL;
  v10 = *(_QWORD *)(a1 + 136);
  v11 = 3;
  v54 = v8;
  v12 = *(_QWORD *)(v8 + 32);
  if ( v10 <= v12 )
    goto LABEL_50;
  v13 = v10 - v12;
  v14 = 10;
  if ( a4 )
    v14 = a4;
  v56 = a3 & 4;
  if ( (a3 & 4) == 0 )
  {
    v15 = &dword_1403CCD68;
    if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
      v16 = &dword_1403CCD68;
    else
      v16 = (volatile signed __int32 *)(a1 + 232);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      LOBYTE(v7) = -1;
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v16, v7);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v55 = 0;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v47 = SchedulerAssist[5];
          SchedulerAssist[5] = v47 + 1;
          if ( v47 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
          {
            KiPerformUnboostKick(CurrentPrcb);
            v8 = v54;
          }
        }
      }
      if ( _interlockedbittestandset(v16, 0x1Fu) )
      {
        KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
        LOBYTE(v45) = -1;
        v46 = ExpWaitForSpinLockExclusiveAndAcquire(v16, v45);
        v8 = v54;
        v9 = 0LL;
        v55 = v46;
      }
      v19 = *v16;
      if ( (*v16 & 0xBFFFFFFF) == 0x80000000 )
        goto LABEL_12;
      do
      {
        if ( (v19 & 0x40000000) == 0 )
        {
          v49 = _InterlockedCompareExchange(v16, v19 | 0x40000000, v19);
          v48 = v19 == v49;
          v19 = v49;
          if ( !v48 )
            continue;
        }
        KeYieldProcessorEx(&v55);
        v19 = *v16;
      }
      while ( (v19 & 0xBFFFFFFF) != 0x80000000 );
    }
    v8 = v54;
    v9 = 0LL;
LABEL_12:
    if ( (a3 & 2) != 0 )
    {
      v59 = *(unsigned int *)(v8 + 24);
      v20 = v59 + v13;
      *(_DWORD *)(v8 + 24) = (v59 + v13) % v14;
    }
    else
    {
      v59 = *(unsigned int *)(v8 + 28);
      v20 = v59 + v13;
      *(_DWORD *)(v8 + 28) = (v59 + v13) % v14;
    }
    if ( (*(_BYTE *)(a1 + 184) & 7) != 2 )
      v15 = (LONG *)(a1 + 232);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v15, retaddr);
      v8 = v54;
      v9 = 0LL;
    }
    else
    {
      *v15 = (int)v9;
    }
    v21 = KeGetCurrentPrcb();
    v22 = v21->SchedulerAssist;
    if ( v22 )
    {
      if ( v21->NestingLevel <= 1u )
      {
        v50 = v22[5] - 1;
        v22[5] = v50;
        if ( !v50 && !*((_BYTE *)v22 + 25) && !*((_BYTE *)v22 + 27) )
        {
          KiPerformUnboostKick(v21);
          v8 = v54;
        }
      }
    }
    if ( v20 < v13 )
      v23 = v9;
    else
      v23 = (_BYTE *)v59;
    goto LABEL_21;
  }
  v23 = 0LL;
LABEL_21:
  v24 = v14 * (_QWORD)&v23[v13];
  v25 = v24 * (unsigned __int128)0x624DD2F1A9FBE77uLL;
  v26 = v24 / 0x3E8;
  if ( v26 > v13 )
  {
    v25 = v13 * v14 * (unsigned __int128)0x624DD2F1A9FBE77uLL;
    v26 = (*((_QWORD *)&v25 + 1) + ((v13 * v14 - *((_QWORD *)&v25 + 1)) >> 1)) >> 9;
  }
  v27 = *(unsigned __int16 *)(a1 + 174);
  PoolWithTag = v9;
  HIDWORD(v64[1]) = v14;
  v29 = *(_QWORD **)(qword_1403CBD88 + 8 * v27);
  v30 = v29[846];
  if ( (a3 & 3) != 0 )
  {
    *(_QWORD *)&v25 = v29 + 296;
    *((_QWORD *)&v25 + 1) = v29[272] + v29[280];
    v31 = v9;
    v29 += 321;
    v32 = v9;
    if ( (unsigned __int64)v25 < (unsigned __int64)v29 )
    {
      do
      {
        v31 += *(_QWORD *)v25;
        v32 += *(_QWORD *)(v25 + 40);
        *(_QWORD *)&v25 = v25 + 80;
      }
      while ( (unsigned __int64)v25 < (unsigned __int64)(v29 - 5) );
      if ( (unsigned __int64)v25 < (unsigned __int64)v29 )
        *((_QWORD *)&v25 + 1) += *(_QWORD *)v25;
      *((_QWORD *)&v25 + 1) += &v32[(_QWORD)v31];
    }
    if ( *((_QWORD *)&v25 + 1) + *v29 < *(_QWORD *)(v30 + 80) )
    {
      if ( *(_BYTE *)(a1 + 186) != 2 )
      {
        if ( *((_QWORD *)&v25 + 1) >= *(_QWORD *)(v30 + 72) )
          v11 = 5;
        LODWORD(v64[1]) = v11;
      }
      if ( (*(_BYTE *)(a1 + 184) & 7) != 0 || !(unsigned int)MiIsStoreProcess(a1 - 1280) )
        WORD2(v64[0]) = *(_WORD *)(v30 + 2358);
    }
    if ( v26 <= 0x100 )
      goto LABEL_106;
    v33 = 509;
    if ( v26 < 0x1FD )
      v33 = v26;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (unsigned int)(v33 - 256) + 2072, 0x73576D4Du);
    if ( !PoolWithTag )
    {
LABEL_106:
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v30 + 132), 1, 0) )
      {
        PoolWithTag = v67;
        v33 = 20;
      }
      else
      {
        PoolWithTag = (_BYTE *)(v30 + 136);
        v33 = 256;
      }
    }
    v34 = *(_BYTE *)(a1 + 184) & 7;
    if ( v34 )
      v35 = v34 < 2u ? 2 : 0;
    else
      v35 = 1;
    v8 = v54;
    v9 = 0LL;
    *((_DWORD *)PoolWithTag + 3) = 0;
    *((_WORD *)PoolWithTag + 2) = 0;
    *((_QWORD *)PoolWithTag + 2) = 0LL;
    *(_DWORD *)PoolWithTag = v35;
    *((_DWORD *)PoolWithTag + 2) = v33;
    *((_QWORD *)PoolWithTag + 3) = 0LL;
    if ( (*(_BYTE *)(a1 + 184) & 7) == 0 && *(_QWORD *)(a1 + 584) )
    {
      v66[0] = 0;
      v64[31] = v66;
      v66[1] = 32;
    }
  }
  BYTE4(v65[0]) = v52;
  v36 = *(_BYTE *)(a1 + 184);
  v64[6] = v26;
  v65[3] = a1;
  LODWORD(v64[0]) = a3;
  v64[7] = PoolWithTag;
  v37 = v36 & 7;
  if ( v37 )
    v38 = v37 < 2u ? 2 : 0;
  else
    v38 = 1;
  LODWORD(v64[8]) = v38;
  v65[21] = v64;
  v65[19] = MiAgePte;
  v65[20] = MiAgeWorkingSetTail;
  v64[9] = 20LL;
  WORD2(v64[8]) = 4;
  v64[10] = v9;
  v64[11] = v9;
  LODWORD(v65[0]) = 14;
  if ( v56 )
  {
    RandomPte = MiGenerateRandomPte(v65, *((_QWORD *)&v25 + 1), v29, v8);
  }
  else if ( (a3 & 2) != 0 )
  {
    RandomPte = *(_QWORD *)(v8 + 16);
  }
  else
  {
    RandomPte = *(_QWORD *)(v8 + 8);
  }
  v65[7] = RandomPte;
  if ( !RandomPte )
    v65[5] = -1LL;
  v11 = MiWalkPageTables(v65);
  if ( PoolWithTag )
  {
    if ( PoolWithTag == (_BYTE *)(v30 + 136) )
    {
      _InterlockedAnd((volatile signed __int32 *)(v30 + 132), 0);
    }
    else if ( PoolWithTag != v67 )
    {
      ExFreePoolWithTag(PoolWithTag, 0);
    }
  }
  if ( v11 == 4 )
    ++*(_DWORD *)(v30 + 2580);
LABEL_50:
  if ( hProvider )
  {
    v40 = *(_BYTE *)(a1 + 184) & 7;
    if ( v40 )
    {
      v41 = v40 < 2u ? *(_DWORD *)(a1 - 3000) : 0;
      v42 = 0LL;
    }
    else
    {
      v41 = *(_DWORD *)(a1 - 544);
      v42 = (const CHAR *)(a1 - 176);
    }
    if ( hProvider->LevelPlus1 > 5
      && (hProvider->KeywordAny & 1) != 0
      && (hProvider->KeywordAll & 1) == hProvider->KeywordAll )
    {
      v60 = v64[5];
      v61 = v64[2];
      v62 = v64[4];
      v63 = v64[3];
      v53 = v40;
      v69 = (char *)&v53;
      v57 = v41;
      v58 = a3;
      v70 = 1LL;
      TlgCreateSz(&pDesc, v42);
      v73 = 4LL;
      v74 = &v60;
      v72 = &v57;
      v76 = &v61;
      v78 = &v62;
      v80 = &v63;
      v82 = &v58;
      v75 = 8LL;
      v77 = 8LL;
      v79 = 8LL;
      v81 = 8LL;
      v83 = 4LL;
      TlgWriteEx(v51, &unk_14030A215, 0LL, 1u, 0LL, 0LL, 0xAu, &pData);
    }
  }
  return v11 == 4;
}
