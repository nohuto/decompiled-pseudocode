/*
 * XREFs of ?RegisterNotifiers@CImageLegacyMilBrush@@QEAAJPEAVCResourceTable@@@Z @ 0x18007C170
 * Callers:
 *     ?ProcessUpdate@CImageLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_IMAGELEGACYMILBRUSH@@@Z @ 0x18007C3DC (-ProcessUpdate@CImageLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_IMAGELEGACYMILBRUSH@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800AA098 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 */

__int64 __fastcall CImageLegacyMilBrush::RegisterNotifiers(struct CResource **this, struct CResourceTable *a2)
{
  signed int v3; // eax
  unsigned int v4; // ebx
  signed int v5; // eax
  signed int v6; // eax
  signed int v7; // eax
  signed int v8; // eax
  signed int v9; // eax

  v3 = CResource::RegisterNotifier((CResource *)this, this[52]);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x492u);
  }
  else
  {
    v5 = CResource::RegisterNotifier((CResource *)this, this[53]);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x493u);
    }
    else
    {
      v6 = CResource::RegisterNotifier(
             (CResource *)this,
             (struct CResource *)(((unsigned __int64)this[66] + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)this[66] >> 64)));
      v4 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x494u);
      }
      else
      {
        v7 = CResource::RegisterNotifier((CResource *)this, this[51]);
        v4 = v7;
        if ( v7 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x495u);
        }
        else
        {
          v8 = CResource::RegisterNotifier((CResource *)this, this[57]);
          v4 = v8;
          if ( v8 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x496u);
          }
          else
          {
            v9 = CResource::RegisterNotifier((CResource *)this, this[60]);
            v4 = v9;
            if ( v9 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x497u);
          }
        }
      }
    }
  }
  return v4;
}
