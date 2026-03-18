/*
 * XREFs of ?NotifyVisitedContent@COverlayContext@@QEAAJPEAVCVisual@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180071A0C
 * Callers:
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009BD50 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180071020 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?RemoveAt@?$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJI@Z @ 0x180151E44 (-RemoveAt@-$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJI@Z.c)
 *     ?Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ @ 0x180151FC8 (-Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ.c)
 */

__int64 __fastcall COverlayContext::NotifyVisitedContent(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  LONG v6; // xmm0_4
  LONG v7; // eax
  double v8; // xmm0_8
  int v9; // eax
  double v10; // xmm0_8
  int v11; // eax
  unsigned int left; // edx
  _QWORD *v13; // rdi
  unsigned int v14; // ecx
  unsigned int v15; // eax
  int v16; // ebx
  __int64 *v18; // r15
  __int64 v19; // rdi
  __int64 v20; // rax
  COverlayContext::OverlayPlaneInfo *v21; // rcx
  struct tagRECT rcDst; // [rsp+30h] [rbp-30h] BYREF
  RECT rcSrc1; // [rsp+40h] [rbp-20h] BYREF

  v3 = 0;
  *(float *)&v6 = *(float *)a3 + 6291456.25;
  rcDst.left = v6;
  v7 = v6;
  v8 = *(float *)(a3 + 4);
  rcSrc1.left = v7 << 10 >> 11;
  *(float *)&v8 = v8 + 6291456.25;
  rcDst.left = LODWORD(v8);
  v9 = LODWORD(v8);
  v10 = *(float *)(a3 + 8);
  rcSrc1.top = v9 << 10 >> 11;
  *(float *)&v10 = v10 + 6291456.25;
  rcDst.left = LODWORD(v10);
  v11 = LODWORD(v10);
  LODWORD(v10) = *(_DWORD *)(a3 + 12);
  rcSrc1.right = v11 << 10 >> 11;
  *(float *)&rcDst.left = *(float *)&v10 + 6291456.25;
  rcSrc1.bottom = rcDst.left << 10 >> 11;
  if ( *(_DWORD *)(a1 + 200) )
  {
    v18 = (__int64 *)(a1 + 176);
    do
    {
      v19 = 240LL * v3;
      v20 = *v18;
      if ( *(_QWORD *)(*v18 + v19 + 8) != a2
        && *(_BYTE *)(v20 + v19 + 169)
        && !*(_BYTE *)(v20 + v19 + 173)
        && IntersectRect(&rcDst, &rcSrc1, (const RECT *)(v19 + v20 + 76)) )
      {
        v21 = (COverlayContext::OverlayPlaneInfo *)(v19 + *v18);
        if ( *((_BYTE *)v21 + 171) )
        {
          *((_BYTE *)v21 + 172) = 0;
        }
        else
        {
          COverlayContext::OverlayPlaneInfo::Reset(v21);
          DynArray<COverlayContext::OverlayPlaneInfo,0>::RemoveAt(v18, v3--);
        }
      }
      ++v3;
    }
    while ( v3 < *(_DWORD *)(a1 + 200) );
  }
  left = rcDst.left;
  v13 = (_QWORD *)(a1 + 1048);
  v14 = *(_DWORD *)(a1 + 1072);
  v15 = v14 + 1;
  if ( v14 + 1 >= v14 )
    left = v14 + 1;
  v16 = v15 < v14 ? 0x80070216 : 0;
  if ( v15 < v14 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xB5u);
  }
  else if ( left > *(_DWORD *)(a1 + 1068) )
  {
    *(_QWORD *)&rcDst.left = &rcSrc1;
    v16 = DynArrayImpl<0>::Grow(a1 + 1048, 0x10u, 1, 0, (unsigned __int64 *)&rcDst);
    if ( v16 >= 0 )
    {
      *(_OWORD *)(*v13 + (unsigned int)(16 * (*(_DWORD *)(a1 + 1072))++)) = *(_OWORD *)*(_QWORD *)&rcDst.left;
      goto LABEL_8;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xC0u);
  }
  else
  {
    *(RECT *)(*v13 + 16LL * v14) = rcSrc1;
    *(_DWORD *)(a1 + 1072) = left;
  }
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x517u);
    return (unsigned int)v16;
  }
LABEL_8:
  if ( *(_BYTE *)(a1 + 1106) )
  {
    if ( !a2 )
      goto LABEL_13;
    do
    {
      if ( *(_BYTE *)(a2 + 90) >= 0x80u )
        break;
      a2 = *(_QWORD *)(a2 + 80);
    }
    while ( a2 );
    if ( !a2 )
LABEL_13:
      *(_BYTE *)(a1 + 1106) = 0;
  }
  return (unsigned int)v16;
}
