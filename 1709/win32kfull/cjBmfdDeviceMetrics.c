/*
 * XREFs of cjBmfdDeviceMetrics @ 0x1C0234B9C
 * Callers:
 *     BmfdQueryFontData @ 0x1C02345FC (BmfdQueryFontData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall cjBmfdDeviceMetrics(__int64 a1, __int64 a2)
{
  int v2; // ebx
  int v3; // r10d
  int v5; // eax
  __int64 v6; // r8
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // ecx

  v2 = *(_DWORD *)(a1 + 36);
  v3 = *(_DWORD *)(a1 + 40);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 38LL) & 1) != 0 )
  {
    *(_DWORD *)a2 = 0;
  }
  else
  {
    *(_DWORD *)a2 = 19;
    v5 = *(_DWORD *)a2;
    if ( (*(_DWORD *)(a1 + 32) & 0x4000) == 0 )
      v5 = 31;
    *(_DWORD *)a2 = v5;
  }
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 80LL);
  v7 = *(_DWORD *)(a1 + 16);
  switch ( v7 )
  {
    case 0:
      *(_QWORD *)(a2 + 4) = 1065353216LL;
      *(_DWORD *)(a2 + 12) = 0;
      *(_DWORD *)(a2 + 16) = -1082130432;
      *(_DWORD *)(a2 + 24) = 16 * v3 * *(__int16 *)(v6 + 60);
      v16 = v3 * *(__int16 *)(v6 + 62);
      *(_DWORD *)(a2 + 32) = 0;
      *(_DWORD *)(a2 + 28) = 16 * v16;
      *(_DWORD *)(a2 + 36) = -(v3 * *(__int16 *)(v6 + 102));
      if ( (*(_DWORD *)(a1 + 32) & 0x4000) != 0 )
        v17 = *(__int16 *)(v6 + 106) / 2;
      else
        v17 = 0;
      *(_DWORD *)(a2 + 40) = v17;
      v12 = -(v3 * *(__int16 *)(v6 + 106));
      goto LABEL_25;
    case 900:
      *(_DWORD *)(a2 + 4) = 0;
      *(_DWORD *)(a2 + 8) = -1082130432;
      *(_DWORD *)(a2 + 12) = -1082130432;
      *(_DWORD *)(a2 + 16) = 0;
      *(_DWORD *)(a2 + 24) = 16 * v3 * *(__int16 *)(v6 + 60);
      *(_DWORD *)(a2 + 28) = 16 * v3 * *(__int16 *)(v6 + 62);
      v13 = v3 * *(__int16 *)(v6 + 102);
      *(_DWORD *)(a2 + 36) = 0;
      *(_DWORD *)(a2 + 32) = -v13;
      *(_DWORD *)(a2 + 40) = -(v3 * *(__int16 *)(v6 + 106));
      if ( (*(_DWORD *)(a1 + 32) & 0x4000) != 0 )
      {
        v9 = -2;
        goto LABEL_18;
      }
LABEL_19:
      v14 = 0;
      goto LABEL_20;
    case 1800:
      *(_DWORD *)(a2 + 4) = -1082130432;
      *(_QWORD *)(a2 + 8) = 0LL;
      *(_DWORD *)(a2 + 16) = 1065353216;
      *(_DWORD *)(a2 + 24) = 16 * v3 * *(__int16 *)(v6 + 60);
      v10 = v3 * *(__int16 *)(v6 + 62);
      *(_DWORD *)(a2 + 32) = 0;
      *(_DWORD *)(a2 + 28) = 16 * v10;
      *(_DWORD *)(a2 + 36) = v3 * *(__int16 *)(v6 + 102);
      if ( (*(_DWORD *)(a1 + 32) & 0x4000) != 0 )
        v11 = *(__int16 *)(v6 + 106) / -2;
      else
        v11 = 0;
      *(_DWORD *)(a2 + 40) = v11;
      v12 = v3 * *(__int16 *)(v6 + 106);
LABEL_25:
      *(_DWORD *)(a2 + 44) = v12;
      *(_DWORD *)(a2 + 48) = 0;
      v18 = v3 * *(__int16 *)(v6 + 100);
      *(_DWORD *)(a2 + 56) = 0;
      *(_DWORD *)(a2 + 52) = v18;
      *(_DWORD *)(a2 + 60) = v3 * *(__int16 *)(v6 + 104);
      break;
    case 2700:
      *(_DWORD *)(a2 + 4) = 0;
      *(_DWORD *)(a2 + 8) = 1065353216;
      *(_QWORD *)(a2 + 12) = 1065353216LL;
      *(_DWORD *)(a2 + 24) = 16 * v3 * *(__int16 *)(v6 + 60);
      *(_DWORD *)(a2 + 28) = 16 * v3 * *(__int16 *)(v6 + 62);
      v8 = v3 * *(__int16 *)(v6 + 102);
      *(_DWORD *)(a2 + 36) = 0;
      *(_DWORD *)(a2 + 32) = v8;
      *(_DWORD *)(a2 + 40) = v3 * *(__int16 *)(v6 + 106);
      if ( (*(_DWORD *)(a1 + 32) & 0x4000) != 0 )
      {
        v9 = 2;
LABEL_18:
        v14 = *(__int16 *)(v6 + 106) / v9;
LABEL_20:
        *(_DWORD *)(a2 + 44) = v14;
        v15 = v3 * *(__int16 *)(v6 + 100);
        *(_DWORD *)(a2 + 52) = 0;
        *(_DWORD *)(a2 + 48) = v15;
        *(_QWORD *)(a2 + 56) = (unsigned int)(v3 * *(__int16 *)(v6 + 104));
        break;
      }
      goto LABEL_19;
  }
  *(_DWORD *)(a2 + 20) = 0;
  if ( (*(_DWORD *)(v6 + 48) & 0x1000) != 0 && (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 38LL) & 1) == 0 )
  {
    v19 = v2 * *(__int16 *)(v6 + 78);
    *(_DWORD *)(a2 + 20) = v19;
    if ( (*(_DWORD *)(a1 + 32) & 0x2000) != 0 )
      *(_DWORD *)(a2 + 20) = v19 + 1;
  }
  *(_DWORD *)(a2 + 64) = *(_DWORD *)(a1 + 44);
  *(_DWORD *)(a2 + 68) = *(_DWORD *)(a1 + 48) / ((unsigned int)(*(_DWORD *)(a1 + 44) + 7) >> 3);
  *(_DWORD *)(a2 + 72) = *(_DWORD *)(a1 + 48);
  return 124LL;
}
