/*
 * XREFs of ?BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUtagRECT@@W4tagTARGETING_PROPERTY@@HKH@Z @ 0x1C01D314C
 * Callers:
 *     ?BasicTargetingWindowHitTest@@YAHPEAUtagWND@@UtagPOINT@@PEBUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@3PEAIPEAU2@W4tagTARGETING_PROPERTY@@K@Z @ 0x1C01D3388 (-BasicTargetingWindowHitTest@@YAHPEAUtagWND@@UtagPOINT@@PEBUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagR.c)
 *     xxxTouchTargetWindow @ 0x1C01D6F54 (xxxTouchTargetWindow.c)
 * Callees:
 *     PtInRect @ 0x1C005E678 (PtInRect.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagRECT@@PEAGPEAU2@W4tagTARGETING_PROPERTY@@@Z @ 0x1C01D411C (-TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagREC.c)
 *     GetWindowFrameRect @ 0x1C01D5DE8 (GetWindowFrameRect.c)
 *     TouchTargetingRankForRect @ 0x1C023CE74 (TouchTargetingRankForRect.c)
 *     TouchTargetingRankForRegion @ 0x1C023D628 (TouchTargetingRankForRegion.c)
 */

_BOOL8 __fastcall BasicTargetingHitTest(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int16 *a4,
        __int64 a5,
        unsigned int a6,
        _DWORD *a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int v12; // r8d
  int v15; // r15d
  int v17; // ecx
  int v18; // r12d
  __int64 v19; // r9
  unsigned __int16 v20; // ax
  __int64 v21; // rcx
  __int64 v22; // r15
  __int64 v23; // rcx
  unsigned __int16 v24; // ax
  unsigned __int16 *v25; // rcx
  __int128 v28; // [rsp+60h] [rbp-41h] BYREF
  __int128 v29; // [rsp+70h] [rbp-31h] BYREF
  __int128 v30; // [rsp+80h] [rbp-21h] BYREF
  int v31; // [rsp+138h] [rbp+97h]

  v12 = 0;
  if ( *(_DWORD *)(a2 + 176) && (!a7 || PtInRect(a7, a3)) )
    v15 = v12;
  else
    v15 = 1;
  GetWindowFrameRect(a1, &v30);
  *a4 = 0;
  *(_QWORD *)a5 = 0LL;
  if ( a11 )
    return 1LL;
  v17 = a10;
  v18 = 0;
  if ( (_WORD)a10 != 3 )
  {
    v17 = a8;
    v18 = a9;
  }
  v31 = v17;
  if ( !v15 )
  {
    if ( PtInRect(&v30, a3) )
      goto LABEL_18;
    v17 = v31;
  }
  if ( v18 && (*(_BYTE *)(a1 + 70) & 4) == 0 )
    return 0LL;
  v29 = v30;
  v28 = v30;
  v20 = TouchTargetingRankForRect(&v28, &v29, a2, a7, a5, v17);
  *a4 = v20;
  if ( v20 > 0xFFDu )
    return 0LL;
  v19 = 0LL;
LABEL_18:
  v21 = *(_QWORD *)(a1 + 216);
  if ( !v21 && (!a6 || *(_QWORD *)(a1 + 224) == v19) )
    goto LABEL_29;
  if ( v15 )
    goto LABEL_37;
  if ( !v21 )
    v21 = *(_QWORD *)(a1 + 224);
  if ( !(unsigned int)GrePtInRegion(
                        v21,
                        (unsigned int)(*(_DWORD *)a5 + a3),
                        (unsigned int)(*(_DWORD *)(a5 + 4) + HIDWORD(a3))) )
  {
LABEL_37:
    if ( v18 && (*(_BYTE *)(a1 + 70) & 4) == 0 )
      return 0LL;
    v22 = a2;
    v23 = *(_QWORD *)(a1 + 216);
    v28 = *(_OWORD *)(a1 + 128);
    v24 = TouchTargetingRankForRegion(v23, (unsigned int)&v28, a2, a5, v31);
    v25 = a4;
    *a4 = v24;
    if ( v24 > 0xFFDu )
      return 0LL;
  }
  else
  {
LABEL_29:
    v22 = a2;
    v25 = a4;
  }
  return (*(_BYTE *)(a1 + 66) & 8) == 0
      || a6 && (*(_DWORD *)(a1 + 304) & 0x20) != 0
      || (unsigned int)TouchTargetingLayerHitTest(a1, a3, a6, v22, a7, v25, a5, a8);
}
