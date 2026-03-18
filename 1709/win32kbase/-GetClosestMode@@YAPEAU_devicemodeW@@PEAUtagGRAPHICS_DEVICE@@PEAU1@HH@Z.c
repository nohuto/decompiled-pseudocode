/*
 * XREFs of ?GetClosestMode@@YAPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAU1@HH@Z @ 0x1C00949EC
 * Callers:
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C006A150 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 * Callees:
 *     <none>
 */

struct _devicemodeW *__fastcall GetClosestMode(struct tagGRAPHICS_DEVICE *a1, struct _devicemodeW *a2, int a3, int a4)
{
  unsigned int v4; // edi
  __int64 v5; // r12
  int v6; // r11d
  struct tagGRAPHICS_DEVICE *v8; // r8
  _DWORD *v9; // rbx
  _DWORD *v10; // r15
  unsigned int v11; // r13d
  unsigned int v12; // r14d
  unsigned int v13; // ebp
  unsigned int v14; // r9d
  unsigned int v15; // esi
  DWORD dmFields; // eax
  int v17; // edx
  unsigned int v18; // ecx
  __int64 v19; // r8
  unsigned int v20; // eax
  DWORD dmPelsWidth; // r11d
  unsigned int v22; // ecx
  unsigned int v23; // eax
  DWORD dmPelsHeight; // r9d
  DWORD v25; // eax
  DWORD v26; // eax
  DWORD v27; // edi
  DWORD v28; // eax
  DWORD dmDisplayFixedOutput; // edx
  int v30; // r9d
  DWORD v31; // ebp
  DWORD v32; // ecx
  unsigned int v33; // ecx
  unsigned int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // ecx
  DWORD dmBitsPerPel; // eax
  DWORD v39; // ecx
  unsigned int v40; // eax
  unsigned int v41; // ecx
  DWORD dmDisplayFrequency; // eax
  DWORD v43; // ecx
  unsigned int v44; // eax
  int v45; // [rsp+0h] [rbp-58h]
  unsigned int i; // [rsp+4h] [rbp-54h]
  int v47; // [rsp+8h] [rbp-50h]
  int v48; // [rsp+Ch] [rbp-4Ch]
  unsigned int v50; // [rsp+68h] [rbp+10h]

  v4 = -1;
  v5 = 0LL;
  v6 = a3;
  v8 = a1;
  v9 = 0LL;
  v10 = 0LL;
  v11 = -1;
  v12 = -1;
  v13 = -1;
  v14 = -1;
  v45 = -1;
  v15 = -1;
  if ( !a2->dmDisplayFrequency )
    a2->dmDisplayFrequency = 60;
  if ( !a2->dmBitsPerPel )
    a2->dmBitsPerPel = 32;
  dmFields = a2->dmFields;
  v17 = dmFields & 0x80;
  v48 = v17;
  if ( (dmFields & 0x80) == 0 )
    a2->dmDisplayOrientation = 0;
  if ( (dmFields & 0x20000000) == 0 )
    a2->dmDisplayFixedOutput = 0;
  for ( i = 0; i < 2; ++i )
  {
    if ( v10 && !v14 )
    {
      v35 = v10[43];
      v36 = v10[44];
      if ( v35 < v36 )
      {
        if ( v35 >= 0x1E0 && v36 >= 0x280 )
        {
LABEL_62:
          if ( v10[46] >= 0x3Cu )
            return (struct _devicemodeW *)v10;
        }
      }
      else if ( v35 >= 0x280 && v36 >= 0x1E0 )
      {
        goto LABEL_62;
      }
    }
    v47 = 0;
    v50 = *((_DWORD *)v8 + 48);
    if ( !v50 )
      continue;
    v18 = *((_DWORD *)v8 + 48);
    while ( 1 )
    {
      if ( v6 && *(_DWORD *)(v5 + *((_QWORD *)v8 + 25)) )
        goto LABEL_49;
      v19 = *(_QWORD *)(v5 + *((_QWORD *)v8 + 25) + 8);
      if ( !a4 || ((LOBYTE(a2->dmDisplayFlags) ^ *(_BYTE *)(v19 + 180)) & 2) == 0 )
      {
        if ( !v17 )
          goto LABEL_20;
        v20 = dwOrientationDiffTable[4 * *(unsigned int *)(v19 + 84) + a2->dmDisplayOrientation];
        if ( v14 >= v20 )
          break;
      }
LABEL_48:
      v8 = a1;
      v18 = v50;
LABEL_49:
      v5 += 16LL;
      v17 = v48;
      if ( ++v47 >= v18 )
        goto LABEL_66;
    }
    if ( v14 > v20 )
      v9 = (_DWORD *)v19;
LABEL_20:
    dmPelsWidth = a2->dmPelsWidth;
    if ( dmPelsWidth && v9 != (_DWORD *)v19 )
    {
      v22 = *(_DWORD *)(v19 + 172);
      if ( dmPelsWidth < v22 )
        v23 = v22 - dmPelsWidth;
      else
        v23 = dmPelsWidth - v22;
      if ( v11 < v23 )
        goto LABEL_47;
      if ( v11 > v23 )
        v9 = (_DWORD *)v19;
    }
    dmPelsHeight = a2->dmPelsHeight;
    if ( dmPelsHeight )
    {
      if ( v9 == (_DWORD *)v19 )
        goto LABEL_29;
      v33 = *(_DWORD *)(v19 + 176);
      if ( dmPelsHeight < v33 )
        v34 = v33 - dmPelsHeight;
      else
        v34 = dmPelsHeight - v33;
      if ( v12 < v34 )
        goto LABEL_46;
      if ( v12 > v34 )
        v9 = (_DWORD *)v19;
    }
    if ( v9 != (_DWORD *)v19 )
    {
      dmBitsPerPel = a2->dmBitsPerPel;
      v39 = *(_DWORD *)(v19 + 168);
      v40 = dmBitsPerPel < v39 ? v39 - dmBitsPerPel : dmBitsPerPel - v39;
      if ( v4 < v40 )
        goto LABEL_46;
      if ( v4 > v40 )
        v9 = (_DWORD *)v19;
      if ( v9 != (_DWORD *)v19 )
      {
        v41 = a2->dmDisplayFixedOutput != *(_DWORD *)(v19 + 88);
        if ( v15 < v41 )
          goto LABEL_46;
        if ( v15 > v41 )
          v9 = (_DWORD *)v19;
        if ( v9 != (_DWORD *)v19 )
        {
          dmDisplayFrequency = a2->dmDisplayFrequency;
          v43 = *(_DWORD *)(v19 + 184);
          v44 = dmDisplayFrequency < v43 ? v43 - dmDisplayFrequency : dmDisplayFrequency - v43;
          if ( v13 < v44 )
            goto LABEL_46;
          if ( v13 > v44 )
            v9 = (_DWORD *)v19;
          if ( v9 != (_DWORD *)v19 )
          {
LABEL_46:
            v14 = v45;
LABEL_47:
            v6 = a3;
            goto LABEL_48;
          }
        }
      }
    }
LABEL_29:
    if ( !v9
      || !i
      && (v9[43] > dmPelsWidth && dmPelsWidth || v9[44] > dmPelsHeight && dmPelsHeight
                                              || v9[46] > a2->dmDisplayFrequency) )
    {
      goto LABEL_46;
    }
    v10 = v9;
    v45 = dwOrientationDiffTable[4 * *(unsigned int *)(v19 + 84) + a2->dmDisplayOrientation];
    v25 = *(_DWORD *)(v19 + 172);
    v11 = dmPelsWidth < v25 ? v25 - dmPelsWidth : dmPelsWidth - v25;
    v26 = *(_DWORD *)(v19 + 176);
    v12 = dmPelsHeight < v26 ? v26 - dmPelsHeight : dmPelsHeight - v26;
    v27 = a2->dmBitsPerPel;
    v28 = *(_DWORD *)(v19 + 168);
    v4 = v27 < v28 ? v28 - v27 : v27 - v28;
    dmDisplayFixedOutput = a2->dmDisplayFixedOutput;
    v30 = *(_DWORD *)(v19 + 88);
    v31 = a2->dmDisplayFrequency;
    v32 = *(_DWORD *)(v19 + 184);
    v13 = v31 < v32 ? v32 - v31 : v31 - v32;
    v15 = dmDisplayFixedOutput != v30;
    if ( v45 || v4 || v11 || v12 || dmDisplayFixedOutput != v30 || v13 )
      goto LABEL_46;
LABEL_66:
    v17 = v48;
    v5 = 0LL;
    v14 = v45;
    v8 = a1;
    v6 = a3;
  }
  return (struct _devicemodeW *)v10;
}
