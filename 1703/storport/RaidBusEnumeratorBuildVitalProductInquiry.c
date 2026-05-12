/*
 * XREFs of RaidBusEnumeratorBuildVitalProductInquiry @ 0x1C0015104
 * Callers:
 *     RaidBusEnumeratorGenericInquiry @ 0x1C0014B30 (RaidBusEnumeratorGenericInquiry.c)
 * Callees:
 *     RaidInitializeInquirySrb @ 0x1C005F3AC (RaidInitializeInquirySrb.c)
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
  char v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rax
  _QWORD *result; // rax
  __int64 v14; // r8
  __int64 v15; // rcx
  unsigned __int64 v16; // rax

  v6 = a3[2];
  v8 = *a1;
  v10 = 0;
  v11 = 0LL;
  RaidInitializeInquirySrb(v6, a2, a2 >> 8, HIWORD(a2), a3[4], a5, *(_BYTE *)(*a1 + 402));
  if ( *(_BYTE *)(v8 + 402) == 1 )
  {
    *(_QWORD *)(v6 + 104) = 0LL;
    v14 = 0LL;
    *(_DWORD *)(v6 + 24) |= 0x80110u;
    *(_QWORD *)(v6 + 64) = a3[4];
    *(_DWORD *)(v6 + 60) = a5;
    if ( *(_DWORD *)(v6 + 56) )
    {
      do
      {
        v15 = *(unsigned int *)(v6 + 4 * v14 + 120);
        if ( (unsigned int)v15 >= 0x80 )
        {
          v16 = *(unsigned int *)(v6 + 16);
          if ( (unsigned int)v15 <= (unsigned int)v16 )
          {
            if ( *(_DWORD *)(v15 + v6) == 64 && v15 + 40 <= v16 )
            {
              v11 = (unsigned int)v15 + v6 + 24;
              *(_QWORD *)((unsigned int)v15 + v6 + 16) = a3[3];
              *(_BYTE *)((unsigned int)v15 + v6 + 9) = 18;
              v10 = 1;
            }
            if ( v10 )
              break;
          }
        }
        v14 = (unsigned int)(v14 + 1);
      }
      while ( (unsigned int)v14 < *(_DWORD *)(v6 + 56) );
    }
  }
  else
  {
    *(_QWORD *)(v6 + 56) = 0LL;
    v11 = v6 + 72;
    *(_QWORD *)(v6 + 32) = a3[3];
    *(_BYTE *)(v6 + 11) = 18;
    v12 = a3[4];
    *(_DWORD *)(v6 + 12) |= 0x80110u;
    *(_QWORD *)(v6 + 24) = v12;
    *(_DWORD *)(v6 + 16) = a5;
  }
  if ( a4 == -1 )
  {
    *(_BYTE *)(v11 + 1) &= ~1u;
    *(_BYTE *)(v11 + 2) = 0;
  }
  else
  {
    *(_BYTE *)(v11 + 1) |= 1u;
    *(_BYTE *)(v11 + 2) = a4;
  }
  result = a6;
  *a6 = v6;
  return result;
}
