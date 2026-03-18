/*
 * XREFs of ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C005DCFC
 * Callers:
 *     ?DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C005A7BC (-DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAU_D3DKMT_GETPATHSMODALITY@.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C005C288 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F5340 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAU_D3DKMT_GE.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C003F7F8 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ?AreEquivalentDevModes@@YA_NQEBU_devicemodeW@@0@Z @ 0x1C005DC94 (-AreEquivalentDevModes@@YA_NQEBU_devicemodeW@@0@Z.c)
 *     DrvBuildDevmodeList @ 0x1C005E770 (DrvBuildDevmodeList.c)
 *     DrvGetDisplayDriverParameters @ 0x1C005EAEC (DrvGetDisplayDriverParameters.c)
 *     ?GetClosestMode@@YAPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAU1@HH@Z @ 0x1C008D6C4 (-GetClosestMode@@YAPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAU1@HH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     memset @ 0x1C00A2500 (memset.c)
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
  struct _devicemodeW *v15; // rbx
  struct _devicemodeW *v16; // rdi
  __int64 dmSize; // r13
  int dmDriverExtra; // eax
  unsigned int v19; // r12d
  struct _devicemodeW *v20; // rax
  DWORD dmFields; // ecx
  int v22; // eax
  const struct _devicemodeW *v23; // r9
  DWORD dmBitsPerPel; // eax
  DWORD dmPelsWidth; // eax
  DWORD dmPelsHeight; // eax
  DWORD v27; // eax
  int v28; // ecx
  DWORD dmDisplayFlags; // eax
  DWORD dmPanningHeight; // edx
  unsigned int dmDisplayOrientation; // eax
  DWORD v32; // edx
  unsigned int dmDisplayFixedOutput; // eax
  LONG y; // eax
  unsigned int v35; // r8d
  struct _devicemodeW *v36; // rdi
  char *v37; // rdx
  struct _devicemodeW *v38; // r13
  struct _devicemodeW *v39; // r12
  int v40; // eax
  int v41; // r11d
  int v42; // eax
  int v43; // r9d
  int v44; // ebp
  unsigned int v45; // eax
  __int64 v46; // rdx
  DWORD v47; // eax
  DWORD v48; // ecx
  DWORD v49; // r8d
  DWORD v50; // edx
  unsigned int v51; // r14d
  WORD dmLogPixels; // ax
  int v53; // ecx
  int v55; // r8d
  struct _devicemodeW *ClosestMode; // rcx
  int v57; // eax
  unsigned __int16 v58; // ax
  DWORD dmDisplayFrequency; // eax
  __int64 v60; // rax
  bool v61; // zf
  unsigned int v62; // ebp
  DWORD *v63; // r15
  struct _devicemodeW *v64; // rcx
  _OWORD *v65; // rcx
  int v66; // ecx
  int v67; // [rsp+20h] [rbp-98h]
  int v68; // [rsp+20h] [rbp-98h]
  unsigned int v69; // [rsp+28h] [rbp-90h]
  unsigned int Size; // [rsp+30h] [rbp-88h]
  int Size_4; // [rsp+34h] [rbp-84h]
  int v72; // [rsp+38h] [rbp-80h]
  DWORD v73; // [rsp+3Ch] [rbp-7Ch]
  LONG x; // [rsp+40h] [rbp-78h]
  LONG v75; // [rsp+44h] [rbp-74h]
  DWORD dmPanningWidth; // [rsp+48h] [rbp-70h]
  DWORD v77; // [rsp+4Ch] [rbp-6Ch]
  BOOL v78; // [rsp+50h] [rbp-68h]
  struct _devicemodeW *v79; // [rsp+58h] [rbp-60h]
  struct _devicemodeW *v80; // [rsp+60h] [rbp-58h]
  struct _devicemodeW *v81; // [rsp+68h] [rbp-50h]
  unsigned int v84; // [rsp+D0h] [rbp+18h]
  int Srca; // [rsp+E0h] [rbp+28h]
  unsigned int Srcb; // [rsp+E0h] [rbp+28h]

  v73 = 0;
  v69 = 1;
  v12 = -1073741823;
  dmPanningWidth = 0;
  v13 = 0LL;
  v77 = 0;
  v14 = 0LL;
  v78 = 0;
  v80 = 0LL;
  *a2 = 0LL;
  *a3 = 0;
  if ( a4 )
    *a4 = 0;
  if ( !Src )
    return 0;
  v15 = (struct _devicemodeW *)PALLOCMEM2(0x100DBuLL, 1986356295LL, 0);
  if ( v15 )
  {
    v16 = a10;
    if ( (*((_DWORD *)a1 + 40) & 0x800000) != 0 && a10 )
    {
      if ( a10->dmSize + a10->dmDriverExtra == 244 )
        v14 = a10;
      v80 = v14;
    }
    dmSize = Src->dmSize;
    dmDriverExtra = Src->dmDriverExtra;
    v67 = dmDriverExtra;
    if ( (unsigned int)dmSize < 0xBC )
      goto LABEL_132;
    v19 = dmDriverExtra + dmSize;
    v20 = (struct _devicemodeW *)PALLOCMEM2((unsigned int)(dmDriverExtra + dmSize), 1986356295LL, 0);
    v13 = v20;
    if ( !v20 )
      goto LABEL_132;
    memmove(v20, Src, v19);
    dmFields = v13->dmFields;
    v13->dmDriverExtra = v67;
    v13->dmSize = dmSize;
    v22 = 1;
    if ( dmFields )
      v22 = a8;
    Srca = v22;
    if ( (dmFields & 0x80020) == 0x80020 && !v13->dmPelsWidth && (dmFields & 0x100000) != 0 && !v13->dmPelsHeight )
    {
      *a3 = 1;
      v12 = 0;
LABEL_132:
      Win32FreePool((__int64)v15);
      if ( v13 )
        Win32FreePool((__int64)v13);
      return v12;
    }
    v79 = (struct _devicemodeW *)PALLOCMEM2(0xDCuLL, 1986356295LL, 0);
    if ( !v79 )
      goto LABEL_132;
    memset(v15, 0, sizeof(struct _devicemodeW));
    *(_DWORD *)&v15->dmSize = -8739;
    if ( a6 )
    {
      DrvGetDisplayDriverParameters(a1, v15, 1LL, v16);
      v23 = v79;
    }
    else
    {
      if ( (int)DrvGetDisplayDriverParameters(a1, v15, 0LL, v16) < 0 )
        *(_DWORD *)&v15->dmSize = 220;
      v23 = v79;
      *(_OWORD *)v79->dmDeviceName = *(_OWORD *)v15->dmDeviceName;
      *(_OWORD *)&v79->dmDeviceName[8] = *(_OWORD *)&v15->dmDeviceName[8];
      *(_OWORD *)&v79->dmDeviceName[16] = *(_OWORD *)&v15->dmDeviceName[16];
      *(_OWORD *)&v79->dmDeviceName[24] = *(_OWORD *)&v15->dmDeviceName[24];
      *(_OWORD *)&v79->dmSpecVersion = *(_OWORD *)&v15->dmSpecVersion;
      *(union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)((char *)&v79->76 + 4) = *(union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)((char *)&v15->76 + 4);
      *(_OWORD *)&v79->dmYResolution = *(_OWORD *)&v15->dmYResolution;
      *(_OWORD *)&v79->dmFormName[5] = *(_OWORD *)&v15->dmFormName[5];
      *(_OWORD *)&v79->dmFormName[13] = *(_OWORD *)&v15->dmFormName[13];
      *(_OWORD *)&v79->dmFormName[21] = *(_OWORD *)&v15->dmFormName[21];
      *(_OWORD *)&v79->dmFormName[29] = *(_OWORD *)&v15->dmFormName[29];
      *(_OWORD *)&v79->dmPelsHeight = *(_OWORD *)&v15->dmPelsHeight;
      *(_OWORD *)&v79->dmICMIntent = *(_OWORD *)&v15->dmICMIntent;
      *(_QWORD *)&v79->dmReserved2 = *(_QWORD *)&v15->dmReserved2;
      v79->dmPanningHeight = v15->dmPanningHeight;
      if ( (v13->dmFields & 0x40000) != 0 )
      {
        dmBitsPerPel = v13->dmBitsPerPel;
        if ( dmBitsPerPel )
          v15->dmBitsPerPel = dmBitsPerPel;
      }
      if ( (v13->dmFields & 0x80000) != 0 )
      {
        dmPelsWidth = v13->dmPelsWidth;
        if ( dmPelsWidth )
          v15->dmPelsWidth = dmPelsWidth;
      }
      if ( (v13->dmFields & 0x100000) != 0 )
      {
        dmPelsHeight = v13->dmPelsHeight;
        if ( dmPelsHeight )
          v15->dmPelsHeight = dmPelsHeight;
      }
      if ( (v13->dmFields & 0x400000) != 0 && (v27 = v13->dmDisplayFrequency) != 0 )
      {
        v15->dmDisplayFrequency = v27;
      }
      else if ( v13->dmPelsWidth || v13->dmPelsHeight )
      {
        dmDisplayFrequency = v15->dmDisplayFrequency;
        v15->dmDisplayFrequency = 0;
        v73 = dmDisplayFrequency;
        if ( (*((_DWORD *)a1 + 40) & 0x800000) != 0 && v19 == 244 )
        {
          v60 = WdLogNewEntry5_WdWarning(&v15->dmFormName[13]);
          WdLogEvent5_WdWarning(v60);
          v23 = v79;
        }
      }
    }
    v28 = 0;
    if ( (v13->dmFields & 0x200000) != 0 )
    {
      dmDisplayFlags = v13->dmDisplayFlags;
      v15->dmDisplayFlags = dmDisplayFlags;
      LOBYTE(v28) = (dmDisplayFlags & 0xFFFFFFF9) != 0;
      a8 = 0;
    }
    else if ( (v15->dmFields & 0x200000) != 0 )
    {
      v15->dmDisplayFlags &= 6u;
    }
    if ( (v13->dmFields & 0x18000000) == 0x18000000 )
    {
      if ( (unsigned int)dmSize < 0xDC )
      {
        v13->dmFields &= 0xE7FFFFFF;
        goto LABEL_37;
      }
      dmPanningWidth = v13->dmPanningWidth;
      if ( dmPanningWidth > v15->dmPelsWidth || v13->dmPanningHeight > v15->dmPelsHeight )
        v28 = 1;
      dmPanningHeight = v13->dmPanningHeight;
    }
    else
    {
      if ( (v15->dmFields & 0x18000000) != 0x18000000
        || (dmPanningHeight = v15->dmPanningHeight, dmPanningHeight >= v15->dmPelsHeight)
        || v15->dmPanningWidth >= v15->dmPelsWidth )
      {
LABEL_37:
        if ( (v13->dmFields & 0x80u) != 0 )
        {
          dmDisplayOrientation = v13->dmDisplayOrientation;
          v15->dmDisplayOrientation = dmDisplayOrientation;
          if ( dmDisplayOrientation > 3 )
            v28 = 1;
        }
        if ( (*((_DWORD *)a1 + 40) & 0x800000) != 0 )
        {
          v32 = v13->dmFields;
          if ( (v32 & 0x20400000) == 0x400000 )
          {
            v13->dmDisplayFixedOutput = 0;
            v13->dmFields = v32 | 0x20000000;
            v69 = 0;
          }
        }
        if ( (v13->dmFields & 0x20000000) != 0 )
        {
          dmDisplayFixedOutput = v13->dmDisplayFixedOutput;
          v15->dmDisplayFixedOutput = dmDisplayFixedOutput;
          if ( dmDisplayFixedOutput )
          {
            Size_4 = 1;
            if ( dmDisplayFixedOutput > 2 )
              v28 = 1;
          }
          else
          {
            Size_4 = 3;
          }
          if ( (*((_DWORD *)a1 + 40) & 0x800000) != 0 )
            v15->dmFields |= 0x20000000u;
        }
        else
        {
          v55 = 0;
          if ( (v15->dmFields & 0x20000000) != 0 )
            v55 = 2;
          Size_4 = v55;
        }
        if ( v80 )
          v78 = v15->dmDisplayFixedOutput == 0;
        if ( (v13->dmFields & 0x20) != 0 )
        {
          x = v13->dmPosition.x;
          y = v13->dmPosition.y;
          v72 = 1;
        }
        else
        {
          v72 = v15->dmFields & 0x20;
          x = v15->dmPosition.x;
          y = v15->dmPosition.y;
        }
        v75 = y;
        if ( v28 == 1 )
          goto LABEL_131;
        v35 = v67;
        Size = v67;
        if ( !v67
          && ((*((_DWORD *)a1 + 40) & 0x800000) == 0
           || !v13->dmPelsWidth && !v13->dmPelsHeight
           || AreEquivalentDevModes(v13, v23)) )
        {
          v35 = v15->dmDriverExtra;
          Size = v35;
        }
        v81 = (struct _devicemodeW *)PALLOCMEM2(v35 + 220, 1986356295LL, 1);
        v36 = v81;
        if ( !v81 )
          goto LABEL_131;
        if ( Size )
        {
          if ( v67 )
          {
            v37 = (char *)v13 + dmSize;
            goto LABEL_63;
          }
          if ( v15->dmDriverExtra )
          {
            v37 = (char *)v15 + v15->dmSize;
LABEL_63:
            memmove(&v81[1], v37, Size);
          }
        }
        v38 = 0LL;
        v68 = 0;
        DrvBuildDevmodeList(a1);
        v39 = (struct _devicemodeW *)*((_QWORD *)a1 + 23);
        if ( v15->dmBitsPerPel || v15->dmPelsWidth || v15->dmPelsHeight || v15->dmDisplayOrientation )
        {
          v40 = *((_DWORD *)a1 + 40);
          if ( (v40 & 8) != 0 && !*((_DWORD *)a1 + 44) )
          {
            v41 = 0;
            v38 = v15;
            goto LABEL_69;
          }
          if ( a9
            && (v40 & 0x800000) != 0
            && v15->dmDriverExtra + v15->dmSize == 244
            && v13->dmBitsPerPel != 4
            && v15->dmDisplayFrequency )
          {
            v38 = v15;
            if ( *((_DWORD *)a1 + 48) )
            {
              v65 = *(_OWORD **)(*((_QWORD *)a1 + 25) + 8LL);
              if ( v65 )
              {
                *(_OWORD *)v15->dmDeviceName = *v65;
                *(_OWORD *)&v15->dmDeviceName[8] = v65[1];
                *(_OWORD *)&v15->dmDeviceName[16] = v65[2];
                *(_OWORD *)&v15->dmDeviceName[24] = v65[3];
              }
            }
            v68 = 1;
            v41 = 2;
            v42 = 0;
LABEL_70:
            v43 = v41;
            v44 = v41;
            if ( v42 )
            {
              v45 = 0;
              Srcb = 0;
              v84 = *((_DWORD *)a1 + 48);
              if ( v84 )
              {
                v46 = v69;
                do
                {
                  if ( a7 )
                  {
                    if ( *(_DWORD *)(*((_QWORD *)a1 + 25) + 16LL * v45) )
                      goto LABEL_79;
                    v45 = Srcb;
                  }
                  v39 = *(struct _devicemodeW **)(*((_QWORD *)a1 + 25) + 16LL * v45 + 8);
                  v47 = v15->dmBitsPerPel;
                  if ( v47 && v47 != v39->dmBitsPerPel )
                    goto LABEL_79;
                  if ( v15->dmPelsWidth != v39->dmPelsWidth )
                    goto LABEL_79;
                  if ( v15->dmPelsHeight != v39->dmPelsHeight )
                    goto LABEL_79;
                  v48 = v39->dmDisplayOrientation;
                  if ( v15->dmDisplayOrientation != v48
                    || v46
                    && v15->dmDisplayFixedOutput != v39->dmDisplayFixedOutput
                    && (Size_4 == 1 || v43 == 2 && v41 == 2) )
                  {
                    goto LABEL_79;
                  }
                  if ( !v38 )
                    v38 = v39;
                  if ( !v41 )
                  {
                    if ( v48 )
                      goto LABEL_91;
                    v38 = v39;
                    v41 = 1;
                    v43 = 0;
                    v44 = 0;
                  }
                  if ( v41 != 2 )
                  {
LABEL_91:
                    v38 = v39;
                    v41 = 2;
                    v43 = 0;
                    v44 = 0;
                  }
                  if ( v43 != 2 && (v15->dmDisplayFixedOutput == v39->dmDisplayFixedOutput || !v46) )
                  {
                    v38 = v39;
                    v43 = 2;
                    v44 = 0;
                  }
                  if ( v44 )
                    goto LABEL_99;
                  if ( v39->dmDisplayFrequency == 60 && v39->dmDisplayFlags == v15->dmDisplayFlags )
                  {
                    v38 = v39;
                    v44 = 1;
LABEL_99:
                    if ( v44 == 2 )
                      goto LABEL_79;
                  }
                  v49 = v39->dmDisplayFrequency;
                  if ( v49 == 1 && v15->dmDisplayFrequency == 64 && v39->dmDisplayFlags == v15->dmDisplayFlags )
                  {
                    v38 = v39;
                    v44 = 2;
                  }
                  if ( v44 != 2 )
                  {
                    v50 = v15->dmDisplayFrequency;
                    if ( v49 == v50
                      || (*((_DWORD *)a1 + 40) & 0x800000) != 0
                      && v15->dmDriverExtra + v15->dmSize == 244
                      && !v50
                      && v73 == v49 )
                    {
                      if ( v39->dmDisplayFlags == v15->dmDisplayFlags )
                      {
                        v44 = 2;
                        v38 = v39;
                        if ( v43 == 2 || !v15->dmDisplayFixedOutput && (*((_DWORD *)a1 + 40) & 0x800000) == 0 )
                        {
                          v68 = 1;
                          break;
                        }
                      }
                      v46 = v69;
                    }
                    else
                    {
                      v46 = v69;
                    }
                  }
LABEL_79:
                  v45 = Srcb + 1;
                  Srcb = v45;
                }
                while ( v45 < v84 );
              }
            }
            if ( !v38 )
            {
              Win32FreePool((__int64)v36);
LABEL_131:
              Win32FreePool((__int64)v79);
              goto LABEL_132;
            }
            v51 = Size;
            if ( (*((_DWORD *)a1 + 40) & 0x800000) != 0
              && Size + v38->dmSize == 244
              && !v15->dmDisplayFrequency
              && v73 != v39->dmDisplayFrequency )
            {
              v51 = 0;
            }
            if ( a8 && v44 != 2 && v38->dmDisplayFrequency == v15->dmDisplayFrequency )
              v44 = 2;
            if ( (*((_DWORD *)a1 + 40) & 0x800000) != 0 && v41 == 2 && v43 == 2 && (Size_4 & 0xFFFFFFFD) == 0 )
              v44 = 2;
            memmove(v36, v38, v38->dmSize);
            v36->dmDriverExtra = v51;
            if ( !gdmLogPixels )
            {
              GetDpiSetting(1LL, &a8);
              v58 = a8;
              v15->dmLogPixels = a8;
              gdmLogPixels = v58;
            }
            dmLogPixels = v15->dmLogPixels;
            v53 = v36->dmFields | 0x18220000;
            v36->dmFields = v53;
            v36->dmLogPixels = dmLogPixels;
            if ( (*((_DWORD *)a1 + 40) & 0x4000000) != 0 )
            {
              if ( !v72 )
              {
LABEL_121:
                v36->dmPanningWidth = dmPanningWidth;
                v36->dmPanningHeight = v77;
                if ( (*((_DWORD *)a1 + 40) & 0x800000) != 0 && v51 + v36->dmSize == 244 )
                  ((void (__fastcall *)(struct _devicemodeW *, struct _devicemodeW *))qword_1C018BA28)(v36, v36);
                if ( v80 )
                {
                  if ( *(_DWORD *)&v80[1].dmDeviceName[6] )
                  {
                    v66 = v36->dmFields | 0x2000000;
                    v36->dmFields = v66;
                    v36->dmMediaType = *(_DWORD *)&v80[1].dmDeviceName[6];
                    if ( v78 )
                    {
                      v36->dmFields = v66 | 0x4000000;
                      v36->dmDisplayFixedOutput = *(_DWORD *)&v80[1].dmDeviceName[8];
                    }
                  }
                }
                if ( a4 && v38->dmSize + v38->dmDriverExtra == 244 && (*(_DWORD *)&v38[1].dmDeviceName[10] & 0x20) != 0 )
                  *a4 = 1;
                *a2 = v36;
                if ( v68 || v44 == 2 )
                {
                  v12 = 0;
                }
                else if ( v15->dmDisplayFrequency )
                {
                  v12 = -1073741811;
                }
                else
                {
                  v12 = 1073741839;
                }
                goto LABEL_131;
              }
              v36->dmFields = v53 | 0x20;
            }
            else
            {
              v36->dmFields = v53 | (v72 != 0 ? 0x20 : 0);
            }
            v36->dmPosition.x = x;
            v36->dmPosition.y = v75;
            goto LABEL_121;
          }
          if ( Srca )
          {
            ClosestMode = GetClosestMode(a1, v15, a7, 1);
            if ( ClosestMode || (ClosestMode = GetClosestMode(a1, v15, a7, 0)) != 0LL )
            {
              v15->dmBitsPerPel = ClosestMode->dmBitsPerPel;
              v15->dmPelsWidth = ClosestMode->dmPelsWidth;
              v15->dmPelsHeight = ClosestMode->dmPelsHeight;
              v15->dmDisplayFrequency = ClosestMode->dmDisplayFrequency;
              v15->dmDisplayOrientation = ClosestMode->dmDisplayOrientation;
              v15->dmDisplayFixedOutput = ClosestMode->dmDisplayFixedOutput;
              v15->dmDisplayFlags = ClosestMode->dmDisplayFlags;
            }
          }
        }
        else
        {
          v57 = *((_DWORD *)a1 + 40);
          if ( (v57 & 0x6000000) != 0 )
          {
            v41 = 0;
            if ( v39 )
            {
              v15->dmBitsPerPel = v39->dmBitsPerPel;
              v15->dmPelsWidth = *(_DWORD *)(*((_QWORD *)a1 + 23) + 172LL);
              v15->dmPelsHeight = *(_DWORD *)(*((_QWORD *)a1 + 23) + 176LL);
              v15->dmDisplayFrequency = *(_DWORD *)(*((_QWORD *)a1 + 23) + 184LL);
              v15->dmDisplayOrientation = *(_DWORD *)(*((_QWORD *)a1 + 23) + 84LL);
              v15->dmDisplayFixedOutput = *(_DWORD *)(*((_QWORD *)a1 + 23) + 88LL);
              v15->dmDisplayFlags = *(_DWORD *)(*((_QWORD *)a1 + 23) + 180LL);
            }
            goto LABEL_69;
          }
          if ( (v57 & 8) != 0 )
          {
            v12 = *((_DWORD *)a1 + 44) != 0 ? -1073741823 : -1073741776;
          }
          else
          {
            v61 = gbBaseVideo == 0;
            v15->dmBitsPerPel = 0;
            v62 = !v61;
            if ( Srca )
            {
              v63 = &dword_1C016DA50[2 * !v61 + 1];
              do
              {
                v15->dmPelsWidth = *(v63 - 1);
                v15->dmPelsHeight = *v63;
                v64 = GetClosestMode(a1, v15, a7, 1);
                if ( (v64 || (v64 = GetClosestMode(a1, v15, a7, 0)) != 0LL) && v64->dmBitsPerPel > 0x10 )
                  break;
                ++v62;
                v63 += 2;
              }
              while ( v62 < 3 );
              v36 = v81;
              v12 = -1073741823;
              v41 = 0;
              if ( v64 )
              {
                v15->dmBitsPerPel = v64->dmBitsPerPel;
                v15->dmPelsWidth = v64->dmPelsWidth;
                v15->dmPelsHeight = v64->dmPelsHeight;
                v15->dmDisplayFrequency = v64->dmDisplayFrequency;
                v15->dmDisplayOrientation = v64->dmDisplayOrientation;
                v15->dmDisplayFixedOutput = v64->dmDisplayFixedOutput;
                v15->dmDisplayFlags = v64->dmDisplayFlags;
              }
              goto LABEL_69;
            }
            v15->dmPelsWidth = dword_1C016DA50[2 * !v61];
            v15->dmPelsHeight = dword_1C016DA50[2 * !v61 + 1];
          }
        }
        v41 = 0;
LABEL_69:
        v42 = 1;
        goto LABEL_70;
      }
      dmPanningWidth = v15->dmPanningWidth;
    }
    v77 = dmPanningHeight;
    goto LABEL_37;
  }
  return v12;
}
