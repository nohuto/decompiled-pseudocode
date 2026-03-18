/*
 * XREFs of ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C00DADC0
 * Callers:
 *     GreGetDIBitsInternal @ 0x1C00800D0 (GreGetDIBitsInternal.c)
 * Callees:
 *     EngCopyBits @ 0x1C0075490 (EngCopyBits.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C0081670 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0086D44 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0086EE0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vInit256Default@XEPALOBJ@@QEAAXXZ @ 0x1C00964E0 (-vInit256Default@XEPALOBJ@@QEAAXXZ.c)
 *     ?vInit256Rainbow@XEPALOBJ@@QEAAXXZ @ 0x1C009653C (-vInit256Rainbow@XEPALOBJ@@QEAAXXZ.c)
 *     ?vFill_rgbquads@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C00966BC (-vFill_rgbquads@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     ?bIdenticalFormat@@YAHVXEPALOBJ@@H@Z @ 0x1C00DB5F4 (-bIdenticalFormat@@YAHVXEPALOBJ@@H@Z.c)
 *     ?bIsCMYKColor@DC@@QEAAHXZ @ 0x1C01248C4 (-bIsCMYKColor@DC@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?vFill_triples@XEPALOBJ@@QEAAXPEAUtagRGBTRIPLE@@KK@Z @ 0x1C0299564 (-vFill_triples@XEPALOBJ@@QEAAXPEAUtagRGBTRIPLE@@KK@Z.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x1C02995C4 (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
 *     EncodeRLE8 @ 0x1C02A86F8 (EncodeRLE8.c)
 *     EncodeRLE4 @ 0x1C02AA260 (EncodeRLE4.c)
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
  unsigned int v15; // ebx
  struct tagBITMAPINFO *v16; // r12
  unsigned int v17; // r15d
  __int64 v18; // rsi
  unsigned int biHeight_high; // r9d
  DWORD biCompression; // r13d
  LONG biWidth; // r10d
  LONG biWidth_high; // edx
  unsigned int v23; // r8d
  unsigned int v24; // edi
  unsigned int v25; // ecx
  unsigned int v26; // r11d
  unsigned int v27; // eax
  unsigned int v28; // ebx
  __int64 v29; // rax
  int v30; // edx
  __int64 v31; // rbx
  int v32; // eax
  unsigned int v33; // edi
  LONG v34; // esi
  unsigned __int8 *v35; // r8
  struct tagBITMAPINFO *v36; // rbx
  __int64 v37; // rdi
  SURFOBJ *v38; // rdx
  SURFOBJ *v39; // rcx
  unsigned int v40; // edi
  bool v42; // zf
  unsigned int v43; // edx
  unsigned int biWidth_low; // r10d
  int IsCMYKColor; // eax
  DWORD v46; // r11d
  XLATEOBJ *v47; // r10
  XLATEOBJ *v48; // rdi
  __int64 i; // rcx
  unsigned int v50; // edi
  __int64 *v51; // r12
  unsigned __int16 v52; // dx
  int v53; // r8d
  unsigned int v54; // eax
  XLATEOBJ *v55; // r9
  XLATEOBJ *v56; // rcx
  struct PDEVOBJ *v57; // r8
  unsigned int v58; // eax
  XLATEOBJ *v59; // r9
  XLATEOBJ *v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // r12
  bool v63; // cf
  DWORD v64; // eax
  XLATEOBJ *pxlo; // [rsp+68h] [rbp-160h] BYREF
  LONG v66; // [rsp+70h] [rbp-158h]
  unsigned int v67; // [rsp+78h] [rbp-150h]
  unsigned int v68; // [rsp+80h] [rbp-148h]
  __int64 v69; // [rsp+88h] [rbp-140h] BYREF
  BOOL v70; // [rsp+90h] [rbp-138h]
  unsigned int v71; // [rsp+94h] [rbp-134h]
  unsigned int v72; // [rsp+98h] [rbp-130h]
  LONG v73; // [rsp+9Ch] [rbp-12Ch]
  __int64 v74; // [rsp+A0h] [rbp-128h] BYREF
  int v75; // [rsp+A8h] [rbp-120h]
  __int64 v76; // [rsp+B0h] [rbp-118h] BYREF
  int v77; // [rsp+B8h] [rbp-110h]
  unsigned int v78; // [rsp+C0h] [rbp-108h]
  unsigned int v79; // [rsp+C8h] [rbp-100h]
  struct SURFREF *v80; // [rsp+D0h] [rbp-F8h]
  __int64 *v81; // [rsp+D8h] [rbp-F0h] BYREF
  int v82; // [rsp+E0h] [rbp-E8h]
  int v83; // [rsp+E4h] [rbp-E4h]
  __int64 v84; // [rsp+E8h] [rbp-E0h] BYREF
  char v85; // [rsp+F0h] [rbp-D8h]
  int v86; // [rsp+F4h] [rbp-D4h]
  unsigned __int8 *v87; // [rsp+F8h] [rbp-D0h]
  DC **v88; // [rsp+100h] [rbp-C8h]
  struct tagBITMAPINFO *v89; // [rsp+108h] [rbp-C0h]
  _QWORD v90[4]; // [rsp+110h] [rbp-B8h] BYREF
  BOOL v91; // [rsp+130h] [rbp-98h]
  struct PDEVOBJ *v92; // [rsp+138h] [rbp-90h]
  POINTL pptlSrc; // [rsp+140h] [rbp-88h] BYREF
  _QWORD v94[4]; // [rsp+148h] [rbp-80h] BYREF
  __int64 v95; // [rsp+168h] [rbp-60h]
  RECTL prclDest; // [rsp+170h] [rbp-58h] BYREF

  v80 = a4;
  v92 = a3;
  v88 = a2;
  v14 = a1;
  v79 = a1;
  v94[1] = a4;
  v81 = (__int64 *)a5;
  v68 = a8;
  v15 = a9;
  v87 = a10;
  v16 = a11;
  v89 = a11;
  v94[2] = a11;
  v17 = 1;
  if ( !(unsigned int)bIsCompatible(v94, *(_QWORD *)(*(_QWORD *)a4 + 128LL), *(_QWORD *)a4, *((_QWORD *)*a2 + 6), 1) )
    return 0LL;
  v18 = v94[0];
  v94[3] = v94[0];
  memset(v90, 0, sizeof(v90));
  LODWORD(v90[3]) = 0;
  if ( (_DWORD)v14 == 12 )
  {
    LODWORD(v76) = 1;
    pxlo = (XLATEOBJ *)&a11->bmiHeader.biPlanes;
    biWidth_low = LOWORD(a11->bmiHeader.biWidth);
    v71 = biWidth_low;
    biWidth_high = HIWORD(a11->bmiHeader.biWidth);
    v66 = biWidth_high;
    v73 = biWidth_high;
    LOWORD(a11->bmiHeader.biHeight) = 1;
    biHeight_high = HIWORD(a11->bmiHeader.biHeight);
    v72 = biHeight_high;
    v25 = ((biWidth_low * biHeight_high + 31) >> 3) & 0x1FFFFFFC;
    biCompression = 0;
    if ( biWidth_low && biWidth_high )
    {
      v24 = 2;
      v23 = 3;
      goto LABEL_17;
    }
    goto LABEL_159;
  }
  if ( a14 < 0x28 )
    return 0LL;
  if ( (unsigned int)v14 > 0x28 )
    memset(a11->bmiColors, 0, v14 - 40);
  LODWORD(v76) = 0;
  pxlo = (XLATEOBJ *)a11->bmiColors;
  a11->bmiHeader.biSize = 40;
  a11->bmiHeader.biPlanes = 1;
  biHeight_high = a11->bmiHeader.biBitCount;
  v72 = biHeight_high;
  biCompression = a11->bmiHeader.biCompression;
  biWidth = a11->bmiHeader.biWidth;
  v71 = biWidth;
  if ( biWidth <= 0 )
    goto LABEL_159;
  biWidth_high = a11->bmiHeader.biHeight;
  if ( !biWidth_high )
    goto LABEL_159;
  v23 = 3;
  if ( biWidth_high >= 0 )
    goto LABEL_9;
  LODWORD(v90[3]) = 1;
  if ( biCompression )
  {
    if ( biCompression != 3 )
    {
LABEL_159:
      EngSetLastError(0x57u);
      return 0LL;
    }
  }
  biWidth_high = -biWidth_high;
LABEL_9:
  v73 = biWidth_high;
  v66 = biWidth_high;
  v24 = 2;
  if ( biCompression == 3 )
  {
    v42 = ((biHeight_high - 16) & 0xFFFFFFEF) == 0;
    goto LABEL_69;
  }
  if ( biCompression == 1 )
  {
    v42 = biHeight_high == 8;
LABEL_69:
    if ( !v42 )
      goto LABEL_13;
    goto LABEL_14;
  }
  if ( biCompression != 2 )
  {
    if ( biCompression == 10 )
    {
      IsCMYKColor = DC::bIsCMYKColor(*v88);
      biWidth_high = v66;
      v23 = 3;
      if ( IsCMYKColor )
      {
        a11->bmiHeader.biCompression = v46;
        biCompression = v46;
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
  v25 = ((biWidth * biHeight_high + 31) >> 3) & 0x1FFFFFFC;
  if ( !biCompression || biCompression == 3 )
    a11->bmiHeader.biSizeImage = biWidth_high * v25;
  *(_QWORD *)&a11->bmiHeader.biClrUsed = 0LL;
LABEL_17:
  v70 = biCompression - 1 <= 1;
  v91 = v70;
  v26 = v68;
  if ( biWidth_high < v68 )
    v26 = biWidth_high;
  v68 = v26;
  v78 = v26;
  if ( biWidth_high - v26 < a9 )
    v15 = biWidth_high - v26;
  v67 = v15;
  v77 = v15;
  if ( biCompression - 1 > 1 && a13 < v25 * v15 )
    return 0LL;
  v90[2] = 0LL;
  if ( biCompression == 3 && a14 < 0x34 )
    return 0LL;
  switch ( biHeight_high )
  {
    case 1u:
      v28 = 1;
LABEL_91:
      v27 = a12;
      goto LABEL_33;
    case 4u:
      v28 = 2;
      v24 = 16;
      goto LABEL_91;
    case 8u:
      v28 = 3;
      v24 = 256;
      goto LABEL_91;
  }
  v27 = 0;
  if ( a12 != 1 )
    v27 = a12;
  v24 = 0;
  switch ( biHeight_high )
  {
    case 0x18u:
      v28 = 5;
      goto LABEL_33;
    case 0x10u:
      v28 = 4;
LABEL_33:
      LODWORD(v90[0]) = v28;
      v75 = 0;
      v74 = 0LL;
      if ( v27 == 1 )
      {
        if ( a14 >= v79 + 2 * (unsigned __int64)v24 )
        {
          v76 = ghsemPalette;
          GreAcquireSemaphore(ghsemPalette);
          if ( !v18 && LODWORD(v90[0]) == 3 && *(_QWORD *)(*v81 + 72) )
          {
            v31 = 0LL;
            v69 = 0LL;
            v47 = pxlo;
            v48 = pxlo;
            for ( i = 256LL; i; --i )
            {
              LOWORD(v48->iUniq) = 0;
              v48 = (XLATEOBJ *)((char *)v48 + 2);
            }
            v50 = 0;
            v51 = v81;
            do
            {
              v52 = 0;
              v53 = *(_DWORD *)(*v51 + 28);
              if ( (_WORD)v53 )
              {
                while ( *(unsigned __int8 *)(v52 + *(_QWORD *)(*v51 + 72) + 4LL) != v50 )
                {
                  if ( ++v52 >= (unsigned __int16)v53 )
                    goto LABEL_122;
                }
                *((_WORD *)&v47->iUniq + v50) = v52;
              }
LABEL_122:
              ++v50;
            }
            while ( v50 < 0x100 );
            v16 = v89;
          }
          else
          {
            if ( !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v74, 1u, v24, 0LL, 0, 0, 0, 0x200u, 1) )
            {
              SEMOBJ::vUnlock((SEMOBJ *)&v76);
              goto LABEL_109;
            }
            v31 = v74;
            v69 = v74;
            v54 = 0;
            v55 = pxlo;
            if ( v24 )
            {
              v56 = pxlo;
              do
              {
                LOWORD(v56->iUniq) = v54++;
                v56 = (XLATEOBJ *)((char *)v56 + 2);
              }
              while ( v54 < v24 );
            }
            v57 = *(struct PDEVOBJ **)(*(_QWORD *)v92 + 1824LL);
            v92 = v57;
            if ( v18 )
              v57 = (struct PDEVOBJ *)v18;
            XEPALOBJ::vGetEntriesFrom(&v69, *v81, v57, v55, v24);
          }
          SEMOBJ::vUnlock((SEMOBJ *)&v76);
          goto LABEL_50;
        }
        EngSetLastError(0x57u);
      }
      else
      {
        v42 = v27 == 0;
        v29 = *(_QWORD *)v80;
        if ( v42 )
        {
          v30 = 0;
          if ( *(_DWORD *)(v29 + 96) == v28 && v18 )
          {
            v30 = 1;
            if ( biCompression == 3 || ((v28 - 4) & 0xFFFFFFFD) != 0 )
            {
              if ( v28 == 5 && (*(_BYTE *)(v18 + 24) & 4) != 0 )
                v30 = 0;
            }
            else
            {
              v30 = bIdenticalFormat(v18, v28, 3LL);
            }
          }
          if ( v30 )
          {
            v31 = v18;
            v69 = v18;
            goto LABEL_42;
          }
          if ( v24 )
          {
            v43 = 1;
          }
          else
          {
            v43 = 8;
            if ( v28 == 4 )
              v43 = 2;
          }
          if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v74, v43, v24, 0LL, 0x7C00u, 0x3E0u, 0x1Fu, 0x200u, 1) )
          {
            v31 = v74;
            v69 = v74;
            if ( *(_DWORD *)(*(_QWORD *)v80 + 96LL) == LODWORD(v90[0]) && LODWORD(v90[0]) == 3 )
            {
              v58 = 0;
              v59 = pxlo;
              if ( v24 )
              {
                v60 = pxlo;
                do
                {
                  LOWORD(v60->iUniq) = v58++;
                  v60 = (XLATEOBJ *)((char *)v60 + 2);
                }
                while ( v58 < v24 );
              }
              v95 = *(_QWORD *)(*(_QWORD *)v92 + 1824LL);
              XEPALOBJ::vGetEntriesFrom(&v69, *v81, v95, v59, v24);
              XEPALOBJ::vInit256Default((XEPALOBJ *)&v69);
            }
            else
            {
              switch ( LODWORD(v90[0]) )
              {
                case 1:
                  **(_DWORD **)(v74 + 120) = 0;
                  *(_DWORD *)(*(_QWORD *)(v31 + 120) + 4LL) = 0xFFFFFF;
                  break;
                case 2:
                  v61 = 0LL;
                  v62 = 16LL;
                  do
                  {
                    *(_DWORD *)(v61 + *(_QWORD *)(v31 + 120)) = *(_DWORD *)((char *)&aPalVGA + v61);
                    v61 += 4LL;
                    --v62;
                  }
                  while ( v62 );
                  v16 = v89;
                  break;
                case 3:
                  XEPALOBJ::vInit256Rainbow((XEPALOBJ *)&v69);
                  break;
              }
            }
LABEL_42:
            if ( (_DWORD)v76 )
            {
              if ( a14 >= (unsigned __int64)(3 * v24) + 12 )
              {
                if ( ((v72 - 16) & 0xFFFFFFE7) != 0 || v72 == 40 )
                  XEPALOBJ::vFill_triples((XEPALOBJ *)&v69, (struct tagRGBTRIPLE *)pxlo, v23, v24);
LABEL_50:
                pxlo = 0LL;
                if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                                      (__int64 *)&pxlo,
                                      *(_QWORD *)(*((_QWORD *)*v88 + 10) + 112LL),
                                      *((_DWORD *)*v88 + 28),
                                      v18,
                                      v31,
                                      *v81,
                                      *v81,
                                      0,
                                      0xFFFFFF,
                                      0,
                                      0) )
                {
LABEL_158:
                  v17 = 0;
LABEL_76:
                  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&pxlo);
                  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v74);
                  return v17;
                }
                if ( !v87 && !v70 )
                  goto LABEL_76;
                v33 = v67;
                v34 = v66;
                if ( v70 )
                {
                  if ( !v67 )
                    v33 = v66;
                  v67 = v33;
                  v35 = 0LL;
                  v63 = v77 != 0;
                  v77 = -v77;
                  v68 &= -v63;
                  v78 = v68;
                }
                else
                {
                  v35 = v87;
                }
                HIDWORD(v90[0]) = v71;
                LODWORD(v90[1]) = v33;
                v84 = 0LL;
                v85 = 0;
                v86 = 0;
                SURFMEM::bCreateDIB((SURFMEM *)&v84, (struct _DEVBITMAPINFO *)v90, v35, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
                if ( !v84 )
                  goto LABEL_157;
                v36 = *(struct tagBITMAPINFO **)(v84 + 72);
                v89 = v36;
                *(_QWORD *)(v84 + 48) = *((_QWORD *)*v88 + 6);
                v79 = *(_DWORD *)(v84 + 64);
                v88 = *(DC ***)(v84 + 72);
                memset(v88, 0, v79);
                *(_QWORD *)&prclDest.left = 0LL;
                prclDest.right = HIDWORD(v90[0]);
                prclDest.bottom = v90[1];
                pptlSrc.x = 0;
                pptlSrc.y = v34 - v33 - v68;
                LODWORD(v81) = 0;
                HIDWORD(v81) = v68 - (v34 - v33);
                v37 = *(_QWORD *)v80;
                v82 = *(_DWORD *)(*(_QWORD *)v80 + 56LL);
                v83 = HIDWORD(v81) + *(_DWORD *)(v37 + 60);
                ERECTL::operator*=(&prclDest, &v81);
                if ( prclDest.left == prclDest.right || prclDest.top == prclDest.bottom )
                {
LABEL_157:
                  SURFMEM::~SURFMEM((SURFMEM *)&v84);
                  goto LABEL_158;
                }
                v38 = 0LL;
                if ( v37 )
                  v38 = (SURFOBJ *)(v37 + 24);
                v39 = 0LL;
                if ( v84 )
                  v39 = (SURFOBJ *)(v84 + 24);
                EngCopyBits(v39, v38, 0LL, pxlo, &prclDest, &pptlSrc);
                if ( !v70 )
                  goto LABEL_62;
                if ( biCompression == 2 )
                {
                  v64 = EncodeRLE4(v36, v87, v71, v67, v16->bmiHeader.biSizeImage);
                }
                else
                {
                  if ( biCompression != 1 )
                    goto LABEL_156;
                  v64 = EncodeRLE8(v36, v87, v71, v67, v16->bmiHeader.biSizeImage);
                }
                v16->bmiHeader.biSizeImage = v64;
LABEL_156:
                if ( v16->bmiHeader.biSizeImage )
                {
LABEL_62:
                  v40 = prclDest.bottom - prclDest.top;
                  SURFMEM::~SURFMEM((SURFMEM *)&v84);
                  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&pxlo);
                  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v74);
                  return v40;
                }
                goto LABEL_157;
              }
            }
            else
            {
              if ( biCompression == 3 )
                v24 = 3;
              if ( a14 >= (unsigned __int64)(4 * v24) + 40 )
              {
                if ( (*(_DWORD *)(v31 + 24) & 0x4000) != 0 )
                {
                  memmove(pxlo, *(const void **)(v31 + 120), 2LL * v24);
                }
                else if ( biCompression == 3 || v72 <= 8 && (v32 = 274, _bittest(&v32, v72)) )
                {
                  XEPALOBJ::vFill_rgbquads((XEPALOBJ *)&v69, (struct tagRGBQUAD *)pxlo, 0, v24);
                }
                goto LABEL_50;
              }
            }
          }
        }
        else if ( v28 == *(_DWORD *)(v29 + 96) )
        {
          v31 = v18;
          v69 = v18;
          goto LABEL_50;
        }
      }
LABEL_109:
      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v74);
      return 0LL;
    case 0x20u:
      v28 = 6;
      goto LABEL_33;
  }
  return 0LL;
}
