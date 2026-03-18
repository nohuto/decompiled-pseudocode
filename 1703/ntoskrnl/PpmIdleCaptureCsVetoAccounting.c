/*
 * XREFs of PpmIdleCaptureCsVetoAccounting @ 0x140227D34
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402301D4 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x140228778 (PpmIdleCsVetoAccountingUpdateBlock.c)
 *     PopDiagTraceSleepStudyBlocker @ 0x140232260 (PopDiagTraceSleepStudyBlocker.c)
 */

__int64 __fastcall PpmIdleCaptureCsVetoAccounting(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v3; // rsi
  KIRQL v4; // al
  __int64 v5; // rbx
  __int64 v6; // rdi
  KIRQL i; // r14
  __int64 v8; // rdx
  unsigned int v9; // edi
  __int64 v10; // rsi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r9
  unsigned int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  char v16; // [rsp+28h] [rbp-49h] BYREF
  unsigned int v17; // [rsp+30h] [rbp-41h] BYREF
  int v18; // [rsp+38h] [rbp-39h] BYREF
  __int64 v19; // [rsp+3Ch] [rbp-35h]
  int v20; // [rsp+44h] [rbp-2Dh]
  char *v21; // [rsp+48h] [rbp-29h] BYREF
  int v22; // [rsp+50h] [rbp-21h]
  int v23; // [rsp+54h] [rbp-1Dh]
  GUID *v24; // [rsp+58h] [rbp-19h]
  int v25; // [rsp+60h] [rbp-11h]
  int v26; // [rsp+64h] [rbp-Dh]
  unsigned int *v27; // [rsp+68h] [rbp-9h]
  int v28; // [rsp+70h] [rbp-1h]
  int v29; // [rsp+74h] [rbp+3h]
  __int64 v30; // [rsp+78h] [rbp+7h]
  int v31; // [rsp+80h] [rbp+Fh]
  int v32; // [rsp+84h] [rbp+13h]
  int *v33; // [rsp+88h] [rbp+17h]
  int v34; // [rsp+90h] [rbp+1Fh]
  int v35; // [rsp+94h] [rbp+23h]
  unsigned __int64 v36; // [rsp+98h] [rbp+27h]
  int v37; // [rsp+A0h] [rbp+2Fh]
  int v38; // [rsp+A4h] [rbp+33h]

  v16 = PopWnfCsEnterScenarioId;
  result = PpmPlatformStates;
  v3 = a2;
  if ( PpmPlatformStates && *(_DWORD *)(PpmPlatformStates + 4) )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
    v5 = PpmPlatformStates;
    v6 = 0LL;
    for ( i = v4; (unsigned int)v6 < *(_DWORD *)PpmPlatformStates; v6 = (unsigned int)(v6 + 1) )
    {
      v8 = 384 * v6;
      LOBYTE(v8) = 4;
      PpmIdleCsVetoAccountingUpdateBlock(384 * v6 + v5 + 80, v8, 0LL);
      v5 = PpmPlatformStates;
    }
    if ( (_DWORD)v3 != -1 )
    {
      v23 = 0;
      v26 = 0;
      v35 = 0;
      v9 = 0;
      v20 = 0;
      v19 = (unsigned __int16)v3;
      v21 = &v16;
      v24 = &GUID_SLEEPSTUDY_BLOCKER_PARENT_PREVETO;
      v10 = 384 * v3;
      v33 = &v18;
      v18 = -1429427508;
      v22 = 1;
      v25 = 16;
      v34 = 16;
      if ( *(_DWORD *)(v10 + v5 + 108) )
      {
        do
        {
          v11 = *(_QWORD *)(v10 + v5 + 112) + ((unsigned __int64)v9 << 6);
          v12 = v11 + 56;
          if ( *(_QWORD *)(v11 + 56) )
          {
            HIDWORD(v19) = *(_DWORD *)(v11 + 16);
            v13 = *(unsigned __int16 *)(PpmIdleVetoList + 16LL * v9 + 8);
            v29 = 0;
            v17 = v13 >> 1;
            v27 = &v17;
            v28 = 4;
            v14 = *(unsigned __int16 *)(PpmIdleVetoList + 16LL * v9 + 8);
            v15 = *(_QWORD *)(PpmIdleVetoList + 16LL * v9 + 16);
            v32 = 0;
            v38 = 0;
            v30 = v15;
            v31 = v14;
            v36 = v12;
            v37 = 8;
            PopDiagTraceSleepStudyBlocker(v14, &v21);
          }
          ++v9;
        }
        while ( v9 < *(_DWORD *)(v10 + v5 + 108) );
      }
    }
    KxReleaseSpinLock(&PpmIdleVetoLock);
    result = i;
    __writecr8(i);
  }
  return result;
}
