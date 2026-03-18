/*
 * XREFs of hsurfCreateCompatibleSurface @ 0x1C009F8A0
 * Callers:
 *     GreCreateBitmapFromDxSurface @ 0x1C0003F2C (GreCreateBitmapFromDxSurface.c)
 *     ?vProfileDriver@PDEVOBJ@@QEAAXXZ @ 0x1C00318B4 (-vProfileDriver@PDEVOBJ@@QEAAXXZ.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C007DB44 (GreCreateCompatibleBitmapInternal.c)
 *     ?hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C00A02E8 (-hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 * Callees:
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C00842D8 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C009FD28 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z @ 0x1C00A0420 (-bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall hsurfCreateCompatibleSurface(
        __int64 a1,
        unsigned int a2,
        HPALETTE a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        __int64 a15)
{
  unsigned int v15; // edi
  unsigned int v16; // r15d
  unsigned int v17; // r10d
  int v18; // r13d
  int v19; // eax
  __int64 v20; // rdx
  unsigned int v21; // r9d
  __int64 v22; // rsi
  __int64 v23; // r14
  __int64 (__fastcall *v24)(__int64, unsigned __int64, _QWORD, _QWORD, _QWORD, _DWORD, int, __int64 *); // r11
  __int64 v25; // rcx
  unsigned int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rbx
  struct _LUID v30; // rdi
  struct _LUID *v31; // rax
  __int64 v32; // rcx
  __int64 (__fastcall *v33)(_QWORD, unsigned __int64, _QWORD, _QWORD, _QWORD, int, int, __int64 *); // r11
  unsigned int v34; // ebx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 (__fastcall *v38)(_QWORD, unsigned __int64, _QWORD); // rax
  __int64 v39; // rax
  SURFACE *v40; // rbx
  int (*v41)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  int v42; // eax
  unsigned int v44; // [rsp+60h] [rbp-69h]
  __int64 v45; // [rsp+68h] [rbp-61h] BYREF
  char v46; // [rsp+70h] [rbp-59h]
  int v47; // [rsp+74h] [rbp-55h]
  __int64 v48; // [rsp+78h] [rbp-51h] BYREF
  unsigned __int64 v49; // [rsp+80h] [rbp-49h]
  unsigned int v50; // [rsp+88h] [rbp-41h]
  __int64 v51; // [rsp+90h] [rbp-39h] BYREF
  _DWORD v52[3]; // [rsp+98h] [rbp-31h] BYREF
  int v53; // [rsp+A4h] [rbp-25h]
  HPALETTE v54; // [rsp+A8h] [rbp-21h]
  __int64 v55; // [rsp+B0h] [rbp-19h]
  __int64 v56; // [rsp+B8h] [rbp-11h] BYREF
  unsigned int v57; // [rsp+C0h] [rbp-9h]
  unsigned int v58; // [rsp+C4h] [rbp-5h]

  v15 = a4;
  v16 = a6;
  v17 = a2;
  v18 = a13;
  v51 = a15;
  v53 = 0;
  v19 = 1;
  v52[1] = a4;
  v55 = 1LL;
  v52[0] = a2;
  v20 = 262145LL;
  v50 = a4;
  v21 = a5;
  v52[2] = a5;
  v48 = a1;
  v54 = a3;
  if ( (*(_DWORD *)(a1 + 32) & 0x8000) != 0 )
    v19 = 262145;
  v22 = 0LL;
  LODWORD(v55) = v19;
  if ( !a6 )
  {
    if ( !a8 )
      goto LABEL_51;
    v16 = bRemoteDriverNeedsDeviceBitmaps((struct PDEVOBJ *)&v48);
    if ( !v16 )
      goto LABEL_51;
    a1 = v48;
    v17 = v52[0];
    v21 = a5;
  }
  if ( a8 )
  {
    v16 = 0;
    if ( g_pDwmState )
      v16 = gfDwmDeviceBitmapsEnabled;
  }
  if ( !v16 )
    goto LABEL_51;
  v23 = 0LL;
  v49 = __PAIR64__(v21, v15);
  if ( !a8 )
  {
    if ( a10 )
    {
      v33 = *(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD, _QWORD, _QWORD, int, int, __int64 *))(a1 + 3456);
      if ( !v33 )
        return v22;
      v34 = a11 != 0 ? 6 : 2;
      v35 = v33(*(_QWORD *)(a1 + 1816), v49, v17, v34, 0LL, a13, a14, &v51);
      v23 = v35;
      if ( !v35 )
        return v22;
      LOBYTE(v36) = 5;
      v37 = HmgShareLockCheck(v35, v36);
      if ( !v37 )
        return v22;
      *(_DWORD *)(v37 + 116) |= 8u;
      *(_QWORD *)(v37 + 496) = v51;
      v32 = v37;
      *(_DWORD *)(v37 + 120) = v34;
      goto LABEL_26;
    }
    v38 = *(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(a1 + 2784);
    if ( !v38 )
      goto LABEL_51;
    v23 = v38(*(_QWORD *)(a1 + 1816), v49, v17);
LABEL_36:
    if ( !v23 )
      goto LABEL_51;
    goto LABEL_37;
  }
  v24 = *(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD, _QWORD, _QWORD, _DWORD, int, __int64 *))(a1 + 3456);
  if ( !a13 )
    v18 = 87;
  if ( !v24 )
    goto LABEL_27;
  v56 = 0LL;
  v25 = *(_QWORD *)(a1 + 1816);
  v26 = (a11 != 0 ? 5 : 1) | 8;
  if ( !a12 )
    v26 = a11 != 0 ? 5 : 1;
  v44 = v26;
  v27 = v24(v25, v49, v17, v26, 0LL, 0, a14, &v56);
  v23 = v27;
  if ( !v27 )
  {
LABEL_27:
    if ( a9 )
      return v22;
    goto LABEL_36;
  }
  LOBYTE(v20) = 5;
  v28 = HmgShareLockCheck(v27, v20);
  v29 = v28;
  if ( !v28 )
    return v22;
  if ( a12 )
    *(_DWORD *)(v28 + 116) |= 0x400u;
  *(_DWORD *)(v28 + 116) |= 1u;
  *(_QWORD *)(v28 + 496) = v56;
  if ( (*(_DWORD *)(v48 + 32) & 0x4000000) == 0 )
  {
    v30 = 0LL;
    v31 = PDEVOBJ::pRenderAdapterLuid((PDEVOBJ *)&v48);
    if ( v31 )
      v30 = *v31;
    *(struct _LUID *)(v29 + 504) = v30;
    v15 = v50;
  }
  v32 = v29;
  *(_DWORD *)(v29 + 120) = v44;
  *(_DWORD *)(v29 + 512) = v18;
LABEL_26:
  DEC_SHARE_REF_CNT(v32);
LABEL_37:
  if ( (_DWORD)v23 != -1 )
  {
    LOBYTE(v20) = 5;
    v39 = HmgShareLockCheck(v23, v20);
    v40 = (SURFACE *)v39;
    if ( v39 )
    {
      *(_DWORD *)(v39 + 112) |= 0x4804000u;
      if ( v54 )
      {
        EPALOBJ::EPALOBJ((EPALOBJ *)&v56, v54);
        if ( v56 )
          *((_QWORD *)v40 + 16) = v56;
      }
      if ( !a8 && (!a10 || !v51) )
      {
        v58 = a5;
        v56 = 0LL;
        v57 = v15;
        v41 = SURFACE::pfnBitBlt(v40);
        ((void (__fastcall *)(char *, _QWORD, _QWORD, _QWORD, _QWORD, __int64 *, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))v41)(
          (char *)v40 + 24,
          0LL,
          0LL,
          0LL,
          0LL,
          &v56,
          0LL,
          0LL,
          0LL,
          0LL,
          0);
      }
      EtwPhysicalSurfCreateEvent(v23, 1LL, *((_QWORD *)v40 + 62), 1LL);
    }
    else
    {
      v23 = 0LL;
    }
    if ( v40 )
      DEC_SHARE_REF_CNT(v40);
    return v23;
  }
LABEL_51:
  v42 = 1;
  if ( !a8 )
    v42 = a7;
  v45 = 0LL;
  LODWORD(v55) = (v42 != 0 ? 0x800 : 0) | v55;
  v46 = 0;
  v47 = 0;
  SURFMEM::bCreateDIB((SURFMEM *)&v45, (struct _DEVBITMAPINFO *)v52, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  if ( v45 )
  {
    v46 |= 1u;
    *(_DWORD *)(v45 + 112) |= 0x800000u;
    *(_DWORD *)(v45 + 112) |= 0x4000000u;
    *(_QWORD *)(v45 + 48) = v48;
    if ( *(_QWORD *)(v45 + 256) )
      *(_DWORD *)(v45 + 112) |= 0x4000u;
    else
      *(_DWORD *)(v45 + 112) |= 0x200u;
    EtwPhysicalSurfCreateEvent(*(_QWORD *)(v45 + 32), 0LL, 0LL, v16);
    v22 = *(_QWORD *)(v45 + 32);
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v45);
  return v22;
}
