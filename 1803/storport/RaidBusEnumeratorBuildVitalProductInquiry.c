/*
 * XREFs of RaidBusEnumeratorBuildVitalProductInquiry @ 0x1C00140C0
 * Callers:
 *     RaidBusEnumeratorGenericInquiry @ 0x1C0013AEC (RaidBusEnumeratorGenericInquiry.c)
 * Callees:
 *     RaidInitializeInquirySrb @ 0x1C005F444 (RaidInitializeInquirySrb.c)
 */

_QWORD *__fastcall RaidBusEnumeratorBuildVitalProductInquiry(
        __int64 *a1,
        unsigned int a2,
        _QWORD *a3,
        int a4,
        unsigned int a5,
        _QWORD *a6)
{
  __int64 v6; // rdi
  __int64 v8; // rbx
  char v10; // si
  char v11; // r13
  __int64 v12; // rbp
  __int64 v13; // rax
  char v14; // al
  char v15; // al
  _QWORD *result; // rax
  unsigned int v17; // r8d
  __int64 v18; // rcx
  unsigned __int64 v19; // rax

  v6 = a3[2];
  v8 = *a1;
  v10 = 0;
  v11 = 0;
  v12 = 0LL;
  RaidInitializeInquirySrb(v6, a2, a2 >> 8, HIWORD(a2), a3[4], a5, *(_BYTE *)(*a1 + 402));
  if ( *(_BYTE *)(v8 + 402) == 1 )
  {
    *(_DWORD *)(v6 + 24) |= 0x80110u;
    v17 = 0;
    *(_QWORD *)(v6 + 104) = 0LL;
    *(_QWORD *)(v6 + 64) = a3[4];
    for ( *(_DWORD *)(v6 + 60) = a5; v17 < *(_DWORD *)(v6 + 56); ++v17 )
    {
      v18 = *(unsigned int *)(v6 + 4LL * v17 + 120);
      if ( (unsigned int)v18 >= 0x80 )
      {
        v19 = *(unsigned int *)(v6 + 16);
        if ( (unsigned int)v18 <= (unsigned int)v19 )
        {
          if ( *(_DWORD *)(v18 + v6) == 64 && v18 + 40 <= v19 )
          {
            v12 = (unsigned int)v18 + v6 + 24;
            *(_QWORD *)((unsigned int)v18 + v6 + 16) = a3[3];
            *(_BYTE *)((unsigned int)v18 + v6 + 9) = 18;
            v11 = 1;
          }
          if ( v11 )
            break;
        }
      }
    }
  }
  else
  {
    *(_QWORD *)(v6 + 56) = 0LL;
    v12 = v6 + 72;
    *(_QWORD *)(v6 + 32) = a3[3];
    *(_BYTE *)(v6 + 11) = 18;
    v13 = a3[4];
    *(_DWORD *)(v6 + 12) |= 0x80110u;
    *(_QWORD *)(v6 + 24) = v13;
    *(_DWORD *)(v6 + 16) = a5;
  }
  v14 = *(_BYTE *)(v12 + 1);
  if ( a4 == -1 )
    v15 = v14 & 0xFE;
  else
    v15 = v14 | 1;
  *(_BYTE *)(v12 + 1) = v15;
  if ( a4 != -1 )
    v10 = a4;
  result = a6;
  *(_BYTE *)(v12 + 2) = v10;
  *a6 = v6;
  return result;
}
