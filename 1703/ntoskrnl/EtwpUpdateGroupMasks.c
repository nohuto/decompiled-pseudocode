/*
 * XREFs of EtwpUpdateGroupMasks @ 0x140434C0C
 * Callers:
 *     EtwpUpdateLoggerGroupMasks @ 0x140434B6C (EtwpUpdateLoggerGroupMasks.c)
 *     EtwSetPerformanceTraceInformation @ 0x14070CEA0 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     EtwpLogGroupMask @ 0x140434E3C (EtwpLogGroupMask.c)
 *     EtwpKernelTraceRundown @ 0x140434EC0 (EtwpKernelTraceRundown.c)
 *     EtwpLogAlwaysPresentRundown @ 0x140435078 (EtwpLogAlwaysPresentRundown.c)
 *     EtwpUpdateKernelGroupMasks @ 0x1404350C0 (EtwpUpdateKernelGroupMasks.c)
 *     EtwpMapEnableFlags @ 0x1404357C4 (EtwpMapEnableFlags.c)
 *     EtwpCCSwapStop @ 0x140435848 (EtwpCCSwapStop.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     EtwpCCSwapStart @ 0x14057CD1C (EtwpCCSwapStart.c)
 */

__int64 __fastcall EtwpUpdateGroupMasks(volatile signed __int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rdx
  unsigned int v7; // r13d
  __int64 v8; // rsi
  char *v9; // rdi
  int v10; // eax
  int v11; // eax
  char *v12; // rsi
  _DWORD *v13; // r8
  __int64 v14; // r11
  int v15; // edx
  int v16; // eax
  unsigned int v17; // esi
  int v18; // r12d
  int updated; // ebp
  int v20; // r8d
  int v22; // eax
  int v23; // eax
  _BYTE v24[32]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v25[32]; // [rsp+50h] [rbp-68h] BYREF

  v2 = a2;
  v4 = a2;
  LOBYTE(a2) = 1;
  EtwpMapEnableFlags(v4, a2);
  if ( v2 )
  {
    v5 = *(_DWORD *)(v2 + 4);
    if ( (v5 & 1) != 0 || (v5 & 0x10) != 0 )
      *(_DWORD *)v2 |= 0x200u;
    if ( (v5 & 0x402) != 0 && !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, KeGetCurrentThread()->PreviousMode) )
      return 3221225569LL;
  }
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(a1 + 86), 0LL);
  v7 = *((unsigned __int8 *)a1 + 818);
  v8 = 32LL * *((unsigned __int8 *)a1 + 818);
  v9 = (char *)&EtwpGroupMasks + v8;
  if ( (_UNKNOWN *)((char *)&EtwpGroupMasks + v8) )
  {
    v10 = *((_DWORD *)v9 + 1);
    if ( (v10 & 4) != 0 )
    {
      if ( v9 )
      {
        if ( (v10 & 0x100) != 0 )
        {
          if ( !v2 || (v22 = *(_DWORD *)(v2 + 4), (v22 & 4) == 0) || (v22 & 0x100) == 0 )
          {
            LOBYTE(v6) = 1;
            EtwpCCSwapStop(*((unsigned int *)a1 + 50), v6);
LABEL_9:
            v12 = (char *)&EtwpGroupMasks + v8 - v2;
            v13 = (_DWORD *)v2;
            v14 = 8LL;
            do
            {
              v15 = *(_DWORD *)((char *)v13 + (_QWORD)v12);
              v16 = v15 & ~*v13;
              *(_DWORD *)&v25[(_QWORD)v13 - v2] = *v13 & ~v15;
              *(_DWORD *)&v24[(_QWORD)v13++ - v2] = v16;
              --v14;
            }
            while ( v14 );
            v17 = *(_DWORD *)a1;
            EtwpLogGroupMask(*(unsigned int *)a1, v9, 32LL);
            v18 = *((_DWORD *)a1 + 3) & 0x400;
            if ( !v18 )
              EtwpKernelTraceRundown((unsigned int)v24, v17, 0, 0, 0);
            *(_OWORD *)v9 = *(_OWORD *)v2;
            *((_OWORD *)v9 + 1) = *(_OWORD *)(v2 + 16);
            updated = EtwpUpdateKernelGroupMasks(v17, v7);
            if ( updated >= 0 )
            {
              EtwpLogGroupMask(v17, v2, 5LL);
              if ( !v18 || (a1[102] & 2) != 0 )
              {
                LOBYTE(v20) = 1;
                EtwpKernelTraceRundown((unsigned int)v25, v17, v20, 0, 0);
              }
            }
            EtwpLogAlwaysPresentRundown(v17);
            goto LABEL_17;
          }
        }
      }
    }
  }
  if ( !v2 )
    goto LABEL_9;
  v11 = *(_DWORD *)(v2 + 4);
  if ( (v11 & 4) == 0 )
    goto LABEL_9;
  if ( (v11 & 0x100) == 0 )
    goto LABEL_9;
  if ( v9 )
  {
    v23 = *((_DWORD *)v9 + 1);
    if ( (v23 & 4) != 0 && (v23 & 0x100) != 0 )
      goto LABEL_9;
  }
  updated = EtwpCCSwapStart(*((unsigned int *)a1 + 50));
  if ( updated >= 0 )
    goto LABEL_9;
LABEL_17:
  if ( (_InterlockedExchangeAdd64(a1 + 86, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 86);
  KeAbPostRelease((ULONG_PTR)(a1 + 86));
  return (unsigned int)updated;
}
