/*
 * XREFs of ?GetClosestMode@@YAPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAU1@HH@Z @ 0x1C00D1A90
 * Callers:
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C004FF68 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 * Callees:
 *     <none>
 */

struct _devicemodeW *__fastcall GetClosestMode(struct tagGRAPHICS_DEVICE *a1, struct _devicemodeW *a2, int a3, int a4)
{
  unsigned int v4; // esi
  _DWORD *v5; // rbx
  _DWORD *v6; // r13
  struct tagGRAPHICS_DEVICE *v8; // r8
  unsigned int v9; // r12d
  unsigned int v10; // r15d
  unsigned int v11; // r14d
  unsigned int v12; // edi
  unsigned int v13; // ebp
  DWORD dmFields; // eax
  int v15; // r11d
  unsigned int v16; // r9d
  unsigned int v17; // eax
  unsigned int v18; // ecx
  bool v19; // cf
  __int64 v20; // rdx
  unsigned int v21; // ecx
  __int64 v22; // r8
  unsigned int v23; // eax
  DWORD dmPelsWidth; // edi
  unsigned int v25; // ecx
  unsigned int v26; // eax
  DWORD dmPelsHeight; // r11d
  unsigned int v28; // ecx
  unsigned int v29; // eax
  DWORD dmBitsPerPel; // eax
  unsigned int v31; // ecx
  unsigned int v32; // eax
  _DWORD *v33; // rcx
  unsigned int v34; // r9d
  _DWORD *v35; // rdx
  DWORD dmDisplayFrequency; // eax
  DWORD v37; // ecx
  unsigned int v38; // eax
  unsigned int v39; // eax
  unsigned int v40; // eax
  DWORD v41; // esi
  unsigned int v42; // eax
  DWORD dmDisplayFixedOutput; // edx
  int v44; // r9d
  DWORD v45; // r14d
  unsigned int v46; // ecx
  int v48; // [rsp+0h] [rbp-68h]
  int v49; // [rsp+4h] [rbp-64h]
  unsigned int v50; // [rsp+8h] [rbp-60h]
  unsigned int v51; // [rsp+Ch] [rbp-5Ch]
  __int64 v52; // [rsp+10h] [rbp-58h]
  unsigned int v54; // [rsp+78h] [rbp+10h]

  v4 = -1;
  v5 = 0LL;
  v6 = 0LL;
  v49 = -1;
  v8 = a1;
  v9 = -1;
  v10 = -1;
  v11 = -1;
  v12 = -1;
  v13 = -1;
  if ( !a2->dmDisplayFrequency )
    a2->dmDisplayFrequency = 60;
  if ( !a2->dmBitsPerPel )
    a2->dmBitsPerPel = 32;
  dmFields = a2->dmFields;
  v15 = dmFields & 0x80;
  v48 = v15;
  if ( (dmFields & 0x80) == 0 )
    a2->dmDisplayOrientation = 0;
  if ( (dmFields & 0x20000000) == 0 )
    a2->dmDisplayFixedOutput = 0;
  v16 = 0;
  v50 = 0;
  do
  {
    if ( v6 && !v12 )
    {
      v17 = v6[43];
      v18 = v6[44];
      if ( v17 < v18 )
      {
        if ( v17 >= 0x1E0 )
        {
          v19 = v18 < 0x280;
          goto LABEL_17;
        }
      }
      else if ( v17 >= 0x280 )
      {
        v19 = v18 < 0x1E0;
LABEL_17:
        if ( !v19 && v6[46] >= 0x3Cu )
          return (struct _devicemodeW *)v6;
      }
    }
    v51 = 0;
    v54 = *((_DWORD *)v8 + 47);
    if ( !v54 )
      goto LABEL_97;
    v20 = 0LL;
    v21 = *((_DWORD *)v8 + 47);
    v52 = 0LL;
    while ( 1 )
    {
      if ( a3 && *(_DWORD *)(v20 + *((_QWORD *)v8 + 24)) )
        goto LABEL_95;
      v22 = *(_QWORD *)(v20 + *((_QWORD *)v8 + 24) + 8);
      if ( !a4 || ((LOBYTE(a2->dmDisplayFlags) ^ *(_BYTE *)(v22 + 180)) & 2) == 0 )
      {
        if ( !v15 )
          goto LABEL_29;
        v23 = dwOrientationDiffTable[4 * *(unsigned int *)(v22 + 84) + a2->dmDisplayOrientation];
        v20 = v52;
        if ( v12 >= v23 )
          break;
      }
LABEL_94:
      v8 = a1;
      v21 = v54;
LABEL_95:
      v20 += 16LL;
      v16 = v50;
      ++v51;
      v52 = v20;
      if ( v51 >= v21 )
        goto LABEL_96;
    }
    if ( v12 > v23 )
      v5 = (_DWORD *)v22;
LABEL_29:
    dmPelsWidth = a2->dmPelsWidth;
    if ( dmPelsWidth && v5 != (_DWORD *)v22 )
    {
      v25 = *(_DWORD *)(v22 + 172);
      if ( dmPelsWidth < v25 )
        v26 = v25 - dmPelsWidth;
      else
        v26 = dmPelsWidth - v25;
      if ( v9 < v26 )
        goto LABEL_93;
      if ( v9 > v26 )
        v5 = (_DWORD *)v22;
    }
    dmPelsHeight = a2->dmPelsHeight;
    if ( dmPelsHeight )
    {
      if ( v5 == (_DWORD *)v22 )
        goto LABEL_65;
      v28 = *(_DWORD *)(v22 + 176);
      if ( dmPelsHeight < v28 )
        v29 = v28 - dmPelsHeight;
      else
        v29 = dmPelsHeight - v28;
      if ( v10 < v29 )
        goto LABEL_92;
      if ( v10 > v29 )
        v5 = (_DWORD *)v22;
    }
    if ( v5 != (_DWORD *)v22 )
    {
      dmBitsPerPel = a2->dmBitsPerPel;
      v31 = *(_DWORD *)(v22 + 168);
      if ( dmBitsPerPel < v31 )
        v32 = v31 - dmBitsPerPel;
      else
        v32 = dmBitsPerPel - v31;
      if ( v4 < v32 )
        goto LABEL_92;
      v33 = (_DWORD *)v22;
      if ( v4 <= v32 )
        v33 = v5;
      v5 = v33;
      if ( v33 != (_DWORD *)v22 )
      {
        v34 = a2->dmDisplayFixedOutput != *(_DWORD *)(v22 + 88);
        if ( v13 < v34 )
          goto LABEL_92;
        v35 = (_DWORD *)v22;
        if ( v13 <= v34 )
          v35 = v33;
        v5 = v35;
        if ( v35 != (_DWORD *)v22 )
        {
          dmDisplayFrequency = a2->dmDisplayFrequency;
          v37 = *(_DWORD *)(v22 + 184);
          v38 = dmDisplayFrequency < v37 ? v37 - dmDisplayFrequency : dmDisplayFrequency - v37;
          if ( v11 < v38 )
            goto LABEL_91;
          v5 = (_DWORD *)v22;
          if ( v11 <= v38 )
            v5 = v35;
          if ( v5 != (_DWORD *)v22 )
          {
LABEL_91:
            v20 = v52;
LABEL_92:
            v15 = v48;
LABEL_93:
            v12 = v49;
            goto LABEL_94;
          }
        }
        v16 = v50;
      }
    }
LABEL_65:
    if ( !v5
      || !v16
      && (v5[43] > dmPelsWidth && dmPelsWidth || v5[44] > dmPelsHeight && dmPelsHeight
                                              || v5[46] > a2->dmDisplayFrequency) )
    {
      goto LABEL_91;
    }
    v6 = v5;
    v49 = dwOrientationDiffTable[4 * *(unsigned int *)(v22 + 84) + a2->dmDisplayOrientation];
    v39 = *(_DWORD *)(v22 + 172);
    if ( dmPelsWidth < v39 )
      v9 = v39 - dmPelsWidth;
    else
      v9 = dmPelsWidth - v39;
    v40 = *(_DWORD *)(v22 + 176);
    if ( dmPelsHeight < v40 )
      v10 = v40 - dmPelsHeight;
    else
      v10 = dmPelsHeight - v40;
    v41 = a2->dmBitsPerPel;
    v42 = *(_DWORD *)(v22 + 168);
    if ( v41 < v42 )
      v4 = v42 - v41;
    else
      v4 = v41 - v42;
    dmDisplayFixedOutput = a2->dmDisplayFixedOutput;
    v44 = *(_DWORD *)(v22 + 88);
    v45 = a2->dmDisplayFrequency;
    v46 = *(_DWORD *)(v22 + 184);
    if ( v45 < v46 )
      v11 = v46 - v45;
    else
      v11 = v45 - v46;
    v12 = dwOrientationDiffTable[4 * *(unsigned int *)(v22 + 84) + a2->dmDisplayOrientation];
    v13 = dmDisplayFixedOutput != v44;
    if ( v49 || v4 || v9 || v10 || dmDisplayFixedOutput != v44 || v11 )
    {
      v20 = v52;
      v15 = v48;
      goto LABEL_94;
    }
LABEL_96:
    v16 = v50;
    v15 = v48;
    v8 = a1;
LABEL_97:
    v50 = ++v16;
  }
  while ( v16 < 2 );
  return (struct _devicemodeW *)v6;
}
