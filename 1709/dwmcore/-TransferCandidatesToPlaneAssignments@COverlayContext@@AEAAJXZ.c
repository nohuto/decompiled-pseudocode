/*
 * XREFs of ?TransferCandidatesToPlaneAssignments@COverlayContext@@AEAAJXZ @ 0x1801448F0
 * Callers:
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x180068020 (-ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$.c)
 * Callees:
 *     ?ResetOverlayPlanesList@COverlayContext@@AEAAXXZ @ 0x180066F10 (-ResetOverlayPlanesList@COverlayContext@@AEAAXXZ.c)
 *     ?UpdateSwapChainStat@CBindInfo@CCompositionSurfaceInfo@@QEAAXW4SwapChainStat@2@_N@Z @ 0x180075ED8 (-UpdateSwapChainStat@CBindInfo@CCompositionSurfaceInfo@@QEAAXW4SwapChainStat@2@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RectContainedInDirty@COverlayContext@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180144260 (-RectContainedInDirty@COverlayContext@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNot.c)
 *     ?RemoveAt@?$DynArray@VOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJI@Z @ 0x1801444A8 (-RemoveAt@-$DynArray@VOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJI@Z.c)
 *     ?ReplaceWith@?$DynArray@VOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJPEAV1@@Z @ 0x1801446F8 (-ReplaceWith@-$DynArray@VOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJPEAV1@@Z.c)
 *     ?Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ @ 0x180144770 (-Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ.c)
 *     ?PinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJU_LUID@@@Z @ 0x18017C81C (-PinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJU_LUID@@@Z.c)
 *     ?UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ @ 0x18017CD64 (-UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ.c)
 */

__int64 __fastcall COverlayContext::TransferCandidatesToPlaneAssignments(struct _LUID *this)
{
  signed int v2; // edi
  unsigned int v3; // ebp
  struct _LUID *v4; // r14
  __int64 v5; // rsi
  bool v6; // cf
  signed int v7; // eax
  unsigned int i; // esi
  __int64 v9; // r15
  __int64 v10; // rcx
  DWORD v11; // edx
  __int64 v12; // rax
  signed int v13; // eax

  v2 = 0;
  COverlayContext::ResetOverlayPlanesList((COverlayContext *)this);
  if ( !this[26].LowPart )
    goto LABEL_33;
  v3 = 0;
  v4 = this + 23;
  while ( 1 )
  {
    v5 = 248LL * v3;
    if ( !*(_BYTE *)(*(_QWORD *)v4 + v5 + 192) )
      break;
LABEL_13:
    if ( ++v3 >= this[26].LowPart )
      goto LABEL_23;
  }
  v6 = CCommonRegistryData::m_dwOverlayTestMode < 3;
  *(_BYTE *)(*(_QWORD *)v4 + v5 + 240) = 1;
  if ( !v6 )
  {
LABEL_9:
    if ( !HIBYTE(this[148].HighPart)
      && !COverlayContext::RectContainedInDirty((__int64)this, (float *)(v5 + *(_QWORD *)v4 + 152LL)) )
    {
      HIBYTE(this[148].HighPart) = 1;
    }
    *(_BYTE *)(*(_QWORD *)v4 + v5 + 192) = 1;
    *(_BYTE *)(*(_QWORD *)v4 + v5 + 216) = 1;
    goto LABEL_13;
  }
  v7 = CCompositionSurfaceInfo::CBindInfo::PinResources(
         (CCompositionSurfaceInfo::CBindInfo *)(*(_QWORD *)(*(_QWORD *)v4 + v5 + 24) + 48LL),
         this[10]);
  v2 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x111Bu);
  CCompositionSurfaceInfo::CBindInfo::UpdateSwapChainStat((_QWORD *)(*(_QWORD *)(*(_QWORD *)v4 + v5 + 24) + 48LL), 2, 1);
  if ( v2 != -2005532292 )
  {
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v2, 0x112Bu);
      goto LABEL_33;
    }
    goto LABEL_9;
  }
  v2 = 0;
  for ( i = 0; i < this[26].LowPart; ++i )
  {
    v9 = 248LL * i;
    if ( *(_BYTE *)(*(_QWORD *)v4 + v9 + 240) )
    {
      v10 = *(_QWORD *)(*(_QWORD *)v4 + v9 + 24);
      if ( *(_BYTE *)(v10 + 220) )
        CCompositionSurfaceInfo::CBindInfo::UnpinResources((CCompositionSurfaceInfo::CBindInfo *)(v10 + 48));
      COverlayContext::OverlayPlaneInfo::Reset((COverlayContext::OverlayPlaneInfo *)(v9 + *(_QWORD *)v4));
      DynArray<COverlayContext::OverlayPlaneInfo,0>::RemoveAt((__int64 *)&this[23], i--);
    }
  }
LABEL_23:
  if ( this[26].LowPart )
  {
    v11 = 0;
    do
    {
      v12 = v11++;
      *(_BYTE *)(248 * v12 + *(_QWORD *)&this[23] + 240) = 0;
    }
    while ( v11 < this[26].LowPart );
    v13 = DynArray<COverlayContext::OverlayPlaneInfo,0>::ReplaceWith((__int64)&this[31], (__int64)&this[23]);
    v2 = v13;
    if ( v13 >= 0 )
    {
      BYTE1(this[147].LowPart) = 1;
      goto LABEL_30;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0x1164u);
  }
  else
  {
    this[13].LowPart = this[12].HighPart;
    BYTE2(this[148].HighPart) = 1;
LABEL_30:
    if ( this[38].LowPart && !this[145].HighPart )
      HIBYTE(this[148].HighPart) = 1;
  }
LABEL_33:
  this[98].HighPart = 0;
  return (unsigned int)v2;
}
