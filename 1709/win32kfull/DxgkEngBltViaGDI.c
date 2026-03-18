/*
 * XREFs of DxgkEngBltViaGDI @ 0x1C0251B40
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GreStretchBltInternal @ 0x1C001AF30 (GreStretchBltInternal.c)
 *     NtGdiBitBltInternal @ 0x1C001EE10 (NtGdiBitBltInternal.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     DxEngSetPaletteState @ 0x1C0041B84 (DxEngSetPaletteState.c)
 *     DxEngSelectPaletteToSurface @ 0x1C0041BC8 (DxEngSelectPaletteToSurface.c)
 *     IntersectRect @ 0x1C006C3F0 (IntersectRect.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C0092BA0 (UserGetRedirectedWindowOrigin.c)
 *     NtGdiTransparentBlt @ 0x1C012CEF0 (NtGdiTransparentBlt.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
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
  HPALETTE Palette; // rax
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
  int v37; // ebx
  int v38; // eax
  int v39; // edi
  int v40; // r8d
  int v41; // r12d
  int v42; // r10d
  int v43; // r15d
  unsigned int v44; // r14d
  __int64 v45; // rsi
  int v46; // r10d
  int v47; // edx
  int v48; // r11d
  int v49; // r8d
  int v50; // r9d
  int v51; // ecx
  int v52; // ecx
  int v53; // r9d
  unsigned int v54; // eax
  __int64 v55; // rcx
  int v56; // r9d
  int v57; // ebx
  int v58; // r14d
  int v59; // r15d
  unsigned int v60; // edi
  HDC v61; // rsi
  int v62; // r9d
  unsigned int v63; // eax
  char v65; // [rsp+70h] [rbp-90h]
  unsigned int v66; // [rsp+74h] [rbp-8Ch]
  int v67[2]; // [rsp+78h] [rbp-88h] BYREF
  int v68; // [rsp+80h] [rbp-80h]
  int v69; // [rsp+84h] [rbp-7Ch]
  int v70; // [rsp+88h] [rbp-78h] BYREF
  int v71; // [rsp+8Ch] [rbp-74h]
  unsigned int v72; // [rsp+90h] [rbp-70h]
  SIZEL sizl; // [rsp+98h] [rbp-68h]
  HDC v74; // [rsp+A0h] [rbp-60h]
  int v75; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v76; // [rsp+ACh] [rbp-54h]
  int v77; // [rsp+B4h] [rbp-4Ch]
  HPALETTE hpal; // [rsp+B8h] [rbp-48h]
  unsigned int (__fastcall *v79)(int *, __int128 *, __int64, __int64); // [rsp+C0h] [rbp-40h]
  unsigned int v80; // [rsp+C8h] [rbp-38h]
  __int64 v81; // [rsp+D0h] [rbp-30h]
  HBITMAP v82; // [rsp+D8h] [rbp-28h]
  _QWORD v83[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v84; // [rsp+F0h] [rbp-10h] BYREF
  HDC v85; // [rsp+100h] [rbp+0h] BYREF
  int v86; // [rsp+108h] [rbp+8h]
  int v87; // [rsp+10Ch] [rbp+Ch]
  int v88; // [rsp+110h] [rbp+10h] BYREF
  int v89; // [rsp+114h] [rbp+14h]
  unsigned int v90; // [rsp+118h] [rbp+18h]
  unsigned int v91; // [rsp+11Ch] [rbp+1Ch]
  int v92[2]; // [rsp+120h] [rbp+20h] BYREF
  int v93; // [rsp+128h] [rbp+28h]
  int v94; // [rsp+12Ch] [rbp+2Ch]

  v14 = 0;
  *(_QWORD *)v92 = a1;
  *(_QWORD *)v67 = a12;
  v79 = a13;
  v81 = a4;
  v85 = a2;
  v66 = 0;
  if ( a2 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v83, a2);
    v16 = v83[0];
    if ( v83[0] )
    {
      if ( a9 )
        Palette = EngCreatePalette(2u, 0, 0LL, 0xF800u, 0x7E0u, 0x1Fu);
      else
        Palette = EngCreatePalette(2u, 0, 0LL, 0xFF0000u, 0xFF00u, 0xFFu);
      hpal = Palette;
      if ( !Palette )
        goto LABEL_73;
      sizl = (SIZEL)__PAIR64__(a8, a7);
      v18 = hpal;
      Bitmap = EngCreateBitmap((SIZEL)__PAIR64__(a8, a7), lWidth, a9 != 0 ? 4 : 6, 1u, pvBits);
      v82 = Bitmap;
      DxEngSetPaletteState(hpal, v20, v21);
      if ( !Bitmap )
      {
LABEL_72:
        EngDeletePalette(v18);
LABEL_73:
        XDCOBJ::vUnlockFast((XDCOBJ *)v83);
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
            (v74 = DisplayDC) == 0LL) )
      {
LABEL_71:
        EngDeleteSurface((HSURF)Bitmap);
        goto LABEL_72;
      }
      if ( !hbmSelectBitmap(DisplayDC, Bitmap, 0LL) )
      {
LABEL_70:
        bDeleteDCInternal(v74, 1LL, 0LL);
        goto LABEL_71;
      }
      v26 = *(_QWORD *)(v16 + 80);
      v27 = 0;
      sizl = 0LL;
      v72 = *(_DWORD *)(v26 + 312);
      v80 = v72 & 7;
      if ( (v72 & 7) != 0 )
        DC::dwSetLayout((DC *)v16, -1, 0);
      GreLockVisRgnShared(*(_QWORD *)(v16 + 48));
      if ( a3 )
      {
        if ( *(_QWORD *)(a1 + 8) )
        {
          if ( (*(_DWORD *)(v16 + 36) & 0x4000) != 0 )
            v27 = 1;
          v29 = v85;
          v84 = *(_OWORD *)(v16 + 1448);
          if ( (*(_DWORD *)(v16 + 36) & 0x4000) != 0
            && (unsigned int)UserGetRedirectedWindowOrigin((__int64)v85, (__int64)&v70) )
          {
            DWORD2(v84) += v70;
            v30 = v70 + v84;
            v31 = v71 + DWORD1(v84);
            HIDWORD(v84) += v71;
            DWORD1(v84) += v71;
            LODWORD(v84) = v70 + v84;
          }
          else
          {
            v31 = DWORD1(v84);
            v30 = v84;
          }
          if ( v27 )
          {
            RedirectedWindowOrigin = UserGetRedirectedWindowOrigin((__int64)v29, (__int64)&v70);
            v30 = v84;
            v31 = DWORD1(v84);
            if ( RedirectedWindowOrigin )
            {
              DWORD2(v84) += v70;
              v30 = v70 + v84;
              v31 = v71 + DWORD1(v84);
              HIDWORD(v84) += v71;
              DWORD1(v84) += v71;
              LODWORD(v84) = v70 + v84;
            }
          }
          IntersectRect(&v75, (int *)&v84, a3);
          if ( v30 != v75 || __PAIR64__(DWORD2(v84), v31) != v76 || HIDWORD(v84) != v77 )
          {
            sizl = (SIZEL)a3;
            v75 -= v30;
            HIDWORD(v76) -= v30;
            LODWORD(v76) = v76 - v31;
            v77 -= v31;
          }
          goto LABEL_32;
        }
        v28 = *(_OWORD *)a3;
      }
      else
      {
        v28 = *(_OWORD *)(v16 + 1448);
      }
      v84 = v28;
      v30 = v28;
LABEL_32:
      v33 = DWORD1(v84);
      v34 = *(_DWORD *)(a1 + 88);
      DWORD2(v84) -= v30;
      *(_QWORD *)&v84 = 0LL;
      v89 = 0;
      v88 = 0;
      HIDWORD(v84) -= v33;
      v90 = a7;
      v91 = a8;
      if ( v79(&v88, &v84, (a1 + 48) & -(__int64)((v34 & 0x80u) != 0), (a1 + 32) & -(__int64)((v34 & 0x40) != 0))
        && (v35 = DWORD2(v84)) != 0
        && (v36 = HIDWORD(v84)) != 0 )
      {
        if ( !a3 || *(_QWORD *)(a1 + 8) )
        {
          v39 = DWORD1(v84);
          v37 = v84;
        }
        else
        {
          v35 = *a3 + DWORD2(v84);
          v37 = *a3 + v84;
          v38 = a3[1];
          v39 = v38 + DWORD1(v84);
          v36 = v38 + HIDWORD(v84);
          LODWORD(v84) = v37;
          HIDWORD(v84) += v38;
          DWORD2(v84) = v35;
          DWORD1(v84) += v38;
        }
        v40 = v36 - v39;
        v41 = v89;
        v42 = v91 - v89;
        v43 = v88;
        if ( v40 == v91 - v89 && v35 - v37 == v90 - v88 )
        {
          v44 = 0;
          if ( *(_DWORD *)(a1 + 64) )
          {
            v45 = *(_QWORD *)v92;
            while ( 1 )
            {
              IntersectRect(v67, (int *)(v81 + 16LL * v44), &v88);
              v46 = v67[0];
              v47 = v37 - v43 + v67[0];
              v67[0] = v47;
              v48 = v67[1];
              v49 = v39 - v41 + v67[1];
              v67[1] = v49;
              v50 = v37 - v43 + v68;
              v68 = v50;
              v51 = v39 - v41 + v69;
              v69 = v51;
              if ( sizl )
              {
                IntersectRect(v67, v67, &v75);
                v47 = v67[0];
                v49 = v67[1];
                v51 = v69;
                v50 = v68;
                v46 = v43 + v67[0] - v37;
                v48 = v41 + v67[1] - v39;
              }
              v52 = v51 - v49;
              v53 = v50 - v47;
              v54 = a10
                  ? NtGdiTransparentBlt(v85, v47, v49, v53, v52, v74, v46, v48, v53, v52, a11)
                  : NtGdiBitBltInternal(v85, v47, v49, v53, v52, v74, v46, v48, -2134114272, 0, 0);
              if ( ++v44 >= *(_DWORD *)(v45 + 64) )
                break;
              v39 = DWORD1(v84);
              v37 = v84;
              v41 = v89;
              v43 = v88;
            }
            v16 = v83[0];
            v14 = v54;
          }
          else
          {
            v14 = 0;
          }
        }
        else
        {
          v55 = *(_QWORD *)(v16 + 80);
          v56 = v35 - v37;
          v65 = *(_BYTE *)(v55 + 75);
          v57 = (v56 << 16) / (int)(v90 - v88);
          v70 = v57;
          LODWORD(v79) = (v40 << 16) / v42;
          if ( sizl )
          {
            v58 = (int)((v90 - v88) << 16) / v56;
            v59 = (v42 << 16) / v40;
          }
          else
          {
            v58 = v72;
            v59 = v72;
          }
          v60 = 0;
          *(_BYTE *)(v55 + 75) = 3;
          if ( *(_DWORD *)(a1 + 64) )
          {
            v61 = v85;
            do
            {
              IntersectRect(&v85, (int *)(v81 + 16LL * v60), &v88);
              (*(void (__fastcall **)(__int128 *, int *, int *, HDC *, int, _DWORD))v67)(
                &v84,
                &v88,
                v92,
                &v85,
                v57,
                (_DWORD)v79);
              if ( *(_QWORD *)&sizl && (unsigned int)IntersectRect(v92, v92, &v75) )
                (*(void (__fastcall **)(int *, __int128 *, HDC *, int *, int, int))v67)(&v88, &v84, &v85, v92, v58, v59);
              v62 = v93 - v92[0];
              if ( a10 )
                v63 = NtGdiTransparentBlt(
                        v61,
                        v92[0],
                        v92[1],
                        v62,
                        v94 - v92[1],
                        v74,
                        (int)v85,
                        SHIDWORD(v85),
                        v86 - (int)v85,
                        v87 - HIDWORD(v85),
                        a11);
              else
                v63 = GreStretchBltInternal(
                        v61,
                        v92[0],
                        v92[1],
                        v62,
                        v94 - v92[1],
                        v74,
                        (int)v85,
                        SHIDWORD(v85),
                        v86 - (int)v85,
                        v87 - HIDWORD(v85),
                        -2134114272,
                        0,
                        0);
              v57 = v70;
              ++v60;
              v66 = v63;
            }
            while ( v60 < *(_DWORD *)(a1 + 64) );
            v16 = v83[0];
          }
          v14 = v66;
          *(_BYTE *)(*(_QWORD *)(v16 + 80) + 75LL) = v65;
        }
      }
      else
      {
        v14 = 1;
      }
      GreUnlockVisRgn(*(_QWORD *)(v16 + 48));
      if ( v80 )
        DC::dwSetLayout((DC *)v16, -1, v72);
      Bitmap = v82;
      v18 = hpal;
      goto LABEL_70;
    }
  }
  return v14;
}
