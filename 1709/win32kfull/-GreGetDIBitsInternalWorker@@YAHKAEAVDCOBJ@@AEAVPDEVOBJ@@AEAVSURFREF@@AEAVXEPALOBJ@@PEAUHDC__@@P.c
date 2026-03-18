/*
 * XREFs of ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C00191EC
 * Callers:
 *     GreGetDIBitsInternal @ 0x1C0018D1C (GreGetDIBitsInternal.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C00182EC (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0022CA0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0022CE0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     EngCopyBits @ 0x1C002C650 (EngCopyBits.c)
 *     ?vInit256Default@XEPALOBJ@@QEAAXXZ @ 0x1C009BA30 (-vInit256Default@XEPALOBJ@@QEAAXXZ.c)
 *     ?vInit256Rainbow@XEPALOBJ@@QEAAXXZ @ 0x1C009BA8C (-vInit256Rainbow@XEPALOBJ@@QEAAXXZ.c)
 *     ?vFill_rgbquads@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C009BB74 (-vFill_rgbquads@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bIsCMYKColor@DC@@QEAAHXZ @ 0x1C012CCD4 (-bIsCMYKColor@DC@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?vFill_triples@XEPALOBJ@@QEAAXPEAUtagRGBTRIPLE@@KK@Z @ 0x1C0295C0C (-vFill_triples@XEPALOBJ@@QEAAXPEAUtagRGBTRIPLE@@KK@Z.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x1C0295C6C (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
 *     EncodeRLE8 @ 0x1C02A4D58 (EncodeRLE8.c)
 *     EncodeRLE4 @ 0x1C02A68C0 (EncodeRLE4.c)
 */

__int64 __fastcall GreGetDIBitsInternalWorker(
        unsigned int a1,
        DC **a2,
        struct PDEVOBJ *a3,
        struct SURFREF *a4,
        struct XEPALOBJ *a5,
        HDC a6,
        HBITMAP a7,
        unsigned int a8,
        unsigned int a9,
        unsigned __int8 *a10,
        struct tagBITMAPINFO *a11,
        unsigned int a12,
        unsigned int a13,
        unsigned int a14)
{
  __int64 v14; // rdi
  struct tagBITMAPINFO *v15; // r12
  unsigned int v16; // r15d
  __int64 v17; // rsi
  unsigned int biHeight_high; // r9d
  DWORD biCompression; // r13d
  LONG biWidth; // edi
  LONG biWidth_high; // edx
  int v22; // r10d
  unsigned int v23; // ecx
  unsigned int v24; // r8d
  unsigned int v25; // eax
  unsigned int v26; // edx
  unsigned int v27; // eax
  unsigned int v28; // edi
  int v29; // edx
  __int64 v30; // rax
  unsigned int v31; // r8d
  int v32; // eax
  int v33; // r9d
  int v34; // ecx
  int v35; // ebx
  int v36; // eax
  int v37; // r10d
  int v38; // r11d
  __int64 v39; // rbx
  int v40; // eax
  unsigned int v41; // edi
  unsigned __int8 *v42; // r8
  struct tagBITMAPINFO *v43; // rbx
  __int64 v44; // rdi
  SURFOBJ *v45; // rcx
  unsigned int v46; // edi
  bool v48; // zf
  unsigned int v49; // eax
  int *v50; // rax
  unsigned int biWidth_low; // edi
  int IsCMYKColor; // eax
  DWORD v53; // r11d
  XLATEOBJ *v54; // r10
  XLATEOBJ *v55; // rdi
  __int64 i; // rcx
  unsigned int v57; // edi
  struct XEPALOBJ *v58; // r12
  unsigned __int16 v59; // dx
  int v60; // r8d
  unsigned int v61; // eax
  XLATEOBJ *v62; // r9
  XLATEOBJ *v63; // rcx
  struct PDEVOBJ *v64; // r8
  unsigned int v65; // eax
  XLATEOBJ *v66; // r9
  XLATEOBJ *v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // r12
  bool v70; // cf
  DWORD v71; // eax
  unsigned int v72; // [rsp+60h] [rbp-168h]
  LONG v73; // [rsp+64h] [rbp-164h]
  XLATEOBJ *pxlo; // [rsp+70h] [rbp-158h] BYREF
  unsigned int v75; // [rsp+78h] [rbp-150h]
  __int64 v76; // [rsp+80h] [rbp-148h] BYREF
  BOOL v77; // [rsp+88h] [rbp-140h]
  unsigned int v78; // [rsp+8Ch] [rbp-13Ch]
  unsigned int v79; // [rsp+90h] [rbp-138h]
  __int64 v80; // [rsp+98h] [rbp-130h] BYREF
  int v81; // [rsp+A0h] [rbp-128h]
  __int64 v82; // [rsp+A8h] [rbp-120h] BYREF
  int v83; // [rsp+B0h] [rbp-118h]
  unsigned int v84; // [rsp+B8h] [rbp-110h]
  unsigned int v85; // [rsp+C0h] [rbp-108h]
  unsigned int v86; // [rsp+C8h] [rbp-100h]
  struct SURFREF *v87; // [rsp+D0h] [rbp-F8h]
  struct XEPALOBJ *v88; // [rsp+D8h] [rbp-F0h] BYREF
  int v89; // [rsp+E0h] [rbp-E8h]
  int v90; // [rsp+E4h] [rbp-E4h]
  __int64 v91; // [rsp+E8h] [rbp-E0h] BYREF
  char v92; // [rsp+F0h] [rbp-D8h]
  int v93; // [rsp+F4h] [rbp-D4h]
  unsigned __int8 *v94; // [rsp+F8h] [rbp-D0h]
  DC **v95; // [rsp+100h] [rbp-C8h]
  struct tagBITMAPINFO *v96; // [rsp+108h] [rbp-C0h]
  _QWORD v97[4]; // [rsp+110h] [rbp-B8h] BYREF
  BOOL v98; // [rsp+130h] [rbp-98h]
  struct PDEVOBJ *v99; // [rsp+138h] [rbp-90h]
  POINTL pptlSrc; // [rsp+140h] [rbp-88h] BYREF
  _QWORD v101[4]; // [rsp+148h] [rbp-80h] BYREF
  __int64 v102; // [rsp+168h] [rbp-60h]
  RECTL prclDest; // [rsp+170h] [rbp-58h] BYREF

  v87 = a4;
  v99 = a3;
  v95 = a2;
  v14 = a1;
  v86 = a1;
  v101[1] = a4;
  v88 = a5;
  v75 = a8;
  v94 = a10;
  v15 = a11;
  v96 = a11;
  v101[2] = a11;
  v16 = 1;
  if ( !(unsigned int)bIsCompatible(v101, *(_QWORD *)(*(_QWORD *)a4 + 128LL), *(_QWORD *)a4, *((_QWORD *)*a2 + 6), 1) )
    return 0LL;
  v17 = v101[0];
  v101[3] = v101[0];
  memset(v97, 0, sizeof(v97));
  LODWORD(v97[3]) = 0;
  if ( (_DWORD)v14 == 12 )
  {
    LODWORD(v82) = 1;
    pxlo = (XLATEOBJ *)&a11->bmiHeader.biPlanes;
    biWidth_low = LOWORD(a11->bmiHeader.biWidth);
    v78 = biWidth_low;
    biWidth_high = HIWORD(a11->bmiHeader.biWidth);
    v73 = biWidth_high;
    LOWORD(a11->bmiHeader.biHeight) = 1;
    biHeight_high = HIWORD(a11->bmiHeader.biHeight);
    v79 = biHeight_high;
    v23 = ((biWidth_low * biHeight_high + 31) >> 3) & 0x1FFFFFFC;
    biCompression = 0;
    if ( biWidth_low && biWidth_high )
    {
      v22 = 2;
      goto LABEL_17;
    }
    goto LABEL_168;
  }
  if ( a14 < 0x28 )
    return 0LL;
  if ( (unsigned int)v14 > 0x28 )
    memset(a11->bmiColors, 0, v14 - 40);
  LODWORD(v82) = 0;
  pxlo = (XLATEOBJ *)a11->bmiColors;
  a11->bmiHeader.biSize = 40;
  a11->bmiHeader.biPlanes = 1;
  biHeight_high = a11->bmiHeader.biBitCount;
  v79 = biHeight_high;
  biCompression = a11->bmiHeader.biCompression;
  biWidth = a11->bmiHeader.biWidth;
  v78 = biWidth;
  if ( biWidth <= 0 )
    goto LABEL_168;
  biWidth_high = a11->bmiHeader.biHeight;
  if ( !biWidth_high )
    goto LABEL_168;
  if ( biWidth_high >= 0 )
    goto LABEL_9;
  LODWORD(v97[3]) = 1;
  if ( biCompression )
  {
    if ( biCompression != 3 )
    {
LABEL_168:
      EngSetLastError(0x57u);
      return 0LL;
    }
  }
  biWidth_high = -biWidth_high;
LABEL_9:
  v73 = biWidth_high;
  v22 = 2;
  if ( biCompression == 3 )
  {
    v48 = ((biHeight_high - 16) & 0xFFFFFFEF) == 0;
    goto LABEL_75;
  }
  if ( biCompression == 1 )
  {
    v48 = biHeight_high == 8;
LABEL_75:
    if ( !v48 )
      goto LABEL_13;
    goto LABEL_14;
  }
  if ( biCompression != 2 )
  {
    if ( biCompression == 10 )
    {
      IsCMYKColor = DC::bIsCMYKColor(*v95);
      biWidth_high = v73;
      if ( IsCMYKColor )
      {
        a11->bmiHeader.biCompression = v53;
        biCompression = v53;
      }
      goto LABEL_14;
    }
    goto LABEL_13;
  }
  if ( biHeight_high != 4 )
  {
LABEL_13:
    biCompression = 0;
    a11->bmiHeader.biCompression = 0;
  }
LABEL_14:
  v23 = ((biWidth * biHeight_high + 31) >> 3) & 0x1FFFFFFC;
  if ( !biCompression || biCompression == 3 )
    a11->bmiHeader.biSizeImage = biWidth_high * v23;
  *(_QWORD *)&a11->bmiHeader.biClrUsed = 0LL;
LABEL_17:
  v77 = biCompression - 1 <= 1;
  v98 = v77;
  v24 = v75;
  if ( biWidth_high < v75 )
    v24 = biWidth_high;
  v75 = v24;
  v84 = v24;
  v25 = biWidth_high - v24;
  v26 = a9;
  if ( v25 < a9 )
    v26 = v25;
  v72 = v26;
  v85 = v26;
  v83 = v26;
  if ( biCompression - 1 > 1 && a13 < v23 * v26 )
    return 0LL;
  v97[2] = 0LL;
  if ( biCompression == 3 && a14 < 0x34 )
    return 0LL;
  switch ( biHeight_high )
  {
    case 1u:
      v29 = 1;
      v28 = v22;
LABEL_97:
      v27 = a12;
      goto LABEL_33;
    case 4u:
      v29 = v22;
      v28 = 16;
      goto LABEL_97;
    case 8u:
      v29 = 3;
      LODWORD(v97[0]) = 3;
      v28 = 256;
      v27 = a12;
LABEL_34:
      v81 = 0;
      v80 = 0LL;
      if ( v27 == 1 )
      {
        if ( a14 >= v86 + 2 * (unsigned __int64)v28 )
        {
          v82 = ghsemPalette;
          GreAcquireSemaphore(ghsemPalette);
          if ( !v17 && LODWORD(v97[0]) == 3 && *(_QWORD *)(*(_QWORD *)v88 + 72LL) )
          {
            v39 = 0LL;
            v76 = 0LL;
            v54 = pxlo;
            v55 = pxlo;
            for ( i = 256LL; i; --i )
            {
              LOWORD(v55->iUniq) = 0;
              v55 = (XLATEOBJ *)((char *)v55 + 2);
            }
            v57 = 0;
            v58 = v88;
            do
            {
              v59 = 0;
              v60 = *(_DWORD *)(*(_QWORD *)v58 + 28LL);
              if ( (_WORD)v60 )
              {
                while ( *(unsigned __int8 *)(v59 + *(_QWORD *)(*(_QWORD *)v58 + 72LL) + 4LL) != v57 )
                {
                  if ( ++v59 >= (unsigned __int16)v60 )
                    goto LABEL_129;
                }
                *((_WORD *)&v54->iUniq + v57) = v59;
              }
LABEL_129:
              ++v57;
            }
            while ( v57 < 0x100 );
            v15 = v96;
          }
          else
          {
            if ( !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v80, 1u, v28, 0LL, 0, 0, 0, 0x200u, 1) )
            {
              SEMOBJ::vUnlock((SEMOBJ *)&v82);
              goto LABEL_116;
            }
            v39 = v80;
            v76 = v80;
            v61 = 0;
            v62 = pxlo;
            if ( v28 )
            {
              v63 = pxlo;
              do
              {
                LOWORD(v63->iUniq) = v61++;
                v63 = (XLATEOBJ *)((char *)v63 + 2);
              }
              while ( v61 < v28 );
            }
            v64 = *(struct PDEVOBJ **)(*(_QWORD *)v99 + 1824LL);
            v99 = v64;
            if ( v17 )
              v64 = (struct PDEVOBJ *)v17;
            XEPALOBJ::vGetEntriesFrom(&v76, *(_QWORD *)v88, v64, v62, v28);
          }
          SEMOBJ::vUnlock((SEMOBJ *)&v82);
          goto LABEL_58;
        }
        EngSetLastError(0x57u);
      }
      else
      {
        v48 = v27 == 0;
        v30 = *(_QWORD *)v87;
        if ( v48 )
        {
          v31 = 0;
          if ( *(_DWORD *)(v30 + 96) == v29 && v17 )
          {
            v31 = 1;
            if ( biCompression == 3 || ((v29 - 4) & 0xFFFFFFFD) != 0 )
            {
              if ( v29 == 5 && (*(_BYTE *)(v17 + 24) & 4) != 0 )
                v31 = 0;
            }
            else
            {
              v32 = *(_DWORD *)(v17 + 24);
              v33 = 65280;
              v34 = 255;
              if ( ((unsigned __int8)v32 & (unsigned __int8)v22) != 0 )
              {
                v50 = *(int **)(v17 + 120);
                v37 = *v50;
                v35 = v50[1];
                v38 = v50[2];
                v36 = 16711680;
              }
              else
              {
                v35 = 65280;
                v48 = (v32 & 4) == 0;
                v36 = 16711680;
                if ( v48 )
                {
                  v37 = 16711680;
                  v38 = 255;
                }
                else
                {
                  v37 = 255;
                  v38 = 16711680;
                }
              }
              if ( v29 == 4 )
              {
                v36 = 31744;
                v34 = 31;
                v33 = 992;
              }
              if ( v37 != v36 || v35 != v33 || v38 != v34 )
                v31 = 0;
            }
          }
          if ( v31 )
          {
            v39 = v17;
            v76 = v17;
            goto LABEL_50;
          }
          if ( v28 )
          {
            v49 = 1;
          }
          else
          {
            v49 = 8;
            if ( v29 == 4 )
              v49 = 2;
          }
          if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v80, v49, v28, 0LL, 0x7C00u, 0x3E0u, 0x1Fu, 0x200u, 1) )
          {
            v39 = v80;
            v76 = v80;
            if ( *(_DWORD *)(*(_QWORD *)v87 + 96LL) == LODWORD(v97[0]) && LODWORD(v97[0]) == 3 )
            {
              v65 = 0;
              v66 = pxlo;
              if ( v28 )
              {
                v67 = pxlo;
                do
                {
                  LOWORD(v67->iUniq) = v65++;
                  v67 = (XLATEOBJ *)((char *)v67 + 2);
                }
                while ( v65 < v28 );
              }
              v102 = *(_QWORD *)(*(_QWORD *)v99 + 1824LL);
              XEPALOBJ::vGetEntriesFrom(&v76, *(_QWORD *)v88, v102, v66, v28);
              XEPALOBJ::vInit256Default((XEPALOBJ *)&v76);
            }
            else
            {
              switch ( LODWORD(v97[0]) )
              {
                case 1:
                  **(_DWORD **)(v80 + 120) = 0;
                  *(_DWORD *)(*(_QWORD *)(v39 + 120) + 4LL) = 0xFFFFFF;
                  break;
                case 2:
                  v68 = 0LL;
                  v69 = 16LL;
                  do
                  {
                    *(_DWORD *)(v68 + *(_QWORD *)(v39 + 120)) = *(_DWORD *)((char *)&aPalVGA + v68);
                    v68 += 4LL;
                    --v69;
                  }
                  while ( v69 );
                  v15 = v96;
                  break;
                case 3:
                  XEPALOBJ::vInit256Rainbow((XEPALOBJ *)&v76);
                  break;
              }
            }
LABEL_50:
            if ( (_DWORD)v82 )
            {
              if ( a14 >= (unsigned __int64)(3 * v28) + 12 )
              {
                if ( ((v79 - 16) & 0xFFFFFFE7) != 0 || v79 == 40 )
                  XEPALOBJ::vFill_triples((XEPALOBJ *)&v76, (struct tagRGBTRIPLE *)pxlo, v31, v28);
LABEL_58:
                pxlo = 0LL;
                if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                                      &pxlo,
                                      *(_QWORD *)(*((_QWORD *)*v95 + 10) + 112LL),
                                      *((unsigned int *)*v95 + 28),
                                      v17,
                                      v39,
                                      *(_QWORD *)v88,
                                      *(_QWORD *)v88,
                                      0,
                                      0xFFFFFF,
                                      0,
                                      0) )
                {
LABEL_167:
                  v16 = 0;
LABEL_82:
                  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&pxlo);
                  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v80);
                  return v16;
                }
                if ( !v94 && !v77 )
                  goto LABEL_82;
                v41 = v72;
                if ( v77 )
                {
                  if ( !v72 )
                    v41 = v73;
                  v72 = v41;
                  v85 = v41;
                  v42 = 0LL;
                  v70 = v83 != 0;
                  v83 = -v83;
                  v75 &= -v70;
                  v84 = v75;
                }
                else
                {
                  v42 = v94;
                }
                HIDWORD(v97[0]) = v78;
                LODWORD(v97[1]) = v41;
                v91 = 0LL;
                v92 = 0;
                v93 = 0;
                SURFMEM::bCreateDIB((SURFMEM *)&v91, (struct _DEVBITMAPINFO *)v97, v42, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
                if ( !v91 )
                  goto LABEL_166;
                v43 = *(struct tagBITMAPINFO **)(v91 + 72);
                v96 = v43;
                *(_QWORD *)(v91 + 48) = *((_QWORD *)*v95 + 6);
                v86 = *(_DWORD *)(v91 + 64);
                v95 = *(DC ***)(v91 + 72);
                memset(v95, 0, v86);
                *(_QWORD *)&prclDest.left = 0LL;
                prclDest.right = HIDWORD(v97[0]);
                prclDest.bottom = v97[1];
                pptlSrc.x = 0;
                pptlSrc.y = v73 - v41 - v75;
                LODWORD(v88) = 0;
                HIDWORD(v88) = v75 - (v73 - v41);
                v44 = *(_QWORD *)v87;
                v89 = *(_DWORD *)(*(_QWORD *)v87 + 56LL);
                v90 = HIDWORD(v88) + *(_DWORD *)(v44 + 60);
                ERECTL::operator*=(&prclDest, &v88);
                if ( prclDest.left == prclDest.right || prclDest.top == prclDest.bottom )
                {
LABEL_166:
                  SURFMEM::~SURFMEM((SURFMEM *)&v91);
                  goto LABEL_167;
                }
                v45 = 0LL;
                if ( v91 )
                  v45 = (SURFOBJ *)(v91 + 24);
                EngCopyBits(v45, (SURFOBJ *)((v44 + 24) & -(__int64)(v44 != 0)), 0LL, pxlo, &prclDest, &pptlSrc);
                if ( !v77 )
                  goto LABEL_68;
                if ( biCompression == 2 )
                {
                  v71 = EncodeRLE4(v43, v94, v78, v72, v15->bmiHeader.biSizeImage);
                }
                else
                {
                  if ( biCompression != 1 )
                    goto LABEL_165;
                  v71 = EncodeRLE8(v43, v94, v78, v72, v15->bmiHeader.biSizeImage);
                }
                v15->bmiHeader.biSizeImage = v71;
LABEL_165:
                if ( v15->bmiHeader.biSizeImage )
                {
LABEL_68:
                  v46 = prclDest.bottom - prclDest.top;
                  SURFMEM::~SURFMEM((SURFMEM *)&v91);
                  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&pxlo);
                  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v80);
                  return v46;
                }
                goto LABEL_166;
              }
            }
            else
            {
              if ( biCompression == 3 )
                v28 = 3;
              if ( a14 >= (unsigned __int64)(4 * v28) + 40 )
              {
                if ( (*(_DWORD *)(v39 + 24) & 0x4000) != 0 )
                {
                  memmove(pxlo, *(const void **)(v39 + 120), 2LL * v28);
                }
                else if ( biCompression == 3 || v79 <= 8 && (v40 = 274, _bittest(&v40, v79)) )
                {
                  XEPALOBJ::vFill_rgbquads((XEPALOBJ *)&v76, (struct tagRGBQUAD *)pxlo, 0, v28);
                }
                goto LABEL_58;
              }
            }
          }
        }
        else if ( v29 == *(_DWORD *)(v30 + 96) )
        {
          v39 = v17;
          v76 = v17;
          goto LABEL_58;
        }
      }
LABEL_116:
      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v80);
      return 0LL;
  }
  v27 = 0;
  if ( a12 != 1 )
    v27 = a12;
  v28 = 0;
  switch ( biHeight_high )
  {
    case 0x18u:
      v29 = 5;
      goto LABEL_33;
    case 0x10u:
      v29 = 4;
      goto LABEL_33;
    case 0x20u:
      v29 = 6;
LABEL_33:
      LODWORD(v97[0]) = v29;
      goto LABEL_34;
  }
  return 0LL;
}
