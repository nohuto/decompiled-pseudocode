/*
 * XREFs of PfSetSuperfetchInformation @ 0x14048DBD0
 * Callers:
 *     NtSetSystemInformation @ 0x14048D108 (NtSetSystemInformation.c)
 * Callees:
 *     MmSetTrimWhileAgingState @ 0x1400043BC (MmSetTrimWhileAgingState.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     PfTSetTraceWorkerPriority @ 0x14014F258 (PfTSetTraceWorkerPriority.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PfpScenCtxPrefetchStateSet @ 0x1404764FC (PfpScenCtxPrefetchStateSet.c)
 *     PfpScenCtxServiceThreadSet @ 0x14047CCFC (PfpScenCtxServiceThreadSet.c)
 *     MmSetMinimumAgeRate @ 0x14048C4C4 (MmSetMinimumAgeRate.c)
 *     PfpRpControlRequest @ 0x1404910A8 (PfpRpControlRequest.c)
 *     PfpPrefetchRequest @ 0x14049284C (PfpPrefetchRequest.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     PfpPfnPrioRequest @ 0x1405B0D80 (PfpPfnPrioRequest.c)
 *     PfpLogEventRequest @ 0x1405EC688 (PfpLogEventRequest.c)
 *     PfGenerateTrace @ 0x1405EC870 (PfGenerateTrace.c)
 *     PfpProcessScenarioPhase @ 0x1406129BC (PfpProcessScenarioPhase.c)
 *     PfTInitialize @ 0x1406444B8 (PfTInitialize.c)
 *     PfpSetParameter @ 0x140644850 (PfpSetParameter.c)
 *     PfTStart @ 0x1406451D8 (PfTStart.c)
 *     PfpDeprioritizeOldPagesInWs @ 0x14075B794 (PfpDeprioritizeOldPagesInWs.c)
 *     PfTCleanup @ 0x14075C578 (PfTCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PfSetSuperfetchInformation(__int64 a1, _OWORD *a2, int a3, KPROCESSOR_MODE a4)
{
  __int64 v7; // rdx
  int v8; // eax
  int v9; // edi
  int v11; // ecx
  unsigned int v12; // ecx
  const void *v13; // rdi
  unsigned __int64 v14; // r12
  unsigned int v15; // eax
  unsigned int v16; // edx
  unsigned __int64 v17; // rcx
  int v18; // ecx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v20; // rdx
  unsigned int v21; // edi
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  _OWORD v26[2]; // [rsp+30h] [rbp-C8h] BYREF
  int v27; // [rsp+50h] [rbp-A8h]
  __int64 v28; // [rsp+58h] [rbp-A0h]
  int v29; // [rsp+60h] [rbp-98h]
  PVOID P; // [rsp+68h] [rbp-90h]
  __int64 v31; // [rsp+70h] [rbp-88h]
  int v32; // [rsp+78h] [rbp-80h]
  void *Src[2]; // [rsp+80h] [rbp-78h] BYREF
  _BYTE v34[4]; // [rsp+90h] [rbp-68h] BYREF
  int v35; // [rsp+94h] [rbp-64h]
  unsigned __int64 v36; // [rsp+98h] [rbp-60h]
  __int64 v37; // [rsp+A0h] [rbp-58h]
  _OWORD v38[5]; // [rsp+A8h] [rbp-50h] BYREF
  int v39; // [rsp+100h] [rbp+8h]

  P = 0LL;
  if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a4) )
  {
    v9 = -1073741790;
    goto LABEL_12;
  }
  if ( a3 != 32 )
  {
    v9 = -1073741820;
    goto LABEL_12;
  }
  memset(v26, 0, sizeof(v26));
  v26[0] = *a2;
  v26[1] = a2[1];
  if ( *(_QWORD *)&v26[0] != 0x6B7568430000002DLL )
    goto LABEL_86;
  if ( DWORD2(v26[0]) == 14 )
  {
    LOBYTE(v7) = a4;
    v8 = PfpRpControlRequest(v26, v7);
    goto LABEL_11;
  }
  if ( SDWORD2(v26[0]) > 14 )
  {
    if ( DWORD2(v26[0]) == 15 )
    {
      if ( DWORD2(v26[1]) != 4 )
        goto LABEL_96;
      if ( a4 && (v26[1] & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v35 = **(_DWORD **)&v26[1];
      v27 = v35 + dword_1403CD6DC;
      v9 = PfpSetParameter(KeyHandle, 4u);
      if ( v9 >= 0 )
        dword_1403CD6DC = v27;
      goto LABEL_12;
    }
    if ( DWORD2(v26[0]) != 18 )
    {
      switch ( DWORD2(v26[0]) )
      {
        case 0x13:
          if ( DWORD2(v26[1]) == 12 )
          {
            v9 = 0;
            if ( a4 && (v26[1] & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v31 = **(_QWORD **)&v26[1];
            v11 = *(_DWORD *)(*(_QWORD *)&v26[1] + 8LL);
            v32 = v11;
            if ( (_DWORD)v31 == 2 && SHIDWORD(v31) < 5 && (unsigned __int8)v32 <= 7u && BYTE1(v11) <= 7u && !HIWORD(v11) )
            {
              LOBYTE(v39) = BYTE4(v31);
              BYTE1(v39) = v32;
              HIWORD(v39) = BYTE1(v11);
              MmSetTrimWhileAgingState(v39);
              goto LABEL_12;
            }
            goto LABEL_86;
          }
          goto LABEL_96;
        case 0x16:
          goto LABEL_10;
        case 0x19:
          if ( DWORD2(v26[1]) == 8 )
          {
            v9 = 0;
            if ( a4 && (v26[1] & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v37 = **(_QWORD **)&v26[1];
            if ( (_DWORD)v37 == 1 )
            {
              MmSetMinimumAgeRate(HIDWORD(v37));
              goto LABEL_12;
            }
            goto LABEL_86;
          }
          goto LABEL_96;
        case 0x1A:
          LOBYTE(v7) = a4;
          v8 = PfpDeprioritizeOldPagesInWs(v26, v7);
          goto LABEL_11;
        case 0x1D:
LABEL_10:
          LOBYTE(v7) = a4;
          v8 = PfpPfnPrioRequest(v26, v7, v34);
LABEL_11:
          v9 = v8;
          goto LABEL_12;
      }
      goto LABEL_103;
    }
    if ( DWORD2(v26[1]) != 12 )
      goto LABEL_96;
    if ( a4 && (v26[1] & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v28 = **(_QWORD **)&v26[1];
    v18 = *(_DWORD *)(*(_QWORD *)&v26[1] + 8LL);
    v29 = v18;
    if ( (_DWORD)v28 == 2 && HIDWORD(v28) < 2 && (v18 & 0xFFFFFFFC) == 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&PfTGlobals, 0LL);
      if ( HIDWORD(v28) )
      {
        v21 = dword_1403CD188 & ~v29;
        PfTCleanup(&PfTGlobals);
        PfTInitialize(&PfTGlobals, v25, 1LL);
      }
      else
      {
        v21 = v29 & ~dword_1403CD188;
      }
      v9 = PfTStart(&PfTGlobals, v20, v21);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PfTGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&PfTGlobals, v22, v23, v24);
      KeAbPostRelease((ULONG_PTR)&PfTGlobals);
      KeLeaveCriticalRegion();
      PfpScenCtxServiceThreadSet((ULONG_PTR)&qword_1403CD6E0, HIDWORD(v28) == 0);
      goto LABEL_12;
    }
LABEL_86:
    v9 = -1073741811;
    goto LABEL_12;
  }
  switch ( DWORD2(v26[0]) )
  {
    case 3:
      v12 = 16;
      if ( DWORD2(v26[1]) != 16 )
        goto LABEL_96;
      if ( a4 && (v26[1] & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      *(_OWORD *)Src = **(_OWORD **)&v26[1];
      v13 = Src[1];
      if ( !Src[1] )
        goto LABEL_86;
      v14 = LODWORD(Src[0]);
      v15 = LODWORD(Src[0]) >> 7;
      if ( !(LODWORD(Src[0]) >> 7) )
        goto LABEL_86;
      v16 = (__int64)Src[0] & 0x1F;
      if ( v16 >= 2 )
      {
        if ( v16 <= 3 )
        {
          v12 = 36;
          goto LABEL_54;
        }
        if ( v16 == 5 )
        {
          v12 = 12;
          goto LABEL_54;
        }
        if ( v16 == 27 )
        {
LABEL_54:
          if ( v15 >= v12 && v15 < 0xFF0 )
          {
            P = ExAllocatePoolWithTag(PagedPool, v15, 0x44456650u);
            if ( P )
            {
              if ( a4 )
              {
                if ( ((unsigned __int8)v13 & 1) != 0 )
                  ExRaiseDatatypeMisalignment();
                v17 = (unsigned __int64)v13 + (v14 >> 7);
                if ( v17 > 0x7FFFFFFF0000LL || v17 < (unsigned __int64)v13 )
                  MEMORY[0x7FFFFFFF0000] = 0;
              }
              memmove(P, v13, v14 >> 7);
              Src[1] = P;
              v8 = PfpLogEventRequest(Src);
              goto LABEL_11;
            }
            v9 = -1073741670;
            goto LABEL_12;
          }
          goto LABEL_86;
        }
      }
      v9 = -1073741637;
      goto LABEL_12;
    case 4:
      PfGenerateTrace(&Thread, 0LL);
      v9 = 0;
      goto LABEL_12;
    case 5:
      LOBYTE(v7) = a4;
      v8 = PfpPrefetchRequest(v26, v7);
      goto LABEL_11;
    case 7:
      goto LABEL_10;
    case 0xA:
      if ( DWORD2(v26[1]) == 32 )
      {
        if ( a4 && (v26[1] & 7) != 0 )
          ExRaiseDatatypeMisalignment();
        v38[0] = **(_OWORD **)&v26[1];
        v38[1] = *(_OWORD *)(*(_QWORD *)&v26[1] + 16LL);
        LOBYTE(v7) = a4;
        v8 = PfpProcessScenarioPhase(v38, v7);
        goto LABEL_11;
      }
      goto LABEL_96;
  }
  if ( DWORD2(v26[0]) != 11 )
  {
    if ( DWORD2(v26[0]) == 13 )
    {
      if ( DWORD2(v26[1]) == 8 )
      {
        if ( a4 && (v26[1] & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v36 = **(_QWORD **)&v26[1];
        if ( (_WORD)v36 == 1 && (unsigned int)(HIDWORD(v36) - 1) <= 4 )
        {
          v8 = PfpScenCtxPrefetchStateSet(
                 (ULONG_PTR)&qword_1403CD6E0,
                 HIDWORD(v36),
                 ((unsigned int)(v36 >> 16) & 1) + 1,
                 0LL);
          goto LABEL_11;
        }
        goto LABEL_86;
      }
LABEL_96:
      v9 = -1073741306;
      goto LABEL_12;
    }
LABEL_103:
    v9 = -1073741821;
    goto LABEL_12;
  }
  if ( DWORD2(v26[1]) != 4 )
    goto LABEL_96;
  if ( a4 && (v26[1] & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v9 = -1073741431;
  if ( (int)PfTSetTraceWorkerPriority(**(_DWORD **)&v26[1]) <= 31 )
    v9 = 0;
LABEL_12:
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v9;
}
