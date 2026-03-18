/*
 * XREFs of MiRemovePageAnyColor @ 0x1400C7CB8
 * Callers:
 *     MiGetFreeOrZeroPageAnyColor @ 0x1400C6214 (MiGetFreeOrZeroPageAnyColor.c)
 * Callees:
 *     MiSlistGetFreePage @ 0x1400C807C (MiSlistGetFreePage.c)
 *     MiGetPerfectColorHeadPage @ 0x1400CAD78 (MiGetPerfectColorHeadPage.c)
 */

__int64 __fastcall MiRemovePageAnyColor(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // r10
  __int16 v4; // r11
  _BOOL8 v5; // rsi
  unsigned int v6; // ebx
  unsigned __int64 v7; // r9
  _QWORD *v8; // rcx
  __int64 result; // rax
  unsigned int v10; // r14d
  unsigned __int64 v11; // r12
  unsigned __int64 v13; // r13
  unsigned int v14; // edi
  unsigned int v15; // ebp
  int v16; // r9d
  unsigned __int64 v17; // rdx
  _DWORD *v18; // r8
  unsigned int v19; // r9d
  unsigned int v20; // ecx
  int v21; // r10d
  unsigned int v22; // r8d
  char v23; // cl
  __int64 v24; // [rsp+30h] [rbp-48h]
  BOOL v27; // [rsp+98h] [rbp+20h] BYREF
  BOOL v28; // [rsp+9Ch] [rbp+24h]

  v3 = a1;
  v4 = a3;
  v5 = (a3 & 2) == 0;
  v6 = a2;
  v7 = *(_QWORD *)(a1 + 16) + 8256 * ((unsigned __int64)a2 >> byte_140388501);
  if ( (unsigned int)MmNumberOfChannels > 1 )
    v8 = (_QWORD *)(v7
                  + 8 * (v5 + 2 * ((unsigned __int8)(MiChannelMaximumPowerOf2Mask & (a2 >> byte_140388502)) + 506LL)));
  else
    v8 = (_QWORD *)(v7 + 8032 + 8 * v5);
  if ( !*v8 )
    return 0LL;
  v10 = dword_140388540;
  v11 = 0LL;
  v13 = v7 + 16 * (v5 + 496);
  v24 = *(_QWORD *)(v3 + 8 * v5 + 2048);
  v14 = 0;
  v15 = dword_140388540 + 1;
  while ( 1 )
  {
    while ( 1 )
    {
      v16 = v6 & v10;
      v17 = v6 & v10;
      v18 = (_DWORD *)(*(_QWORD *)(v13 + 8) + 4 * (v17 >> 5));
      if ( (_DWORD *)v11 != v18 )
      {
        v11 = *(_QWORD *)(v13 + 8) + 4 * ((unsigned __int64)(v6 & v10) >> 5);
        v14 = *v18 & ~((1 << (v17 & 0x1F)) - 1);
        if ( (v4 & 0x1000) != 0 )
        {
          v21 = 0;
          v22 = (unsigned __int8)v10 & (unsigned __int8)a2 & 0xF;
          do
          {
            v23 = v22 & 0x1F;
            v22 += 16;
            v21 |= 1 << v23;
          }
          while ( v22 < 0x20 && v22 <= v10 );
          v14 &= ~v21;
          v3 = a1;
        }
        else if ( ((v17 ^ v15) & 0xFFFFFFFFFFFFFFE0uLL) == 0 )
        {
          v14 &= (1 << (v15 & 0x1F)) - 1;
        }
      }
      if ( v14 )
        break;
      v19 = (v16 & 0xFFFFFFE0) + 32;
      if ( v19 >= v15 )
      {
        v11 = 0LL;
        if ( !a2 || v15 != v10 + 1 )
          return 0LL;
        v15 = v10 & a2;
        v6 = a2 & ~v10;
      }
      else
      {
        v6 = v19 + (~v10 & v6);
      }
    }
    _BitScanForward(&v20, v14);
    v27 = v5;
    v28 = v5;
    v6 = v20 + (v6 & ~v10) + (v16 & 0xFFFFFFE0);
    v14 &= ~(1 << v20);
    result = MiSlistGetFreePage(v3, &v27, v6);
    if ( result )
      return result;
    result = MiGetPerfectColorHeadPage(a1, (unsigned int)v24 + 40 * v6, v6, v5, a3);
    if ( result == 1 )
      break;
    if ( result )
      return result;
    v3 = a1;
    v4 = a3;
  }
  return 1LL;
}
