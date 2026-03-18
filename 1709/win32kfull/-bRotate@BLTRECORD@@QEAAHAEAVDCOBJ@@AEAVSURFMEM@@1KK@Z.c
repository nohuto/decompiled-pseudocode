/*
 * XREFs of ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z @ 0x1C026A884
 * Callers:
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C0002190 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 * Callees:
 *     ?vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C0002030 (-vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z @ 0x1C00020D4 (-vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z.c)
 *     EngPlgBlt @ 0x1C0002840 (EngPlgBlt.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C026AAFC (-bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 */

__int64 __fastcall BLTRECORD::bRotate(
        RECTL *this,
        struct DCOBJ *a2,
        struct SURFMEM *a3,
        struct SURFMEM *a4,
        unsigned int a5,
        ULONG iMode)
{
  unsigned int v6; // ebx
  __int64 result; // rax
  __int64 v11; // rcx
  LONG x; // esi
  LONG y; // r14d
  int v14; // esi
  int v15; // r14d
  __int64 v16; // rdx
  _DWORD *v17; // rdx
  int v18; // eax
  POINTL pptlBrushOrg; // [rsp+60h] [rbp-49h] BYREF
  int v20; // [rsp+68h] [rbp-41h]
  int v21; // [rsp+6Ch] [rbp-3Dh]
  _QWORD v22[4]; // [rsp+70h] [rbp-39h] BYREF
  POINTFIX pptfx; // [rsp+90h] [rbp-19h] BYREF
  int v24; // [rsp+98h] [rbp-11h]
  int v25; // [rsp+9Ch] [rbp-Dh]
  int v26; // [rsp+A0h] [rbp-9h]
  int v27; // [rsp+A4h] [rbp-5h]
  int v28; // [rsp+A8h] [rbp-1h]
  int v29; // [rsp+ACh] [rbp+3h]

  v6 = 0;
  if ( (a5 & 0x10000) == 0 || (result = BLTRECORD::bRotate((BLTRECORD *)this, a4, iMode), (_DWORD)result) )
  {
    BLTRECORD::vBound((BLTRECORD *)this, (struct ERECTL *)&pptlBrushOrg);
    memset(v22, 0, sizeof(v22));
    v11 = *(_QWORD *)&this[4].right;
    x = pptlBrushOrg.x;
    y = pptlBrushOrg.y;
    HIDWORD(v22[0]) = v20 - pptlBrushOrg.x;
    LODWORD(v22[1]) = v21 - pptlBrushOrg.y;
    v22[2] = 0LL;
    LODWORD(v22[0]) = *(_DWORD *)(v11 + 96);
    LODWORD(v22[3]) = *(_DWORD *)(v11 + 112) & 0x40000;
    SURFMEM::bCreateDIB(a3, (struct _DEVBITMAPINFO *)v22, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    if ( *(_QWORD *)a3 )
    {
      v14 = 16 * x;
      v15 = 16 * y;
      pptfx.x = this[7].right - v14;
      pptfx.y = this[7].bottom - v15;
      v24 = this[8].left - v14;
      v25 = this[8].top - v15;
      v26 = this[8].right - v14;
      v27 = this[8].bottom - v15;
      v28 = this[9].left - v14;
      v29 = this[9].top - v15;
      BLTRECORD::vMirror((BLTRECORD *)this, &pptfx);
      v16 = *(_QWORD *)a2;
      if ( (*(_DWORD *)(*(_QWORD *)a2 + 40LL) & 1) != 0 )
        v17 = (_DWORD *)(v16 + 1440);
      else
        v17 = (_DWORD *)(v16 + 1432);
      this[11].left += *v17;
      this[11].right += *v17;
      this[11].top += v17[1];
      this[11].bottom += v17[1];
      if ( EngPlgBlt(
             (SURFOBJ *)((*(_QWORD *)a3 + 24LL) & -(__int64)(*(_QWORD *)a3 != 0LL)),
             (SURFOBJ *)((*(_QWORD *)&this[4].right + 24LL) & -(__int64)(*(_QWORD *)&this[4].right != 0LL)),
             0LL,
             0LL,
             0LL,
             0LL,
             &pptlBrushOrg,
             &pptfx,
             this + 11,
             0LL,
             iMode) )
      {
        v6 = 1;
        *(_QWORD *)&this[4].right = *(_QWORD *)a3;
        this[11].left = -*(_DWORD *)(*(_QWORD *)a2 + 8LL * (*(_DWORD *)(*(_QWORD *)a2 + 40LL) & 1) + 1432);
        v18 = HIDWORD(v22[0]);
        this[11].top = -*(_DWORD *)(*(_QWORD *)a2 + 8LL * (*(_DWORD *)(*(_QWORD *)a2 + 40LL) & 1) + 1436);
        this[11].right = v18 - *(_DWORD *)(*(_QWORD *)a2 + 8LL * (*(_DWORD *)(*(_QWORD *)a2 + 40LL) & 1) + 1432);
        this[11].bottom = LODWORD(v22[1])
                        - *(_DWORD *)(*(_QWORD *)a2 + 8LL * (*(_DWORD *)(*(_QWORD *)a2 + 40LL) & 1) + 1436);
      }
    }
    return v6;
  }
  return result;
}
