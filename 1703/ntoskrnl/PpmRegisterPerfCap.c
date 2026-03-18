/*
 * XREFs of PpmRegisterPerfCap @ 0x14022D480
 * Callers:
 *     <none>
 * Callees:
 *     PpmReleaseLock @ 0x14006F948 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x14006FC2C (PpmAcquireLock.c)
 *     KeGetPrcb @ 0x140089100 (KeGetPrcb.c)
 *     PpmEventHiddenProcessorBiosCapChange @ 0x14017D594 (PpmEventHiddenProcessorBiosCapChange.c)
 *     PpmEventHiddenProcessorThermalCapChange @ 0x14017D688 (PpmEventHiddenProcessorThermalCapChange.c)
 *     PopDiagTraceProcessorThrottleDurationPerfTrack @ 0x140231E08 (PopDiagTraceProcessorThrottleDurationPerfTrack.c)
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x140231F50 (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     PpmEventBiosCapChange @ 0x140235420 (PpmEventBiosCapChange.c)
 *     PpmEventThermalCapChange @ 0x1402361DC (PpmEventThermalCapChange.c)
 *     PpmCheckApplyPerfConstraints @ 0x1406CEFBC (PpmCheckApplyPerfConstraints.c)
 */

__int64 __fastcall PpmRegisterPerfCap(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  unsigned int v4; // r8d
  __int64 v5; // rdi
  __int64 Prcb; // r13
  unsigned int v7; // r11d
  __int64 v8; // rbp
  unsigned int v9; // edx
  __int64 v10; // r10
  __int64 v11; // r9
  ULONG v12; // r14d
  unsigned int v13; // r14d
  unsigned int v14; // r15d
  int v15; // eax
  unsigned int v17; // [rsp+50h] [rbp+8h]

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  v2 = 0;
  if ( !*(_BYTE *)(a1 + 20) )
  {
    v12 = *(_DWORD *)(a1 + 4);
    v17 = v12;
    if ( v12 != -1 )
    {
      Prcb = KeGetPrcb(v12);
      v4 = v12;
      v5 = *(_QWORD *)(Prcb + 24312);
      v8 = *(_QWORD *)(Prcb + 24304);
      goto LABEL_15;
    }
LABEL_33:
    v2 = -1073741811;
    PpmReleaseLock(&PpmPerfPolicyLock);
    return v2;
  }
  v3 = PpmPerfDomainHead;
  v4 = -1;
  v5 = 0LL;
  v17 = -1;
  Prcb = 0LL;
  if ( (__int64 *)PpmPerfDomainHead == &PpmPerfDomainHead )
    goto LABEL_33;
  do
  {
    v7 = *(_DWORD *)(v3 + 200);
    v8 = v3;
    v9 = 0;
    if ( v7 )
    {
      v10 = *(_QWORD *)(v3 + 208);
      while ( 1 )
      {
        v11 = 152LL * v9;
        v5 = v11 + v10;
        if ( *(_BYTE *)(v11 + v10 + 16) )
        {
          if ( *(_DWORD *)(v11 + v10 + 20) == *(_DWORD *)(a1 + 4) )
            break;
        }
        if ( ++v9 >= v7 )
          goto LABEL_10;
      }
      v5 = v10 + v11;
LABEL_10:
      if ( v5 )
        break;
    }
    v3 = *(_QWORD *)v3;
  }
  while ( (__int64 *)v3 != &PpmPerfDomainHead );
LABEL_15:
  if ( !v8 || !v5 )
    goto LABEL_33;
  v13 = *(_DWORD *)(a1 + 8);
  v14 = *(_DWORD *)(a1 + 12);
  *(_DWORD *)(v5 + 32) = *(_DWORD *)(a1 + 16);
  v15 = *(_DWORD *)(v5 + 24);
  if ( v15 != v13 )
  {
    if ( v15 == 100 )
    {
      *(_QWORD *)(v5 + 40) = MEMORY[0xFFFFF78000000008];
    }
    else if ( v13 == 100 )
    {
      PopDiagTraceProcessorThrottleDurationPerfTrack(
        (MEMORY[0xFFFFF78000000008] - *(_QWORD *)(v5 + 40)) / 0x2710uLL,
        v4);
      *(_QWORD *)(v5 + 40) = 0LL;
    }
    *(_DWORD *)(v5 + 24) = v13;
    if ( *(_BYTE *)(v8 + 207) || !*(_BYTE *)(v5 + 16) )
      PpmEventBiosCapChange(Prcb, v13);
    else
      PpmEventHiddenProcessorBiosCapChange(*(_QWORD *)(v8 + 16), *(_DWORD *)(a1 + 4), v13);
    PopDiagTraceProcessorThrottlePerfTrack(100 - v13, v17);
  }
  if ( *(_DWORD *)(v5 + 28) != v14 )
  {
    *(_DWORD *)(v5 + 28) = v14;
    if ( *(_BYTE *)(v8 + 207) || !*(_BYTE *)(v5 + 16) )
      PpmEventThermalCapChange(Prcb, v14);
    else
      PpmEventHiddenProcessorThermalCapChange(*(_QWORD *)(v8 + 16), *(_DWORD *)(a1 + 4), v14);
  }
  *(_BYTE *)(v8 + 486) = 1;
  PpmCheckApplyPerfConstraints(0LL);
  return v2;
}
