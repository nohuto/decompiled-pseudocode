/*
 * XREFs of GreGetBitmapBits @ 0x1C0026F44
 * Callers:
 *     NtGdiGetBitmapBits @ 0x1C00271B0 (NtGdiGetBitmapBits.c)
 *     ?GetCursorHeight@@YAHXZ @ 0x1C020CDCC (-GetCursorHeight@@YAHXZ.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0024718 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0024758 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z @ 0x1C0025438 (-bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z.c)
 *     EngCopyBits @ 0x1C0075490 (EngCopyBits.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall GreGetBitmapBits(__int64 a1, ULONG a2, void *a3, unsigned int *a4)
{
  ULONG cjBits; // esi
  __int64 v8; // rdx
  _DWORD *v9; // rax
  _DWORD *v10; // rbx
  LONG v11; // ecx
  LONG v12; // edx
  _DWORD *v13; // r13
  __int64 v14; // rax
  HDEV v15; // rax
  __int64 v16; // rdi
  __int64 v17; // r12
  unsigned int v18; // r14d
  DYNAMICMODECHANGESHARELOCK *v19; // rcx
  char v21[8]; // [rsp+60h] [rbp-A0h] BYREF
  POINTL pptlSrc; // [rsp+68h] [rbp-98h] BYREF
  unsigned int *v23; // [rsp+70h] [rbp-90h]
  _DWORD *v24; // [rsp+78h] [rbp-88h] BYREF
  char v25; // [rsp+80h] [rbp-80h]
  int v26; // [rsp+84h] [rbp-7Ch]
  int v27; // [rsp+88h] [rbp-78h] BYREF
  __int64 v28; // [rsp+8Ch] [rbp-74h]
  __int128 v29; // [rsp+94h] [rbp-6Ch]
  int v30; // [rsp+A4h] [rbp-5Ch]
  HDEV v31; // [rsp+A8h] [rbp-58h] BYREF
  void *v32; // [rsp+B0h] [rbp-50h]
  char v33[8]; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v34[2]; // [rsp+C0h] [rbp-40h] BYREF
  struct _SURFOBJ v35; // [rsp+D0h] [rbp-30h] BYREF
  RECTL prclDest; // [rsp+120h] [rbp+20h] BYREF

  v23 = a4;
  v32 = a3;
  cjBits = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v21);
  LOBYTE(v8) = 5;
  v9 = (_DWORD *)HmgShareLockCheck(a1, v8);
  v10 = v9;
  if ( v9 && (v9[28] & 0x4000000) != 0 )
  {
    v11 = v9[14];
    v12 = v9[15];
    v13 = v9;
    v14 = (unsigned int)v9[24];
    v24 = 0LL;
    v25 = 0;
    v26 = 0;
    cjBits = v12 * (((unsigned int)(v11 * *((_DWORD *)&galBitsPerPixel + v14) + 15) >> 3) & 0x1FFFFFFE);
    if ( !a3 )
    {
LABEL_19:
      SURFMEM::~SURFMEM((SURFMEM *)&v24);
      goto LABEL_20;
    }
    v35.dhpdev = (DHPDEV)*((_QWORD *)v10 + 5);
    v15 = (HDEV)*((_QWORD *)v10 + 6);
    v35.sizlBitmap.cx = v11;
    v35.sizlBitmap.cy = v12;
    prclDest.right = v11;
    prclDest.bottom = v12;
    v35.hdev = v15;
    v31 = v15;
    *(_OWORD *)&v35.dhsurf = 0LL;
    v35.cjBits = 0;
    memset(&v35.pvBits, 0, 24);
    *(_DWORD *)&v35.iType = 0;
    pptlSrc = 0LL;
    *(_QWORD *)&prclDest.left = 0LL;
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v33, (struct PDEVOBJ *)&v31);
    v16 = 0LL;
    v17 = (__int64)(v10 + 6);
    if ( v10 != (_DWORD *)-24LL
      && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v10 + 6) + 112) & 0x4000) != 0
       || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v10 + 6) + 112) < 0)
      && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v10 + 6) + 112) & 0x200) == 0 )
    {
      v16 = SURFOBJ_TO_SURFACE_NOT_NULL(v10 + 6);
      GreLockDisplayDevice(*(_QWORD *)(v16 + 48));
    }
    v34[0] = 0LL;
    if ( SURFREFVIEW::bMap((SURFREFVIEW *)v34, (struct _SURFOBJ *)(v10 + 6)) )
    {
      if ( *((_WORD *)v10 + 50) == 3 )
      {
        v28 = 0LL;
        v29 = 0uLL;
        v30 = 0;
        v27 = v10[24];
        v28 = *((_QWORD *)v10 + 7);
        HIDWORD(v29) = v10[28] & 0x40000;
        *(_QWORD *)((char *)&v29 + 4) = 0LL;
        if ( !SURFMEM::bCreateDIB((SURFMEM *)&v24, (struct _DEVBITMAPINFO *)&v27, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
          goto LABEL_27;
        v13 = v24;
        v17 = (__int64)(v24 + 6);
        EngCopyBits(
          (SURFOBJ *)((unsigned __int64)(v24 + 6) & -(__int64)(v24 != 0LL)),
          (SURFOBJ *)(v10 + 6),
          0LL,
          0LL,
          &prclDest,
          &pptlSrc);
      }
      if ( cjBits )
      {
        v18 = *v23;
        if ( (*v23 & 0x80000000) == 0 && v18 < cjBits )
        {
          if ( a2 + v18 > cjBits )
            a2 = cjBits - v18;
          if ( a2 )
          {
            v35.cjBits = a2;
            v35.lDelta = v18;
            v35.pvBits = v32;
            bDoGetSetBitmapBits(&v35, (struct _SURFOBJ *)(v17 & -(__int64)(v13 != 0LL)), 1);
            cjBits = v35.cjBits;
            *v23 = v18 + v35.cjBits;
            goto LABEL_16;
          }
        }
LABEL_27:
        cjBits = 0;
      }
    }
LABEL_16:
    SURFREFVIEW::bUnMap((SURFREFVIEW *)v34);
    SURFREFVIEW::bUnMap((SURFREFVIEW *)v34);
    if ( v16 )
      GreUnlockDisplayDevice(*(_QWORD *)(v16 + 48));
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v33);
    goto LABEL_19;
  }
  EngSetLastError(6u);
LABEL_20:
  if ( v10 )
    DEC_SHARE_REF_CNT(v10);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v19);
  return cjBits;
}
