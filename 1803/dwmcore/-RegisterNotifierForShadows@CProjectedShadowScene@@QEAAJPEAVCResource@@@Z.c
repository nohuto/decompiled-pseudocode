/*
 * XREFs of ?RegisterNotifierForShadows@CProjectedShadowScene@@QEAAJPEAVCResource@@@Z @ 0x1801A22C0
 * Callers:
 *     ?ProcessAddCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWSCENE_ADDCASTERS@@PEBXI@Z @ 0x1801A1E28 (-ProcessAddCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWSCE.c)
 *     ?ProcessAddReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWSCENE_ADDRECEIVERS@@PEBXI@Z @ 0x1801A1F5C (-ProcessAddReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWS.c)
 *     ?ProcessSetLight@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWSCENE_SETLIGHT@@@Z @ 0x1801A2224 (-ProcessSetLight@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWSCENE.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18005122C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CProjectedShadowScene::RegisterNotifierForShadows(CProjectedShadowScene *this, struct CResource *a2)
{
  __int64 v2; // r8
  unsigned int v3; // ebx
  int v4; // ebp
  __int64 i; // rdi
  int v8; // eax

  v2 = *((_QWORD *)this + 11);
  v3 = 0;
  v4 = 0;
  if ( (int)((*((_QWORD *)this + 12) - v2) >> 3) > 0 )
  {
    for ( i = 0LL; ; i += 8LL )
    {
      v8 = CResource::RegisterNotifier(*(CResource **)(i + v2), a2);
      v3 = v8;
      if ( v8 < 0 )
        break;
      v2 = *((_QWORD *)this + 11);
      if ( ++v4 >= (int)((*((_QWORD *)this + 12) - v2) >> 3) )
        return v3;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xB5u);
  }
  return v3;
}
