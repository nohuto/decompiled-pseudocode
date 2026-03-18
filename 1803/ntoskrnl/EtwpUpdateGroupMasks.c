/*
 * XREFs of EtwpUpdateGroupMasks @ 0x140628B88
 * Callers:
 *     EtwpUpdateLoggerGroupMasks @ 0x140628AE8 (EtwpUpdateLoggerGroupMasks.c)
 *     EtwSetPerformanceTraceInformation @ 0x1407A9CB0 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     EtwpCheckSiloGroupMasks @ 0x1402B1138 (EtwpCheckSiloGroupMasks.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x14057B938 (EtwpUpdateGlobalGroupMasks.c)
 *     EtwpLogGroupMask @ 0x140628E18 (EtwpLogGroupMask.c)
 *     EtwpKernelTraceRundown @ 0x140628E98 (EtwpKernelTraceRundown.c)
 *     EtwpLogAlwaysPresentRundown @ 0x140629084 (EtwpLogAlwaysPresentRundown.c)
 *     EtwpMapEnableFlags @ 0x1406290D4 (EtwpMapEnableFlags.c)
 *     EtwpCCSwapStart @ 0x140629B44 (EtwpCCSwapStart.c)
 *     EtwpCCSwapStop @ 0x140629C04 (EtwpCCSwapStop.c)
 */

__int64 __fastcall EtwpUpdateGroupMasks(__int64 a1, __int64 a2)
{
  unsigned int v2; // r14d
  __int64 v3; // rbx
  __int64 v4; // r15
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 v10; // rcx
  int v11; // eax
  int v12; // eax
  __int64 v13; // rax
  _DWORD *v14; // rdx
  __int64 v15; // r11
  int v16; // ecx
  int v17; // r13d
  __int64 v18; // rax
  int updated; // esi
  int v20; // r9d
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  char v24; // al
  __int64 result; // rax
  int v26; // eax
  int v27; // eax
  unsigned int v28; // [rsp+30h] [rbp-88h]
  _BYTE v29[32]; // [rsp+38h] [rbp-80h] BYREF
  _BYTE v30[32]; // [rsp+58h] [rbp-60h] BYREF

  v2 = *(_DWORD *)a1;
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 1112);
  v6 = a2;
  LOBYTE(a2) = 1;
  EtwpMapEnableFlags(v6, a2);
  if ( v3 )
  {
    v7 = *(_DWORD *)(v3 + 4);
    if ( (v7 & 1) != 0 || (v7 & 0x10) != 0 )
      *(_DWORD *)v3 |= 0x200u;
  }
  if ( *(_QWORD *)(a1 + 1112) == EtwpHostSiloState || (result = EtwpCheckSiloGroupMasks((char *)v3), (int)result >= 0) )
  {
    if ( v3
      && (*(_DWORD *)(v3 + 4) & 0x402) != 0
      && !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, KeGetCurrentThread()->PreviousMode) )
    {
      return 3221225569LL;
    }
    ExAcquirePushLockExclusiveEx(a1 + 704, 0LL);
    v8 = 256LL;
    v28 = *(unsigned __int8 *)(a1 + 834);
    v9 = 32 * (*(unsigned __int8 *)(a1 + 834) + 132LL);
    v10 = v9 + *(_QWORD *)(a1 + 1112);
    if ( !v10
      || (v11 = *(_DWORD *)(v10 + 4), (v11 & 4) == 0)
      || (v11 & 0x100) == 0
      || v3 && (v26 = *(_DWORD *)(v3 + 4), (v26 & 4) != 0) && (v26 & 0x100) != 0 )
    {
      if ( v3 )
      {
        v12 = *(_DWORD *)(v3 + 4);
        if ( (v12 & 4) != 0 && (v12 & 0x100) != 0 )
        {
          if ( !v10 || (v27 = *(_DWORD *)(v10 + 4), (v27 & 4) == 0) || (v27 & 0x100) == 0 )
          {
            updated = EtwpCCSwapStart(*(unsigned int *)(a1 + 216), 256LL);
            if ( updated < 0 )
            {
LABEL_19:
              v24 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 704), 0xFFFFFFFFFFFFFFFFuLL);
              if ( (v24 & 2) != 0 && (v24 & 4) == 0 )
                ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 704), v21, v22, v23);
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
    v13 = *(_QWORD *)(a1 + 1112);
    v14 = (_DWORD *)(v9 + v13);
    v15 = 8LL;
    do
    {
      v16 = *(_DWORD *)((char *)v14 + v3 - v9 - v13);
      *(_DWORD *)&v29[-v9 - v13 + (_QWORD)v14] = *v14 & ~v16;
      *(_DWORD *)&v30[-v9 - v13 + (_QWORD)v14] = v16 & ~*v14;
      ++v14;
      --v15;
    }
    while ( v15 );
    EtwpLogGroupMask(v4, v2, v9 + v13, 32LL);
    v17 = *(_DWORD *)(a1 + 12) & 0x400;
    if ( !v17 )
      EtwpKernelTraceRundown((unsigned int)v29, v4, v2, 0, 0LL, 0);
    v18 = *(_QWORD *)(a1 + 1112);
    *(_OWORD *)(v9 + v18) = *(_OWORD *)v3;
    *(_OWORD *)(v9 + v18 + 16) = *(_OWORD *)(v3 + 16);
    updated = EtwpUpdateGlobalGroupMasks(v4, v2, v28);
    if ( updated >= 0 )
    {
      EtwpLogGroupMask(v4, v2, v3, 5LL);
      if ( !v17 || (*(_DWORD *)(a1 + 832) & 2) != 0 )
      {
        LOBYTE(v20) = 1;
        EtwpKernelTraceRundown((unsigned int)v30, v4, v2, v20, 0LL, 0);
      }
    }
    EtwpLogAlwaysPresentRundown(v4, v2);
    goto LABEL_19;
  }
  return result;
}
