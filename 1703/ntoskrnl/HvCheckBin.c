/*
 * XREFs of HvCheckBin @ 0x140513920
 * Callers:
 *     HvCheckHive @ 0x140515888 (HvCheckHive.c)
 * Callees:
 *     RtlSetBits @ 0x14009ABF0 (RtlSetBits.c)
 *     SetFailureLocation @ 0x1401DEAE4 (SetFailureLocation.c)
 *     HvAddToLayoutStats @ 0x1404476B4 (HvAddToLayoutStats.c)
 *     HvMoveLayoutStats @ 0x140513B50 (HvMoveLayoutStats.c)
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
  __int64 v7; // r11
  unsigned int v8; // r13d
  unsigned int v10; // r10d
  unsigned int v11; // r14d
  unsigned int v12; // r12d
  __int64 v13; // rcx
  int *v14; // rbx
  int *v15; // r8
  __int16 v16; // r9
  __int64 v17; // rdx
  unsigned int v18; // edx
  int *v19; // rdi
  __int64 v20; // r8
  char v22; // al
  int v23; // edx
  int v24; // [rsp+20h] [rbp-48h]
  unsigned int v25; // [rsp+80h] [rbp+18h]
  _DWORD *v26; // [rsp+88h] [rbp+20h]

  v26 = a4;
  v7 = a7;
  v8 = 0;
  v25 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  if ( a7 )
    *(_QWORD *)(a7 + 328) = a2;
  v13 = (unsigned int)a2[2];
  v14 = a2 + 8;
  v15 = (_DWORD *)((char *)a2 + v13);
  if ( a2 + 8 >= (_DWORD *)((char *)a2 + v13) )
  {
LABEL_15:
    v20 = (unsigned int)a2[2];
    if ( v11 + v10 + 32LL == v20 )
    {
      if ( v14 == (_DWORD *)((char *)a2 + v20) )
      {
        if ( a4 )
          *a4 += v12;
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
  v16 = 27502;
  while ( 1 )
  {
    v17 = *v14;
    if ( (int)v17 >= 0 )
      break;
    v18 = -(int)v17;
    if ( v18 > (unsigned int)v13 || (v19 = (int *)((char *)v14 + v18), v19 > v15) )
    {
      v8 = -1073741492;
      if ( !a7 )
        return v8;
      SetFailureLocation(a7, 0, 17, -1073741492, 32);
      goto LABEL_41;
    }
    v11 += v18;
    v12 = v18 + v12 - 4;
    if ( v11 > (unsigned int)v13 )
    {
      v8 = -1073741492;
      if ( !a7 )
        return v8;
      SetFailureLocation(a7, 0, 17, -1073741492, 48);
      goto LABEL_41;
    }
    if ( a6 && v18 >= 0x54 && *((_WORD *)v14 + 2) == v16 )
    {
      v22 = *((_BYTE *)v14 + 16);
      if ( (v22 & 2) != 0 )
      {
        HvMoveLayoutStats(a6 + 32);
        HvMoveLayoutStats(a6 + 16);
        *(_QWORD *)(a6 + 48) = 0LL;
      }
      else
      {
        v23 = 8 * v14[6] + 40 + v18;
        if ( (v22 & 1) != 0 )
        {
          HvAddToLayoutStats(a6 + 32, v23);
          HvMoveLayoutStats(a6 + 16);
          if ( !*(_DWORD *)(a6 + 48) )
            *(_DWORD *)(a6 + 48) = a2[1];
          *(_DWORD *)(a6 + 52) = 0;
        }
        else
        {
          HvAddToLayoutStats(a6 + 16, v23);
          if ( !*(_DWORD *)(a6 + 52) )
            *(_DWORD *)(a6 + 52) = a2[1];
        }
      }
    }
    if ( BitMapHeader )
    {
      RtlSetBits(BitMapHeader, (unsigned int)((_DWORD)v14 + a2[1] - (_DWORD)a2) >> 3, 1u);
      v10 = v25;
      v16 = 27502;
    }
LABEL_13:
    v13 = (unsigned int)a2[2];
    v14 = v19;
    v15 = (_DWORD *)((char *)a2 + v13);
    if ( v19 >= (_DWORD *)((char *)a2 + v13) )
    {
      a4 = v26;
      v7 = a7;
      goto LABEL_15;
    }
  }
  if ( (unsigned int)v17 <= (unsigned int)v13 && (int *)((char *)v14 + v17) <= v15 && (_DWORD)v17 )
  {
    v10 += v17;
    v25 = v10;
    if ( v10 <= (unsigned int)v13 )
    {
      if ( a6 )
      {
        HvAddToLayoutStats(a6, v17);
        ((void (*)(void))HvMoveLayoutStats)();
      }
      v19 = (int *)((char *)v14 + *v14);
      goto LABEL_13;
    }
    v8 = -1073741492;
    if ( a7 )
    {
      SetFailureLocation(a7, 0, 17, -1073741492, 80);
LABEL_41:
      *(_QWORD *)(a7 + 336) = v14;
      return v8;
    }
    return v8;
  }
  if ( a7 )
  {
    SetFailureLocation(a7, 0, 17, -1073741492, 64);
    *(_QWORD *)(a7 + 336) = v14;
  }
  return 60LL;
}
