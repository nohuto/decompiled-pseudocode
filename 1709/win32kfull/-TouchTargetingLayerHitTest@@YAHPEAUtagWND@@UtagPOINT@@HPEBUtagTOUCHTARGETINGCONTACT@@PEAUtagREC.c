/*
 * XREFs of ?TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagRECT@@PEAGPEAU2@W4tagTARGETING_PROPERTY@@@Z @ 0x1C01D411C
 * Callers:
 *     ?BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUtagRECT@@W4tagTARGETING_PROPERTY@@HKH@Z @ 0x1C01D314C (-BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUt.c)
 * Callees:
 *     DCELayerHitTest @ 0x1C010DCA8 (DCELayerHitTest.c)
 *     LayerHitTest @ 0x1C011678C (LayerHitTest.c)
 *     TouchTargetingRankForRectDeep @ 0x1C023D464 (TouchTargetingRankForRectDeep.c)
 */

__int64 __fastcall TouchTargetingLayerHitTest(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        unsigned __int16 *a6,
        _DWORD *a7,
        int a8)
{
  int v9; // edi
  int v13; // eax
  BOOL v14; // eax
  __int128 v15; // xmm0
  unsigned __int16 v16; // r15
  __int64 v18; // rbx
  __int64 v20; // [rsp+30h] [rbp-20h] BYREF
  __int128 v21; // [rsp+40h] [rbp-10h] BYREF
  int v22; // [rsp+8Ch] [rbp+3Ch]
  unsigned __int64 v23; // [rsp+B0h] [rbp+60h]
  unsigned __int64 v24; // [rsp+B0h] [rbp+60h]

  v22 = HIDWORD(a2);
  v9 = a2;
  v13 = a7[1] + HIDWORD(a2);
  LODWORD(v23) = a2 + *a7;
  HIDWORD(v23) = v13;
  if ( a3 )
    v14 = DCELayerHitTest(a1, v23);
  else
    v14 = LayerHitTest(a1, v23);
  if ( !v14 )
  {
    v15 = *(_OWORD *)(a1 + 128);
    v20 = *(_QWORD *)a7;
    v21 = v15;
    v16 = TouchTargetingRankForRectDeep(&v21, a4, a5, &v20, a8);
    if ( v16 > 0xFFDu )
      return 0LL;
    v18 = v20;
    HIDWORD(v24) = HIDWORD(v20) + v22;
    LODWORD(v24) = v20 + v9;
    if ( !(a3 ? DCELayerHitTest(a1, v24) : LayerHitTest(a1, v24)) )
      return 0LL;
    *(_QWORD *)a7 = v18;
    *a6 = v16;
  }
  return 1LL;
}
