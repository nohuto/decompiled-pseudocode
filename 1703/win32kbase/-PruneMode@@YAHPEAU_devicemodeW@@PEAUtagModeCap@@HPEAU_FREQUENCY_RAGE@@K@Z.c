/*
 * XREFs of ?PruneMode@@YAHPEAU_devicemodeW@@PEAUtagModeCap@@HPEAU_FREQUENCY_RAGE@@K@Z @ 0x1C00608AC
 * Callers:
 *     ?PruneModesByDisplayDeviceCaps@@YAKPEAUtagGRAPHICS_DEVICE@@KPEAUtagDEVMODEMARK@@@Z @ 0x1C00605BC (-PruneModesByDisplayDeviceCaps@@YAKPEAUtagGRAPHICS_DEVICE@@KPEAUtagDEVMODEMARK@@@Z.c)
 * Callees:
 *     ?compModeCap@@YAHPEAUtagModeCap@@0@Z @ 0x1C0060AB0 (-compModeCap@@YAHPEAUtagModeCap@@0@Z.c)
 */

__int64 __fastcall PruneMode(
        struct _devicemodeW *a1,
        struct tagModeCap *a2,
        int a3,
        struct _FREQUENCY_RAGE *a4,
        signed int a5)
{
  unsigned int v5; // r14d
  DWORD dmDisplayFrequency; // r10d
  BOOL v7; // ebx
  DWORD dmPelsHeight; // r8d
  unsigned int v12; // edx
  int v13; // ecx
  DWORD dmPelsWidth; // eax
  DWORD v15; // edx
  int v16; // r9d
  int v17; // edx
  int v18; // r9d
  unsigned int v19; // r10d
  int v20; // r11d
  int v21; // eax
  _DWORD v23[3]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v24; // [rsp+2Ch] [rbp-1Ch]
  int v25; // [rsp+34h] [rbp-14h]

  v5 = 0;
  dmDisplayFrequency = a1->dmDisplayFrequency;
  v7 = 0;
  if ( (a1->dmFields & 0x80u) != 0 )
    v7 = ((a1->dmDisplayOrientation - 1) & 0xFFFFFFFD) == 0;
  if ( dmDisplayFrequency > 1 && a5 < 0 )
  {
    if ( dmDisplayFrequency < *(_DWORD *)a4 || dmDisplayFrequency > *((_DWORD *)a4 + 1) && dmDisplayFrequency > 0x3D )
      return 1LL;
    dmPelsHeight = a1->dmPelsHeight;
    v12 = dmDisplayFrequency * dmPelsHeight;
    if ( dmDisplayFrequency * dmPelsHeight < *((_DWORD *)a4 + 2) && dmDisplayFrequency < 0x3C )
      return 1LL;
    if ( v12 > *((_DWORD *)a4 + 3) && dmDisplayFrequency > 0x3D || v12 * a1->dmPelsWidth > *((_DWORD *)a4 + 5) )
      return 1LL;
    v13 = 107;
    if ( dmPelsHeight <= 0x258 )
      v13 = 105;
    v5 = v12 * v13 / 0x64;
  }
  if ( v7 )
    dmPelsWidth = a1->dmPelsHeight;
  else
    dmPelsWidth = a1->dmPelsWidth;
  v23[0] = dmPelsWidth;
  if ( v7 )
    v15 = a1->dmPelsWidth;
  else
    v15 = a1->dmPelsHeight;
  v23[1] = v15;
  v23[2] = dmDisplayFrequency;
  v24 = 0LL;
  v25 = 0;
  if ( !a3 || (a5 & 0x40000000) == 0 || v15 <= *((_DWORD *)a2 + 6 * a3 - 5) )
  {
    v16 = 0;
    if ( a3 > 0 )
    {
      while ( 1 )
      {
        v17 = compModeCap((struct tagModeCap *)v23, (struct tagModeCap *)((char *)a2 + 24 * v16));
        if ( v17 <= 0 )
          break;
        if ( v18 >= a3 - 1 )
        {
          if ( (v20 & a5) != 0 )
            return 1LL;
          break;
        }
        v16 = v18 + 1;
        if ( v16 >= a3 )
          return 1LL;
      }
      if ( v19 <= 1 || a5 >= 0 )
        return 0LL;
      if ( !v17 || (v21 = v18 - 1, !v18) )
        v21 = v18;
      if ( (v19 <= *((_DWORD *)a2 + 6 * v21 + 2) || v19 <= 0x3D || v17 && v18 <= 0)
        && v19 >= *((_DWORD *)a2 + 6 * v21 + 3)
        && (v5 >= *((_DWORD *)a2 + 6 * v21 + 4) || v19 >= 0x3C)
        && (v5 <= *((_DWORD *)a2 + 6 * v21 + 5) || v19 <= 0x3D) )
      {
        return 0LL;
      }
    }
  }
  return 1LL;
}
