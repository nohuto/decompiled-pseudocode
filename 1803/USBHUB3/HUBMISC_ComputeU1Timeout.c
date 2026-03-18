/*
 * XREFs of HUBMISC_ComputeU1Timeout @ 0x1C00294B8
 * Callers:
 *     HUBDSM_ComputingU1U2TimeoutsAndExitLatency @ 0x1C001EED0 (HUBDSM_ComputingU1U2TimeoutsAndExitLatency.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBMISC_ComputeU1Timeout(__int64 a1)
{
  int v2; // edx
  char v3; // cl
  unsigned __int8 v4; // dl
  unsigned __int16 v5; // r14
  _QWORD *v6; // rsi
  char v7; // r15
  __int64 v8; // rbp
  __int64 v9; // r9
  unsigned int v10; // edi
  unsigned int v11; // r11d
  __int64 v12; // r10
  _QWORD *v13; // rax
  bool v14; // zf
  unsigned int v15; // edi
  unsigned int v16; // ebx
  __int64 v17; // r11
  __int64 v18; // r10
  unsigned __int16 v19; // r9
  unsigned __int16 v20; // r9
  _QWORD *v21; // rax
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 1644) & 0x80u) != 0
    || (*(_DWORD *)(*(_QWORD *)a1 + 40LL) & 0x8000) != 0
    || (v2 = *(_DWORD *)(a1 + 2216), (v2 & 0x140) != 0) )
  {
    _InterlockedAnd((volatile signed __int32 *)(a1 + 2216), 0xFFFFFFEF);
LABEL_44:
    v4 = 0;
  }
  else
  {
    v3 = *(_BYTE *)(a1 + 2220);
    *(_DWORD *)(a1 + 2216) = v2 ^ ((unsigned __int8)v2 ^ (unsigned __int8)(16 * v3)) & 0x10;
    if ( (v3 & 4) == 0 )
      goto LABEL_44;
    if ( (v3 & 0x10) == 0 )
    {
      v4 = -1;
      goto LABEL_45;
    }
    if ( v3 < 0 )
    {
      v4 = 1;
      goto LABEL_45;
    }
    if ( (v3 & 0x40) != 0 )
    {
      v4 = 127;
      goto LABEL_45;
    }
    v5 = 0;
    v6 = (_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL);
    v7 = 0;
    v8 = *v6 - 8LL;
    v9 = v8;
    if ( v6 != (_QWORD *)*v6 )
    {
      while ( 1 )
      {
        v10 = *(_DWORD *)(v9 + 24);
        v11 = 0;
        if ( v10 )
          break;
LABEL_16:
        v13 = *(_QWORD **)(v9 + 8);
        v9 = (__int64)(v13 - 1);
        if ( v6 == v13 )
          goto LABEL_19;
      }
      v12 = v9 + 72;
      while ( (*(_BYTE *)(*(_QWORD *)v12 + 3LL) & 3) == 0 )
      {
        ++v11;
        v12 += 72LL;
        if ( v11 >= v10 )
          goto LABEL_16;
      }
      v7 = 1;
LABEL_19:
      v14 = v6 == (_QWORD *)*v6;
      while ( 1 )
      {
        if ( v14 )
          goto LABEL_40;
        v15 = *(_DWORD *)(v8 + 24);
        v16 = 0;
        if ( v15 )
          break;
LABEL_38:
        v21 = *(_QWORD **)(v8 + 8);
        v14 = v6 == v21;
        v8 = (__int64)(v21 - 1);
      }
      v17 = v8 + 72;
      while ( 1 )
      {
        v18 = *(_QWORD *)v17;
        if ( *(char *)(*(_QWORD *)v17 + 2LL) >= 0 )
          v19 = *(_WORD *)(a1 + 2202);
        else
          v19 = *(unsigned __int8 *)(a1 + 2196);
        if ( (*(_BYTE *)(v18 + 3) & 3) != 0 )
        {
          if ( (*(_BYTE *)(v18 + 3) & 3) == 1 )
          {
            if ( v19 > 125 * (unsigned int)*(unsigned __int8 *)(v18 + 6) )
            {
              _InterlockedAnd((volatile signed __int32 *)(a1 + 2216), 0xFFFFFFEF);
              goto LABEL_44;
            }
            v20 = 1;
          }
          else
          {
            if ( (*(_BYTE *)(v18 + 3) & 3u) - 2 < 2 )
              goto LABEL_34;
            v20 = 0;
          }
        }
        else
        {
          if ( !v7 )
          {
LABEL_34:
            v20 = 5 * v19;
            goto LABEL_35;
          }
          v20 = 5;
        }
LABEL_35:
        if ( v5 > v20 )
          v20 = v5;
        ++v16;
        v17 += 72LL;
        v5 = v20;
        if ( v16 >= v15 )
          goto LABEL_38;
      }
    }
LABEL_40:
    v4 = 127;
    if ( (unsigned __int8)v5 < 0x7Fu )
      v4 = v5;
  }
LABEL_45:
  result = *(_QWORD *)a1;
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 40LL) & 0x10000000) != 0 )
  {
    result = *(unsigned int *)(a1 + 1632);
    if ( (result & 2) != 0 )
    {
      result = v4;
      if ( v4 )
        result = 255LL;
      v4 = result;
    }
  }
  *(_BYTE *)(a1 + 2214) = v4;
  return result;
}
