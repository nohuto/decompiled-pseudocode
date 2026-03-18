/*
 * XREFs of EtwpUpdateGroupMasks @ 0x140749910
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x140748538 (EtwSetPerformanceTraceInformation.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x140749BD8 (EtwpUpdateLoggerGroupMasks.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     EtwpCheckSiloGroupMasks @ 0x14027DF70 (EtwpCheckSiloGroupMasks.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x140596CD8 (EtwpUpdateGlobalGroupMasks.c)
 *     EtwpMapEnableFlags @ 0x140749890 (EtwpMapEnableFlags.c)
 *     EtwpKernelTraceRundown @ 0x14074CFD4 (EtwpKernelTraceRundown.c)
 *     EtwpLogAlwaysPresentRundown @ 0x14074D2A8 (EtwpLogAlwaysPresentRundown.c)
 *     EtwpLogGroupMask @ 0x14074D318 (EtwpLogGroupMask.c)
 *     EtwpCCSwapStart @ 0x140752164 (EtwpCCSwapStart.c)
 *     EtwpCCSwapStop @ 0x14075225C (EtwpCCSwapStop.c)
 */

__int64 __fastcall EtwpUpdateGroupMasks(__int64 a1, __int64 a2)
{
  unsigned int v2; // r14d
  __int64 v4; // r15
  int v6; // eax
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // r13
  __int64 v10; // rcx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int updated; // ebp
  __int64 v16; // rax
  _BYTE *v17; // r9
  __int64 v18; // rbp
  __int64 v19; // r8
  int *v20; // rdx
  _BYTE *v21; // r10
  __int64 v22; // r11
  int v23; // ecx
  int v24; // eax
  int v25; // r12d
  __int64 v26; // rax
  int v27; // r9d
  unsigned int v28; // [rsp+30h] [rbp-88h]
  _BYTE v29[32]; // [rsp+38h] [rbp-80h] BYREF
  _BYTE v30[32]; // [rsp+58h] [rbp-60h] BYREF

  v2 = *(_DWORD *)a1;
  v4 = *(_QWORD *)(a1 + 2256);
  EtwpMapEnableFlags(a2, 1);
  if ( a2 )
  {
    v6 = *(_DWORD *)(a2 + 4);
    if ( (v6 & 1) != 0 || (v6 & 0x10) != 0 )
      *(_DWORD *)a2 |= 0x200u;
  }
  if ( *(_QWORD *)(a1 + 2256) == EtwpHostSiloState || (result = EtwpCheckSiloGroupMasks((char *)a2), (int)result >= 0) )
  {
    if ( a2
      && (*(_DWORD *)(a2 + 4) & 0x402) != 0
      && !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, KeGetCurrentThread()->PreviousMode) )
    {
      return 3221225569LL;
    }
    ExAcquirePushLockExclusiveEx(a1 + 704, 0LL);
    v8 = 256LL;
    v9 = 32LL * *(unsigned __int8 *)(a1 + 834);
    v28 = *(unsigned __int8 *)(a1 + 834);
    v10 = v9 + *(_QWORD *)(a1 + 2256) + 4208LL;
    if ( !v10
      || (v11 = *(_DWORD *)(v10 + 4), (v11 & 4) == 0)
      || (v11 & 0x100) == 0
      || a2 && (v12 = *(_DWORD *)(a2 + 4), (v12 & 4) != 0) && (v12 & 0x100) != 0 )
    {
      if ( a2 )
      {
        v13 = *(_DWORD *)(a2 + 4);
        if ( (v13 & 4) != 0 && (v13 & 0x100) != 0 )
        {
          if ( !v10 || (v14 = *(_DWORD *)(v10 + 4), (v14 & 4) == 0) || (v14 & 0x100) == 0 )
          {
            updated = EtwpCCSwapStart(*(unsigned int *)(a1 + 216), 256LL);
            if ( updated < 0 )
            {
LABEL_34:
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 704), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 704));
              KeAbPostRelease(a1 + 704);
              return (unsigned int)updated;
            }
          }
        }
      }
    }
    else
    {
      LOBYTE(v8) = 1;
      EtwpCCSwapStop(*(unsigned int *)(a1 + 216), v8);
    }
    v16 = *(_QWORD *)(a1 + 2256);
    v17 = &v29[-v9 - v16];
    v18 = v16 + v9;
    v19 = a2 - v9 - v16;
    v20 = (int *)(v16 + v9 + 4208);
    v21 = &v30[-v9 - v16];
    v22 = 8LL;
    do
    {
      v23 = *(int *)((char *)v20 + v19 - 4208);
      *(int *)((char *)v20 + (_QWORD)v17 - 4208) = *v20 & ~v23;
      v24 = *v20++;
      *(int *)((char *)v20 + (_QWORD)v21 - 4212) = v23 & ~v24;
      --v22;
    }
    while ( v22 );
    EtwpLogGroupMask(v4, v2, v18 + 4208, 32LL);
    v25 = *(_DWORD *)(a1 + 12) & 0x400;
    if ( !v25 )
      EtwpKernelTraceRundown((unsigned int)v29, v4, v2, 0, 0LL, 0);
    v26 = *(_QWORD *)(a1 + 2256);
    *(_OWORD *)(v26 + v9 + 4208) = *(_OWORD *)a2;
    *(_OWORD *)(v26 + v9 + 4224) = *(_OWORD *)(a2 + 16);
    updated = EtwpUpdateGlobalGroupMasks(v4, v2, v28);
    if ( updated >= 0 )
    {
      EtwpLogGroupMask(v4, v2, a2, 5LL);
      if ( !v25 || (*(_DWORD *)(a1 + 832) & 2) != 0 )
      {
        LOBYTE(v27) = 1;
        EtwpKernelTraceRundown((unsigned int)v30, v4, v2, v27, 0LL, 0);
      }
    }
    EtwpLogAlwaysPresentRundown(v4, v2);
    goto LABEL_34;
  }
  return result;
}
