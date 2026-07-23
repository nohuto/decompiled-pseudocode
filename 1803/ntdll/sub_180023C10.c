/*
 * XREFs of sub_180023C10 @ 0x180023C10
 * Callers:
 *     sub_180023AAC @ 0x180023AAC (sub_180023AAC.c)
 *     sub_180060414 @ 0x180060414 (sub_180060414.c)
 * Callees:
 *     sub_180022300 @ 0x180022300 (sub_180022300.c)
 *     TpSetTimerEx @ 0x180024F70 (TpSetTimerEx.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_1800623C8 @ 0x1800623C8 (sub_1800623C8.c)
 *     sub_1801022B8 @ 0x1801022B8 (sub_1801022B8.c)
 */

__int64 __fastcall sub_180023C10(__int64 a1, __int64 a2, char a3, int a4, _BYTE *a5)
{
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rbp
  _QWORD *v14; // r8
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdi
  __int64 v17; // rcx
  unsigned __int64 v18; // rbp
  __int64 v19; // rcx
  char v21; // al
  char v22; // cl
  unsigned int v23; // eax
  char v24; // dl
  __int64 v25; // rcx
  char v26; // cl

  while ( 1 )
  {
    v9 = 0LL;
    v10 = (a2 - (a2 & *(_QWORD *)a1)) >> 5;
    v11 = (unsigned __int16)~(*(_DWORD *)(a2 + 28) >> 8);
    if ( (unsigned int)v10 + (unsigned __int8)HIBYTE(*(_DWORD *)(a2 + 28)) < 0x100 )
    {
      v9 = a2 + 32LL * (unsigned __int8)HIBYTE(*(_DWORD *)(a2 + 28));
      if ( (*(_BYTE *)(v9 + 24) & 1) != 0 )
        v9 = 0LL;
    }
    if ( (unsigned int)v10 > *(unsigned __int8 *)(a1 + 10) )
    {
      v12 = a2 - 32;
      if ( (*(_BYTE *)(a2 - 32 + 24) & 2) == 0 )
        v12 += -32LL * *(unsigned __int8 *)(v12 + 31);
      v13 = 0LL;
      if ( (*(_BYTE *)(v12 + 24) & 1) == 0 )
        v13 = v12;
      if ( v13 )
      {
        sub_180022300(a1, v13);
        v26 = 2;
        *(_BYTE *)(v13 + 31) += *(_BYTE *)(a2 + 31);
        v11 = (unsigned __int16)~(*(_DWORD *)(v13 + 28) >> 8) + (unsigned int)v11;
        *(_DWORD *)(v13 + 28) ^= (*(_DWORD *)(v13 + 28) ^ (~(_DWORD)v11 << 8)) & 0xFFFF00;
        if ( *(_BYTE *)(a2 + 31) > 1u )
          v26 = 3;
        *(_BYTE *)(a2 + 24) &= ~v26;
        a2 = v13;
        *(_BYTE *)(32LL * ((unsigned int)*(unsigned __int8 *)(v13 + 31) - 1) + v13 + 31) = *(_BYTE *)(v13 + 31) - 1;
      }
    }
    *(_BYTE *)(a2 + 24) |= 0x11u;
    if ( v9 )
    {
      sub_180022300(a1, v9);
      v22 = *(_BYTE *)(a2 + 31);
      if ( v22 != 1 )
      {
        *(_BYTE *)(a2 + 32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 31) - 1) + 24) &= ~1u;
        v22 = *(_BYTE *)(a2 + 31);
      }
      *(_BYTE *)(a2 + 31) = v22 + *(_BYTE *)(v9 + 31);
      v23 = *(_DWORD *)(v9 + 28);
      *(_DWORD *)(a2 + 28) &= 0xFF0000FF;
      v11 = (unsigned __int16)~(v23 >> 8) + (unsigned int)v11;
      *(_DWORD *)(a2 + 28) |= (unsigned __int16)~(_WORD)v11 << 8;
      *(_BYTE *)(v9 + 24) &= ~2u;
      v24 = *(_BYTE *)(a2 + 31) - 1;
      v25 = 32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 31) - 1);
      *(_BYTE *)(v25 + a2 + 24) |= 1u;
      *(_BYTE *)(v25 + a2 + 31) = v24;
    }
    if ( !(_DWORD)v11 )
      break;
    if ( !a4 && (*(_BYTE *)(a1 + 13) & 1) == 0 )
    {
      v14 = *(_QWORD **)(a1 + 72);
      v15 = v14[1] >> *(_BYTE *)(a1 + 11);
      if ( v15 <= 8 )
        v15 = 8LL;
      v16 = v14[1] >> *(_BYTE *)(a1 + 12);
      v17 = v14[2];
      if ( v16 <= 8 )
        v16 = 8LL;
      if ( (dword_18015A43C & 0x20) != 0 )
        v17 += v14[3];
      v18 = v17 + v11;
      if ( v17 + v11 > v15 )
      {
        if ( (dword_18015A43C & 0x40) == 0 || byte_18015C3A8 || !dword_18015D2B4 )
          goto LABEL_27;
        if ( !_InterlockedCompareExchange(&dword_18015D2B0, 1, 0) )
        {
          TpSetTimerEx(Timer, &DueTime, 0, 0x1388u);
          if ( (byte_18015D028 & 8) != 0 )
            sub_1801022B8();
        }
      }
      if ( v18 <= v16 )
        break;
    }
LABEL_27:
    if ( (a3 & 1) == 0 )
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 24));
    sub_1800623C8(a1, a2, 0LL, *(unsigned __int8 *)(a2 + 31) << *(_BYTE *)(a1 + 9));
    if ( (a3 & 1) == 0 )
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 24));
    v21 = *(_BYTE *)(a2 + 24) & 0xEF;
    *a5 = -1;
    *(_BYTE *)(a2 + 24) = v21;
  }
  v19 = 32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 31) - 1);
  *(_BYTE *)(v19 + a2 + 24) &= ~1u;
  *(_BYTE *)(a2 + 24) &= 0xEEu;
  return a2;
}
