/*
 * XREFs of KiSendHeteroRescheduleIntRequestHelper @ 0x140204470
 * Callers:
 *     KiSendHeteroRescheduleIntRequest @ 0x1402043D4 (KiSendHeteroRescheduleIntRequest.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiCheckPreferredHeteroProcessor @ 0x1400427D0 (KiCheckPreferredHeteroProcessor.c)
 *     KiAcquireThreadStateLock @ 0x140043AC0 (KiAcquireThreadStateLock.c)
 */

char __fastcall KiSendHeteroRescheduleIntRequestHelper(unsigned __int64 a1, _QWORD *a2, unsigned int *a3)
{
  unsigned int *v5; // rax
  unsigned int v6; // ecx
  __int64 v7; // r14
  char v8; // r13
  unsigned __int64 v9; // rax
  char v10; // si
  __int64 v11; // rbx
  __int64 v12; // rdi
  char v13; // al
  __int64 v14; // rsi
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  struct _KPRCB *CurrentPrcb; // rax
  int v21; // [rsp+20h] [rbp-28h] BYREF
  int v22; // [rsp+24h] [rbp-24h] BYREF
  __int64 v23; // [rsp+28h] [rbp-20h] BYREF
  volatile signed __int64 *v24; // [rsp+30h] [rbp-18h] BYREF
  int v25; // [rsp+90h] [rbp+48h]
  unsigned int v26; // [rsp+98h] [rbp+50h]
  unsigned int v28; // [rsp+A8h] [rbp+60h]

  v25 = -1;
  v5 = a3;
  v28 = 0;
  v6 = 0;
  v7 = 0LL;
  v8 = 0;
  if ( a1 )
  {
    while ( 1 )
    {
      _BitScanForward64(&v9, a1);
      v21 = 0;
      v10 = v9;
      v26 = v9;
      _bittestandcomplement64((__int64 *)&a1, (unsigned int)v9);
      v11 = KiProcessorBlock[v9];
      v23 = v11;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v21);
        while ( *(_QWORD *)(v11 + 48) );
      }
      if ( (*(_BYTE *)(v11 + 35) & 1) != 0 )
      {
        v12 = *(_QWORD *)(v11 + 8);
        if ( v12 == *(_QWORD *)(v11 + 24) || *(_QWORD *)(v11 + 16) )
          v12 = *(_QWORD *)(v11 + 16);
        if ( !*(_BYTE *)(v11 + 11881) && (unsigned int)KiCheckPreferredHeteroProcessor(v12, v11, 0) )
        {
          if ( !a2 )
          {
            _InterlockedAdd16((volatile signed __int16 *)(v12 + 1420), 1u);
            _InterlockedAnd64((volatile signed __int64 *)(v11 + 48), 0LL);
            v22 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 64), 0LL) )
            {
              do
                KeYieldProcessorEx(&v22);
              while ( *(_QWORD *)(v12 + 64) );
            }
            v13 = KiAcquireThreadStateLock(v12, &v23, (volatile signed __int32 **)&v24);
            _InterlockedAdd16((volatile signed __int16 *)(v12 + 1420), 0xFFFFu);
            if ( (unsigned __int8)(v13 - 2) > 1u )
              goto LABEL_22;
            v14 = v23;
            if ( *(_BYTE *)(v23 + 11881) )
              goto LABEL_22;
            v15 = v23;
            if ( (unsigned int)KiCheckPreferredHeteroProcessor(v12, v23, 0) )
            {
              if ( !_interlockedbittestandset((volatile signed __int32 *)(v12 + 120), 0xBu) )
              {
                LOBYTE(v16) = 2;
                *(_BYTE *)(v14 + 11881) = 1;
                CurrentPrcb = KeGetCurrentPrcb();
                ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
                HalSendSoftwareInterrupt(v26, v16, v17, v18);
                v8 = 1;
              }
LABEL_22:
              v15 = v23;
            }
            if ( v15 )
              _InterlockedAnd64((volatile signed __int64 *)(v15 + 48), 0LL);
            if ( v24 )
              _InterlockedAnd64(v24, 0LL);
            *(_QWORD *)(v12 + 64) = 0LL;
            goto LABEL_33;
          }
          if ( (*(_DWORD *)(v12 + 120) & 0x800) == 0 )
          {
            v7 |= 1LL << v10;
            if ( v25 == -1 || *(char *)(v12 + 195) > v25 )
            {
              v8 = 1;
              v25 = *(char *)(v12 + 195);
              v28 = v26;
            }
          }
        }
      }
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 48), 0LL);
LABEL_33:
      if ( !a1 )
      {
        v5 = a3;
        v6 = v28;
        break;
      }
    }
  }
  if ( a2 )
    *a2 = v7;
  if ( v5 )
    *v5 = v6;
  return v8;
}
