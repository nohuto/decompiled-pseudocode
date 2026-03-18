/*
 * XREFs of ??0MULTIPANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@1PEAU_RECTL@@2PEAHPEAU_CLIPOBJ@@@Z @ 0x1C0274264
 * Callers:
 *     ?PanAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C02745D0 (-PanAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?PanBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0274730 (-PanBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 *     ?PanStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C0275530 (-PanStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POI.c)
 *     ?PanTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C0275C90 (-PanTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 * Callees:
 *     memset @ 0x1C0140500 (memset.c)
 *     ?bTryLockShadowR@MULTIPANSURFLOCK@@QEAAHPEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C02760D8 (-bTryLockShadowR@MULTIPANSURFLOCK@@QEAAHPEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vLockBmp1AndPrepareForPunt@MULTIPANSURFLOCK@@QEAAXH@Z @ 0x1C02763F0 (-vLockBmp1AndPrepareForPunt@MULTIPANSURFLOCK@@QEAAXH@Z.c)
 *     ?vLockBmp2AndPrepareForPunt@MULTIPANSURFLOCK@@QEAAXH@Z @ 0x1C02764A4 (-vLockBmp2AndPrepareForPunt@MULTIPANSURFLOCK@@QEAAXH@Z.c)
 *     ?vLockShadowW@MULTIPANSURFLOCK@@QEAAXPEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C0276830 (-vLockShadowW@MULTIPANSURFLOCK@@QEAAXPEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 */

MULTIPANSURFLOCK *__fastcall MULTIPANSURFLOCK::MULTIPANSURFLOCK(
        MULTIPANSURFLOCK *this,
        struct _PANDEV *a2,
        struct _SURFOBJ **a3,
        struct _SURFOBJ **a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        int *a7,
        struct _CLIPOBJ *a8)
{
  int v12; // r13d
  struct _CLIPOBJ *v13; // r8
  unsigned __int64 v14; // rcx
  struct _SURFOBJ **v15; // rax
  struct _SURFOBJ **v16; // rbp
  struct _SURFOBJ *v17; // rbp
  struct _SURFOBJ *v18; // rax
  __int16 v19; // ax
  struct _CLIPOBJ *v20; // r8
  USHORT iType; // cx
  bool v22; // zf
  struct _SURFOBJ *v23; // rax
  USHORT v24; // ax
  int v25; // eax
  struct _SURFOBJ *v27; // rax
  signed __int32 v28[18]; // [rsp+0h] [rbp-48h] BYREF
  int v29; // [rsp+50h] [rbp+8h]

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  v12 = 0;
  *((_WORD *)this + 24) = 0;
  v29 = 0;
  memset((char *)this + 50, 0, 0xA2uLL);
  v14 = (unsigned __int64)*a4;
  *a7 = 0;
  if ( v14 > (unsigned __int64)*a3 )
  {
    v15 = a3;
    v16 = a4;
  }
  else
  {
    v15 = a4;
    v16 = a3;
  }
  v17 = *v16;
  v18 = *v15;
  if ( v18 == v17 )
  {
    if ( v18 )
    {
      v19 = *(_WORD *)(v14 + 76);
      if ( v19 == 3 )
      {
        *(_QWORD *)this = v14;
        MULTIPANSURFLOCK::vLockBmp1AndPrepareForPunt(this, 0);
      }
      else if ( v19 == 1 )
      {
        *((_QWORD *)this + 4) = a2;
        do
        {
          MULTIPANSURFLOCK::vLockShadowW(this, a5, a8);
          _InterlockedOr(v28, 0);
        }
        while ( !(unsigned int)MULTIPANSURFLOCK::bTryLockShadowR(this, a6, v20) );
        *a4 = (struct _SURFOBJ *)*((_QWORD *)a2 + 8);
        *a3 = (struct _SURFOBJ *)*((_QWORD *)a2 + 8);
        *a7 = 1;
      }
      return this;
    }
  }
  else if ( v18 )
  {
    iType = v18->iType;
    if ( iType == 3 )
    {
      *(_QWORD *)this = v18;
      MULTIPANSURFLOCK::vLockBmp1AndPrepareForPunt(this, v18 == *a4);
    }
    else if ( iType == 1 )
    {
      *((_QWORD *)this + 4) = a2;
      v22 = v18 == *a4;
      v23 = (struct _SURFOBJ *)*((_QWORD *)a2 + 8);
      if ( v22 )
      {
        *a4 = v23;
        v12 = 1;
      }
      else
      {
        *a3 = v23;
        v29 = 1;
        *a7 = 1;
      }
    }
  }
  _InterlockedOr(v28, 0);
  if ( !v17 )
    goto LABEL_22;
  v24 = v17->iType;
  if ( v24 == 3 )
  {
    *((_QWORD *)this + 2) = v17;
    MULTIPANSURFLOCK::vLockBmp2AndPrepareForPunt(this, v17 == *a4);
LABEL_22:
    v25 = v29;
    goto LABEL_23;
  }
  if ( v24 != 1 )
    goto LABEL_22;
  *((_QWORD *)this + 5) = a2;
  v27 = (struct _SURFOBJ *)*((_QWORD *)a2 + 8);
  if ( v17 == *a4 )
  {
    *a4 = v27;
    v12 = 1;
    goto LABEL_22;
  }
  *a3 = v27;
  v25 = 1;
  v29 = 1;
  *a7 = 1;
  do
  {
LABEL_23:
    if ( v25 )
      MULTIPANSURFLOCK::vLockShadowW(this, a5, a8);
    _InterlockedOr(v28, 0);
    if ( !v12 )
      break;
    v22 = (unsigned int)MULTIPANSURFLOCK::bTryLockShadowR(this, a6, v13) == 0;
    v25 = v29;
  }
  while ( v22 );
  return this;
}
