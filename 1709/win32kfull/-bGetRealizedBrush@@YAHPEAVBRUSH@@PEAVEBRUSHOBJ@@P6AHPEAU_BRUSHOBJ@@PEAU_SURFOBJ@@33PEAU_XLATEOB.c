/*
 * XREFs of ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C00BD590
 * Callers:
 *     ?pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C00BD20C (-pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     ?BRUSHOBJ_pvGetRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C0249194 (-BRUSHOBJ_pvGetRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     BRUSHOBJ_pvGetRbrush @ 0x1C0249370 (BRUSHOBJ_pvGetRbrush.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0022CA0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0022CE0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C003D9DC (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C003DDC0 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ?vRelease@HTSEMOBJ@@QEAAXXZ @ 0x1C003E990 (-vRelease@HTSEMOBJ@@QEAAXXZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C003ED08 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z @ 0x1C00BE114 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z.c)
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00BE15C (--1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?vCheckForICM@XLATE@@QEAAXPEAXK@Z @ 0x1C01A089C (-vCheckForICM@XLATE@@QEAAXPEAXK@Z.c)
 *     ?vCheckForTrivial@XLATE@@QEAAXXZ @ 0x1C01A0928 (-vCheckForTrivial@XLATE@@QEAAXXZ.c)
 *     HT_CreateHalftoneBrush @ 0x1C023E370 (HT_CreateHalftoneBrush.c)
 *     ?bIsCMYKColor@EBRUSHOBJ@@QEAAHXZ @ 0x1C02492B0 (-bIsCMYKColor@EBRUSHOBJ@@QEAAHXZ.c)
 *     EngDitherColor @ 0x1C0267F80 (EngDitherColor.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEAGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1C0297E04 (-bMakeXlate@EXLATEOBJ@@QEAAHPEAGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 *     ?pCreateXlate@@YAPEAVXLATE@@K@Z @ 0x1C0298108 (-pCreateXlate@@YAPEAVXLATE@@K@Z.c)
 */

__int64 __fastcall bGetRealizedBrush(
        struct BRUSH *a1,
        struct EBRUSHOBJ *a2,
        __int64 (__fastcall *a3)(struct _BRUSHOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _XLATEOBJ *, unsigned int))
{
  __int64 v6; // rax
  int v7; // r15d
  struct _SURFOBJ *v8; // r12
  __int64 v9; // rdi
  unsigned int v10; // r14d
  int v11; // edx
  void *v12; // rdx
  unsigned int v13; // eax
  int v14; // eax
  HBITMAP v15; // rdi
  bool v16; // zf
  __int64 v17; // rax
  __int64 v18; // r10
  struct PALETTE *v19; // r9
  int v20; // eax
  unsigned int v21; // r8d
  __int64 v22; // rdx
  int inited; // eax
  XLATEOBJ *v24; // r14
  struct _SURFOBJ *v25; // r8
  __int64 v27; // rax
  __int64 v28; // rbx
  int NearestIndexFromColorref; // r12d
  int v30; // r15d
  int v31; // eax
  __int64 v32; // r8
  HDEV v33; // rbx
  unsigned __int16 v34; // ax
  HDEV v35; // rcx
  __int64 v36; // rdx
  ULONG v37; // eax
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  ULONG v41; // eax
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  HPALETTE *v45; // rbx
  HDEV v46; // rcx
  int v47; // eax
  int v48; // edx
  char v49; // dl
  int v50; // edx
  int v51; // edx
  int v52; // edx
  int v53; // edx
  int v54; // edx
  __int128 *v55; // rax
  __int64 v56; // xmm1_8
  __int64 v57; // rbx
  int v58; // eax
  HBITMAP IcmDIB; // rax
  int v60; // edx
  __int64 v61; // [rsp+60h] [rbp-79h] BYREF
  HDEV hdev; // [rsp+68h] [rbp-71h] BYREF
  struct XLATE *Xlate; // [rsp+70h] [rbp-69h] BYREF
  BOOL v64; // [rsp+78h] [rbp-61h] BYREF
  __int64 v65; // [rsp+80h] [rbp-59h] BYREF
  char v66; // [rsp+88h] [rbp-51h]
  int v67; // [rsp+8Ch] [rbp-4Dh]
  __int64 v68; // [rsp+90h] [rbp-49h] BYREF
  unsigned int v69; // [rsp+98h] [rbp-41h]
  _BYTE v70[4]; // [rsp+9Ch] [rbp-3Dh] BYREF
  _QWORD v71[4]; // [rsp+A0h] [rbp-39h] BYREF
  _DWORD v72[4]; // [rsp+C0h] [rbp-19h] BYREF
  __int64 *v73; // [rsp+D0h] [rbp-9h]
  char v74[8]; // [rsp+D8h] [rbp-1h] BYREF
  __int128 v75; // [rsp+E0h] [rbp+7h] BYREF
  __int64 v76; // [rsp+F0h] [rbp+17h]

  v69 = *((_DWORD *)a1 + 6);
  if ( v69 == 12 )
    return 0LL;
  v6 = *((_QWORD *)a2 + 10);
  v7 = 0;
  v65 = 0LL;
  v8 = 0LL;
  v66 = 0;
  v9 = 0LL;
  v67 = 0;
  v10 = 1;
  hdev = *(HDEV *)(v6 + 48);
  Xlate = 0LL;
  if ( ((_DWORD)hdev[8] & 1) == 0 || (v11 = 1, a3 != EngRealizeBrush) )
    v11 = 0;
  NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)v70, v11);
  NEEDGRELOCK::vLock((NEEDGRELOCK *)v74, (struct PDEVOBJ *)&hdev);
  v13 = *((_DWORD *)a1 + 6);
  if ( v13 < 6 )
  {
    LOBYTE(v12) = 5;
    v27 = HmgShareLock(*((_QWORD *)hdev + *((unsigned int *)a1 + 6) + 183), v12);
    v9 = v27;
    if ( v27 )
    {
      v68 = v27 + 24;
      Xlate = pCreateXlate(2u);
      v28 = (__int64)Xlate;
      if ( Xlate )
      {
        if ( (unsigned int)EBRUSHOBJ::bIsCMYKColor(a2) )
        {
          NearestIndexFromColorref = *((_DWORD *)a2 + 13);
          v30 = *((_DWORD *)a2 + 6);
          v24 = (XLATEOBJ *)v28;
          *(_DWORD *)(v28 + 80) = NearestIndexFromColorref;
          *(_DWORD *)(v28 + 84) = v30;
          XLATE::vCheckForICM((XLATE *)v28, *((void **)a2 + 8), *((_DWORD *)a2 + 18));
        }
        else
        {
          NearestIndexFromColorref = ulGetNearestIndexFromColorref(
                                       *((_QWORD *)a2 + 11),
                                       *((_QWORD *)a2 + 12),
                                       *((unsigned int *)a2 + 13),
                                       1LL);
          v31 = ulGetNearestIndexFromColorref(
                  *((_QWORD *)a2 + 11),
                  *((_QWORD *)a2 + 12),
                  *((unsigned int *)a2 + 6),
                  1LL);
          v30 = v31;
          if ( *(_DWORD *)(*((_QWORD *)a2 + 10) + 96LL) == 1
            && *(_DWORD *)(*((_QWORD *)a2 + 11) + 28LL)
            && *((_DWORD *)a2 + 13) != *((_DWORD *)a2 + 6)
            && NearestIndexFromColorref == v31 )
          {
            v30 = 1 - NearestIndexFromColorref;
          }
          *(_DWORD *)(v28 + 80) = NearestIndexFromColorref;
          *(_DWORD *)(v28 + 84) = v30;
          v24 = (XLATEOBJ *)v28;
          XLATE::vCheckForICM((XLATE *)v28, *((void **)a2 + 8), *((_DWORD *)a2 + 18));
          XLATE::vCheckForTrivial((XLATE *)v28);
        }
        *(_QWORD *)(v28 + 40) = ppalMono;
        *(_QWORD *)(v28 + 48) = *((_QWORD *)a2 + 11);
        *(_QWORD *)(v28 + 56) = *((_QWORD *)a2 + 12);
        *(_DWORD *)(v28 + 76) |= 0x100u;
        *(_DWORD *)(v28 + 28) = NearestIndexFromColorref;
        v8 = (struct _SURFOBJ *)v68;
        *(_DWORD *)(v28 + 32) = v30;
        goto LABEL_23;
      }
    }
    goto LABEL_29;
  }
  if ( v13 < 0xC )
  {
    if ( (unsigned int)EBRUSHOBJ::bIsCMYKColor(a2) )
      goto LABEL_29;
    v32 = *((unsigned int *)a2 + 6);
    if ( (v32 & 0x1000000) != 0 )
      *((_DWORD *)a2 + 6) = rgbFromColorref(*((_QWORD *)a2 + 11), *((_QWORD *)a2 + 12), v32);
    v33 = hdev;
    if ( ((_DWORD)hdev[460] & 0x200000) != 0 && a3 != EngRealizeBrush )
    {
      if ( (unsigned int)a3(
                           (struct _BRUSHOBJ *)a2,
                           (struct _SURFOBJ *)((*((_QWORD *)a2 + 10) + 24LL) & -(__int64)(*((_QWORD *)a2 + 10) != 0LL)),
                           0LL,
                           0LL,
                           0LL,
                           *((_DWORD *)a2 + 6) | 0x80000000) )
        goto LABEL_25;
      v33 = hdev;
    }
    memset(v71, 0, sizeof(v71));
    if ( *(_DWORD *)(*((_QWORD *)a2 + 10) + 96LL) == 1 )
      LODWORD(v71[0]) = 1;
    else
      LODWORD(v71[0]) = v33[531];
    v34 = *((_WORD *)v33 + 1064);
    if ( !v34 )
      goto LABEL_29;
    if ( !*((_WORD *)v33 + 1065) )
      goto LABEL_29;
    HIDWORD(v71[0]) = v34;
    LODWORD(v71[1]) = *((unsigned __int16 *)v33 + 1065);
    v71[2] = 0LL;
    LODWORD(v71[3]) = 1;
    if ( !SURFMEM::bCreateDIB((SURFMEM *)&v65, (struct _DEVBITMAPINFO *)v71, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
      goto LABEL_29;
    v35 = hdev;
    v36 = (unsigned int)(*(_DWORD *)(*((_QWORD *)a2 + 10) + 96LL) == 1) + 1;
    if ( *((_QWORD *)hdev + 351) )
    {
      if ( ((_DWORD)hdev[8] & 0x8000) == 0 )
        v35 = (HDEV)*((_QWORD *)hdev + 227);
      v37 = (*((__int64 (__fastcall **)(HDEV, __int64, _QWORD, _QWORD))hdev + 351))(
              v35,
              v36,
              *((unsigned int *)a2 + 6),
              *(_QWORD *)(v65 + 72));
    }
    else
    {
      v37 = EngDitherColor(hdev, v36, *((_DWORD *)a2 + 6), *(ULONG **)(v65 + 72));
    }
    v41 = v37 - 1;
    if ( !v41 )
    {
      v24 = xloIdent;
      goto LABEL_96;
    }
    if ( v41 != 1 )
      goto LABEL_29;
    v64 = a3 == EngRealizeBrush;
    if ( a3 == EngRealizeBrush )
      GreAcquireSemaphore(ghsemHT);
    if ( PDEVOBJ::pDevHTInfo((PDEVOBJ *)&hdev, v38, v39, v40)
      || (unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&hdev, 0LL) )
    {
      v45 = (HPALETTE *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&hdev, v42, v43, v44);
      LODWORD(v68) = *((_DWORD *)a2 + 6);
      v46 = hdev;
      v73 = &v68;
      v47 = *((_DWORD *)a2 + 18);
      v72[0] = 262400;
      v48 = *((_DWORD *)hdev + 599) >> 7;
      v72[1] = 255;
      v49 = ~(_BYTE)v48 & 2;
      v72[2] = 1;
      LOBYTE(v61) = v49;
      if ( (v47 & 4) != 0 || (v47 & 0x20) == 0 && (v47 & 3) != 0 )
        LOBYTE(v61) = v49 | 0x10;
      if ( __PAIR64__(*((unsigned __int16 *)v45 + 5), *((unsigned __int16 *)v45 + 4)) != *(_QWORD *)((char *)v71 + 4) )
      {
        SURFACE::bDeleteSurface(v65, 0LL, 0LL);
        HIDWORD(v71[0]) = *((unsigned __int16 *)v45 + 4);
        LODWORD(v71[1]) = *((unsigned __int16 *)v45 + 5);
        if ( !SURFMEM::bCreateDIB((SURFMEM *)&v65, (struct _DEVBITMAPINFO *)v71, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
          goto LABEL_91;
        v46 = hdev;
      }
      v50 = *((_DWORD *)v46 + 598);
      if ( v50 )
      {
        v51 = v50 - 2;
        if ( v51 )
        {
          v52 = v51 - 1;
          if ( v52 )
          {
            v53 = v52 - 1;
            if ( v53 )
            {
              v54 = v53 - 1;
              if ( v54 )
              {
                if ( v54 != 2 )
                  goto LABEL_91;
                BYTE1(v61) = 6;
              }
              else
              {
                BYTE1(v61) = -3;
              }
            }
            else
            {
              BYTE1(v61) = -2;
            }
          }
          else
          {
            BYTE1(v61) = -1;
          }
        }
        else
        {
          BYTE1(v61) = 2;
        }
      }
      else
      {
        BYTE1(v61) = 1;
      }
      BYTE3(v61) = *((_BYTE *)v46 + 2384);
      v55 = (__int128 *)*((_QWORD *)a2 + 7);
      BYTE2(v61) = 4;
      v56 = *((_QWORD *)v55 + 2);
      v75 = *v55;
      WORD5(v75) = 10000;
      v76 = v56;
      *(_DWORD *)((char *)&v75 + 6) = 655370000;
      if ( (int)HT_CreateHalftoneBrush((_DWORD)v45, (unsigned int)&v75, (unsigned int)v72, v61, *(_QWORD *)(v65 + 72)) > 0 )
      {
        if ( ((_DWORD)hdev[8] & 0x200) != 0 )
        {
          v24 = xloIdent;
LABEL_94:
          HTSEMOBJ::vRelease((HTSEMOBJ *)&v64);
LABEL_96:
          if ( v65 )
          {
            v25 = (struct _SURFOBJ *)(v65 + 24);
            goto LABEL_24;
          }
          if ( a3 != EngRealizeBrush )
          {
            v25 = 0LL;
            goto LABEL_24;
          }
          goto LABEL_29;
        }
        EPALOBJ::EPALOBJ((EPALOBJ *)&v61, *v45);
        v57 = v61;
        if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                             (__int64 *)&Xlate,
                             *((_QWORD *)a2 + 8),
                             *((_DWORD *)a2 + 18),
                             v61,
                             *(_QWORD *)(*((_QWORD *)a2 + 10) + 128LL),
                             *((_QWORD *)a2 + 12),
                             *((_QWORD *)a2 + 12),
                             *((_DWORD *)a2 + 12),
                             *((_DWORD *)a2 + 13),
                             0xFFFFFF,
                             0) )
        {
          v24 = (XLATEOBJ *)Xlate;
          if ( v57 )
            DEC_SHARE_REF_CNT(v57);
          goto LABEL_94;
        }
        if ( v57 )
          DEC_SHARE_REF_CNT(v57);
      }
    }
LABEL_91:
    HTSEMOBJ::vRelease((HTSEMOBJ *)&v64);
    goto LABEL_29;
  }
  v14 = *((_DWORD *)a2 + 18);
  v15 = (HBITMAP)*((_QWORD *)a1 + 4);
  if ( (v14 & 1) == 0 )
  {
    if ( (v14 & 4) == 0 )
    {
      v16 = (v14 & 2) == 0;
      goto LABEL_9;
    }
LABEL_107:
    v7 = 1;
    goto LABEL_10;
  }
  v12 = (void *)*((_QWORD *)a2 + 8);
  if ( !v12 )
  {
    if ( (unsigned int)EBRUSHOBJ::bIsCMYKColor(a2) )
      goto LABEL_10;
    goto LABEL_107;
  }
  v58 = *((_DWORD *)a1 + 12);
  if ( (v58 & 0x80u) == 0 )
  {
    v16 = (v58 & 0x20000) == 0;
LABEL_9:
    if ( v16 )
      goto LABEL_10;
    goto LABEL_107;
  }
  if ( !*((_DWORD *)a1 + 22) )
  {
    IcmDIB = BRUSH::hFindIcmDIB(a1, v12);
    if ( IcmDIB )
    {
      v15 = IcmDIB;
      goto LABEL_107;
    }
  }
LABEL_10:
  LOBYTE(v12) = 5;
  v17 = HmgShareLock(v15, v12);
  v9 = v17;
  if ( !v17 )
    goto LABEL_29;
  v18 = *((_QWORD *)a2 + 10);
  v19 = *(struct PALETTE **)(v17 + 128);
  v20 = *((_DWORD *)a1 + 12);
  if ( (v20 & 0x1000) != 0 )
  {
    inited = EXLATEOBJ::bMakeXlate(
               &Xlate,
               *((_QWORD *)v19 + 15),
               *((_QWORD *)a2 + 12),
               *((_QWORD *)a2 + 10),
               *((_DWORD *)v19 + 15),
               *((_DWORD *)v19 + 7));
    goto LABEL_21;
  }
  if ( (v20 & 0x2000) != 0 )
  {
    if ( *(_DWORD *)(v9 + 96) == *(_DWORD *)(v18 + 96) )
    {
      v24 = xloIdent;
      goto LABEL_23;
    }
LABEL_29:
    v10 = 0;
    goto LABEL_25;
  }
  if ( (*(_WORD *)(v9 + 100) || *(_QWORD *)(v9 + 24)) && *(HDEV *)(v9 + 48) != hdev )
    goto LABEL_29;
  if ( v19 )
    goto LABEL_16;
  v60 = *(_DWORD *)(v9 + 96);
  if ( v60 != *((_DWORD *)hdev + 531) )
  {
    if ( v60 == *((_DWORD *)a2 + 28) )
    {
      v19 = (struct PALETTE *)*((_QWORD *)a2 + 13);
      goto LABEL_16;
    }
    if ( v60 == 3 )
    {
      if ( ((_DWORD)hdev[547] & 0x100) == 0 )
      {
        v19 = ppalDefaultSurface8bpp;
        goto LABEL_16;
      }
    }
    else if ( ((_DWORD)hdev[8] & 0x20000) == 0 )
    {
      goto LABEL_29;
    }
LABEL_122:
    v19 = 0LL;
    goto LABEL_16;
  }
  if ( ((_DWORD)hdev[547] & 0x100) != 0 )
    goto LABEL_122;
  v19 = (struct PALETTE *)*((_QWORD *)hdev + 228);
LABEL_16:
  if ( v7 )
    v21 = *((_DWORD *)a2 + 18);
  else
    v21 = 0;
  if ( v7 )
    v22 = *((_QWORD *)a2 + 8);
  else
    v22 = 0LL;
  inited = EXLATEOBJ::bInitXlateObj(
             (__int64 *)&Xlate,
             v22,
             v21,
             (__int64)v19,
             *(_QWORD *)(v18 + 128),
             *((_QWORD *)a2 + 12),
             *((_QWORD *)a2 + 12),
             *((_DWORD *)a2 + 12),
             *((_DWORD *)a2 + 13),
             0xFFFFFF,
             0);
LABEL_21:
  if ( !inited )
    goto LABEL_29;
  v24 = (XLATEOBJ *)Xlate;
LABEL_23:
  v25 = (struct _SURFOBJ *)(v9 + 24);
LABEL_24:
  v10 = a3(
          (struct _BRUSHOBJ *)a2,
          (struct _SURFOBJ *)((*((_QWORD *)a2 + 10) + 24LL) & -(__int64)(*((_QWORD *)a2 + 10) != 0LL)),
          v25,
          v8,
          v24,
          v69);
LABEL_25:
  NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v74);
  NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)v70);
  SURFMEM::~SURFMEM((SURFMEM *)&v65);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&Xlate);
  if ( v9 )
    DEC_SHARE_REF_CNT(v9);
  return v10;
}
