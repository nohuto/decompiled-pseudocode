/*
 * XREFs of ?RegisterNotifiers@CSolidColorLegacyMilBrush@@QEAAJPEAVCResourceTable@@@Z @ 0x18007D430
 * Callers:
 *     ?ProcessUpdate@CSolidColorLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SOLIDCOLORLEGACYMILBRUSH@@@Z @ 0x18007D4E8 (-ProcessUpdate@CSolidColorLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SOLIDCOLORLEGACYMI.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800AA098 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 */

__int64 __fastcall CSolidColorLegacyMilBrush::RegisterNotifiers(struct CResource **this, struct CResourceTable *a2)
{
  signed int v3; // eax
  unsigned int v4; // ebx
  signed int v5; // eax
  signed int v6; // eax

  v3 = CResource::RegisterNotifier((CResource *)this, this[11]);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x9EAu);
  }
  else
  {
    v5 = CResource::RegisterNotifier((CResource *)this, this[12]);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x9EBu);
    }
    else
    {
      v6 = CResource::RegisterNotifier((CResource *)this, this[10]);
      v4 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x9ECu);
    }
  }
  return v4;
}
