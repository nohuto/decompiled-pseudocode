/*
 * XREFs of ?ProcessHeatMapChanges@CPrimitiveGroup@@AEAAXXZ @ 0x180026000
 * Callers:
 *     ?EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ @ 0x18002721C (-EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ.c)
 *     ?DrawWorker@CPrimitiveGroup@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180027B58 (-DrawWorker@CPrimitiveGroup@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MU.c)
 * Callees:
 *     ?IsCloseColorF@@YA_NAEBU_D3DCOLORVALUE@@0@Z @ 0x180174F9C (-IsCloseColorF@@YA_NAEBU_D3DCOLORVALUE@@0@Z.c)
 */

void __fastcall CPrimitiveGroup::ProcessHeatMapChanges(CPrimitiveGroup *this)
{
  CPrimitiveGroup *v1; // r8
  __int64 v2; // rcx
  int v3; // eax
  const struct _D3DCOLORVALUE *v4; // rdx

  v1 = this;
  v2 = *((_QWORD *)this + 2);
  if ( *(_DWORD *)(v2 + 1168) )
  {
    v3 = *(_DWORD *)(v2 + 1168);
    v4 = 0LL;
    if ( v3 )
      v4 = (const struct _D3DCOLORVALUE *)(*(_QWORD *)(v2 + 1184) + 16LL * (unsigned int)(v3 - 1));
    if ( !*((_BYTE *)v1 + 577) || !IsCloseColorF((const struct _D3DCOLORVALUE *)v1 + 41, v4) )
    {
      *((_BYTE *)v1 + 577) = 1;
      *((struct _D3DCOLORVALUE *)v1 + 41) = *(const struct _D3DCOLORVALUE *)&v4->r;
      CPrimitiveGroup::BuildHeatMap(v1);
    }
  }
  else if ( *((_BYTE *)v1 + 577) )
  {
    *((_BYTE *)v1 + 577) = 0;
    CPrimitiveGroup::ReleaseHeatMap(v1);
  }
}
