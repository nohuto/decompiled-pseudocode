/*
 * XREFs of ??0MULTIPANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@1PEAU_RECTL@@2PEAHPEAU_CLIPOBJ@@@Z @ 0x1C0270BF0
 * Callers:
 *     ?PanAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C0270F60 (-PanAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?PanBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02710C0 (-PanBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 *     ?PanStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C0271F00 (-PanStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POI.c)
 *     ?PanTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C0272660 (-PanTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 * Callees:
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?bTryLockShadowR@MULTIPANSURFLOCK@@QEAAHPEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C0272AA8 (-bTryLockShadowR@MULTIPANSURFLOCK@@QEAAHPEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vLockBmp1AndPrepareForPunt@MULTIPANSURFLOCK@@QEAAXH@Z @ 0x1C0272DC0 (-vLockBmp1AndPrepareForPunt@MULTIPANSURFLOCK@@QEAAXH@Z.c)
 *     ?vLockBmp2AndPrepareForPunt@MULTIPANSURFLOCK@@QEAAXH@Z @ 0x1C0272E74 (-vLockBmp2AndPrepareForPunt@MULTIPANSURFLOCK@@QEAAXH@Z.c)
 *     ?vLockShadowW@MULTIPANSURFLOCK@@QEAAXPEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C0273200 (-vLockShadowW@MULTIPANSURFLOCK@@QEAAXPEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
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
  struct _SURFOBJ *v13; // r8
  struct _SURFOBJ **v14; // rax
  struct _SURFOBJ **v15; // rdx
  struct _SURFOBJ *v16; // rbp
  struct _SURFOBJ *v17; // rax
  USHORT iType; // ax
  struct _CLIPOBJ *v19; // r8
  USHORT v20; // cx
  bool v21; // zf
  struct _SURFOBJ *v22; // rax
  USHORT v23; // ax
  int v24; // eax
  struct _SURFOBJ *v26; // rax
  signed __int32 v27[18]; // [rsp+0h] [rbp-48h] BYREF
  int v28; // [rsp+50h] [rbp+8h]

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  v12 = 0;
  *((_WORD *)this + 24) = 0;
  v28 = 0;
  memset((char *)this + 50, 0, 0xA2uLL);
  v13 = *a4;
  v14 = a3;
  v15 = a4;
  if ( *a4 > *a3 )
  {
    v14 = a4;
    v15 = a3;
  }
  *a7 = 0;
  v16 = *v14;
  v17 = *v15;
  if ( *v15 == v16 )
  {
    if ( v17 )
    {
      iType = v13->iType;
      if ( iType == 3 )
      {
        *(_QWORD *)this = v13;
        MULTIPANSURFLOCK::vLockBmp1AndPrepareForPunt(this, 0);
      }
      else if ( iType == 1 )
      {
        *((_QWORD *)this + 4) = a2;
        do
        {
          MULTIPANSURFLOCK::vLockShadowW(this, a5, a8);
          _InterlockedOr(v27, 0);
        }
        while ( !(unsigned int)MULTIPANSURFLOCK::bTryLockShadowR(this, a6, v19) );
        *a4 = (struct _SURFOBJ *)*((_QWORD *)a2 + 8);
        *a3 = (struct _SURFOBJ *)*((_QWORD *)a2 + 8);
        *a7 = 1;
      }
      return this;
    }
  }
  else if ( v17 )
  {
    v20 = v17->iType;
    if ( v20 == 3 )
    {
      *(_QWORD *)this = v17;
      MULTIPANSURFLOCK::vLockBmp1AndPrepareForPunt(this, v17 == *a4);
    }
    else if ( v20 == 1 )
    {
      *((_QWORD *)this + 4) = a2;
      v21 = v17 == *a4;
      v22 = (struct _SURFOBJ *)*((_QWORD *)a2 + 8);
      if ( v21 )
      {
        *a4 = v22;
        v12 = 1;
      }
      else
      {
        *a3 = v22;
        v28 = 1;
        *a7 = 1;
      }
    }
  }
  _InterlockedOr(v27, 0);
  if ( !v16 )
    goto LABEL_21;
  v23 = v16->iType;
  if ( v23 == 3 )
  {
    *((_QWORD *)this + 2) = v16;
    MULTIPANSURFLOCK::vLockBmp2AndPrepareForPunt(this, v16 == *a4);
LABEL_21:
    v24 = v28;
    goto LABEL_22;
  }
  if ( v23 != 1 )
    goto LABEL_21;
  *((_QWORD *)this + 5) = a2;
  v26 = (struct _SURFOBJ *)*((_QWORD *)a2 + 8);
  if ( v16 == *a4 )
  {
    *a4 = v26;
    v12 = 1;
    goto LABEL_21;
  }
  *a3 = v26;
  v24 = 1;
  v28 = 1;
  *a7 = 1;
  do
  {
LABEL_22:
    if ( v24 )
      MULTIPANSURFLOCK::vLockShadowW(this, a5, a8);
    _InterlockedOr(v27, 0);
    if ( !v12 )
      break;
    v21 = (unsigned int)MULTIPANSURFLOCK::bTryLockShadowR(this, a6, (struct _CLIPOBJ *)v13) == 0;
    v24 = v28;
  }
  while ( v21 );
  return this;
}
