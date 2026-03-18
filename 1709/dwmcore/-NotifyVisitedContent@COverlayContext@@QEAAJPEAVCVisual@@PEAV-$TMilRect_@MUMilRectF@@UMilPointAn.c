/*
 * XREFs of ?NotifyVisitedContent@COverlayContext@@QEAAJPEAVCVisual@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180067244
 * Callers:
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005DE70 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArray@UtagRECT@@$0A@@@QEAAJPEFBUtagRECT@@I@Z @ 0x18006A1D4 (-AddMultipleAndSet@-$DynArray@UtagRECT@@$0A@@@QEAAJPEFBUtagRECT@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?RemoveAt@?$DynArray@VOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJI@Z @ 0x1801444A8 (-RemoveAt@-$DynArray@VOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJI@Z.c)
 *     ?Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ @ 0x180144770 (-Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ.c)
 */

__int64 __fastcall COverlayContext::NotifyVisitedContent(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  float v6; // xmm0_4
  float v7; // eax
  double v8; // xmm0_8
  int v9; // eax
  double v10; // xmm0_8
  int v11; // eax
  int v12; // eax
  unsigned int v13; // edi
  __int64 *v15; // r14
  __int64 v16; // rsi
  __int64 v17; // rax
  COverlayContext::OverlayPlaneInfo *v18; // rcx
  float v19; // [rsp+30h] [rbp-48h]
  RECT rcSrc1; // [rsp+38h] [rbp-40h] BYREF
  struct tagRECT rcDst; // [rsp+48h] [rbp-30h] BYREF

  v3 = 0;
  v6 = *(float *)a3 + 6291456.25;
  v7 = v6;
  v8 = *(float *)(a3 + 4);
  rcSrc1.left = (int)(LODWORD(v7) << 10) >> 11;
  *(float *)&v8 = v8 + 6291456.25;
  v9 = LODWORD(v8);
  v10 = *(float *)(a3 + 8);
  rcSrc1.top = v9 << 10 >> 11;
  *(float *)&v10 = v10 + 6291456.25;
  v11 = LODWORD(v10);
  LODWORD(v10) = *(_DWORD *)(a3 + 12);
  rcSrc1.right = v11 << 10 >> 11;
  v19 = *(float *)&v10 + 6291456.25;
  rcSrc1.bottom = (int)(LODWORD(v19) << 10) >> 11;
  if ( *(_DWORD *)(a1 + 208) )
  {
    v15 = (__int64 *)(a1 + 184);
    do
    {
      v16 = 248LL * v3;
      v17 = *v15;
      if ( *(_QWORD *)(v16 + *v15 + 8) != a2
        && *(_BYTE *)(v16 + v17 + 177)
        && !*(_BYTE *)(v16 + v17 + 181)
        && IntersectRect(&rcDst, &rcSrc1, (const RECT *)(v16 + v17 + 76)) )
      {
        v18 = (COverlayContext::OverlayPlaneInfo *)(v16 + *v15);
        if ( *((_BYTE *)v18 + 179) )
        {
          *((_BYTE *)v18 + 180) = 0;
        }
        else
        {
          COverlayContext::OverlayPlaneInfo::Reset(v18);
          DynArray<COverlayContext::OverlayPlaneInfo,0>::RemoveAt(v15, v3--);
        }
      }
      ++v3;
    }
    while ( v3 < *(_DWORD *)(a1 + 208) );
  }
  v12 = DynArray<tagRECT,0>::AddMultipleAndSet(a1 + 1128, &rcSrc1);
  v13 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x573u);
  }
  else if ( *(_BYTE *)(a1 + 1192) )
  {
    if ( !a2 )
      goto LABEL_8;
    do
    {
      if ( *(char *)(a2 + 93) < 0 )
        break;
      a2 = *(_QWORD *)(a2 + 80);
    }
    while ( a2 );
    if ( !a2 )
LABEL_8:
      *(_BYTE *)(a1 + 1192) = 0;
  }
  return v13;
}
