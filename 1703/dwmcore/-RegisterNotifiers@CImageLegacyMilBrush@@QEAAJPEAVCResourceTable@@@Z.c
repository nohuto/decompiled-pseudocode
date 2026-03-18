/*
 * XREFs of ?RegisterNotifiers@CImageLegacyMilBrush@@QEAAJPEAVCResourceTable@@@Z @ 0x18007BC8C
 * Callers:
 *     ?ProcessUpdate@CImageLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_IMAGELEGACYMILBRUSH@@@Z @ 0x18007BAB0 (-ProcessUpdate@CImageLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_IMAGELEGACYMILBRUSH@@@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180034FA4 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CImageLegacyMilBrush::RegisterNotifiers(struct CResource **this, struct CResourceTable *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax

  v3 = CResource::RegisterNotifier((CResource *)this, this[52]);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x1062u);
  }
  else
  {
    v5 = CResource::RegisterNotifier((CResource *)this, this[53]);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x1063u);
    }
    else
    {
      v6 = CResource::RegisterNotifier(
             (CResource *)this,
             (struct CResource *)(((unsigned __int64)this[66] + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)this[66] >> 64)));
      v4 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x1064u);
      }
      else
      {
        v7 = CResource::RegisterNotifier((CResource *)this, this[51]);
        v4 = v7;
        if ( v7 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x1065u);
        }
        else
        {
          v8 = CResource::RegisterNotifier((CResource *)this, this[57]);
          v4 = v8;
          if ( v8 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x1066u);
          }
          else
          {
            v9 = CResource::RegisterNotifier((CResource *)this, this[60]);
            v4 = v9;
            if ( v9 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x1067u);
          }
        }
      }
    }
  }
  return v4;
}
