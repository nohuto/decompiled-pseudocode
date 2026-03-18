/*
 * XREFs of ?ProcessClearCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWSCENE_CLEARCASTERS@@@Z @ 0x1801A20E8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?RemoveShadowsFromScene@CProjectedShadowCaster@@QEAAXPEAVCProjectedShadowScene@@@Z @ 0x1801A0CAC (-RemoveShadowsFromScene@CProjectedShadowCaster@@QEAAXPEAVCProjectedShadowScene@@@Z.c)
 *     ?UnRegisterNotifierForShadows@CProjectedShadowScene@@QEAAXPEAVCResource@@@Z @ 0x1801A235C (-UnRegisterNotifierForShadows@CProjectedShadowScene@@QEAAXPEAVCResource@@@Z.c)
 */

__int64 __fastcall CProjectedShadowScene::ProcessClearCasters(
        CProjectedShadowScene *this,
        struct CResourceTable *a2,
        const struct MILCMD_PROJECTEDSHADOWSCENE_CLEARCASTERS *a3)
{
  int v4; // esi
  __int64 v5; // rcx
  __int64 v6; // r14
  CProjectedShadowCaster *v7; // rbx
  __int64 result; // rax

  v4 = 0;
  v5 = *((_QWORD *)this + 7);
  if ( (int)((*((_QWORD *)this + 8) - v5) >> 3) > 0 )
  {
    v6 = 0LL;
    do
    {
      v7 = *(CProjectedShadowCaster **)(v6 + *((_QWORD *)this + 7));
      CProjectedShadowCaster::RemoveShadowsFromScene(v7, this);
      CProjectedShadowScene::UnRegisterNotifierForShadows(this, v7);
      v5 = *((_QWORD *)this + 7);
      v6 += 8LL;
      ++v4;
    }
    while ( v4 < (int)((*((_QWORD *)this + 8) - v5) >> 3) );
  }
  result = 0LL;
  *((_QWORD *)this + 8) = v5;
  return result;
}
