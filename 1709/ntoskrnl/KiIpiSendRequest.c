/*
 * XREFs of KiIpiSendRequest @ 0x14005B830
 * Callers:
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     KeFlushMultipleRangeTb @ 0x140057530 (KeFlushMultipleRangeTb.c)
 *     KiIpiSendRequestEx @ 0x14005B510 (KiIpiSendRequestEx.c)
 *     KiIpiSendPacket @ 0x1400D3118 (KiIpiSendPacket.c)
 * Callees:
 *     KeSubtractAffinityEx @ 0x14005CAE0 (KeSubtractAffinityEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall KiIpiSendRequest(
        __int64 a1,
        unsigned int a2,
        unsigned __int16 *a3,
        _OWORD *a4,
        unsigned __int8 a5,
        __int64 a6)
{
  unsigned int v7; // r12d
  __int64 v8; // r13
  unsigned __int16 v9; // r10
  unsigned __int16 v10; // ax
  __int64 v11; // r15
  _OWORD *v12; // rax
  int v13; // edi
  unsigned __int64 v14; // rbx
  __int64 result; // rax
  int v16; // edx
  int v17; // ecx
  unsigned int v18; // esi
  __int64 v19; // rax
  unsigned __int16 v20; // r10
  unsigned __int64 v21; // r8
  _QWORD *v22; // r13
  unsigned __int64 v23; // r9
  int v24; // r11d
  unsigned __int64 v25; // rdx
  __int64 v26; // r12
  __int64 v27; // rdi
  signed __int64 *v28; // rdx
  signed __int64 v29; // rax
  signed __int64 v30; // rcx
  unsigned int v31; // ecx
  char v32; // r8
  __int64 v33; // rcx
  char v34; // al
  _DWORD *v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 *v38; // rdx
  __int64 v39; // rcx
  unsigned __int16 v40; // ax
  unsigned int v41; // [rsp+20h] [rbp-E0h]
  unsigned int v42; // [rsp+24h] [rbp-DCh]
  int v43; // [rsp+28h] [rbp-D8h]
  int v44; // [rsp+2Ch] [rbp-D4h]
  unsigned int v45; // [rsp+30h] [rbp-D0h]
  unsigned int v46; // [rsp+34h] [rbp-CCh]
  unsigned __int64 v49; // [rsp+50h] [rbp-B0h]
  _DWORD v50[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v51[21]; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v52[44]; // [rsp+110h] [rbp+10h] BYREF

  v41 = a2;
  v7 = a2;
  v50[1] = 0;
  v8 = a1;
  if ( a2 )
  {
    v50[0] = KeActiveProcessors;
    if ( (_WORD)KeActiveProcessors )
      memmove(v51, &qword_140401408, 8LL * (unsigned __int16)KeActiveProcessors);
    if ( v7 == 1 )
    {
      v37 = (unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(v8 + 36)] >> 6;
      if ( LOWORD(v50[0]) > (unsigned int)v37 )
      {
        v38 = &v51[v37];
        v39 = *v38;
        _bittestandreset64(&v39, KiProcessorIndexToNumberMappingTable[*(unsigned int *)(v8 + 36)] & 0x3F);
        *v38 = v39;
      }
    }
    v11 = a6;
    if ( (a6 & 0x80000000) != 0 )
    {
      LODWORD(v11) = a6 & 0x7FFFFFFF;
      v40 = 0;
      if ( LOWORD(KeSleepingProcessors[0]) )
      {
        while ( !*(_QWORD *)&KeSleepingProcessors[2 * v40 + 2] )
        {
          if ( ++v40 >= LOWORD(KeSleepingProcessors[0]) )
            goto LABEL_5;
        }
        v41 = 0;
        v7 = 0;
        KeSubtractAffinityEx(v50, KeSleepingProcessors, v50);
      }
    }
  }
  else
  {
    v9 = *a3;
    v10 = a3[1];
    LOWORD(v50[0]) = v9;
    HIWORD(v50[0]) = v10;
    if ( v9 )
      memmove(v51, a3 + 4, 8LL * v9);
    v11 = a6;
  }
LABEL_5:
  v12 = a4;
  v13 = (unsigned __int16)KeNumberNodes;
  *(_DWORD *)(v8 + 11652) = (unsigned __int16)KeNumberNodes;
  v52[0] = 1310721;
  v14 = v11 & 0xF | ((_QWORD)v12 << 16) | ((unsigned __int64)a5 << 8);
  v46 = *(_DWORD *)(v8 + 36);
  *(_DWORD *)(v8 + 11648) = 1;
  memset(&v52[1], 0, 0xA4uLL);
  v45 = 0;
  result = 0LL;
  v42 = 0;
  v16 = 0;
  v43 = 0;
  v17 = 0;
  v44 = 0;
  v18 = 0;
  if ( v13 )
  {
    do
    {
      v19 = KeNodeBlock[v18];
      v20 = *(_WORD *)(v19 + 144);
      if ( LOWORD(v50[0]) > v20 && (v21 = v51[v20] & *(_QWORD *)(v19 + 136), (v49 = v21) != 0) )
      {
        v22 = 0LL;
        v23 = v51[v20] & *(_QWORD *)(v19 + 136);
        v24 = v20;
        while ( v23 )
        {
LABEL_10:
          _BitScanForward64(&v25, v23);
          v24 = v20;
          v23 &= ~(1LL << v25);
          v26 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v20 + (unsigned __int8)v25];
          v27 = KiProcessorBlock[v26];
          _m_prefetchw((const void *)(v27 + 26944));
          v28 = (signed __int64 *)(v27 + ((v46 + 506LL) << 6));
          _m_prefetchw(v28);
          if ( !v22 )
          {
            v22 = v28 + 7;
            *((_DWORD *)v28 + 14) = (unsigned int)((0x101010101010101LL
                                                  * ((((v21 - ((v21 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                    + (((v21 - ((v21 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                                    + ((((v21 - ((v21 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                      + (((v21 - ((v21 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
          }
          v28[6] = (signed __int64)v22;
          if ( v11 == 5 )
          {
            *((_OWORD *)v28 + 1) = *a4;
            *((_OWORD *)v28 + 2) = a4[1];
          }
          v28[1] = v14;
          v29 = *(_QWORD *)(v27 + 26944);
          do
          {
            v30 = v29;
            *v28 = v29;
            v29 = _InterlockedCompareExchange64((volatile signed __int64 *)(v27 + 26944), (signed __int64)v28, v29);
          }
          while ( v29 != v30 );
          if ( v29 )
          {
            v21 = v49;
            v16 = 1;
            v43 = 1;
          }
          else
          {
            v31 = KiProcessorIndexToNumberMappingTable[v26];
            v32 = v31 & 0x3F;
            v33 = v31 >> 6;
            v42 = 1;
            if ( LOWORD(v52[0]) <= (unsigned int)v33 )
              LOWORD(v52[0]) = v33 + 1;
            v34 = v32;
            v21 = v49;
            *(_QWORD *)&v52[2 * v33 + 2] |= 1LL << v34;
            v16 = v43;
          }
        }
        while ( ++v20 < (unsigned int)(v24 + 1) )
        {
          v23 = *(_QWORD *)(8LL * v20 + 8);
          if ( v23 )
            goto LABEL_10;
        }
        v18 = v45;
        v8 = a1;
        v17 = v44;
      }
      else
      {
        v44 = ++v17;
      }
      v45 = ++v18;
    }
    while ( v18 < (unsigned __int16)KeNumberNodes );
    if ( v17 )
    {
      result = (unsigned int)(_InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 11652), -v17) - v17);
      if ( !(_DWORD)result )
      {
        *(_DWORD *)(v8 + 11648) = 0;
        return result;
      }
    }
    result = v42;
    v7 = v41;
  }
  if ( v11 == 5 || !v16 )
  {
    if ( v7 - 1 <= 1 )
      ++*(_DWORD *)(v8 + 25036);
    else
      ++*(_DWORD *)(v8 + 25040);
    v35 = v50;
    v36 = v7;
    return HalRequestIpi(v36, v35);
  }
  if ( (_DWORD)result )
  {
    ++*(_DWORD *)(v8 + 25040);
    v35 = v52;
    v36 = 0LL;
    return HalRequestIpi(v36, v35);
  }
  return result;
}
