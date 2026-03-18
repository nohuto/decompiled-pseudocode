/*
 * XREFs of HvCheckBin @ 0x1404AED40
 * Callers:
 *     HvCheckHive @ 0x1404E345C (HvCheckHive.c)
 * Callees:
 *     RtlSetBits @ 0x14000A290 (RtlSetBits.c)
 *     SetFailureLocation @ 0x140221604 (SetFailureLocation.c)
 *     HvMoveLayoutStats @ 0x1404AEF84 (HvMoveLayoutStats.c)
 *     HvAddToLayoutStats @ 0x140574080 (HvAddToLayoutStats.c)
 */

__int64 __fastcall HvCheckBin(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        _DWORD *a4,
        PRTL_BITMAP BitMapHeader,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // rdi
  unsigned int v8; // r13d
  _DWORD *v9; // r10
  unsigned int v11; // r11d
  unsigned int v12; // r14d
  int v13; // r12d
  __int64 v14; // r8
  int *v15; // rbx
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rdx
  int *v19; // rdi
  char v21; // al
  __int64 v22; // rdx
  __int64 v23; // rdi
  int v24; // [rsp+20h] [rbp-48h]
  unsigned int v25; // [rsp+80h] [rbp+18h]

  v7 = a7;
  v8 = 0;
  v25 = 0;
  v9 = a4;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  if ( a7 )
    *(_QWORD *)(a7 + 328) = a2;
  v14 = (unsigned int)a2[2];
  v15 = a2 + 8;
  if ( a2 + 8 >= (_DWORD *)((char *)a2 + v14) )
  {
LABEL_15:
    if ( v12 + v11 + 32LL == (unsigned int)v14 )
    {
      if ( v15 == (_DWORD *)((char *)a2 + v14) )
      {
        if ( v9 )
          *v9 += v13;
        return v8;
      }
      v24 = 112;
    }
    else
    {
      v24 = 96;
    }
    v8 = -1073741492;
    SetFailureLocation(v7, 0, 17, -1073741492, v24);
    return v8;
  }
  v16 = 27502LL;
  while ( 1 )
  {
    v17 = *v15;
    if ( (int)v17 >= 0 )
      break;
    v18 = (unsigned int)-(int)v17;
    if ( (unsigned int)v18 > (unsigned int)v14
      || (v19 = (int *)((char *)v15 + v18), (char *)v15 + v18 > (char *)a2 + (unsigned int)v14) )
    {
      v23 = a7;
      v8 = -1073741492;
      if ( !a7 )
        return v8;
      SetFailureLocation(a7, 0, 17, -1073741492, 32);
      goto LABEL_41;
    }
    v12 += v18;
    v13 = v18 + v13 - 4;
    if ( v12 > (unsigned int)v14 )
    {
      v23 = a7;
      v8 = -1073741492;
      if ( !a7 )
        return v8;
      SetFailureLocation(a7, 0, 17, -1073741492, 48);
      goto LABEL_41;
    }
    if ( a6 && (unsigned int)v18 >= 0x54uLL && *((_WORD *)v15 + 2) == (_WORD)v16 )
    {
      v21 = *((_BYTE *)v15 + 16);
      if ( (v21 & 2) != 0 )
      {
        HvMoveLayoutStats(a6 + 32);
        HvMoveLayoutStats(a6 + 16);
        *(_QWORD *)(a6 + 48) = 0LL;
      }
      else
      {
        v22 = (unsigned int)(8 * v15[6] + 40 + v18);
        if ( (v21 & 1) != 0 )
        {
          HvAddToLayoutStats(a6 + 32, v22, v14, v16);
          HvMoveLayoutStats(a6 + 16);
          if ( !*(_DWORD *)(a6 + 48) )
            *(_DWORD *)(a6 + 48) = a2[1];
          *(_DWORD *)(a6 + 52) = 0;
        }
        else
        {
          HvAddToLayoutStats(a6 + 16, v22, v14, v16);
          if ( !*(_DWORD *)(a6 + 52) )
            *(_DWORD *)(a6 + 52) = a2[1];
        }
      }
    }
    if ( BitMapHeader )
    {
      RtlSetBits(BitMapHeader, (unsigned int)((_DWORD)v15 + a2[1] - (_DWORD)a2) >> 3, 1u);
      v11 = v25;
      v16 = 27502LL;
    }
LABEL_13:
    v15 = v19;
    v14 = (unsigned int)a2[2];
    if ( v19 >= (_DWORD *)((char *)a2 + v14) )
    {
      v9 = a4;
      v7 = a7;
      goto LABEL_15;
    }
  }
  if ( (unsigned int)v17 <= (unsigned int)v14 && (char *)v15 + v17 <= (char *)a2 + (unsigned int)v14 && (_DWORD)v17 )
  {
    v11 += v17;
    v25 = v11;
    if ( v11 <= (unsigned int)v14 )
    {
      if ( a6 )
      {
        HvAddToLayoutStats(a6, v17, v14, v16);
        ((void (*)(void))HvMoveLayoutStats)();
      }
      v19 = (int *)((char *)v15 + *v15);
      goto LABEL_13;
    }
    v23 = a7;
    v8 = -1073741492;
    if ( a7 )
    {
      SetFailureLocation(a7, 0, 17, -1073741492, 80);
LABEL_41:
      *(_QWORD *)(v23 + 336) = v15;
      return v8;
    }
    return v8;
  }
  if ( a7 )
  {
    SetFailureLocation(a7, 0, 17, -1073741492, 64);
    *(_QWORD *)(a7 + 336) = v15;
  }
  return 60LL;
}
