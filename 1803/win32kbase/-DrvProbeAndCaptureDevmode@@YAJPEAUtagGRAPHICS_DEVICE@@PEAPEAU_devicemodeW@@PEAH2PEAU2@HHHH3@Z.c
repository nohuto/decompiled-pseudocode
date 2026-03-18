/*
 * XREFs of ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C004FF68
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C004EAA8 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C004FD28 (-DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00CD344 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001CAB4 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     DrvBuildDevmodeList @ 0x1C00507C0 (DrvBuildDevmodeList.c)
 *     ?AreEquivalentDevModes@@YA_NQEBU_devicemodeW@@0@Z @ 0x1C00512AC (-AreEquivalentDevModes@@YA_NQEBU_devicemodeW@@0@Z.c)
 *     DrvGetDisplayDriverParameters @ 0x1C0051310 (DrvGetDisplayDriverParameters.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?GetClosestMode@@YAPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAU1@HH@Z @ 0x1C00D1A90 (-GetClosestMode@@YAPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAU1@HH@Z.c)
 */

__int64 __fastcall DrvProbeAndCaptureDevmode(
        struct tagGRAPHICS_DEVICE *a1,
        struct _devicemodeW **a2,
        int *a3,
        int *a4,
        struct _devicemodeW *Src,
        int a6,
        int a7,
        int a8,
        int a9,
        struct _devicemodeW *a10)
{
  unsigned int v12; // r14d
  const struct _devicemodeW *v13; // rsi
  struct _devicemodeW *v14; // r13
  struct _devicemodeW *v16; // rbx
  int v17; // eax
  struct _devicemodeW *v18; // rdi
  __int64 dmSize; // r13
  int dmDriverExtra; // eax
  unsigned int v21; // r12d
  struct _devicemodeW *v22; // rax
  DWORD dmFields; // ecx
  int v24; // eax
  struct tagGRAPHICS_DEVICE *v25; // r15
  const struct _devicemodeW *v26; // r10
  WCHAR *dmBitsPerPel; // rcx
  DWORD v28; // eax
  DWORD v29; // eax
  int v30; // edx
  DWORD dmDisplayFlags; // eax
  DWORD v32; // ecx
  char v33; // r8
  unsigned int dmDisplayOrientation; // eax
  DWORD v35; // ecx
  DWORD v36; // ecx
  unsigned int dmDisplayFixedOutput; // eax
  LONG y; // eax
  unsigned int v39; // ebp
  struct _devicemodeW *v40; // rdi
  char *v41; // rdx
  struct _devicemodeW *v42; // r13
  struct _devicemodeW *v43; // r12
  int v44; // eax
  int v45; // r10d
  int v46; // eax
  int v47; // r9d
  int v48; // ebp
  unsigned int v49; // r11d
  __int64 v50; // r8
  __int64 v51; // rcx
  DWORD v52; // eax
  DWORD v53; // ecx
  struct _devicemodeW *v54; // rax
  DWORD v55; // r8d
  DWORD v56; // edx
  unsigned int v57; // r14d
  WORD dmLogPixels; // ax
  int v59; // ecx
  DWORD dmDisplayFrequency; // eax
  __int64 v62; // rax
  int v63; // eax
  bool v64; // zf
  unsigned int v65; // ebp
  __int64 v66; // rcx
  DWORD *v67; // r15
  struct _devicemodeW *v68; // rcx
  _OWORD *v69; // rcx
  struct _devicemodeW *ClosestMode; // rcx
  unsigned __int16 v71; // ax
  int v72; // ecx
  int v73; // [rsp+20h] [rbp-98h]
  int v74; // [rsp+24h] [rbp-94h]
  DWORD dmPanningHeight; // [rsp+28h] [rbp-90h]
  DWORD v76; // [rsp+2Ch] [rbp-8Ch]
  unsigned int v77; // [rsp+30h] [rbp-88h]
  LONG x; // [rsp+34h] [rbp-84h]
  LONG v79; // [rsp+38h] [rbp-80h]
  DWORD dmPanningWidth; // [rsp+3Ch] [rbp-7Ch]
  BOOL v81; // [rsp+40h] [rbp-78h]
  int v82; // [rsp+44h] [rbp-74h]
  int v83; // [rsp+48h] [rbp-70h]
  unsigned int v84; // [rsp+4Ch] [rbp-6Ch]
  struct _devicemodeW *v85; // [rsp+50h] [rbp-68h]
  struct _devicemodeW *v86; // [rsp+58h] [rbp-60h]
  int Srca; // [rsp+E0h] [rbp+28h]
  unsigned int Srcb; // [rsp+E0h] [rbp+28h]

  v76 = 0;
  v84 = 1;
  v12 = -1073741823;
  dmPanningWidth = 0;
  v13 = 0LL;
  dmPanningHeight = 0;
  v14 = 0LL;
  v81 = 0;
  v86 = 0LL;
  v73 = 0;
  *a2 = 0LL;
  *a3 = 0;
  if ( a4 )
    *a4 = 0;
  if ( !Src )
    return 0;
  v16 = (struct _devicemodeW *)PALLOCMEM2(0x100DBuLL, 0x76656447u, 0);
  if ( v16 )
  {
    v17 = *((_DWORD *)a1 + 40);
    v18 = a10;
    if ( (v17 & 0x800000) != 0 && a10 )
    {
      if ( a10->dmSize + a10->dmDriverExtra == 244 )
        v14 = a10;
      v86 = v14;
    }
    dmSize = Src->dmSize;
    dmDriverExtra = Src->dmDriverExtra;
    Srca = dmDriverExtra;
    if ( (unsigned int)dmSize < 0xBC )
      goto LABEL_131;
    v21 = dmDriverExtra + dmSize;
    v22 = (struct _devicemodeW *)PALLOCMEM2((unsigned int)(dmDriverExtra + dmSize), 0x76656447u, 0);
    v13 = v22;
    if ( !v22 )
      goto LABEL_131;
    memmove(v22, Src, v21);
    dmFields = v13->dmFields;
    v13->dmDriverExtra = Srca;
    v13->dmSize = dmSize;
    v24 = 1;
    if ( dmFields )
      v24 = a8;
    v83 = v24;
    if ( (dmFields & 0x80020) == 0x80020 && !v13->dmPelsWidth && (dmFields & 0x100000) != 0 && !v13->dmPelsHeight )
    {
      *a3 = 1;
      v12 = 0;
LABEL_131:
      Win32FreePool((__int64)v16);
      if ( v13 )
        Win32FreePool((__int64)v13);
      return v12;
    }
    v85 = (struct _devicemodeW *)PALLOCMEM2(0xDCuLL, 0x76656447u, 0);
    if ( !v85 )
      goto LABEL_131;
    memset(v16, 0, sizeof(struct _devicemodeW));
    v25 = a1;
    *(_DWORD *)&v16->dmSize = -8739;
    if ( a6 )
    {
      DrvGetDisplayDriverParameters(a1, v16, 1LL, v18);
      v26 = v85;
    }
    else
    {
      if ( (int)DrvGetDisplayDriverParameters(a1, v16, 0LL, v18) < 0 )
        *(_DWORD *)&v16->dmSize = 220;
      v26 = v85;
      dmBitsPerPel = &v16->dmFormName[13];
      *(_OWORD *)v85->dmDeviceName = *(_OWORD *)v16->dmDeviceName;
      *(_OWORD *)&v85->dmDeviceName[8] = *(_OWORD *)&v16->dmDeviceName[8];
      *(_OWORD *)&v85->dmDeviceName[16] = *(_OWORD *)&v16->dmDeviceName[16];
      *(_OWORD *)&v85->dmDeviceName[24] = *(_OWORD *)&v16->dmDeviceName[24];
      *(_OWORD *)&v85->dmSpecVersion = *(_OWORD *)&v16->dmSpecVersion;
      *(union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)((char *)&v85->76 + 4) = *(union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)((char *)&v16->76 + 4);
      *(_OWORD *)&v85->dmYResolution = *(_OWORD *)&v16->dmYResolution;
      *(_OWORD *)&v85->dmFormName[5] = *(_OWORD *)&v16->dmFormName[5];
      *(_OWORD *)&v85->dmFormName[13] = *(_OWORD *)&v16->dmFormName[13];
      *(_OWORD *)&v85->dmFormName[21] = *(_OWORD *)&v16->dmFormName[21];
      *(_OWORD *)&v85->dmFormName[29] = *(_OWORD *)&v16->dmFormName[29];
      *(_OWORD *)&v85->dmPelsHeight = *(_OWORD *)&v16->dmPelsHeight;
      *(_OWORD *)&v85->dmICMIntent = *(_OWORD *)&v16->dmICMIntent;
      *(_QWORD *)&v85->dmReserved2 = *(_QWORD *)&v16->dmReserved2;
      v85->dmPanningHeight = v16->dmPanningHeight;
      v28 = v13->dmFields;
      if ( (v28 & 0x40000) != 0 )
      {
        dmBitsPerPel = (WCHAR *)v13->dmBitsPerPel;
        if ( (_DWORD)dmBitsPerPel )
        {
          v16->dmBitsPerPel = (unsigned int)dmBitsPerPel;
          v28 = v13->dmFields;
        }
      }
      if ( (v28 & 0x80000) != 0 )
      {
        dmBitsPerPel = (WCHAR *)v13->dmPelsWidth;
        if ( (_DWORD)dmBitsPerPel )
        {
          v16->dmPelsWidth = (unsigned int)dmBitsPerPel;
          v28 = v13->dmFields;
        }
      }
      if ( (v28 & 0x100000) != 0 )
      {
        dmBitsPerPel = (WCHAR *)v13->dmPelsHeight;
        if ( (_DWORD)dmBitsPerPel )
        {
          v16->dmPelsHeight = (unsigned int)dmBitsPerPel;
          v28 = v13->dmFields;
        }
      }
      if ( (v28 & 0x400000) != 0 && (v29 = v13->dmDisplayFrequency) != 0 )
      {
        v16->dmDisplayFrequency = v29;
      }
      else if ( v13->dmPelsWidth || v13->dmPelsHeight )
      {
        dmDisplayFrequency = v16->dmDisplayFrequency;
        v16->dmDisplayFrequency = 0;
        v76 = dmDisplayFrequency;
        if ( (*((_DWORD *)a1 + 40) & 0x800000) != 0 && v21 == 244 )
        {
          v62 = WdLogNewEntry5_WdWarning(dmBitsPerPel);
          WdLogEvent5_WdWarning(v62);
          v26 = v85;
        }
      }
    }
    v30 = 0;
    if ( (v13->dmFields & 0x200000) != 0 )
    {
      dmDisplayFlags = v13->dmDisplayFlags;
      v16->dmDisplayFlags = dmDisplayFlags;
      LOBYTE(v30) = (dmDisplayFlags & 0xFFFFFFF9) != 0;
      a8 = 0;
    }
    else if ( (v16->dmFields & 0x200000) != 0 )
    {
      v16->dmDisplayFlags &= 6u;
    }
    v32 = v13->dmFields;
    if ( (v32 & 0x18000000) == 0x18000000 )
    {
      if ( (unsigned int)dmSize < 0xDC )
      {
        v32 &= 0xE7FFFFFF;
        v13->dmFields = v32;
      }
      else
      {
        dmPanningWidth = v13->dmPanningWidth;
        dmPanningHeight = v13->dmPanningHeight;
        if ( dmPanningWidth > v16->dmPelsWidth || v13->dmPanningHeight > v16->dmPelsHeight )
        {
          v30 = 1;
          dmPanningHeight = v13->dmPanningHeight;
        }
      }
      v33 = v32;
    }
    else
    {
      v33 = v32;
      if ( (v16->dmFields & 0x18000000) == 0x18000000
        && v16->dmPanningHeight < v16->dmPelsHeight
        && v16->dmPanningWidth < v16->dmPelsWidth )
      {
        dmPanningWidth = v16->dmPanningWidth;
        dmPanningHeight = v16->dmPanningHeight;
      }
    }
    if ( v33 < 0 )
    {
      dmDisplayOrientation = v13->dmDisplayOrientation;
      v16->dmDisplayOrientation = dmDisplayOrientation;
      if ( dmDisplayOrientation > 3 )
        v30 = 1;
    }
    if ( (*((_DWORD *)a1 + 40) & 0x800000) != 0 )
    {
      v35 = v13->dmFields;
      if ( (v35 & 0x20400000) == 0x400000 )
      {
        v13->dmDisplayFixedOutput = 0;
        v13->dmFields = v35 | 0x20000000;
        v84 = 0;
      }
    }
    v36 = v13->dmFields;
    if ( (v36 & 0x20000000) != 0 )
    {
      dmDisplayFixedOutput = v13->dmDisplayFixedOutput;
      v16->dmDisplayFixedOutput = dmDisplayFixedOutput;
      if ( dmDisplayFixedOutput )
      {
        v73 = 1;
        if ( dmDisplayFixedOutput > 2 )
          v30 = 1;
      }
      else
      {
        v73 = 3;
      }
      if ( (*((_DWORD *)a1 + 40) & 0x800000) != 0 )
        v16->dmFields |= 0x20000000u;
      v36 = v13->dmFields;
    }
    else if ( (v16->dmFields & 0x20000000) != 0 )
    {
      v73 = 2;
    }
    if ( v86 )
      v81 = v16->dmDisplayFixedOutput == 0;
    if ( (v36 & 0x20) != 0 )
    {
      x = v13->dmPosition.x;
      y = v13->dmPosition.y;
      v74 = 1;
    }
    else
    {
      v74 = v16->dmFields & 0x20;
      x = v16->dmPosition.x;
      y = v16->dmPosition.y;
    }
    v79 = y;
    if ( v30 == 1 )
      goto LABEL_130;
    v77 = Srca;
    v39 = Srca;
    if ( !Srca
      && ((*((_DWORD *)a1 + 40) & 0x800000) == 0
       || !v13->dmPelsWidth && !v13->dmPelsHeight
       || AreEquivalentDevModes(v13, v26)) )
    {
      v39 = v16->dmDriverExtra;
      v77 = v39;
    }
    v40 = (struct _devicemodeW *)PALLOCMEM2(v39 + 220, 0x76656447u, 1);
    if ( !v40 )
      goto LABEL_130;
    if ( v39 )
    {
      if ( Srca )
      {
        v41 = (char *)v13 + dmSize;
        goto LABEL_63;
      }
      if ( v16->dmDriverExtra )
      {
        v41 = (char *)v16 + v16->dmSize;
LABEL_63:
        memmove(&v40[1], v41, v39);
      }
    }
    v82 = 0;
    v42 = 0LL;
    DrvBuildDevmodeList(a1);
    v43 = (struct _devicemodeW *)*((_QWORD *)a1 + 22);
    if ( v16->dmBitsPerPel || v16->dmPelsWidth || v16->dmPelsHeight || v16->dmDisplayOrientation )
    {
      v44 = *((_DWORD *)a1 + 40);
      if ( (v44 & 8) != 0 && !*((_DWORD *)a1 + 46) )
      {
        v45 = 0;
        v42 = v16;
        goto LABEL_69;
      }
      if ( a9
        && (v44 & 0x800000) != 0
        && v16->dmSize + v16->dmDriverExtra == 244
        && v13->dmBitsPerPel != 4
        && v16->dmDisplayFrequency )
      {
        v42 = v16;
        if ( *((_DWORD *)a1 + 47) )
        {
          v69 = *(_OWORD **)(*((_QWORD *)a1 + 24) + 8LL);
          if ( v69 )
          {
            *(_OWORD *)v16->dmDeviceName = *v69;
            *(_OWORD *)&v16->dmDeviceName[8] = v69[1];
            *(_OWORD *)&v16->dmDeviceName[16] = v69[2];
            *(_OWORD *)&v16->dmDeviceName[24] = v69[3];
          }
        }
        v46 = 0;
        v82 = 1;
        v45 = 2;
        goto LABEL_70;
      }
      if ( v83 )
      {
        ClosestMode = GetClosestMode(a1, v16, a7, 1);
        if ( ClosestMode || (ClosestMode = GetClosestMode(a1, v16, a7, 0)) != 0LL )
        {
          v16->dmBitsPerPel = ClosestMode->dmBitsPerPel;
          v16->dmPelsWidth = ClosestMode->dmPelsWidth;
          v16->dmPelsHeight = ClosestMode->dmPelsHeight;
          v16->dmDisplayFrequency = ClosestMode->dmDisplayFrequency;
          v16->dmDisplayOrientation = ClosestMode->dmDisplayOrientation;
          v16->dmDisplayFixedOutput = ClosestMode->dmDisplayFixedOutput;
          v16->dmDisplayFlags = ClosestMode->dmDisplayFlags;
        }
      }
    }
    else
    {
      v63 = *((_DWORD *)a1 + 40);
      if ( (v63 & 0x6000000) != 0 )
      {
        v45 = 0;
        if ( v43 )
        {
          v16->dmBitsPerPel = v43->dmBitsPerPel;
          v16->dmPelsWidth = *(_DWORD *)(*((_QWORD *)a1 + 22) + 172LL);
          v16->dmPelsHeight = *(_DWORD *)(*((_QWORD *)a1 + 22) + 176LL);
          v16->dmDisplayFrequency = *(_DWORD *)(*((_QWORD *)a1 + 22) + 184LL);
          v16->dmDisplayOrientation = *(_DWORD *)(*((_QWORD *)a1 + 22) + 84LL);
          v16->dmDisplayFixedOutput = *(_DWORD *)(*((_QWORD *)a1 + 22) + 88LL);
          v16->dmDisplayFlags = *(_DWORD *)(*((_QWORD *)a1 + 22) + 180LL);
        }
        goto LABEL_69;
      }
      if ( (v63 & 8) != 0 )
      {
        v12 = *((_DWORD *)a1 + 46) != 0 ? -1073741823 : -1073741776;
      }
      else
      {
        v64 = gbBaseVideo == 0;
        v16->dmBitsPerPel = 0;
        v65 = !v64;
        v66 = 8LL * !v64;
        if ( v83 )
        {
          v67 = (DWORD *)((char *)&unk_1C0181BA8 + v66 + 4);
          do
          {
            v16->dmPelsWidth = *(v67 - 1);
            v16->dmPelsHeight = *v67;
            v68 = GetClosestMode(a1, v16, a7, 1);
            if ( (v68 || (v68 = GetClosestMode(a1, v16, a7, 0)) != 0LL) && v68->dmBitsPerPel > 0x10 )
              break;
            ++v65;
            v67 += 2;
          }
          while ( v65 < 3 );
          v12 = -1073741823;
          v25 = a1;
          v45 = 0;
          if ( v68 )
          {
            v16->dmBitsPerPel = v68->dmBitsPerPel;
            v16->dmPelsWidth = v68->dmPelsWidth;
            v16->dmPelsHeight = v68->dmPelsHeight;
            v16->dmDisplayFrequency = v68->dmDisplayFrequency;
            v16->dmDisplayOrientation = v68->dmDisplayOrientation;
            v16->dmDisplayFixedOutput = v68->dmDisplayFixedOutput;
            v16->dmDisplayFlags = v68->dmDisplayFlags;
          }
          goto LABEL_69;
        }
        v16->dmPelsWidth = *(_DWORD *)((char *)&unk_1C0181BA8 + v66);
        v16->dmPelsHeight = *(_DWORD *)((char *)&unk_1C0181BA8 + v66 + 4);
      }
    }
    v45 = 0;
LABEL_69:
    v46 = 1;
LABEL_70:
    v47 = v45;
    v48 = v45;
    if ( v46 )
    {
      v49 = 0;
      Srcb = *((_DWORD *)v25 + 47);
      if ( Srcb )
      {
        v50 = v84;
        do
        {
          v51 = *((_QWORD *)v25 + 24);
          if ( a7 && *(_DWORD *)(v51 + 16LL * v49) )
            goto LABEL_78;
          v52 = v16->dmBitsPerPel;
          v43 = *(struct _devicemodeW **)(v51 + 16LL * v49 + 8);
          if ( v52 )
          {
            if ( v52 != v43->dmBitsPerPel )
              goto LABEL_78;
          }
          if ( v16->dmPelsWidth != v43->dmPelsWidth )
            goto LABEL_78;
          if ( v16->dmPelsHeight != v43->dmPelsHeight )
            goto LABEL_78;
          v53 = v43->dmDisplayOrientation;
          if ( v16->dmDisplayOrientation != v53
            || v50 && v16->dmDisplayFixedOutput != v43->dmDisplayFixedOutput && (v73 == 1 || v47 == 2 && v45 == 2) )
          {
            goto LABEL_78;
          }
          v54 = v43;
          if ( v42 )
            v54 = v42;
          v42 = v54;
          if ( !v45 )
          {
            if ( v53 )
              goto LABEL_90;
            v42 = v43;
            v45 = 1;
            v47 = 0;
            v48 = 0;
          }
          if ( v45 != 2 )
          {
LABEL_90:
            v42 = v43;
            v45 = 2;
            v47 = 0;
            v48 = 0;
          }
          if ( v47 != 2 && (v16->dmDisplayFixedOutput == v43->dmDisplayFixedOutput || !v50) )
          {
            v42 = v43;
            v47 = 2;
            v48 = 0;
          }
          if ( v48 )
            goto LABEL_98;
          if ( v43->dmDisplayFrequency == 60 && v43->dmDisplayFlags == v16->dmDisplayFlags )
          {
            v42 = v43;
            v48 = 1;
LABEL_98:
            if ( v48 == 2 )
              goto LABEL_78;
          }
          v55 = v43->dmDisplayFrequency;
          if ( v55 == 1 && v16->dmDisplayFrequency == 64 && v43->dmDisplayFlags == v16->dmDisplayFlags )
          {
            v42 = v43;
            v48 = 2;
          }
          if ( v48 != 2 )
          {
            v56 = v16->dmDisplayFrequency;
            if ( v55 != v56
              && ((*((_DWORD *)v25 + 40) & 0x800000) == 0 || v16->dmSize + v16->dmDriverExtra != 244
                                                          || v56
                                                          || v76 != v55) )
            {
              v50 = v84;
              goto LABEL_78;
            }
            if ( v43->dmDisplayFlags == v16->dmDisplayFlags )
            {
              v48 = 2;
              v42 = v43;
              if ( v47 == 2 || !v16->dmDisplayFixedOutput && (*((_DWORD *)v25 + 40) & 0x800000) == 0 )
              {
                v82 = 1;
                break;
              }
            }
          }
          v50 = v84;
LABEL_78:
          ++v49;
        }
        while ( v49 < Srcb );
      }
    }
    if ( v42 )
    {
      v57 = v77;
      if ( (*((_DWORD *)v25 + 40) & 0x800000) != 0
        && v77 + v42->dmSize == 244
        && !v16->dmDisplayFrequency
        && v76 != v43->dmDisplayFrequency )
      {
        v57 = 0;
      }
      if ( a8 && v48 != 2 && v42->dmDisplayFrequency == v16->dmDisplayFrequency )
        v48 = 2;
      if ( (*((_DWORD *)v25 + 40) & 0x800000) != 0 && v45 == 2 && v47 == 2 && (v73 & 0xFFFFFFFD) == 0 )
        v48 = 2;
      memmove(v40, v42, v42->dmSize);
      v40->dmDriverExtra = v57;
      if ( !gdmLogPixels )
      {
        GetDpiSetting(1LL, &a8);
        v71 = a8;
        v16->dmLogPixels = a8;
        gdmLogPixels = v71;
      }
      dmLogPixels = v16->dmLogPixels;
      v59 = v40->dmFields | 0x18220000;
      v40->dmFields = v59;
      v40->dmLogPixels = dmLogPixels;
      if ( (*((_DWORD *)v25 + 40) & 0x4000000) != 0 )
      {
        if ( !v74 )
        {
LABEL_120:
          v40->dmPanningWidth = dmPanningWidth;
          v40->dmPanningHeight = dmPanningHeight;
          if ( (*((_DWORD *)v25 + 40) & 0x800000) != 0 && v57 + v40->dmSize == 244 )
            ((void (__fastcall *)(struct _devicemodeW *, struct _devicemodeW *))qword_1C01A1A78)(v40, v40);
          if ( v86 )
          {
            if ( *(_DWORD *)&v86[1].dmDeviceName[6] )
            {
              v72 = v40->dmFields | 0x2000000;
              v40->dmFields = v72;
              v40->dmMediaType = *(_DWORD *)&v86[1].dmDeviceName[6];
              if ( v81 )
              {
                v40->dmFields = v72 | 0x4000000;
                v40->dmDisplayFixedOutput = *(_DWORD *)&v86[1].dmDeviceName[8];
              }
            }
          }
          if ( a4 && v42->dmSize + v42->dmDriverExtra == 244 && (*(_DWORD *)&v42[1].dmDeviceName[10] & 0x20) != 0 )
            *a4 = 1;
          *a2 = v40;
          if ( v82 || v48 == 2 )
          {
            v12 = 0;
          }
          else if ( v16->dmDisplayFrequency )
          {
            v12 = -1073741811;
          }
          else
          {
            v12 = 1073741839;
          }
          goto LABEL_130;
        }
        v40->dmFields = v59 | 0x20;
      }
      else
      {
        v40->dmFields = v59 | (v74 != 0 ? 0x20 : 0);
      }
      v40->dmPosition.x = x;
      v40->dmPosition.y = v79;
      goto LABEL_120;
    }
    Win32FreePool((__int64)v40);
LABEL_130:
    Win32FreePool((__int64)v85);
    goto LABEL_131;
  }
  return v12;
}
