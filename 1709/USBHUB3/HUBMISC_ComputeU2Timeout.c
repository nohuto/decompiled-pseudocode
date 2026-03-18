/*
 * XREFs of HUBMISC_ComputeU2Timeout @ 0x1C0028A0C
 * Callers:
 *     HUBDSM_ComputingU1U2TimeoutsAndExitLatency @ 0x1C001E590 (HUBDSM_ComputingU1U2TimeoutsAndExitLatency.c)
 * Callees:
 *     <none>
 */

char __fastcall HUBMISC_ComputeU2Timeout(__int64 *a1)
{
  int v2; // edx
  char v3; // cl
  char v4; // dl
  __int64 v5; // r13
  unsigned __int16 v6; // dx
  char v7; // r12
  __int64 v8; // rbp
  __int64 v9; // rsi
  __int64 v10; // r9
  bool i; // zf
  unsigned int v12; // ebx
  unsigned int v13; // r11d
  __int64 v14; // r10
  char v15; // r14
  char v16; // r15
  unsigned int v17; // esi
  int v18; // edi
  __int64 v19; // rbx
  __int64 v20; // r10
  unsigned __int16 v21; // r9
  unsigned __int16 v22; // ax
  unsigned __int16 v23; // r9
  __int64 v24; // rax

  if ( (*((_DWORD *)a1 + 411) & 0x80u) == 0 && (*(_DWORD *)(*a1 + 40) & 0x8000) == 0 )
  {
    v2 = *((_DWORD *)a1 + 554);
    if ( (v2 & 0x180) == 0 )
    {
      v3 = *((_BYTE *)a1 + 2220);
      *((_DWORD *)a1 + 554) = v2 ^ ((unsigned __int8)v2 ^ (unsigned __int8)(16 * v3)) & 0x20;
      if ( (v3 & 8) == 0 )
        goto LABEL_54;
      if ( (a1[204] & 2) != 0 || (v3 & 0x20) == 0 )
      {
        v4 = -1;
        goto LABEL_55;
      }
      if ( v3 < 0 )
      {
        v4 = 1;
        goto LABEL_55;
      }
      if ( (v3 & 0x40) != 0 )
      {
        v4 = -2;
        goto LABEL_55;
      }
      v5 = a1[6];
      v6 = 0;
      v7 = 0;
      v8 = *(_QWORD *)(v5 + 16) - 8LL;
      v9 = *(_QWORD *)(v5 + 16);
      v10 = v8;
      for ( i = v5 + 16 == v9; ; i = v5 == v10 - 8 )
      {
        if ( i )
          goto LABEL_19;
        v12 = *(_DWORD *)(v10 + 24);
        v13 = 0;
        if ( v12 )
          break;
LABEL_17:
        v10 = *(_QWORD *)(v10 + 8) - 8LL;
      }
      v14 = v10 + 72;
      while ( (*(_BYTE *)(*(_QWORD *)v14 + 3LL) & 3) == 0 )
      {
        ++v13;
        v14 += 72LL;
        if ( v13 >= v12 )
          goto LABEL_17;
      }
      v7 = 1;
LABEL_19:
      v15 = 0;
      v16 = 0;
      if ( v5 + 16 == v9 )
        goto LABEL_51;
      while ( 1 )
      {
        v17 = *(_DWORD *)(v8 + 24);
        v18 = 0;
        if ( v17 )
          break;
LABEL_43:
        v8 = *(_QWORD *)(v8 + 8) - 8LL;
        if ( v5 == v8 - 8 )
        {
          if ( v15 )
          {
            v4 = -1;
            goto LABEL_55;
          }
          if ( v16 && *((_BYTE *)a1 + 2214) )
            *((_BYTE *)a1 + 2214) = -1;
          if ( v6 >= 0xFE00u )
          {
            v4 = -2;
            goto LABEL_55;
          }
LABEL_51:
          v4 = HIBYTE(v6) + 1;
          goto LABEL_55;
        }
      }
      v19 = v8 + 72;
      while ( 1 )
      {
        v20 = *(_QWORD *)v19;
        v21 = *(char *)(*(_QWORD *)v19 + 2LL) >= 0 ? *((_WORD *)a1 + 1102) : *((_WORD *)a1 + 1099);
        if ( (*(_BYTE *)(v20 + 3) & 3) == 0 )
          break;
        switch ( *(_BYTE *)(v20 + 3) & 3 )
        {
          case 1:
            if ( v21 > 125 * (unsigned int)*(unsigned __int8 *)(v20 + 6) )
            {
              _InterlockedAnd((volatile signed __int32 *)a1 + 554, 0xFFFFFFDF);
              goto LABEL_54;
            }
LABEL_37:
            v22 = 1;
            break;
          case 2:
            goto LABEL_33;
          case 3:
            if ( (*(_BYTE *)(v20 + 3) & 0x30) != 0
              || (v16 = 1, v21 <= 125 * (unsigned int)*(unsigned __int8 *)(v20 + 6)) )
            {
LABEL_33:
              v23 = 5 * v21;
LABEL_39:
              v22 = v23;
              break;
            }
            v15 = 1;
            v22 = 255;
            break;
          default:
            v22 = 0;
            break;
        }
        if ( v6 > v22 )
          v22 = v6;
        v19 += 72LL;
        v6 = v22;
        if ( ++v18 >= v17 )
          goto LABEL_43;
      }
      if ( !v7 )
      {
        v23 = 5 * v21;
        goto LABEL_39;
      }
      goto LABEL_37;
    }
  }
  _InterlockedAnd((volatile signed __int32 *)a1 + 554, 0xFFFFFFDF);
LABEL_54:
  v4 = 0;
LABEL_55:
  v24 = *a1;
  if ( (*(_DWORD *)(*a1 + 40) & 0x10000000) != 0 )
  {
    LODWORD(v24) = *((_DWORD *)a1 + 408);
    if ( (v24 & 2) == 0 )
    {
      LOBYTE(v24) = *((_BYTE *)a1 + 2214) - 1;
      if ( (unsigned __int8)v24 <= 0xFDu && v4 == -1 )
      {
        v4 = 0;
        _InterlockedAnd((volatile signed __int32 *)a1 + 554, 0xFFFFFFDF);
      }
    }
  }
  *((_BYTE *)a1 + 2215) = v4;
  return v24;
}
