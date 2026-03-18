/*
 * XREFs of ?UnRegisterNotifierForShadows@CProjectedShadowScene@@QEAAXPEAVCResource@@@Z @ 0x1801A235C
 * Callers:
 *     ??1CProjectedShadowScene@@UEAA@XZ @ 0x1801A1CE4 (--1CProjectedShadowScene@@UEAA@XZ.c)
 *     ?ProcessClearCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWSCENE_CLEARCASTERS@@@Z @ 0x1801A20E8 (-ProcessClearCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWS.c)
 *     ?ProcessClearReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWSCENE_CLEARRECEIVERS@@@Z @ 0x1801A216C (-ProcessClearReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADO.c)
 *     ?ProcessSetLight@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWSCENE_SETLIGHT@@@Z @ 0x1801A2224 (-ProcessSetLight@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWSCENE.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CProjectedShadowScene::UnRegisterNotifierForShadows(CProjectedShadowScene *this, struct CResource *a2)
{
  int v2; // esi
  __int64 v4; // rdi

  v2 = 0;
  if ( (int)((__int64)(*((_QWORD *)this + 12) - *((_QWORD *)this + 11)) >> 3) > 0 )
  {
    v4 = 0LL;
    do
    {
      CResource::UnRegisterNotifierInternal(*(CResource **)(v4 + *((_QWORD *)this + 11)), a2);
      v4 += 8LL;
      a2 = 0LL;
      ++v2;
    }
    while ( v2 < (int)((__int64)(*((_QWORD *)this + 12) - *((_QWORD *)this + 11)) >> 3) );
  }
}
