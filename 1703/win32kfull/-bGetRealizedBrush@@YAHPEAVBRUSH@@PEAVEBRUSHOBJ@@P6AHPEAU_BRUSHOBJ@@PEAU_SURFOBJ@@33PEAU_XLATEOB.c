/*
 * XREFs of ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C00AC7FC
 * Callers:
 *     ?pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C00AB680 (-pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     ?BRUSHOBJ_pvGetRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C0247768 (-BRUSHOBJ_pvGetRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     BRUSHOBJ_pvGetRbrush @ 0x1C0247990 (BRUSHOBJ_pvGetRbrush.c)
 * Callees:
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C0032890 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C0032934 (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     ?vRelease@HTSEMOBJ@@QEAAXXZ @ 0x1C0032E3C (-vRelease@HTSEMOBJ@@QEAAXXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0086D44 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0086EE0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C009FD28 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z @ 0x1C00AD380 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z.c)
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00AD3C8 (--1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?vCheckForICM@XLATE@@QEAAXPEAXK@Z @ 0x1C0195674 (-vCheckForICM@XLATE@@QEAAXPEAXK@Z.c)
 *     ?vCheckForTrivial@XLATE@@QEAAXXZ @ 0x1C0195704 (-vCheckForTrivial@XLATE@@QEAAXXZ.c)
 *     HT_CreateHalftoneBrush @ 0x1C023CA38 (HT_CreateHalftoneBrush.c)
 *     ?bIsCMYKColor@EBRUSHOBJ@@QEAAHXZ @ 0x1C0247884 (-bIsCMYKColor@EBRUSHOBJ@@QEAAHXZ.c)
 *     EngDitherColor @ 0x1C02691A0 (EngDitherColor.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEAGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1C029B65C (-bMakeXlate@EXLATEOBJ@@QEAAHPEAGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 *     ?pCreateXlate@@YAPEAVXLATE@@K@Z @ 0x1C029B960 (-pCreateXlate@@YAPEAVXLATE@@K@Z.c)
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
  ULONG v38; // eax
  HPALETTE *v39; // rbx
  HDEV v40; // rcx
  int v41; // eax
  int v42; // edx
  char v43; // dl
  int v44; // edx
  int v45; // edx
  int v46; // edx
  int v47; // edx
  int v48; // edx
  __int128 *v49; // rax
  __int64 v50; // xmm1_8
  __int64 v51; // rbx
  int v52; // eax
  HBITMAP IcmDIB; // rax
  int v54; // edx
  __int64 v55; // [rsp+60h] [rbp-79h] BYREF
  HDEV hdev; // [rsp+68h] [rbp-71h] BYREF
  struct XLATE *Xlate; // [rsp+70h] [rbp-69h] BYREF
  BOOL v58; // [rsp+78h] [rbp-61h] BYREF
  __int64 v59; // [rsp+80h] [rbp-59h] BYREF
  char v60; // [rsp+88h] [rbp-51h]
  int v61; // [rsp+8Ch] [rbp-4Dh]
  __int64 v62; // [rsp+90h] [rbp-49h] BYREF
  unsigned int v63; // [rsp+98h] [rbp-41h]
  _BYTE v64[4]; // [rsp+9Ch] [rbp-3Dh] BYREF
  _QWORD v65[4]; // [rsp+A0h] [rbp-39h] BYREF
  _DWORD v66[4]; // [rsp+C0h] [rbp-19h] BYREF
  __int64 *v67; // [rsp+D0h] [rbp-9h]
  char v68[8]; // [rsp+D8h] [rbp-1h] BYREF
  __int128 v69; // [rsp+E0h] [rbp+7h] BYREF
  __int64 v70; // [rsp+F0h] [rbp+17h]

  v63 = *((_DWORD *)a1 + 6);
  if ( v63 == 12 )
    return 0LL;
  v6 = *((_QWORD *)a2 + 10);
  v7 = 0;
  v59 = 0LL;
  v8 = 0LL;
  v60 = 0;
  v9 = 0LL;
  v61 = 0;
  v10 = 1;
  hdev = *(HDEV *)(v6 + 48);
  Xlate = 0LL;
  if ( ((_DWORD)hdev[8] & 1) == 0 || (v11 = 1, a3 != EngRealizeBrush) )
    v11 = 0;
  NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)v64, v11);
  NEEDGRELOCK::vLock((NEEDGRELOCK *)v68, (struct PDEVOBJ *)&hdev);
  v13 = *((_DWORD *)a1 + 6);
  if ( v13 < 6 )
  {
    LOBYTE(v12) = 5;
    v27 = HmgShareLock(*((_QWORD *)hdev + *((unsigned int *)a1 + 6) + 183), v12);
    v9 = v27;
    if ( v27 )
    {
      v62 = v27 + 24;
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
        v8 = (struct _SURFOBJ *)v62;
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
    memset(v65, 0, sizeof(v65));
    if ( *(_DWORD *)(*((_QWORD *)a2 + 10) + 96LL) == 1 )
      LODWORD(v65[0]) = 1;
    else
      LODWORD(v65[0]) = v33[531];
    v34 = *((_WORD *)v33 + 1064);
    if ( !v34 )
      goto LABEL_29;
    if ( !*((_WORD *)v33 + 1065) )
      goto LABEL_29;
    HIDWORD(v65[0]) = v34;
    LODWORD(v65[1]) = *((unsigned __int16 *)v33 + 1065);
    v65[2] = 0LL;
    LODWORD(v65[3]) = 1;
    if ( !SURFMEM::bCreateDIB((SURFMEM *)&v59, (struct _DEVBITMAPINFO *)v65, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
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
              *(_QWORD *)(v59 + 72));
    }
    else
    {
      v37 = EngDitherColor(hdev, v36, *((_DWORD *)a2 + 6), *(ULONG **)(v59 + 72));
    }
    v38 = v37 - 1;
    if ( !v38 )
    {
      v24 = xloIdent;
      goto LABEL_96;
    }
    if ( v38 != 1 )
      goto LABEL_29;
    v58 = a3 == EngRealizeBrush;
    if ( a3 == EngRealizeBrush )
      GreAcquireSemaphore(ghsemHT);
    if ( PDEVOBJ::pDevHTInfo((PDEVOBJ *)&hdev) || (unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&hdev, 0LL) )
    {
      v39 = (HPALETTE *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&hdev);
      LODWORD(v62) = *((_DWORD *)a2 + 6);
      v40 = hdev;
      v67 = &v62;
      v41 = *((_DWORD *)a2 + 18);
      v66[0] = 262400;
      v42 = *((_DWORD *)hdev + 599) >> 7;
      v66[1] = 255;
      v43 = ~(_BYTE)v42 & 2;
      v66[2] = 1;
      LOBYTE(v55) = v43;
      if ( (v41 & 4) != 0 || (v41 & 0x20) == 0 && (v41 & 3) != 0 )
        LOBYTE(v55) = v43 | 0x10;
      if ( __PAIR64__(*((unsigned __int16 *)v39 + 5), *((unsigned __int16 *)v39 + 4)) != *(_QWORD *)((char *)v65 + 4) )
      {
        SURFACE::bDeleteSurface(v59, 0LL, 0LL);
        HIDWORD(v65[0]) = *((unsigned __int16 *)v39 + 4);
        LODWORD(v65[1]) = *((unsigned __int16 *)v39 + 5);
        if ( !SURFMEM::bCreateDIB((SURFMEM *)&v59, (struct _DEVBITMAPINFO *)v65, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
          goto LABEL_91;
        v40 = hdev;
      }
      v44 = *((_DWORD *)v40 + 598);
      if ( v44 )
      {
        v45 = v44 - 2;
        if ( v45 )
        {
          v46 = v45 - 1;
          if ( v46 )
          {
            v47 = v46 - 1;
            if ( v47 )
            {
              v48 = v47 - 1;
              if ( v48 )
              {
                if ( v48 != 2 )
                  goto LABEL_91;
                BYTE1(v55) = 6;
              }
              else
              {
                BYTE1(v55) = -3;
              }
            }
            else
            {
              BYTE1(v55) = -2;
            }
          }
          else
          {
            BYTE1(v55) = -1;
          }
        }
        else
        {
          BYTE1(v55) = 2;
        }
      }
      else
      {
        BYTE1(v55) = 1;
      }
      BYTE3(v55) = *((_BYTE *)v40 + 2384);
      v49 = (__int128 *)*((_QWORD *)a2 + 7);
      BYTE2(v55) = 4;
      v50 = *((_QWORD *)v49 + 2);
      v69 = *v49;
      WORD5(v69) = 10000;
      v70 = v50;
      *(_DWORD *)((char *)&v69 + 6) = 655370000;
      if ( (int)HT_CreateHalftoneBrush((_DWORD)v39, (unsigned int)&v69, (unsigned int)v66, v55, *(_QWORD *)(v59 + 72)) > 0 )
      {
        if ( ((_DWORD)hdev[8] & 0x200) != 0 )
        {
          v24 = xloIdent;
LABEL_94:
          HTSEMOBJ::vRelease((HTSEMOBJ *)&v58);
LABEL_96:
          if ( v59 )
          {
            v25 = (struct _SURFOBJ *)(v59 + 24);
            goto LABEL_24;
          }
          if ( a3 != EngRealizeBrush )
          {
            v25 = 0LL;
            goto LABEL_24;
          }
          goto LABEL_29;
        }
        EPALOBJ::EPALOBJ((EPALOBJ *)&v55, *v39);
        v51 = v55;
        if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                             (__int64 *)&Xlate,
                             *((_QWORD *)a2 + 8),
                             *((_DWORD *)a2 + 18),
                             v55,
                             *(_QWORD *)(*((_QWORD *)a2 + 10) + 128LL),
                             *((_QWORD *)a2 + 12),
                             *((_QWORD *)a2 + 12),
                             *((_DWORD *)a2 + 12),
                             *((_DWORD *)a2 + 13),
                             0xFFFFFF,
                             0) )
        {
          v24 = (XLATEOBJ *)Xlate;
          if ( v51 )
            DEC_SHARE_REF_CNT(v51);
          goto LABEL_94;
        }
        if ( v51 )
          DEC_SHARE_REF_CNT(v51);
      }
    }
LABEL_91:
    HTSEMOBJ::vRelease((HTSEMOBJ *)&v58);
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
  v52 = *((_DWORD *)a1 + 12);
  if ( (v52 & 0x80u) == 0 )
  {
    v16 = (v52 & 0x20000) == 0;
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
  v54 = *(_DWORD *)(v9 + 96);
  if ( v54 != *((_DWORD *)hdev + 531) )
  {
    if ( v54 == *((_DWORD *)a2 + 28) )
    {
      v19 = (struct PALETTE *)*((_QWORD *)a2 + 13);
      goto LABEL_16;
    }
    if ( v54 == 3 )
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
          v63);
LABEL_25:
  NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v68);
  NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)v64);
  SURFMEM::~SURFMEM((SURFMEM *)&v59);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&Xlate);
  if ( v9 )
    DEC_SHARE_REF_CNT(v9);
  return v10;
}
