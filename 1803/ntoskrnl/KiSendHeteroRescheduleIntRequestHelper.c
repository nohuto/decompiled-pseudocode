/*
 * XREFs of KiSendHeteroRescheduleIntRequestHelper @ 0x1402488A8
 * Callers:
 *     KiSendHeteroRescheduleIntRequest @ 0x1402487EC (KiSendHeteroRescheduleIntRequest.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KiSendSoftwareInterrupt @ 0x14007CC8C (KiSendSoftwareInterrupt.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiCheckPreferredHeteroProcessor @ 0x1400ECA74 (KiCheckPreferredHeteroProcessor.c)
 *     KiReleaseThreadStateLock @ 0x1400EDBF0 (KiReleaseThreadStateLock.c)
 *     KiAcquireThreadStateLock @ 0x1400EDDA0 (KiAcquireThreadStateLock.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 */

char __fastcall KiSendHeteroRescheduleIntRequestHelper(unsigned __int64 a1, _QWORD *a2, unsigned int *a3, __int64 a4)
{
  int v5; // r13d
  unsigned int v6; // ecx
  __int64 v7; // rsi
  char v8; // r15
  unsigned int *v9; // rax
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rbx
  struct _KPRCB *v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rdx
  int v21; // [rsp+20h] [rbp-28h] BYREF
  int v22; // [rsp+24h] [rbp-24h] BYREF
  __int64 v23; // [rsp+28h] [rbp-20h] BYREF
  volatile signed __int64 *v24; // [rsp+30h] [rbp-18h] BYREF
  __int64 v25; // [rsp+38h] [rbp-10h]
  unsigned int v26; // [rsp+90h] [rbp+48h]
  unsigned int v27; // [rsp+98h] [rbp+50h]
  __int64 v29; // [rsp+A8h] [rbp+60h]

  v29 = a4;
  v5 = -1;
  v6 = 0;
  v7 = 0LL;
  v8 = 0;
  v27 = 0;
  v9 = a3;
  if ( a1 )
  {
    while ( 1 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _BitScanForward64(&v12, a1);
      a1 ^= 1LL << v12;
      v13 = (unsigned int)v12 + (*(unsigned __int8 *)(a4 + 208) << 6);
      v21 = 0;
      v25 = (unsigned int)KiProcessorNumberToIndexMappingTable[v13];
      v26 = v25;
      v14 = KiProcessorBlock[v25];
      v23 = v14;
      while ( 1 )
      {
        KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 1);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v14 + 48), 0LL) )
          break;
        KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 0);
        do
          KeYieldProcessorEx(&v21);
        while ( *(_QWORD *)(v14 + 48) );
      }
      v15 = *(_QWORD *)(v14 + 8);
      if ( (*(_BYTE *)(v14 + 35) & 1) != 0
        && !*(_QWORD *)(v14 + 16)
        && !*(_BYTE *)(v14 + 11881)
        && (unsigned int)KiCheckPreferredHeteroProcessor(*(_QWORD *)(v14 + 8), v14, 0) )
      {
        if ( !a2 )
        {
          _InterlockedIncrement16((volatile signed __int16 *)(v15 + 1420));
          _InterlockedAnd64((volatile signed __int64 *)(v14 + 48), 0LL);
          KiSetVpThreadSpinLockCount((__int64)KeGetCurrentPrcb(), 0);
          v16 = KeGetCurrentPrcb();
          v22 = 0;
          while ( 1 )
          {
            KiSetVpThreadSpinLockCount((__int64)v16, 1);
            if ( !_interlockedbittestandset64((volatile signed __int32 *)(v15 + 64), 0LL) )
              break;
            KiSetVpThreadSpinLockCount((__int64)v16, 0);
            do
              KeYieldProcessorEx(&v22);
            while ( *(_QWORD *)(v15 + 64) );
          }
          KiAcquireThreadStateLock(v15, &v23, (volatile signed __int32 **)&v24);
          _InterlockedAdd16((volatile signed __int16 *)(v15 + 1420), 0xFFFFu);
          if ( *(_BYTE *)(v15 + 388) == 2 )
          {
            v18 = v23;
            if ( !*(_BYTE *)(v23 + 11881)
              && (unsigned int)KiCheckPreferredHeteroProcessor(v15, v23, 0)
              && !_interlockedbittestandset((volatile signed __int32 *)(v15 + 120), 0xCu) )
            {
              LOBYTE(v19) = 2;
              *(_BYTE *)(v18 + 11881) = 1;
              KiSendSoftwareInterrupt(v26, v19);
              v8 = 1;
            }
          }
          KiReleaseThreadStateLock(v17, v23, v24);
          KiReleaseThreadLockSafe(v15);
          goto LABEL_28;
        }
        if ( (*(_DWORD *)(v15 + 120) & 0x1000) == 0 )
        {
          v7 |= 1LL << v25;
          if ( v5 == -1 || *(char *)(v15 + 195) > v5 )
          {
            v8 = 1;
            v5 = *(char *)(v15 + 195);
            v27 = v26;
          }
        }
      }
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 48), 0LL);
      KiSetVpThreadSpinLockCount((__int64)KeGetCurrentPrcb(), 0);
LABEL_28:
      a4 = v29;
      if ( !a1 )
      {
        v9 = a3;
        v6 = v27;
        break;
      }
    }
  }
  if ( a2 )
    *a2 = v7;
  if ( v9 )
    *v9 = v6;
  return v8;
}
