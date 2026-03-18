/*
 * XREFs of ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C026BB04
 * Callers:
 *     GreStretchBltInternal @ 0x1C0094BA0 (GreStretchBltInternal.c)
 *     GreMaskBlt @ 0x1C00F1F6C (GreMaskBlt.c)
 *     GrePlgBlt @ 0x1C026DEAC (GrePlgBlt.c)
 * Callees:
 *     UIntAdd @ 0x1C00367BC (UIntAdd.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C0074BF8 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0074ECC (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0075090 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0075128 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0081720 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0081778 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C0095D34 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x1C00963B4 (-pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     UIntMult @ 0x1C019B168 (UIntMult.c)
 *     ?bCreateRegion@BLTRECORD@@QEAAHAEAVDCOBJ@@PEAU_POINTFIX@@@Z @ 0x1C026B9FC (-bCreateRegion@BLTRECORD@@QEAAHAEAVDCOBJ@@PEAU_POINTFIX@@@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z @ 0x1C026C19C (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C026C444 (-bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 *     ?vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C026C6A4 (-vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?vExtrema@BLTRECORD@@QEAAXXZ @ 0x1C026C718 (-vExtrema@BLTRECORD@@QEAAXXZ.c)
 *     ?vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z @ 0x1C026C7B4 (-vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z.c)
 *     ?vOrder@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C0270048 (-vOrder@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 */

__int64 __fastcall BLTRECORD::bRotate(
        struct _POINTFIX *this,
        struct DCOBJ *a2,
        struct DCOBJ *a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  FIX *v9; // rdx
  FIX v10; // ecx
  int *v11; // rdx
  unsigned int v12; // esi
  struct _POINTFIX v13; // rcx
  unsigned int v15; // eax
  __int64 v16; // rcx
  struct _POINTFIX *v17; // r13
  unsigned int v18; // r14d
  int x; // ecx
  char *v20; // rsi
  struct _POINTFIX v21; // rcx
  _DWORD *v22; // r9
  struct _POINTFIX v23; // r10
  unsigned int v24; // edx
  unsigned int v25; // r9d
  unsigned int v26; // r8d
  UINT v27; // r11d
  UINT v28; // ecx
  UINT v29; // eax
  __int64 v30; // r10
  __int64 v31; // r10
  unsigned int v32; // r11d
  UINT v33; // eax
  UINT v34; // eax
  __int64 v35; // rdx
  __int64 v36; // r11
  FIX v37; // eax
  unsigned int v38; // edi
  __int64 v39; // rax
  int v40; // r8d
  int v41; // r10d
  __int64 v42; // r11
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rcx
  _DWORD *v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  struct REGION *v49; // rax
  struct ECLIPOBJ *v50; // rdx
  __int64 v51; // r10
  __int64 v52; // r15
  __int64 v53; // r11
  struct SURFACE *v54; // rax
  struct _POINTFIX v55; // r8
  BOOL (__stdcall *v56)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG); // r14
  UINT puResult; // [rsp+60h] [rbp-A0h] BYREF
  UINT uMultiplicand; // [rsp+64h] [rbp-9Ch]
  __int64 v59; // [rsp+68h] [rbp-98h] BYREF
  char v60; // [rsp+70h] [rbp-90h]
  int v61; // [rsp+74h] [rbp-8Ch]
  UINT uAugend; // [rsp+78h] [rbp-88h]
  UINT v63; // [rsp+7Ch] [rbp-84h]
  FIX y; // [rsp+80h] [rbp-80h]
  __m128i v65; // [rsp+88h] [rbp-78h] BYREF
  int v66; // [rsp+98h] [rbp-68h] BYREF
  int v67; // [rsp+9Ch] [rbp-64h]
  int v68; // [rsp+A0h] [rbp-60h]
  int v69; // [rsp+A4h] [rbp-5Ch]
  _BYTE v70[4]; // [rsp+B0h] [rbp-50h] BYREF
  __m128i v71[4]; // [rsp+B4h] [rbp-4Ch] BYREF
  __int64 v72; // [rsp+100h] [rbp+0h]
  int v73; // [rsp+108h] [rbp+8h]
  int v74; // [rsp+130h] [rbp+30h]
  __int64 v75; // [rsp+140h] [rbp+40h]

  BLTRECORD::vExtrema((BLTRECORD *)this);
  if ( (a4 & 0xD4) != 0 )
  {
    BLTRECORD::vOrder((BLTRECORD *)this, (struct ERECTL *)&this[22]);
    v17 = this + 24;
    ERECTL::vOrder((ERECTL *)&this[24]);
    v18 = 1;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 312LL) & 1) != 0 )
    {
      x = v17->x;
      v17->x = this[25].x;
      this[25].x = x;
    }
    v20 = 0LL;
    if ( BLTRECORD::pSurfMskOut((BLTRECORD *)this) )
    {
      if ( v17->x < 0 )
        goto LABEL_9;
      if ( this[24].y < 0 )
        goto LABEL_9;
      v21 = this[10];
      if ( this[25].x > *(_DWORD *)(*(_QWORD *)&v21 + 56LL) || this[25].y > *(_DWORD *)(*(_QWORD *)&v21 + 60LL) )
        goto LABEL_9;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 312LL) & 1) != 0 )
    {
      if ( BLTRECORD::pSurfMskOut((BLTRECORD *)this) )
      {
        v23 = this[10];
        v24 = this[23].x - *v22;
        v25 = *(_DWORD *)(*(_QWORD *)&v23 + 56LL);
        v26 = this[23].y - this[22].y;
        v27 = v17->x;
        v28 = *(_DWORD *)(*(_QWORD *)&v23 + 60LL);
        y = this[22].y;
        v29 = this[24].y;
        v63 = v26;
        uMultiplicand = v29;
        if ( v25 < v27 || v28 < v29 || v25 - v27 < v24 || v28 - uMultiplicand < v26 )
        {
          if ( *(_DWORD *)(*(_QWORD *)&v23 + 96LL) != 1 )
            goto LABEL_9;
          if ( *(_WORD *)(*(_QWORD *)&v23 + 100LL) )
            goto LABEL_9;
          if ( v25 < v24 )
            goto LABEL_9;
          if ( UIntAdd(v27, 7u, &puResult) < 0 )
            goto LABEL_9;
          uAugend = puResult >> 3;
          if ( UIntMult(uMultiplicand, abs32(*(_DWORD *)(v30 + 88)), &puResult) < 0 )
            goto LABEL_9;
          if ( UIntAdd(uAugend, puResult, &puResult) < 0 )
            goto LABEL_9;
          v33 = *(_DWORD *)(v31 + 64);
          if ( puResult >= v33 )
            goto LABEL_9;
          v34 = (v33 - puResult) / v32;
          if ( v63 > v34 )
            this[23].y = y + v34;
        }
      }
    }
    v35 = *(_QWORD *)a3;
    v36 = *(_QWORD *)a2;
    if ( *(_QWORD *)(*(_QWORD *)a2 + 48LL) == *(_QWORD *)(*(_QWORD *)a3 + 48LL)
      || !*((_WORD *)XDCOBJ::pSurfaceEff(a2) + 50)
      || !*((_WORD *)XDCOBJ::pSurfaceEff(a3) + 50) )
    {
      v37 = this[27].x;
      if ( v37 == 52428 || v37 == 43724 )
      {
        if ( *(_QWORD *)(v36 + 512) && *(_QWORD *)(v35 + 512) )
        {
          BLTRECORD::vBound((BLTRECORD *)this, (struct ERECTL *)&v66);
          v40 = v69 + 1;
          v41 = v68 + 1;
          ++v69;
          ++v68;
          if ( (*(_DWORD *)(v42 + 36) & 0xE0) != 0 )
          {
            XDCOBJ::vAccumulate(a2, (struct ERECTL *)&v66);
            v40 = v69;
            v41 = v68;
          }
          v43 = *(_QWORD *)a2;
          v44 = (*(_BYTE *)(*(_QWORD *)a2 + 40LL) & 1) != 0 ? 1440LL : 1432LL;
          this[15].x += 16 * *(_DWORD *)(*(_QWORD *)a2 + v44);
          this[15].y += 16 * *(_DWORD *)(v43 + v44 + 4);
          this[16].x += 16 * *(_DWORD *)(v43 + v44);
          this[16].y += 16 * *(_DWORD *)(v43 + v44 + 4);
          this[17].x += 16 * *(_DWORD *)(v43 + v44);
          this[17].y += 16 * *(_DWORD *)(v43 + v44 + 4);
          this[18].x += 16 * *(_DWORD *)(v43 + v44);
          this[18].y += 16 * *(_DWORD *)(v43 + v44 + 4);
          v45 = *(_QWORD *)a3;
          if ( (*(_DWORD *)(*(_QWORD *)a3 + 40LL) & 1) != 0 )
            v46 = (_DWORD *)(v45 + 1440);
          else
            v46 = (_DWORD *)(v45 + 1432);
          this[22].x += *v46;
          this[23].x += *v46;
          this[22].y += v46[1];
          this[23].y += v46[1];
          v47 = *(_QWORD *)a2;
          v48 = (*(_BYTE *)(*(_QWORD *)a2 + 40LL) & 1) != 0 ? 1440LL : 1432LL;
          v66 += *(_DWORD *)(*(_QWORD *)a2 + v48);
          v68 = *(_DWORD *)(v47 + v48) + v41;
          v67 += *(_DWORD *)(v47 + v48 + 4);
          v69 = *(_DWORD *)(v47 + v48 + 4) + v40;
          v49 = XDCOBJ::prgnEffRao((DC **)a2);
          v72 = 0LL;
          v73 = 0;
          v74 = 1;
          v75 = 0LL;
          XCLIPOBJ::vSetup((XCLIPOBJ *)v70, v49, (struct ERECTL *)&v66, 0);
          if ( !ERECTL::bEmpty((ERECTL *)v71) )
          {
            if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0xE0) != 0 )
            {
              v65 = v71[0];
              XDCOBJ::vAccumulateTight(a2, v50, &v65);
            }
            BLTRECORD::vMirror((BLTRECORD *)this, this + 15);
            v52 = 0LL;
            ++*(_DWORD *)(*(_QWORD *)&this[8] + 92LL);
            v53 = *(_QWORD *)a2;
            if ( *(__int16 *)(*(_QWORD *)a2 + 242LL) >= 0 )
              v52 = v53 + 240;
            if ( this[27].x != 52428 )
            {
              v54 = BLTRECORD::pSurfMskOut((BLTRECORD *)this);
              if ( v54 )
                v20 = (char *)v54 + 24;
            }
            v55 = this[8];
            if ( (*(_DWORD *)(*(_QWORD *)&v55 + 112LL) & 4) != 0 )
              v56 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG))(v51 + 3264);
            else
              v56 = EngPlgBlt;
            return ((unsigned int (__fastcall *)(__int64, __int64, char *, _BYTE *, _QWORD, __int64, __int64, struct _POINTFIX *, struct _POINTFIX *, struct _POINTFIX *, _DWORD))v56)(
                     (*(_QWORD *)&v55 + 24LL) & -(__int64)(v55 != 0LL),
                     (*(_QWORD *)&this[9] + 24LL) & -(__int64)(*(_QWORD *)&this[9] != 0LL),
                     v20,
                     v70,
                     *(_QWORD *)&this[11],
                     v52,
                     v53 + 1592,
                     &this[15],
                     &this[22],
                     &this[24],
                     a5);
          }
        }
        return v18;
      }
      else
      {
        v65.m128i_i64[0] = 0LL;
        v65.m128i_i8[8] = 0;
        v65.m128i_i32[3] = 0;
        v59 = 0LL;
        v60 = 0;
        v61 = 0;
        if ( (unsigned int)BLTRECORD::bRotate(
                             (BLTRECORD *)this,
                             a3,
                             (struct SURFMEM *)&v59,
                             (struct SURFMEM *)&v65,
                             a4,
                             a5)
          && (BLTRECORD::vBound((BLTRECORD *)this, (struct ERECTL *)&this[19]),
              (unsigned int)BLTRECORD::bCreateRegion((BLTRECORD *)this, a2, this + 15)) )
        {
          v38 = BLTRECORD::bBitBlt((BLTRECORD *)this, (DC **)a2, a3, a4);
          v39 = *(_QWORD *)a2;
          *(_DWORD *)(v39 + 36) |= 0x10u;
          *(_QWORD *)(v39 + 1528) = 0LL;
        }
        else
        {
          v38 = 0;
        }
        SURFMEM::~SURFMEM((SURFMEM *)&v59);
        SURFMEM::~SURFMEM((SURFMEM *)&v65);
        return v38;
      }
    }
LABEL_9:
    EngSetLastError(0x57u);
    return 0LL;
  }
  BLTRECORD::vOrder((BLTRECORD *)this, (struct ERECTL *)&this[24]);
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 312LL) & 1) != 0 )
  {
    v10 = *v9;
    *v9 = this[25].x;
    this[25].x = v10;
  }
  v12 = 0;
  if ( BLTRECORD::pSurfMskOut((BLTRECORD *)this) )
  {
    if ( *v11 < 0 )
      goto LABEL_9;
    if ( this[24].y < 0 )
      goto LABEL_9;
    v13 = this[10];
    if ( this[25].x > *(_DWORD *)(*(_QWORD *)&v13 + 56LL) || this[25].y > *(_DWORD *)(*(_QWORD *)&v13 + 60LL) )
      goto LABEL_9;
  }
  v59 = 0LL;
  v60 = 0;
  v61 = 0;
  if ( (a4 & 0x10000) == 0 || (unsigned int)BLTRECORD::bRotate((BLTRECORD *)this, (struct SURFMEM *)&v59, a5) )
  {
    BLTRECORD::vBound((BLTRECORD *)this, (struct ERECTL *)&this[19]);
    if ( (unsigned int)BLTRECORD::bCreateRegion((BLTRECORD *)this, a2, this + 15) )
    {
      v15 = BLTRECORD::bBitBlt((BLTRECORD *)this, (DC **)a2, a3, a4);
      v16 = *(_QWORD *)a2;
      *(_DWORD *)(v16 + 36) |= 0x10u;
      *(_QWORD *)(v16 + 1528) = 0LL;
      v12 = v15;
    }
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v59);
  return v12;
}
