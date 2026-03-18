/*
 * XREFs of DxgkEngBltViaGDI @ 0x1C0250100
 * Callers:
 *     <none>
 * Callees:
 *     UserGetRedirectedWindowOrigin @ 0x1C0022460 (UserGetRedirectedWindowOrigin.c)
 *     IntersectRect @ 0x1C0067F2C (IntersectRect.c)
 *     NtGdiBitBltInternal @ 0x1C006FAB0 (NtGdiBitBltInternal.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GreStretchBltInternal @ 0x1C0094BA0 (GreStretchBltInternal.c)
 *     DxEngSelectPaletteToSurface @ 0x1C009F7CC (DxEngSelectPaletteToSurface.c)
 *     DxEngSetPaletteState @ 0x1C009F85C (DxEngSetPaletteState.c)
 *     NtGdiTransparentBlt @ 0x1C0126860 (NtGdiTransparentBlt.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkEngBltViaGDI(
        __int64 a1,
        HDC a2,
        int *a3,
        __int64 a4,
        PVOID pvBits,
        LONG lWidth,
        unsigned int a7,
        unsigned int a8,
        char a9,
        char a10,
        unsigned int a11,
        __int64 a12,
        unsigned int (__fastcall *a13)(int *, __int128 *, __int64, __int64))
{
  unsigned int v14; // r12d
  __int64 v16; // rsi
  HPALETTE v17; // rax
  HPALETTE v18; // rdi
  HBITMAP Bitmap; // r15
  __int64 v20; // rdx
  __int64 v21; // r8
  SURFOBJ *v22; // rax
  SURFOBJ *v23; // rbx
  __int64 v24; // rax
  HDC DisplayDC; // rax
  __int64 v26; // rax
  int v27; // r15d
  __int128 v28; // xmm0
  HDC v29; // r12
  int v30; // ebx
  unsigned int v31; // edi
  int RedirectedWindowOrigin; // eax
  int v33; // rax^4
  int v34; // edx
  int v35; // r9d
  int v36; // r8d
  unsigned int v37; // ebx
  int v38; // edi
  int v39; // r8d
  int v40; // r12d
  int v41; // r10d
  int v42; // r15d
  unsigned int v43; // r14d
  __int64 v44; // rsi
  int v45; // r10d
  int v46; // edx
  int v47; // r11d
  int v48; // r8d
  int v49; // r9d
  int v50; // ecx
  int v51; // ecx
  int v52; // r9d
  unsigned int v53; // eax
  __int64 v54; // rcx
  int v55; // r9d
  int v56; // ebx
  int v57; // r14d
  int v58; // r15d
  unsigned int v59; // edi
  HDC v60; // rsi
  int v61; // r9d
  unsigned int v62; // eax
  char v64; // [rsp+70h] [rbp-90h]
  unsigned int v65; // [rsp+74h] [rbp-8Ch]
  int v66[2]; // [rsp+78h] [rbp-88h] BYREF
  int v67; // [rsp+80h] [rbp-80h]
  int v68; // [rsp+84h] [rbp-7Ch]
  int v69; // [rsp+88h] [rbp-78h] BYREF
  int v70; // [rsp+8Ch] [rbp-74h]
  unsigned int v71; // [rsp+90h] [rbp-70h]
  SIZEL sizl; // [rsp+98h] [rbp-68h]
  HDC v73; // [rsp+A0h] [rbp-60h]
  int v74; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v75; // [rsp+ACh] [rbp-54h]
  int v76; // [rsp+B4h] [rbp-4Ch]
  HPALETTE hpal; // [rsp+B8h] [rbp-48h]
  unsigned int (__fastcall *v78)(int *, __int128 *, __int64, __int64); // [rsp+C0h] [rbp-40h]
  unsigned int v79; // [rsp+C8h] [rbp-38h]
  __int64 v80; // [rsp+D0h] [rbp-30h]
  HBITMAP v81; // [rsp+D8h] [rbp-28h]
  _QWORD v82[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v83; // [rsp+F0h] [rbp-10h] BYREF
  HDC v84; // [rsp+100h] [rbp+0h] BYREF
  int v85; // [rsp+108h] [rbp+8h]
  int v86; // [rsp+10Ch] [rbp+Ch]
  int v87; // [rsp+110h] [rbp+10h] BYREF
  int v88; // [rsp+114h] [rbp+14h]
  unsigned int v89; // [rsp+118h] [rbp+18h]
  unsigned int v90; // [rsp+11Ch] [rbp+1Ch]
  int v91[2]; // [rsp+120h] [rbp+20h] BYREF
  int v92; // [rsp+128h] [rbp+28h]
  int v93; // [rsp+12Ch] [rbp+2Ch]

  v14 = 0;
  *(_QWORD *)v91 = a1;
  *(_QWORD *)v66 = a12;
  v78 = a13;
  v80 = a4;
  v84 = a2;
  v65 = 0;
  if ( a2 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v82, a2);
    v16 = v82[0];
    if ( !v82[0] )
      goto LABEL_73;
    v17 = a9
        ? EngCreatePalette(2u, 0, 0LL, 0xF800u, 0x7E0u, 0x1Fu)
        : EngCreatePalette(2u, 0, 0LL, 0xFF0000u, 0xFF00u, 0xFFu);
    hpal = v17;
    if ( !v17 )
      goto LABEL_73;
    sizl = (SIZEL)__PAIR64__(a8, a7);
    v18 = hpal;
    Bitmap = EngCreateBitmap((SIZEL)__PAIR64__(a8, a7), lWidth, a9 != 0 ? 4 : 6, 1u, pvBits);
    v81 = Bitmap;
    DxEngSetPaletteState(hpal, v20, v21);
    if ( !Bitmap )
    {
LABEL_72:
      EngDeletePalette(v18);
LABEL_73:
      XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v82);
      return v14;
    }
    v22 = EngLockSurface((HSURF)Bitmap);
    v23 = v22;
    if ( !v22
      || (DxEngSelectPaletteToSurface((__int64)v22, hpal),
          v24 = SURFOBJ_TO_SURFACE(v23),
          *(_DWORD *)(v24 + 112) |= 0x104200u,
          EngUnlockSurface(v23),
          DisplayDC = (HDC)GreCreateDisplayDC(*(_QWORD *)(v16 + 48), 1LL, 0LL),
          (v73 = DisplayDC) == 0LL) )
    {
LABEL_71:
      EngDeleteSurface((HSURF)Bitmap);
      goto LABEL_72;
    }
    if ( !hbmSelectBitmap(DisplayDC, Bitmap, 0LL) )
    {
LABEL_70:
      bDeleteDCInternal(v73, 1LL, 0LL);
      goto LABEL_71;
    }
    v26 = *(_QWORD *)(v16 + 80);
    v27 = 0;
    sizl = 0LL;
    v71 = *(_DWORD *)(v26 + 312);
    v79 = v71 & 7;
    if ( (v71 & 7) != 0 )
      DC::dwSetLayout((DC *)v16, -1, 0);
    GreLockVisRgnShared(*(_QWORD *)(v16 + 48));
    if ( a3 )
    {
      if ( *(_QWORD *)(a1 + 8) )
      {
        if ( (*(_DWORD *)(v16 + 36) & 0x4000) != 0 )
          v27 = 1;
        v29 = v84;
        v83 = *(_OWORD *)(v16 + 1448);
        if ( (*(_DWORD *)(v16 + 36) & 0x4000) != 0
          && (unsigned int)UserGetRedirectedWindowOrigin((__int64)v84, (__int64)&v69) )
        {
          DWORD2(v83) += v69;
          v30 = v69 + v83;
          v31 = v70 + DWORD1(v83);
          HIDWORD(v83) += v70;
          DWORD1(v83) += v70;
          LODWORD(v83) = v69 + v83;
        }
        else
        {
          v31 = DWORD1(v83);
          v30 = v83;
        }
        if ( v27 )
        {
          RedirectedWindowOrigin = UserGetRedirectedWindowOrigin((__int64)v29, (__int64)&v69);
          v30 = v83;
          v31 = DWORD1(v83);
          if ( RedirectedWindowOrigin )
          {
            DWORD2(v83) += v69;
            v30 = v69 + v83;
            v31 = v70 + DWORD1(v83);
            HIDWORD(v83) += v70;
            DWORD1(v83) += v70;
            LODWORD(v83) = v69 + v83;
          }
        }
        IntersectRect(&v74, (int *)&v83, a3);
        if ( v30 != v74 || __PAIR64__(DWORD2(v83), v31) != v75 || HIDWORD(v83) != v76 )
        {
          sizl = (SIZEL)a3;
          v74 -= v30;
          HIDWORD(v75) -= v30;
          LODWORD(v75) = v75 - v31;
          v76 -= v31;
        }
        goto LABEL_32;
      }
      v28 = *(_OWORD *)a3;
    }
    else
    {
      v28 = *(_OWORD *)(v16 + 1448);
    }
    v83 = v28;
    v30 = v28;
LABEL_32:
    v33 = DWORD1(v83);
    v34 = *(_DWORD *)(a1 + 88);
    DWORD2(v83) -= v30;
    *(_QWORD *)&v83 = 0LL;
    v88 = 0;
    v87 = 0;
    HIDWORD(v83) -= v33;
    v89 = a7;
    v90 = a8;
    if ( v78(&v87, &v83, (a1 + 48) & -(__int64)((v34 & 0x80u) != 0), (a1 + 32) & -(__int64)((v34 & 0x40) != 0))
      && (v35 = DWORD2(v83)) != 0
      && (v36 = HIDWORD(v83)) != 0 )
    {
      if ( !a3 || *(_QWORD *)(a1 + 8) )
      {
        v38 = DWORD1(v83);
        v37 = v83;
      }
      else
      {
        v37 = *a3 + v83;
        v38 = a3[1] + DWORD1(v83);
        v35 = *a3 + DWORD2(v83);
        v36 = a3[1] + HIDWORD(v83);
        *(_QWORD *)&v83 = __PAIR64__(v38, v37);
        *((_QWORD *)&v83 + 1) = __PAIR64__(v36, v35);
      }
      v39 = v36 - v38;
      v40 = v88;
      v41 = v90 - v88;
      v42 = v87;
      if ( v39 == v90 - v88 && v35 - v37 == v89 - v87 )
      {
        v43 = 0;
        if ( *(_DWORD *)(a1 + 64) )
        {
          v44 = *(_QWORD *)v91;
          while ( 1 )
          {
            IntersectRect(v66, (int *)(v80 + 16LL * v43), &v87);
            v45 = v66[0];
            v46 = v37 - v42 + v66[0];
            v66[0] = v46;
            v47 = v66[1];
            v48 = v38 - v40 + v66[1];
            v66[1] = v48;
            v49 = v37 - v42 + v67;
            v67 = v49;
            v50 = v38 - v40 + v68;
            v68 = v50;
            if ( sizl )
            {
              IntersectRect(v66, v66, &v74);
              v46 = v66[0];
              v48 = v66[1];
              v50 = v68;
              v49 = v67;
              v45 = v42 + v66[0] - v37;
              v47 = v40 + v66[1] - v38;
            }
            v51 = v50 - v48;
            v52 = v49 - v46;
            v53 = a10
                ? NtGdiTransparentBlt(v84, v46, v48, v52, v51, v73, v45, v47, v52, v51, a11)
                : NtGdiBitBltInternal(v84, v46, v48, v52, v51, v73, v45, v47, -2134114272, 0, 0);
            if ( ++v43 >= *(_DWORD *)(v44 + 64) )
              break;
            v38 = DWORD1(v83);
            v37 = v83;
            v40 = v88;
            v42 = v87;
          }
          v16 = v82[0];
          v14 = v53;
        }
        else
        {
          v14 = 0;
        }
      }
      else
      {
        v54 = *(_QWORD *)(v16 + 80);
        v55 = v35 - v37;
        v64 = *(_BYTE *)(v54 + 75);
        v56 = (v55 << 16) / (int)(v89 - v87);
        v69 = v56;
        LODWORD(v78) = (v39 << 16) / v41;
        if ( sizl )
        {
          v57 = (int)((v89 - v87) << 16) / v55;
          v58 = (v41 << 16) / v39;
        }
        else
        {
          v57 = v71;
          v58 = v71;
        }
        v59 = 0;
        *(_BYTE *)(v54 + 75) = 3;
        if ( *(_DWORD *)(a1 + 64) )
        {
          v60 = v84;
          do
          {
            IntersectRect((int *)&v84, (int *)(v80 + 16LL * v59), &v87);
            (*(void (__fastcall **)(__int128 *, int *, int *, HDC *, int, _DWORD))v66)(
              &v83,
              &v87,
              v91,
              &v84,
              v56,
              (_DWORD)v78);
            if ( *(_QWORD *)&sizl && (unsigned int)IntersectRect(v91, v91, &v74) )
              (*(void (__fastcall **)(int *, __int128 *, HDC *, int *, int, int))v66)(&v87, &v83, &v84, v91, v57, v58);
            v61 = v92 - v91[0];
            if ( a10 )
              v62 = NtGdiTransparentBlt(
                      v60,
                      v91[0],
                      v91[1],
                      v61,
                      v93 - v91[1],
                      v73,
                      (int)v84,
                      SHIDWORD(v84),
                      v85 - (int)v84,
                      v86 - HIDWORD(v84),
                      a11);
            else
              v62 = GreStretchBltInternal(
                      v60,
                      v91[0],
                      v91[1],
                      v61,
                      v93 - v91[1],
                      v73,
                      (int)v84,
                      SHIDWORD(v84),
                      v85 - (int)v84,
                      v86 - HIDWORD(v84),
                      -2134114272,
                      0,
                      0);
            v56 = v69;
            ++v59;
            v65 = v62;
          }
          while ( v59 < *(_DWORD *)(a1 + 64) );
          v16 = v82[0];
        }
        v14 = v65;
        *(_BYTE *)(*(_QWORD *)(v16 + 80) + 75LL) = v64;
      }
    }
    else
    {
      v14 = 1;
    }
    GreUnlockVisRgn(*(_QWORD *)(v16 + 48));
    if ( v79 )
      DC::dwSetLayout((DC *)v16, -1, v71);
    Bitmap = v81;
    v18 = hpal;
    goto LABEL_70;
  }
  return v14;
}
