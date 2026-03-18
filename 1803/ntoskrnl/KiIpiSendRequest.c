/*
 * XREFs of KiIpiSendRequest @ 0x1400362B0
 * Callers:
 *     MiDeleteVaTail @ 0x14000DF50 (MiDeleteVaTail.c)
 *     MiAgeWorkingSetTail @ 0x14000EAF0 (MiAgeWorkingSetTail.c)
 *     KxFlushEntireTb @ 0x140034BE0 (KxFlushEntireTb.c)
 *     KxFlushMultipleTb @ 0x140037C30 (KxFlushMultipleTb.c)
 *     KiIpiSendRequestEx @ 0x140038D54 (KiIpiSendRequestEx.c)
 *     KiIpiSendPacket @ 0x1400A4018 (KiIpiSendPacket.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 * Callees:
 *     KeSubtractAffinityEx @ 0x1400361C0 (KeSubtractAffinityEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall KiIpiSendRequest(
        __int64 a1,
        unsigned int a2,
        unsigned __int16 *a3,
        _OWORD *a4,
        unsigned __int8 a5,
        __int64 a6)
{
  unsigned int v6; // r15d
  unsigned int *v8; // rsi
  unsigned __int16 v9; // cx
  unsigned __int16 v10; // ax
  __int64 v11; // r12
  _OWORD *v12; // rax
  int v13; // edi
  unsigned __int64 v14; // rbx
  __int64 result; // rax
  int v16; // r10d
  __int64 v17; // r8
  unsigned int v18; // r13d
  __int64 v19; // rax
  unsigned __int16 v20; // r9
  unsigned __int64 v21; // rcx
  _QWORD *v22; // rsi
  int v23; // r11d
  unsigned __int64 v24; // r8
  __int64 v25; // r8
  __int64 v26; // rdi
  signed __int64 *v27; // r10
  signed __int64 v28; // rax
  signed __int64 v29; // rdx
  unsigned int v30; // edx
  char v31; // r10
  __int64 v32; // rdx
  char v33; // al
  _DWORD *v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 *v37; // rdx
  __int64 v38; // rcx
  unsigned __int16 v39; // cx
  unsigned int v40; // [rsp+20h] [rbp-E0h]
  unsigned int v41; // [rsp+24h] [rbp-DCh]
  int v42; // [rsp+28h] [rbp-D8h]
  unsigned int v43; // [rsp+2Ch] [rbp-D4h]
  unsigned int v44; // [rsp+30h] [rbp-D0h]
  unsigned int v45; // [rsp+34h] [rbp-CCh]
  unsigned __int64 v48; // [rsp+50h] [rbp-B0h]
  _DWORD v49[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v50[21]; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v51[44]; // [rsp+110h] [rbp+10h] BYREF

  v6 = a2;
  v41 = a2;
  v49[1] = 0;
  v8 = (unsigned int *)a1;
  if ( a2 )
  {
    v49[0] = KeActiveProcessors[0];
    if ( LOWORD(KeActiveProcessors[0]) )
      memmove(v50, qword_14044C5D8, 8LL * LOWORD(KeActiveProcessors[0]));
    if ( v6 == 1 )
    {
      v36 = (unsigned int)KiProcessorIndexToNumberMappingTable[v8[9]] >> 6;
      if ( LOWORD(v49[0]) > (unsigned int)v36 )
      {
        v37 = &v50[v36];
        v38 = *v37;
        _bittestandreset64(&v38, KiProcessorIndexToNumberMappingTable[v8[9]] & 0x3F);
        *v37 = v38;
      }
    }
    v11 = a6;
    if ( (a6 & 0x80000000) != 0 )
    {
      LODWORD(v11) = a6 & 0x7FFFFFFF;
      v39 = 0;
      if ( LOWORD(KeSleepingProcessors[0]) )
      {
        while ( !*(_QWORD *)&KeSleepingProcessors[2 * v39 + 2] )
        {
          if ( ++v39 >= LOWORD(KeSleepingProcessors[0]) )
            goto LABEL_5;
        }
        v41 = 0;
        v6 = 0;
        KeSubtractAffinityEx((unsigned __int16 *)v49, (unsigned __int16 *)KeSleepingProcessors, v49);
      }
    }
  }
  else
  {
    v9 = *a3;
    v10 = a3[1];
    LOWORD(v49[0]) = v9;
    HIWORD(v49[0]) = v10;
    if ( v9 )
      memmove(v50, a3 + 4, 8LL * v9);
    v11 = a6;
  }
LABEL_5:
  v12 = a4;
  v13 = (unsigned __int16)KeNumberNodes;
  v8[2913] = (unsigned __int16)KeNumberNodes;
  v51[0] = 1310721;
  v14 = v11 & 0xF | ((_QWORD)v12 << 16) | ((unsigned __int64)a5 << 8);
  v45 = v8[9];
  v8[2912] = 1;
  memset(&v51[1], 0, 0xA4uLL);
  v42 = 0;
  v43 = 0;
  result = 0LL;
  v40 = 0;
  v16 = 0;
  v17 = 0LL;
  v18 = 0;
  v44 = 0;
  if ( v13 )
  {
    do
    {
      v19 = KeNodeBlock[v18];
      v20 = *(_WORD *)(v19 + 144);
      if ( LOWORD(v49[0]) > v20 && (v21 = *(_QWORD *)(v19 + 136) & v50[v20], (v48 = v21) != 0) )
      {
        v22 = 0LL;
        v23 = v20;
        while ( v21 )
        {
LABEL_10:
          _BitScanForward64(&v24, v21);
          v23 = v20;
          v21 &= ~(1LL << v24);
          v25 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v20 + (unsigned __int8)v24];
          v26 = KiProcessorBlock[v25];
          _m_prefetchw((const void *)(v26 + 26944));
          v27 = (signed __int64 *)(v26 + ((v45 + 506LL) << 6));
          _m_prefetchw(v27);
          if ( !v22 )
          {
            v22 = v27 + 7;
            *((_DWORD *)v27 + 14) = (unsigned int)((0x101010101010101LL
                                                  * ((((v48 - ((v48 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                    + (((v48 - ((v48 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                                    + ((((v48 - ((v48 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                      + (((v48 - ((v48 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
          }
          v27[6] = (signed __int64)v22;
          if ( v11 == 5 )
          {
            *((_OWORD *)v27 + 1) = *a4;
            *((_OWORD *)v27 + 2) = a4[1];
          }
          v27[1] = v14;
          v28 = *(_QWORD *)(v26 + 26944);
          do
          {
            v29 = v28;
            *v27 = v28;
            v28 = _InterlockedCompareExchange64((volatile signed __int64 *)(v26 + 26944), (signed __int64)v27, v28);
          }
          while ( v28 != v29 );
          if ( v28 )
          {
            v16 = 1;
            v42 = 1;
          }
          else
          {
            v30 = KiProcessorIndexToNumberMappingTable[v25];
            v31 = v30 & 0x3F;
            v32 = v30 >> 6;
            v40 = 1;
            if ( LOWORD(v51[0]) <= (unsigned int)v32 )
              LOWORD(v51[0]) = v32 + 1;
            v33 = v31;
            v16 = v42;
            *(_QWORD *)&v51[2 * v32 + 2] |= 1LL << v33;
          }
        }
        while ( ++v20 < (unsigned int)(v23 + 1) )
        {
          v21 = *(_QWORD *)(8LL * v20 + 8);
          if ( v21 )
            goto LABEL_10;
        }
        v18 = v44;
        v17 = v43;
      }
      else
      {
        v17 = (unsigned int)(v17 + 1);
        v43 = v17;
      }
      v44 = ++v18;
    }
    while ( v18 < (unsigned __int16)KeNumberNodes );
    v8 = (unsigned int *)a1;
    v6 = v41;
    if ( (_DWORD)v17 )
    {
      v17 = (unsigned int)-(int)v17;
      result = (unsigned int)(v17 + _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 11652), v17));
      if ( !(_DWORD)result )
      {
        *(_DWORD *)(a1 + 11648) = 0;
        return result;
      }
    }
    result = v40;
  }
  if ( v11 == 5 || !v16 )
  {
    if ( v6 - 1 <= 1 )
      ++v8[6259];
    else
      ++v8[6260];
    v34 = v49;
    v35 = v6;
    return HalRequestIpi(v35, v34, v17);
  }
  if ( (_DWORD)result )
  {
    ++v8[6260];
    v34 = v51;
    v35 = 0LL;
    return HalRequestIpi(v35, v34, v17);
  }
  return result;
}
