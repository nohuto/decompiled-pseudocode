/*
 * XREFs of hsurfCreateCompatibleSurface @ 0x1C0041524
 * Callers:
 *     GreCreateBitmapFromDxSurface @ 0x1C0008554 (GreCreateBitmapFromDxSurface.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0023138 (GreCreateCompatibleBitmapInternal.c)
 *     ?vProfileDriver@PDEVOBJ@@QEAAXXZ @ 0x1C003E124 (-vProfileDriver@PDEVOBJ@@QEAAXXZ.c)
 *     ?hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C0043480 (-hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 * Callees:
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C0012530 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C003ED08 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z @ 0x1C00435B8 (-bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall hsurfCreateCompatibleSurface(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
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
  int v16; // r13d
  __int64 v17; // rbx
  unsigned int v19; // r8d
  __int64 v20; // rdx
  unsigned int v21; // r15d
  int v22; // eax
  __int64 v23; // rsi
  __int64 v24; // r14
  __int64 (__fastcall *v25)(_QWORD, unsigned __int64, _QWORD); // rax
  int v26; // eax
  __int64 (__fastcall *v28)(_QWORD, unsigned __int64, _QWORD, _QWORD, _QWORD, _DWORD, int, __int64 *); // r10
  unsigned int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rbx
  struct _LUID v33; // rdi
  struct _LUID *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  SURFACE *v37; // rbx
  __int64 (__fastcall *v38)(_QWORD, unsigned __int64, _QWORD, _QWORD, _QWORD, int, int, __int64 *); // r10
  unsigned int v39; // edi
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  int (*v43)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  unsigned int v45; // [rsp+60h] [rbp-69h]
  __int64 v46; // [rsp+68h] [rbp-61h] BYREF
  char v47; // [rsp+70h] [rbp-59h]
  int v48; // [rsp+74h] [rbp-55h]
  int v49; // [rsp+78h] [rbp-51h]
  unsigned int v50; // [rsp+7Ch] [rbp-4Dh]
  __int64 v51; // [rsp+80h] [rbp-49h] BYREF
  unsigned __int64 v52; // [rsp+88h] [rbp-41h]
  __int64 v53; // [rsp+90h] [rbp-39h] BYREF
  _QWORD v54[4]; // [rsp+98h] [rbp-31h] BYREF
  __int64 v55; // [rsp+B8h] [rbp-11h] BYREF
  unsigned int v56; // [rsp+C0h] [rbp-9h]
  unsigned int v57; // [rsp+C4h] [rbp-5h]

  v16 = a13;
  v17 = a1;
  v49 = a14;
  v51 = a1;
  v50 = a4;
  v53 = a15;
  memset(v54, 0, sizeof(v54));
  v19 = a5;
  v20 = a2;
  v21 = a6;
  v54[2] = a3;
  LODWORD(v54[3]) = 1;
  v22 = 1;
  LODWORD(v54[1]) = a5;
  v54[0] = __PAIR64__(a4, a2);
  if ( (*(_DWORD *)(v17 + 32) & 0x8000) != 0 )
    v22 = 262145;
  v23 = 0LL;
  LODWORD(v54[3]) = v22;
  if ( !a6 )
  {
    if ( !a8 )
      goto LABEL_11;
    v21 = bRemoteDriverNeedsDeviceBitmaps((struct PDEVOBJ *)&v51);
    if ( !v21 )
      goto LABEL_11;
    v17 = v51;
    v20 = LODWORD(v54[0]);
    v19 = a5;
  }
  if ( a8 )
  {
    v21 = 0;
    if ( g_pDwmState )
      v21 = gfDwmDeviceBitmapsEnabled;
  }
  if ( !v21 )
    goto LABEL_11;
  v24 = 0LL;
  v52 = __PAIR64__(v19, v50);
  if ( !a8 )
  {
    if ( !a10 )
    {
      v25 = *(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(v17 + 2784);
      if ( !v25 )
      {
LABEL_11:
        v26 = 1;
        if ( !a8 )
          v26 = a7;
        LODWORD(v54[3]) |= v26 != 0 ? 0x800 : 0;
        v46 = 0LL;
        v47 = 0;
        v48 = 0;
        SURFMEM::bCreateDIB((SURFMEM *)&v46, (struct _DEVBITMAPINFO *)v54, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
        if ( v46 )
        {
          v47 |= 1u;
          *(_DWORD *)(v46 + 112) |= 0x800000u;
          *(_DWORD *)(v46 + 112) |= 0x4000000u;
          *(_QWORD *)(v46 + 48) = v51;
          if ( *(_QWORD *)(v46 + 256) )
            *(_DWORD *)(v46 + 112) |= 0x4000u;
          else
            *(_DWORD *)(v46 + 112) |= 0x200u;
          EtwPhysicalSurfCreateEvent(*(_QWORD *)(v46 + 32), 0LL, 0LL, v21);
          v23 = *(_QWORD *)(v46 + 32);
        }
        SURFMEM::~SURFMEM((SURFMEM *)&v46);
        return v23;
      }
      v24 = v25(*(_QWORD *)(v17 + 1816), v52, (unsigned int)v20);
      goto LABEL_10;
    }
    v38 = *(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD, _QWORD, _QWORD, int, int, __int64 *))(v17 + 3456);
    if ( !v38 )
      return v23;
    v39 = a11 != 0 ? 6 : 2;
    v40 = v38(*(_QWORD *)(v17 + 1816), v52, (unsigned int)v20, v39, 0LL, a13, v49, &v53);
    v24 = v40;
    if ( !v40 )
      return v23;
    LOBYTE(v41) = 5;
    v42 = HmgShareLockCheck(v40, v41);
    if ( !v42 )
      return v23;
    *(_DWORD *)(v42 + 116) |= 8u;
    *(_QWORD *)(v42 + 496) = v53;
    v35 = v42;
    *(_DWORD *)(v42 + 120) = v39;
LABEL_33:
    DEC_SHARE_REF_CNT(v35);
    goto LABEL_34;
  }
  v28 = *(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD, _QWORD, _QWORD, _DWORD, int, __int64 *))(v17 + 3456);
  if ( !a13 )
    v16 = 87;
  if ( v28 )
  {
    v55 = 0LL;
    v29 = (a11 != 0 ? 5 : 1) | 8;
    if ( !a12 )
      v29 = a11 != 0 ? 5 : 1;
    v45 = v29;
    v30 = v28(*(_QWORD *)(v17 + 1816), v52, (unsigned int)v20, v29, 0LL, 0, v49, &v55);
    v24 = v30;
    if ( v30 )
    {
      LOBYTE(v20) = 5;
      v31 = HmgShareLockCheck(v30, v20);
      v32 = v31;
      if ( !v31 )
        return v23;
      if ( a12 )
        *(_DWORD *)(v31 + 116) |= 0x400u;
      *(_DWORD *)(v31 + 116) |= 1u;
      *(_QWORD *)(v31 + 496) = v55;
      if ( (*(_DWORD *)(v51 + 32) & 0x4000000) == 0 )
      {
        v33 = 0LL;
        v34 = PDEVOBJ::pRenderAdapterLuid((PDEVOBJ *)&v51);
        if ( v34 )
          v33 = *v34;
        *(struct _LUID *)(v32 + 504) = v33;
      }
      v35 = v32;
      *(_DWORD *)(v32 + 120) = v45;
      *(_DWORD *)(v32 + 512) = v16;
      goto LABEL_33;
    }
  }
  if ( a9 )
    return v23;
LABEL_10:
  if ( !v24 )
    goto LABEL_11;
LABEL_34:
  if ( (_DWORD)v24 == -1 )
    goto LABEL_11;
  LOBYTE(v20) = 5;
  v36 = HmgShareLockCheck(v24, v20);
  v37 = (SURFACE *)v36;
  if ( v36 )
  {
    *(_DWORD *)(v36 + 112) |= 0x4804000u;
    if ( v54[2] )
    {
      EPALOBJ::EPALOBJ((EPALOBJ *)&v55, (HPALETTE)v54[2]);
      if ( v55 )
        *((_QWORD *)v37 + 16) = v55;
    }
    if ( !a8 && (!a10 || !v53) )
    {
      v56 = v50;
      v57 = a5;
      v55 = 0LL;
      v43 = SURFACE::pfnBitBlt(v37);
      ((void (__fastcall *)(char *, _QWORD, _QWORD, _QWORD, _QWORD, __int64 *, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))v43)(
        (char *)v37 + 24,
        0LL,
        0LL,
        0LL,
        0LL,
        &v55,
        0LL,
        0LL,
        0LL,
        0LL,
        0);
    }
    EtwPhysicalSurfCreateEvent(v24, 1LL, *((_QWORD *)v37 + 62), 1LL);
  }
  else
  {
    v24 = 0LL;
  }
  if ( v37 )
    DEC_SHARE_REF_CNT(v37);
  return v24;
}
