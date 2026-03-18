/*
 * XREFs of ?ProcessHeatMapChanges@CPrimitiveGroup@@AEAAXXZ @ 0x18000B568
 * Callers:
 *     ?EnsureDrawListGenerator@CPrimitiveGroup@@QEAAJXZ @ 0x18000C334 (-EnsureDrawListGenerator@CPrimitiveGroup@@QEAAJXZ.c)
 *     ?DrawWorker@CPrimitiveGroup@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18000C420 (-DrawWorker@CPrimitiveGroup@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MU.c)
 * Callees:
 *     ?IsCloseColorF@@YA_NAEBU_D3DCOLORVALUE@@0@Z @ 0x180166278 (-IsCloseColorF@@YA_NAEBU_D3DCOLORVALUE@@0@Z.c)
 */

void __fastcall CPrimitiveGroup::ProcessHeatMapChanges(CPrimitiveGroup *this)
{
  CPrimitiveGroup *v1; // r8
  __int64 v2; // rcx
  int v3; // eax
  const struct _D3DCOLORVALUE *v4; // rdx

  v1 = this;
  v2 = *((_QWORD *)this + 2);
  if ( *(_DWORD *)(v2 + 1232) )
  {
    v3 = *(_DWORD *)(v2 + 1232);
    v4 = 0LL;
    if ( v3 )
      v4 = (const struct _D3DCOLORVALUE *)(*(_QWORD *)(v2 + 1248) + 16LL * (unsigned int)(v3 - 1));
    if ( !*((_BYTE *)v1 + 449) || !IsCloseColorF((const struct _D3DCOLORVALUE *)v1 + 33, v4) )
    {
      *((_BYTE *)v1 + 449) = 1;
      *((struct _D3DCOLORVALUE *)v1 + 33) = *(const struct _D3DCOLORVALUE *)&v4->r;
      CPrimitiveGroup::BuildHeatMap(v1);
    }
  }
  else if ( *((_BYTE *)v1 + 449) )
  {
    *((_BYTE *)v1 + 449) = 0;
    CPrimitiveGroup::ReleaseHeatMap(v1);
  }
}
