/*
 * XREFs of ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C006A150
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00686F4 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C006B444 (-DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F63C4 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0040604 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ?AreEquivalentDevModes@@YA_NQEBU_devicemodeW@@0@Z @ 0x1C006A0EC (-AreEquivalentDevModes@@YA_NQEBU_devicemodeW@@0@Z.c)
 *     DrvBuildDevmodeList @ 0x1C006ABB0 (DrvBuildDevmodeList.c)
 *     DrvGetDisplayDriverParameters @ 0x1C006AF2C (DrvGetDisplayDriverParameters.c)
 *     ?GetClosestMode@@YAPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAU1@HH@Z @ 0x1C00949EC (-GetClosestMode@@YAPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAU1@HH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 *     memset @ 0x1C00ABB80 (memset.c)
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
  const struct _devicemodeW *v13; // rdi
  struct _devicemodeW *v14; // r13
  struct _devicemodeW *v16; // rbx
  int v17; // eax
  struct _devicemodeW *v18; // rsi
  __int64 dmSize; // r13
  int dmDriverExtra; // eax
  unsigned int v21; // r12d
  struct _devicemodeW *v22; // rax
  DWORD dmFields; // ecx
  int v24; // eax
  struct tagGRAPHICS_DEVICE *v25; // r15
  const struct _devicemodeW *v26; // r9
  DWORD dmBitsPerPel; // eax
  DWORD dmPelsWidth; // eax
  DWORD dmPelsHeight; // eax
  DWORD v30; // eax
  int v31; // ecx
  DWORD dmDisplayFlags; // eax
  DWORD dmPanningHeight; // edx
  unsigned int dmDisplayOrientation; // eax
  DWORD v35; // edx
  unsigned int dmDisplayFixedOutput; // eax
  LONG y; // eax
  unsigned int v38; // r12d
  struct _devicemodeW *v39; // rsi
  char *v40; // rdx
  struct _devicemodeW *v41; // r13
  struct _devicemodeW *v42; // r12
  int v43; // eax
  int v44; // r11d
  int v45; // eax
  int v46; // r10d
  int v47; // ebp
  unsigned int v48; // eax
  __int64 v49; // rdx
  DWORD v50; // eax
  DWORD v51; // ecx
  DWORD v52; // r8d
  DWORD v53; // edx
  unsigned int v54; // r14d
  WORD dmLogPixels; // ax
  int v56; // ecx
  int v58; // r8d
  struct _devicemodeW *ClosestMode; // rcx
  int v60; // eax
  unsigned __int16 v61; // ax
  DWORD dmDisplayFrequency; // eax
  __int64 v63; // rax
  bool v64; // zf
  unsigned int v65; // ebp
  DWORD *v66; // r15
  struct _devicemodeW *v67; // rcx
  _OWORD *v68; // rcx
  int v69; // ecx
  unsigned int v70; // [rsp+20h] [rbp-98h]
  int v71; // [rsp+28h] [rbp-90h]
  int v72; // [rsp+2Ch] [rbp-8Ch]
  DWORD v73; // [rsp+30h] [rbp-88h]
  unsigned int v74; // [rsp+34h] [rbp-84h]
  LONG x; // [rsp+38h] [rbp-80h]
  LONG v76; // [rsp+3Ch] [rbp-7Ch]
  DWORD dmPanningWidth; // [rsp+40h] [rbp-78h]
  DWORD v78; // [rsp+44h] [rbp-74h]
  BOOL v79; // [rsp+48h] [rbp-70h]
  int v80; // [rsp+4Ch] [rbp-6Ch]
  int v81; // [rsp+50h] [rbp-68h]
  struct _devicemodeW *v82; // [rsp+58h] [rbp-60h]
  struct _devicemodeW *v83; // [rsp+60h] [rbp-58h]
  unsigned int v86; // [rsp+D0h] [rbp+18h]
  int Srca; // [rsp+E0h] [rbp+28h]
  unsigned int Srcb; // [rsp+E0h] [rbp+28h]

  v73 = 0;
  v70 = 1;
  v12 = -1073741823;
  dmPanningWidth = 0;
  v13 = 0LL;
  v78 = 0;
  v14 = 0LL;
  v79 = 0;
  v83 = 0LL;
  *a2 = 0LL;
  *a3 = 0;
  if ( a4 )
    *a4 = 0;
  if ( !Src )
    return 0;
  v16 = (struct _devicemodeW *)PALLOCMEM2(0x100DBuLL, 1986356295LL, 0);
  if ( v16 )
  {
    v17 = *((_DWORD *)a1 + 40);
    v18 = a10;
    if ( (v17 & 0x800000) != 0 && a10 )
    {
      if ( a10->dmSize + a10->dmDriverExtra == 244 )
        v14 = a10;
      v83 = v14;
    }
    dmSize = Src->dmSize;
    dmDriverExtra = Src->dmDriverExtra;
    Srca = dmDriverExtra;
    if ( (unsigned int)dmSize < 0xBC )
      goto LABEL_132;
    v21 = dmDriverExtra + dmSize;
    v22 = (struct _devicemodeW *)PALLOCMEM2((unsigned int)(dmDriverExtra + dmSize), 1986356295LL, 0);
    v13 = v22;
    if ( !v22 )
      goto LABEL_132;
    memmove(v22, Src, v21);
    dmFields = v13->dmFields;
    v13->dmSize = dmSize;
    v13->dmDriverExtra = Srca;
    v24 = 1;
    if ( dmFields )
      v24 = a8;
    v81 = v24;
    if ( (dmFields & 0x80020) == 0x80020 && !v13->dmPelsWidth && (dmFields & 0x100000) != 0 && !v13->dmPelsHeight )
    {
      *a3 = 1;
      v12 = 0;
LABEL_132:
      Win32FreePool((__int64)v16);
      if ( v13 )
        Win32FreePool((__int64)v13);
      return v12;
    }
    v82 = (struct _devicemodeW *)PALLOCMEM2(0xDCuLL, 1986356295LL, 0);
    if ( !v82 )
      goto LABEL_132;
    memset(v16, 0, sizeof(struct _devicemodeW));
    v25 = a1;
    *(_DWORD *)&v16->dmSize = -8739;
    if ( a6 )
    {
      DrvGetDisplayDriverParameters(a1, v16, 1LL, v18);
      v26 = v82;
    }
    else
    {
      if ( (int)DrvGetDisplayDriverParameters(a1, v16, 0LL, v18) < 0 )
        *(_DWORD *)&v16->dmSize = 220;
      v26 = v82;
      *(_OWORD *)v82->dmDeviceName = *(_OWORD *)v16->dmDeviceName;
      *(_OWORD *)&v82->dmDeviceName[8] = *(_OWORD *)&v16->dmDeviceName[8];
      *(_OWORD *)&v82->dmDeviceName[16] = *(_OWORD *)&v16->dmDeviceName[16];
      *(_OWORD *)&v82->dmDeviceName[24] = *(_OWORD *)&v16->dmDeviceName[24];
      *(_OWORD *)&v82->dmSpecVersion = *(_OWORD *)&v16->dmSpecVersion;
      *(union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)((char *)&v82->76 + 4) = *(union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)((char *)&v16->76 + 4);
      *(_OWORD *)&v82->dmYResolution = *(_OWORD *)&v16->dmYResolution;
      *(_OWORD *)&v82->dmFormName[5] = *(_OWORD *)&v16->dmFormName[5];
      *(_OWORD *)&v82->dmFormName[13] = *(_OWORD *)&v16->dmFormName[13];
      *(_OWORD *)&v82->dmFormName[21] = *(_OWORD *)&v16->dmFormName[21];
      *(_OWORD *)&v82->dmFormName[29] = *(_OWORD *)&v16->dmFormName[29];
      *(_OWORD *)&v82->dmPelsHeight = *(_OWORD *)&v16->dmPelsHeight;
      *(_OWORD *)&v82->dmICMIntent = *(_OWORD *)&v16->dmICMIntent;
      *(_QWORD *)&v82->dmReserved2 = *(_QWORD *)&v16->dmReserved2;
      v82->dmPanningHeight = v16->dmPanningHeight;
      if ( (v13->dmFields & 0x40000) != 0 )
      {
        dmBitsPerPel = v13->dmBitsPerPel;
        if ( dmBitsPerPel )
          v16->dmBitsPerPel = dmBitsPerPel;
      }
      if ( (v13->dmFields & 0x80000) != 0 )
      {
        dmPelsWidth = v13->dmPelsWidth;
        if ( dmPelsWidth )
          v16->dmPelsWidth = dmPelsWidth;
      }
      if ( (v13->dmFields & 0x100000) != 0 )
      {
        dmPelsHeight = v13->dmPelsHeight;
        if ( dmPelsHeight )
          v16->dmPelsHeight = dmPelsHeight;
      }
      if ( (v13->dmFields & 0x400000) != 0 && (v30 = v13->dmDisplayFrequency) != 0 )
      {
        v16->dmDisplayFrequency = v30;
      }
      else if ( v13->dmPelsWidth || v13->dmPelsHeight )
      {
        dmDisplayFrequency = v16->dmDisplayFrequency;
        v16->dmDisplayFrequency = 0;
        v73 = dmDisplayFrequency;
        if ( (*((_DWORD *)a1 + 40) & 0x800000) != 0 && v21 == 244 )
        {
          v63 = WdLogNewEntry5_WdWarning(&v16->dmFormName[13]);
          WdLogEvent5_WdWarning(v63);
          v26 = v82;
        }
      }
    }
    v31 = 0;
    if ( (v13->dmFields & 0x200000) != 0 )
    {
      dmDisplayFlags = v13->dmDisplayFlags;
      v16->dmDisplayFlags = dmDisplayFlags;
      LOBYTE(v31) = (dmDisplayFlags & 0xFFFFFFF9) != 0;
      a8 = 0;
    }
    else if ( (v16->dmFields & 0x200000) != 0 )
    {
      v16->dmDisplayFlags &= 6u;
    }
    if ( (v13->dmFields & 0x18000000) == 0x18000000 )
    {
      if ( (unsigned int)dmSize < 0xDC )
      {
        v13->dmFields &= 0xE7FFFFFF;
        goto LABEL_37;
      }
      dmPanningWidth = v13->dmPanningWidth;
      if ( dmPanningWidth > v16->dmPelsWidth || v13->dmPanningHeight > v16->dmPelsHeight )
        v31 = 1;
      dmPanningHeight = v13->dmPanningHeight;
    }
    else
    {
      if ( (v16->dmFields & 0x18000000) != 0x18000000
        || (dmPanningHeight = v16->dmPanningHeight, dmPanningHeight >= v16->dmPelsHeight)
        || v16->dmPanningWidth >= v16->dmPelsWidth )
      {
LABEL_37:
        if ( (v13->dmFields & 0x80u) != 0 )
        {
          dmDisplayOrientation = v13->dmDisplayOrientation;
          v16->dmDisplayOrientation = dmDisplayOrientation;
          if ( dmDisplayOrientation > 3 )
            v31 = 1;
        }
        if ( (*((_DWORD *)a1 + 40) & 0x800000) != 0 )
        {
          v35 = v13->dmFields;
          if ( (v35 & 0x20400000) == 0x400000 )
          {
            v13->dmDisplayFixedOutput = 0;
            v13->dmFields = v35 | 0x20000000;
            v70 = 0;
          }
        }
        if ( (v13->dmFields & 0x20000000) != 0 )
        {
          dmDisplayFixedOutput = v13->dmDisplayFixedOutput;
          v16->dmDisplayFixedOutput = dmDisplayFixedOutput;
          if ( dmDisplayFixedOutput )
          {
            v71 = 1;
            if ( dmDisplayFixedOutput > 2 )
              v31 = 1;
          }
          else
          {
            v71 = 3;
          }
          if ( (*((_DWORD *)a1 + 40) & 0x800000) != 0 )
            v16->dmFields |= 0x20000000u;
        }
        else
        {
          v58 = 0;
          if ( (v16->dmFields & 0x20000000) != 0 )
            v58 = 2;
          v71 = v58;
        }
        if ( v83 )
          v79 = v16->dmDisplayFixedOutput == 0;
        if ( (v13->dmFields & 0x20) != 0 )
        {
          x = v13->dmPosition.x;
          y = v13->dmPosition.y;
          v72 = 1;
        }
        else
        {
          v72 = v16->dmFields & 0x20;
          x = v16->dmPosition.x;
          y = v16->dmPosition.y;
        }
        v76 = y;
        if ( v31 == 1 )
          goto LABEL_131;
        v74 = Srca;
        v38 = Srca;
        if ( !Srca
          && ((*((_DWORD *)a1 + 40) & 0x800000) == 0
           || !v13->dmPelsWidth && !v13->dmPelsHeight
           || AreEquivalentDevModes(v13, v26)) )
        {
          v38 = v16->dmDriverExtra;
          v74 = v38;
        }
        v39 = (struct _devicemodeW *)PALLOCMEM2(v38 + 220, 1986356295LL, 1);
        if ( !v39 )
          goto LABEL_131;
        if ( v38 )
        {
          if ( Srca )
          {
            v40 = (char *)v13 + dmSize;
            goto LABEL_63;
          }
          if ( v16->dmDriverExtra )
          {
            v40 = (char *)v16 + v16->dmSize;
LABEL_63:
            memmove(&v39[1], v40, v38);
          }
        }
        v80 = 0;
        v41 = 0LL;
        DrvBuildDevmodeList(a1);
        v42 = (struct _devicemodeW *)*((_QWORD *)a1 + 23);
        if ( v16->dmBitsPerPel || v16->dmPelsWidth || v16->dmPelsHeight || v16->dmDisplayOrientation )
        {
          v43 = *((_DWORD *)a1 + 40);
          if ( (v43 & 8) != 0 && !*((_DWORD *)a1 + 44) )
          {
            v44 = 0;
            v41 = v16;
            goto LABEL_69;
          }
          if ( a9
            && (v43 & 0x800000) != 0
            && v16->dmSize + v16->dmDriverExtra == 244
            && v13->dmBitsPerPel != 4
            && v16->dmDisplayFrequency )
          {
            v41 = v16;
            if ( *((_DWORD *)a1 + 48) )
            {
              v68 = *(_OWORD **)(*((_QWORD *)a1 + 25) + 8LL);
              if ( v68 )
              {
                *(_OWORD *)v16->dmDeviceName = *v68;
                *(_OWORD *)&v16->dmDeviceName[8] = v68[1];
                *(_OWORD *)&v16->dmDeviceName[16] = v68[2];
                *(_OWORD *)&v16->dmDeviceName[24] = v68[3];
              }
            }
            v80 = 1;
            v44 = 2;
            v45 = 0;
LABEL_70:
            v46 = v44;
            v47 = v44;
            if ( v45 )
            {
              v48 = 0;
              Srcb = 0;
              v86 = *((_DWORD *)v25 + 48);
              if ( v86 )
              {
                v49 = v70;
                do
                {
                  if ( a7 )
                  {
                    if ( *(_DWORD *)(*((_QWORD *)v25 + 25) + 16LL * v48) )
                      goto LABEL_79;
                    v48 = Srcb;
                  }
                  v42 = *(struct _devicemodeW **)(*((_QWORD *)v25 + 25) + 16LL * v48 + 8);
                  v50 = v16->dmBitsPerPel;
                  if ( v50 && v50 != v42->dmBitsPerPel )
                    goto LABEL_79;
                  if ( v16->dmPelsWidth != v42->dmPelsWidth )
                    goto LABEL_79;
                  if ( v16->dmPelsHeight != v42->dmPelsHeight )
                    goto LABEL_79;
                  v51 = v42->dmDisplayOrientation;
                  if ( v16->dmDisplayOrientation != v51
                    || v49
                    && v16->dmDisplayFixedOutput != v42->dmDisplayFixedOutput
                    && (v71 == 1 || v46 == 2 && v44 == 2) )
                  {
                    goto LABEL_79;
                  }
                  if ( !v41 )
                    v41 = v42;
                  if ( !v44 )
                  {
                    if ( v51 )
                      goto LABEL_91;
                    v41 = v42;
                    v44 = 1;
                    v46 = 0;
                    v47 = 0;
                  }
                  if ( v44 != 2 )
                  {
LABEL_91:
                    v41 = v42;
                    v44 = 2;
                    v46 = 0;
                    v47 = 0;
                  }
                  if ( v46 != 2 && (v16->dmDisplayFixedOutput == v42->dmDisplayFixedOutput || !v49) )
                  {
                    v41 = v42;
                    v46 = 2;
                    v47 = 0;
                  }
                  if ( v47 )
                    goto LABEL_99;
                  if ( v42->dmDisplayFrequency == 60 && v42->dmDisplayFlags == v16->dmDisplayFlags )
                  {
                    v41 = v42;
                    v47 = 1;
LABEL_99:
                    if ( v47 == 2 )
                      goto LABEL_79;
                  }
                  v52 = v42->dmDisplayFrequency;
                  if ( v52 == 1 && v16->dmDisplayFrequency == 64 && v42->dmDisplayFlags == v16->dmDisplayFlags )
                  {
                    v41 = v42;
                    v47 = 2;
                  }
                  if ( v47 != 2 )
                  {
                    v53 = v16->dmDisplayFrequency;
                    if ( v52 == v53
                      || (*((_DWORD *)v25 + 40) & 0x800000) != 0
                      && v16->dmSize + v16->dmDriverExtra == 244
                      && !v53
                      && v73 == v52 )
                    {
                      if ( v42->dmDisplayFlags == v16->dmDisplayFlags )
                      {
                        v47 = 2;
                        v41 = v42;
                        if ( v46 == 2 || !v16->dmDisplayFixedOutput && (*((_DWORD *)v25 + 40) & 0x800000) == 0 )
                        {
                          v80 = 1;
                          break;
                        }
                      }
                      v49 = v70;
                    }
                    else
                    {
                      v49 = v70;
                    }
                  }
LABEL_79:
                  v48 = Srcb + 1;
                  Srcb = v48;
                }
                while ( v48 < v86 );
              }
            }
            if ( !v41 )
            {
              Win32FreePool((__int64)v39);
LABEL_131:
              Win32FreePool((__int64)v82);
              goto LABEL_132;
            }
            v54 = v74;
            if ( (*((_DWORD *)v25 + 40) & 0x800000) != 0
              && v74 + v41->dmSize == 244
              && !v16->dmDisplayFrequency
              && v73 != v42->dmDisplayFrequency )
            {
              v54 = 0;
            }
            if ( a8 && v47 != 2 && v41->dmDisplayFrequency == v16->dmDisplayFrequency )
              v47 = 2;
            if ( (*((_DWORD *)v25 + 40) & 0x800000) != 0 && v44 == 2 && v46 == 2 && (v71 & 0xFFFFFFFD) == 0 )
              v47 = 2;
            memmove(v39, v41, v41->dmSize);
            v39->dmDriverExtra = v54;
            if ( !gdmLogPixels )
            {
              GetDpiSetting(1LL, &a8);
              v61 = a8;
              v16->dmLogPixels = a8;
              gdmLogPixels = v61;
            }
            dmLogPixels = v16->dmLogPixels;
            v56 = v39->dmFields | 0x18220000;
            v39->dmFields = v56;
            v39->dmLogPixels = dmLogPixels;
            if ( (*((_DWORD *)v25 + 40) & 0x4000000) != 0 )
            {
              if ( !v72 )
              {
LABEL_121:
                v39->dmPanningWidth = dmPanningWidth;
                v39->dmPanningHeight = v78;
                if ( (*((_DWORD *)v25 + 40) & 0x800000) != 0 && v54 + v39->dmSize == 244 )
                  ((void (__fastcall *)(struct _devicemodeW *, struct _devicemodeW *))qword_1C0190690)(v39, v39);
                if ( v83 )
                {
                  if ( *(_DWORD *)&v83[1].dmDeviceName[6] )
                  {
                    v69 = v39->dmFields | 0x2000000;
                    v39->dmFields = v69;
                    v39->dmMediaType = *(_DWORD *)&v83[1].dmDeviceName[6];
                    if ( v79 )
                    {
                      v39->dmFields = v69 | 0x4000000;
                      v39->dmDisplayFixedOutput = *(_DWORD *)&v83[1].dmDeviceName[8];
                    }
                  }
                }
                if ( a4 && v41->dmSize + v41->dmDriverExtra == 244 && (*(_DWORD *)&v41[1].dmDeviceName[10] & 0x20) != 0 )
                  *a4 = 1;
                *a2 = v39;
                if ( v80 || v47 == 2 )
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
                goto LABEL_131;
              }
              v39->dmFields = v56 | 0x20;
            }
            else
            {
              v39->dmFields = v56 | (v72 != 0 ? 0x20 : 0);
            }
            v39->dmPosition.x = x;
            v39->dmPosition.y = v76;
            goto LABEL_121;
          }
          if ( v81 )
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
          v60 = *((_DWORD *)a1 + 40);
          if ( (v60 & 0x6000000) != 0 )
          {
            v44 = 0;
            if ( v42 )
            {
              v16->dmBitsPerPel = v42->dmBitsPerPel;
              v16->dmPelsWidth = *(_DWORD *)(*((_QWORD *)a1 + 23) + 172LL);
              v16->dmPelsHeight = *(_DWORD *)(*((_QWORD *)a1 + 23) + 176LL);
              v16->dmDisplayFrequency = *(_DWORD *)(*((_QWORD *)a1 + 23) + 184LL);
              v16->dmDisplayOrientation = *(_DWORD *)(*((_QWORD *)a1 + 23) + 84LL);
              v16->dmDisplayFixedOutput = *(_DWORD *)(*((_QWORD *)a1 + 23) + 88LL);
              v16->dmDisplayFlags = *(_DWORD *)(*((_QWORD *)a1 + 23) + 180LL);
            }
            goto LABEL_69;
          }
          if ( (v60 & 8) != 0 )
          {
            v12 = *((_DWORD *)a1 + 44) != 0 ? -1073741823 : -1073741776;
          }
          else
          {
            v64 = gbBaseVideo == 0;
            v16->dmBitsPerPel = 0;
            v65 = !v64;
            if ( v81 )
            {
              v66 = &dword_1C016DEC0[2 * !v64 + 1];
              do
              {
                v16->dmPelsWidth = *(v66 - 1);
                v16->dmPelsHeight = *v66;
                v67 = GetClosestMode(a1, v16, a7, 1);
                if ( (v67 || (v67 = GetClosestMode(a1, v16, a7, 0)) != 0LL) && v67->dmBitsPerPel > 0x10 )
                  break;
                ++v65;
                v66 += 2;
              }
              while ( v65 < 3 );
              v12 = -1073741823;
              v25 = a1;
              v44 = 0;
              if ( v67 )
              {
                v16->dmBitsPerPel = v67->dmBitsPerPel;
                v16->dmPelsWidth = v67->dmPelsWidth;
                v16->dmPelsHeight = v67->dmPelsHeight;
                v16->dmDisplayFrequency = v67->dmDisplayFrequency;
                v16->dmDisplayOrientation = v67->dmDisplayOrientation;
                v16->dmDisplayFixedOutput = v67->dmDisplayFixedOutput;
                v16->dmDisplayFlags = v67->dmDisplayFlags;
              }
              goto LABEL_69;
            }
            v16->dmPelsWidth = dword_1C016DEC0[2 * !v64];
            v16->dmPelsHeight = dword_1C016DEC0[2 * !v64 + 1];
          }
        }
        v44 = 0;
LABEL_69:
        v45 = 1;
        goto LABEL_70;
      }
      dmPanningWidth = v16->dmPanningWidth;
    }
    v78 = dmPanningHeight;
    goto LABEL_37;
  }
  return v12;
}
