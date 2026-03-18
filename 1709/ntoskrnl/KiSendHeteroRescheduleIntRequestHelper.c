/*
 * XREFs of KiSendHeteroRescheduleIntRequestHelper @ 0x14020AAC8
 * Callers:
 *     KiSendHeteroRescheduleIntRequest @ 0x14020AA0C (KiSendHeteroRescheduleIntRequest.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiAcquireThreadStateLock @ 0x14008C950 (KiAcquireThreadStateLock.c)
 *     KiCheckPreferredHeteroProcessor @ 0x140092B80 (KiCheckPreferredHeteroProcessor.c)
 *     KiSendSoftwareInterrupt @ 0x1400ABAA4 (KiSendSoftwareInterrupt.c)
 */

char __fastcall KiSendHeteroRescheduleIntRequestHelper(unsigned __int64 a1, _QWORD *a2, unsigned int *a3, __int64 a4)
{
  unsigned int *v4; // rax
  unsigned int v6; // edx
  unsigned __int64 v7; // r13
  __int64 v8; // r14
  char v9; // r12
  unsigned __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rbx
  char v13; // al
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rdx
  unsigned int v18; // [rsp+20h] [rbp-28h]
  int v19; // [rsp+24h] [rbp-24h] BYREF
  int v20; // [rsp+28h] [rbp-20h] BYREF
  __int64 v21; // [rsp+30h] [rbp-18h] BYREF
  volatile signed __int64 *v22; // [rsp+38h] [rbp-10h] BYREF
  int v23; // [rsp+90h] [rbp+48h]
  unsigned int v24; // [rsp+98h] [rbp+50h]
  __int64 v26; // [rsp+A8h] [rbp+60h]

  v26 = a4;
  v23 = -1;
  v4 = a3;
  v6 = 0;
  v7 = a1;
  v18 = 0;
  v8 = 0LL;
  v9 = 0;
  if ( a1 )
  {
    while ( 1 )
    {
      _BitScanForward64(&v10, v7);
      v19 = 0;
      v7 ^= 1LL << v10;
      v24 = KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(a4 + 208) + (unsigned int)v10];
      v11 = KiProcessorBlock[v24];
      v21 = v11;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v19);
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
            _InterlockedIncrement16((volatile signed __int16 *)(v12 + 1420));
            _InterlockedAnd64((volatile signed __int64 *)(v11 + 48), 0LL);
            v20 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 64), 0LL) )
            {
              do
                KeYieldProcessorEx(&v20);
              while ( *(_QWORD *)(v12 + 64) );
            }
            v13 = KiAcquireThreadStateLock(v12, &v21, (volatile signed __int32 **)&v22);
            _InterlockedAdd16((volatile signed __int16 *)(v12 + 1420), 0xFFFFu);
            if ( *(_BYTE *)(v12 + 388) != 2 && v13 != 3 )
              goto LABEL_23;
            v14 = v21;
            if ( *(_BYTE *)(v21 + 11881) )
              goto LABEL_23;
            v15 = v21;
            if ( (unsigned int)KiCheckPreferredHeteroProcessor(v12, v21, 0) )
            {
              if ( !_interlockedbittestandset((volatile signed __int32 *)(v12 + 120), 0xCu) )
              {
                LOBYTE(v16) = 2;
                *(_BYTE *)(v14 + 11881) = 1;
                KiSendSoftwareInterrupt(v24, v16);
                v9 = 1;
              }
LABEL_23:
              v15 = v21;
            }
            if ( v15 )
              _InterlockedAnd64((volatile signed __int64 *)(v15 + 48), 0LL);
            if ( v22 )
              _InterlockedAnd64(v22, 0LL);
            *(_QWORD *)(v12 + 64) = 0LL;
            goto LABEL_34;
          }
          if ( (*(_DWORD *)(v12 + 120) & 0x1000) == 0 )
          {
            v8 |= 1LL << v24;
            if ( v23 == -1 || *(char *)(v12 + 195) > v23 )
            {
              v9 = 1;
              v23 = *(char *)(v12 + 195);
              v18 = v24;
            }
          }
        }
      }
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 48), 0LL);
LABEL_34:
      a4 = v26;
      if ( !v7 )
      {
        v4 = a3;
        v6 = v18;
        break;
      }
    }
  }
  if ( a2 )
    *a2 = v8;
  if ( v4 )
    *v4 = v6;
  return v9;
}
