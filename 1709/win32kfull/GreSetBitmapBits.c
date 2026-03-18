/*
 * XREFs of GreSetBitmapBits @ 0x1C00F3430
 * Callers:
 *     NtGdiSetBitmapBits @ 0x1C00F3360 (NtGdiSetBitmapBits.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C001AAD4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C001AB14 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     EngCopyBits @ 0x1C002C650 (EngCopyBits.c)
 *     ?bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z @ 0x1C00F3658 (-bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0145A00 (memset.c)
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
  HDEV v29; // [rsp+80h] [rbp-80h] BYREF
  LONG *v30; // [rsp+88h] [rbp-78h]
  char v31[8]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v32[2]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v33[5]; // [rsp+A8h] [rbp-58h] BYREF
  struct _SURFOBJ v34; // [rsp+D0h] [rbp-30h] BYREF
  RECTL prclDest; // [rsp+120h] [rbp+20h] BYREF

  v30 = a4;
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
    v34.pvBits = a3;
    v34.dhpdev = v15;
    LODWORD(v15) = *(_DWORD *)(v11 + 60);
    v34.hdev = v12;
    v34.sizlBitmap.cx = v14;
    prclDest.right = v14;
    v29 = v12;
    v34.sizlBitmap.cy = (int)v15;
    prclDest.bottom = (int)v15;
    *(_OWORD *)&v34.dhsurf = 0LL;
    v34.cjBits = a2;
    v34.pvScan0 = 0LL;
    v34.lDelta = v16;
    v34.iUniq = 0;
    *(_DWORD *)&v34.iType = 0;
    pptlSrc = 0LL;
    *(_QWORD *)&prclDest.left = 0LL;
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v31, (struct PDEVOBJ *)&v29);
    v17 = 0LL;
    if ( v11 != -24
      && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v11 + 24) + 112) & 0x4000) != 0
       || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v11 + 24) + 112) < 0)
      && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v11 + 24) + 112) & 0x200) == 0 )
    {
      v17 = SURFOBJ_TO_SURFACE_NOT_NULL(v11 + 24);
      GreLockDisplayDevice(*(_QWORD *)(v17 + 48));
    }
    v32[0] = 0LL;
    if ( !SURFREFVIEW::bMap((SURFREFVIEW *)v32, (struct _SURFOBJ *)(v11 + 24)) )
      goto LABEL_12;
    if ( *(_WORD *)(v11 + 100) == 3 )
    {
      memset(v33, 0, 0x20uLL);
      LODWORD(v33[0]) = *(_DWORD *)(v11 + 96);
      HIDWORD(v33[0]) = *(_DWORD *)(v11 + 56);
      LODWORD(v33[1]) = *(_DWORD *)(v11 + 60);
      LODWORD(v33[3]) = *(_DWORD *)(v11 + 112) & 0x40000;
      v33[2] = 0LL;
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v26, (struct _DEVBITMAPINFO *)v33, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
      {
LABEL_12:
        SURFREFVIEW::bUnMap((SURFREFVIEW *)v32);
        SURFREFVIEW::bUnMap((SURFREFVIEW *)v32);
        if ( v17 )
          GreUnlockDisplayDevice(*(_QWORD *)(v17 + 48));
        NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v31);
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
          bDoGetSetBitmapBits(v20, &v34, 0);
          cjBits = v34.cjBits;
          *v30 = v34.cjBits + v16;
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
