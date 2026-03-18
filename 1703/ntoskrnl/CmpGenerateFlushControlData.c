/*
 * XREFs of CmpGenerateFlushControlData @ 0x1404D8714
 * Callers:
 *     CmpFlushHive @ 0x1404D6DE0 (CmpFlushHive.c)
 * Callees:
 *     HvIsCurrentLogSwappable @ 0x14045BE38 (HvIsCurrentLogSwappable.c)
 *     HvGetHiveLogFileStatus @ 0x1404B6514 (HvGetHiveLogFileStatus.c)
 *     HvGetEffectiveLogSizeCapForHive @ 0x1404D3B9C (HvGetEffectiveLogSizeCapForHive.c)
 */

char __fastcall CmpGenerateFlushControlData(__int64 a1, __int64 a2, int *a3)
{
  int *v3; // rsi
  char v5; // bp
  char v7; // al
  char v8; // r10
  int v9; // eax
  int v10; // eax
  int v11; // r9d
  int v12; // eax
  __int64 v13; // r9
  int v14; // r9d
  char v15; // r10
  int v16; // r9d
  int v17; // r9d
  int v18; // r9d
  int v19; // r9d

  v3 = a3 + 2;
  *(_QWORD *)a3 = 0LL;
  a3[2] = 0;
  v5 = a2;
  a3[5] = 0;
  a3[3] = 0;
  v7 = *(_BYTE *)(a1 + 175);
  if ( v7 || *(_DWORD *)(a1 + 88) || (v8 = 0, *(_DWORD *)(a1 + 112)) )
    v8 = 1;
  if ( *(_DWORD *)(a1 + 88) || v7 )
  {
    *a3 = 9;
    v9 = *a3;
    if ( *(_BYTE *)(a1 + 174) )
      v9 = 27;
    *a3 = v9;
    if ( *(_DWORD *)(a1 + 5492) )
      *a3 |= 0x82u;
    a3[6] = HvGetEffectiveLogSizeCapForHive((unsigned int *)a1);
  }
  if ( v8 && (v5 & 4) != 0 )
    *a3 |= 0x42u;
  v10 = *(_DWORD *)(a1 + 144);
  if ( (v10 & 2) == 0 )
  {
    LOBYTE(v10) = (CmpGlobalFlushControlFlags & 1) == 0;
    if ( (((*(_DWORD *)(a1 + 5360) & 0x800) == 0) & (unsigned __int8)v10) != 0 )
    {
      if ( (v5 & 8) != 0 && (!*(_BYTE *)(a1 + 174) || (*a3 & 0x10) != 0) )
      {
        *a3 |= 0x107u;
        v10 = *a3;
        if ( (*a3 & 8) != 0 )
        {
          HvGetHiveLogFileStatus(a1, a3[6], v3);
          v10 = *v3;
          if ( (*v3 & 0xC) != 0 )
            *a3 |= 0x400u;
        }
        return v10;
      }
      if ( (*a3 & 0x48) == 8 )
      {
        HvGetHiveLogFileStatus(a1, a3[6], v3);
        v10 = *v3;
        if ( (*v3 & 1) != 0 )
        {
          *a3 |= 2u;
          return v10;
        }
        if ( (v10 & 0xA) != 0 )
        {
          *a3 |= 0x42u;
        }
        else if ( (v10 & 4) != 0 )
        {
          *a3 |= 2u;
          if ( HvIsCurrentLogSwappable(a1, a2, (__int64)a3, (unsigned int)*a3) )
            v18 = v17 | 0x20;
          else
            v18 = v17 | 0x40;
          *a3 = v18;
        }
      }
      v11 = *a3;
      if ( (*a3 & 0x40) == 0 )
        goto LABEL_21;
      v10 = *(_DWORD *)(a1 + 5488);
      if ( (v10 & 2) != 0 )
        return v10;
      if ( (*v3 & 8) != 0 )
      {
        v16 = v11 | 0x504;
      }
      else
      {
        v13 = v11 | 1u;
        *a3 = v13;
        if ( HvIsCurrentLogSwappable(a1, a2, (__int64)a3, v13) )
        {
          v16 = v14 | 0x20;
        }
        else
        {
          v19 = v14 | 4;
          *a3 = v19;
          if ( (v15 & 4) == 0 )
            goto LABEL_21;
          v16 = v19 | 0x400;
        }
      }
      *a3 = v16;
LABEL_21:
      if ( (*a3 & 0x48) == 8 )
      {
        if ( !*(_DWORD *)(a1 + 112) )
          *a3 |= 0x800u;
        v12 = *v3;
        if ( (*v3 & 0x14) != 0 )
          *a3 |= 0x1000u;
        if ( (*(_BYTE *)(a1 + 5488) & 2) != 0 && (v12 & 0x20) != 0 )
          *a3 |= 0x2000u;
      }
      v10 = *(_DWORD *)(a1 + 5488);
      if ( (v10 & 4) == 0 )
      {
        if ( *(_QWORD *)(a1 + 2664) )
        {
          LOBYTE(v10) = (v5 & 0x20) == 0;
          if ( (((*a3 & 8) == 0) & (unsigned __int8)v10) == 0 )
            *a3 |= 0x202u;
        }
      }
      return v10;
    }
  }
  if ( *(_DWORD *)(a1 + 88) || *(_BYTE *)(a1 + 175) )
  {
    *a3 |= 0x46u;
    if ( *(_BYTE *)(a1 + 174) )
      *a3 |= 0x10u;
    *a3 |= 0x500u;
  }
  else
  {
    LOBYTE(v10) = (v5 & 0x20) != 0;
    if ( (((*(_BYTE *)(a1 + 5488) & 4) == 0) & (unsigned __int8)v10) != 0 )
      *a3 |= 0x202u;
  }
  return v10;
}
