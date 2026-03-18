/*
 * XREFs of CmpGenerateFlushControlData @ 0x1404E5CC4
 * Callers:
 *     CmpFlushHive @ 0x1404DD950 (CmpFlushHive.c)
 * Callees:
 *     HvGetEffectiveLogSizeCapForHive @ 0x1404E5F64 (HvGetEffectiveLogSizeCapForHive.c)
 *     HvGetHiveLogFileStatus @ 0x1404E5FF0 (HvGetHiveLogFileStatus.c)
 *     HvIsCurrentLogSwappable @ 0x1404E6A78 (HvIsCurrentLogSwappable.c)
 */

char __fastcall CmpGenerateFlushControlData(__int64 a1, char a2, int *a3)
{
  int *v3; // rsi
  char v7; // al
  char v8; // r10
  int v9; // eax
  int v10; // eax
  int v11; // r8d
  int v12; // r8d
  char v13; // r9
  int v14; // r8d
  int v15; // eax
  int v16; // r8d
  int v17; // r8d
  int v18; // r8d

  v3 = a3 + 2;
  *(_QWORD *)a3 = 0LL;
  a3[2] = 0;
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
    a3[6] = HvGetEffectiveLogSizeCapForHive(a1);
  }
  if ( v8 && (a2 & 4) != 0 )
    *a3 |= 0x42u;
  if ( (*(_DWORD *)(a1 + 144) & 2) == 0
    && (*(_DWORD *)(a1 + 5360) & 0x800) == 0
    && (CmpGlobalFlushControlFlags & 1) == 0 )
  {
    if ( (a2 & 8) != 0 && (!*(_BYTE *)(a1 + 174) || (*a3 & 0x10) != 0) )
    {
      v10 = *a3 | 0x107;
      *a3 = v10;
      if ( (v10 & 8) != 0 )
      {
        HvGetHiveLogFileStatus(a1, (unsigned int)a3[6], v3);
        v10 = *v3;
        if ( (*v3 & 0xC) != 0 )
          *a3 |= 0x400u;
      }
      return v10;
    }
    if ( (*a3 & 0x48) == 8 )
    {
      HvGetHiveLogFileStatus(a1, (unsigned int)a3[6], v3);
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
        if ( (unsigned __int8)HvIsCurrentLogSwappable(a1) )
          v17 = v16 | 0x20;
        else
          v17 = v16 | 0x40;
        *a3 = v17;
      }
    }
    v11 = *a3;
    if ( (*a3 & 0x40) == 0 )
      goto LABEL_26;
    v10 = *(_DWORD *)(a1 + 5488);
    if ( (v10 & 2) != 0 )
      return v10;
    if ( (*v3 & 8) != 0 )
    {
      v14 = v11 | 0x504;
    }
    else
    {
      *a3 = v11 | 1;
      if ( (unsigned __int8)HvIsCurrentLogSwappable(a1) )
      {
        v14 = v12 | 0x20;
      }
      else
      {
        v18 = v12 | 4;
        *a3 = v18;
        if ( (v13 & 4) == 0 )
          goto LABEL_26;
        v14 = v18 | 0x400;
      }
    }
    *a3 = v14;
LABEL_26:
    if ( (*a3 & 0x48) == 8 )
    {
      if ( !*(_DWORD *)(a1 + 112) )
        *a3 |= 0x800u;
      v15 = *v3;
      if ( (*v3 & 0x14) != 0 )
        *a3 |= 0x1000u;
      if ( (*(_BYTE *)(a1 + 5488) & 2) != 0 && (v15 & 0x20) != 0 )
        *a3 |= 0x2000u;
    }
    v10 = *(_DWORD *)(a1 + 5488);
    if ( (v10 & 4) == 0 )
    {
      if ( *(_QWORD *)(a1 + 2664) )
      {
        LOBYTE(v10) = (a2 & 0x20) == 0;
        if ( (((*a3 & 8) == 0) & (unsigned __int8)v10) == 0 )
          *a3 |= 0x202u;
      }
    }
    return v10;
  }
  if ( *(_DWORD *)(a1 + 88) || *(_BYTE *)(a1 + 175) )
  {
    v10 = *a3 | 0x46;
    *a3 = v10;
    if ( *(_BYTE *)(a1 + 174) )
    {
      v10 |= 0x10u;
      *a3 = v10;
    }
    *a3 |= 0x500u;
  }
  else
  {
    LOBYTE(v10) = (a2 & 0x20) != 0;
    if ( (((*(_BYTE *)(a1 + 5488) & 4) == 0) & (unsigned __int8)v10) != 0 )
      *a3 |= 0x202u;
  }
  return v10;
}
