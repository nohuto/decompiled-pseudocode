/*
 * XREFs of ?ProcessClearReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWSCENE_CLEARRECEIVERS@@@Z @ 0x1801A216C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?RemoveShadowsFromScene@CProjectedShadowReceiver@@QEAAXPEAVCProjectedShadowScene@@@Z @ 0x1801A1AEC (-RemoveShadowsFromScene@CProjectedShadowReceiver@@QEAAXPEAVCProjectedShadowScene@@@Z.c)
 *     ?UnRegisterNotifierForShadows@CProjectedShadowScene@@QEAAXPEAVCResource@@@Z @ 0x1801A235C (-UnRegisterNotifierForShadows@CProjectedShadowScene@@QEAAXPEAVCResource@@@Z.c)
 */

__int64 __fastcall CProjectedShadowScene::ProcessClearReceivers(
        CProjectedShadowScene *this,
        struct CResourceTable *a2,
        const struct MILCMD_PROJECTEDSHADOWSCENE_CLEARRECEIVERS *a3)
{
  int v3; // edi
  int v5; // ebp
  __int64 v6; // rsi
  __int64 v7; // rsi

  v3 = 0;
  v5 = 0;
  if ( (int)((__int64)(*((_QWORD *)this + 12) - *((_QWORD *)this + 11)) >> 3) > 0 )
  {
    v6 = 0LL;
    do
    {
      CProjectedShadowReceiver::RemoveShadowsFromScene(
        *(CProjectedShadowReceiver **)(v6 + *((_QWORD *)this + 11)),
        this);
      v6 += 8LL;
      ++v5;
    }
    while ( v5 < (int)((__int64)(*((_QWORD *)this + 12) - *((_QWORD *)this + 11)) >> 3) );
  }
  if ( (int)((__int64)(*((_QWORD *)this + 8) - *((_QWORD *)this + 7)) >> 3) > 0 )
  {
    v7 = 0LL;
    do
    {
      CProjectedShadowScene::UnRegisterNotifierForShadows(this, *(struct CResource **)(*((_QWORD *)this + 7) + v7));
      v7 += 8LL;
      ++v3;
    }
    while ( v3 < (int)((__int64)(*((_QWORD *)this + 8) - *((_QWORD *)this + 7)) >> 3) );
  }
  CProjectedShadowScene::UnRegisterNotifierForShadows(this, *((struct CResource **)this + 10));
  *((_QWORD *)this + 12) = *((_QWORD *)this + 11);
  return 0LL;
}
