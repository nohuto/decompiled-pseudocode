/*
 * XREFs of GreSetBitmapBits @ 0x1C0023DA0
 * Callers:
 *     NtGdiSetBitmapBits @ 0x1C0020680 (NtGdiSetBitmapBits.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0024718 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0024758 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z @ 0x1C0025438 (-bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z.c)
 *     EngCopyBits @ 0x1C0075490 (EngCopyBits.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreSetBitmapBits(__int64 a1, ULONG a2, void *a3, LONG *a4)
{
  ULONG cjBits; // r15d
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rbx
  HDEV v12; // rdx
  __int64 v13; // r13
  LONG v14; // ecx
  DHPDEV v15; // rax
  LONG v16; // r12d
  __int64 v17; // rdi
  bool v18; // sf
  __int64 v19; // rsi
  struct _SURFOBJ *v20; // r13
  DYNAMICMODECHANGESHARELOCK *v21; // rcx
  int v23; // eax
  char v24[8]; // [rsp+60h] [rbp-A0h] BYREF
  POINTL pptlSrc; // [rsp+68h] [rbp-98h] BYREF
  __int64 v26; // [rsp+70h] [rbp-90h] BYREF
  char v27; // [rsp+78h] [rbp-88h]
  int v28; // [rsp+7Ch] [rbp-84h]
  int v29; // [rsp+80h] [rbp-80h] BYREF
  __int64 v30; // [rsp+84h] [rbp-7Ch]
  __int128 v31; // [rsp+8Ch] [rbp-74h]
  int v32; // [rsp+9Ch] [rbp-64h]
  HDEV v33; // [rsp+A0h] [rbp-60h] BYREF
  LONG *v34; // [rsp+A8h] [rbp-58h]
  char v35[8]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v36[3]; // [rsp+B8h] [rbp-48h] BYREF
  _SURFOBJ v37; // [rsp+D0h] [rbp-30h] BYREF
  RECTL prclDest; // [rsp+120h] [rbp+20h] BYREF

  v34 = a4;
  if ( !a2 )
    return 0LL;
  cjBits = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v24);
  LOBYTE(v9) = 5;
  v10 = HmgShareLockCheck(a1, v9);
  v26 = 0LL;
  v11 = v10;
  v27 = 0;
  v28 = 0;
  if ( v10 && (*(_DWORD *)(v10 + 112) & 0x4000000) != 0 )
  {
    v12 = *(HDEV *)(v10 + 48);
    v13 = v10;
    v14 = *(_DWORD *)(v10 + 56);
    v15 = *(DHPDEV *)(v10 + 40);
    v16 = *a4;
    v37.pvBits = a3;
    v37.dhpdev = v15;
    LODWORD(v15) = *(_DWORD *)(v11 + 60);
    v37.hdev = v12;
    v37.sizlBitmap.cx = v14;
    prclDest.right = v14;
    v33 = v12;
    v37.sizlBitmap.cy = (int)v15;
    prclDest.bottom = (int)v15;
    *(_OWORD *)&v37.dhsurf = 0LL;
    v37.cjBits = a2;
    v37.pvScan0 = 0LL;
    v37.lDelta = v16;
    v37.iUniq = 0;
    *(_DWORD *)&v37.iType = 0;
    pptlSrc = 0LL;
    *(_QWORD *)&prclDest.left = 0LL;
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v35, (struct PDEVOBJ *)&v33);
    v17 = 0LL;
    if ( v11 != -24
      && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v11 + 24) + 112) & 0x4000) != 0
       || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v11 + 24) + 112) < 0)
      && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v11 + 24) + 112) & 0x200) == 0 )
    {
      v17 = SURFOBJ_TO_SURFACE_NOT_NULL(v11 + 24);
      GreLockDisplayDevice(*(_QWORD *)(v17 + 48));
    }
    v36[0] = 0LL;
    if ( !SURFREFVIEW::bMap((SURFREFVIEW *)v36, (struct _SURFOBJ *)(v11 + 24)) )
      goto LABEL_12;
    if ( *(_WORD *)(v11 + 100) == 3 )
    {
      v30 = 0LL;
      v31 = 0uLL;
      v32 = 0;
      v29 = *(_DWORD *)(v11 + 96);
      v30 = *(_QWORD *)(v11 + 56);
      HIDWORD(v31) = *(_DWORD *)(v11 + 112) & 0x40000;
      *(_QWORD *)((char *)&v31 + 4) = 0LL;
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v26, (struct _DEVBITMAPINFO *)&v29, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
      {
LABEL_12:
        SURFREFVIEW::bUnMap((SURFREFVIEW *)v36);
        SURFREFVIEW::bUnMap((SURFREFVIEW *)v36);
        if ( v17 )
          GreUnlockDisplayDevice(*(_QWORD *)(v17 + 48));
        NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v35);
        goto LABEL_15;
      }
      v13 = v26;
      v18 = v16 < 0;
      if ( !v16 )
      {
LABEL_10:
        if ( !v18 )
        {
          ++*(_DWORD *)(v11 + 92);
          v19 = *(_QWORD *)(v11 + 48);
          v20 = (struct _SURFOBJ *)((v13 + 24) & -(__int64)(v13 != 0));
          bDoGetSetBitmapBits(v20, &v37, 0);
          cjBits = v37.cjBits;
          *v34 = v37.cjBits + v16;
          if ( *(_WORD *)(v11 + 100) == 3 )
          {
            if ( (*(_DWORD *)(v11 + 112) & 0x400) != 0 )
              v23 = (*(__int64 (__fastcall **)(__int64, struct _SURFOBJ *, _QWORD, _QWORD, RECTL *, POINTL *))(v19 + 2856))(
                      v11 + 24,
                      v20,
                      0LL,
                      0LL,
                      &prclDest,
                      &pptlSrc);
            else
              v23 = ((__int64 (__fastcall *)(__int64, struct _SURFOBJ *, _QWORD, _QWORD, RECTL *, POINTL *))EngCopyBits)(
                      v11 + 24,
                      v20,
                      0LL,
                      0LL,
                      &prclDest,
                      &pptlSrc);
            cjBits &= -(v23 != 0);
          }
        }
        goto LABEL_12;
      }
      EngCopyBits((SURFOBJ *)((v26 + 24) & -(__int64)(v26 != 0)), (SURFOBJ *)(v11 + 24), 0LL, 0LL, &prclDest, &pptlSrc);
    }
    v18 = v16 < 0;
    goto LABEL_10;
  }
  EngSetLastError(6u);
LABEL_15:
  SURFMEM::~SURFMEM((SURFMEM *)&v26);
  if ( v11 )
    DEC_SHARE_REF_CNT(v11);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v21);
  return cjBits;
}
