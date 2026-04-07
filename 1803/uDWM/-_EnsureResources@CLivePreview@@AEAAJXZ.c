/*
 * XREFs of ?_EnsureResources@CLivePreview@@AEAAJXZ @ 0x180041C5C
 * Callers:
 *     ?Initialize@CLivePreview@@MEAAJPEAUIDwmChannel@@@Z @ 0x180041D40 (-Initialize@CLivePreview@@MEAAJPEAUIDwmChannel@@@Z.c)
 * Callees:
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800140B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CRenderDataVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18002FD20 (-Create@CRenderDataVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18002FDD8 (-Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CLivePreview::_EnsureResources(CLivePreview *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax

  v2 = CResource::Create(0xAu, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (CBaseObject **)this + 59);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x661u);
  }
  else
  {
    v4 = CResource::Create(0xAu, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (CBaseObject **)this + 60);
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x662u);
    }
    else
    {
      v5 = CVisual::Create(*(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL), (struct CVisual **)this + 63);
      v3 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x664u);
      }
      else
      {
        v6 = CVisual::Create(*(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL), (struct CVisual **)this + 64);
        v3 = v6;
        if ( v6 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x665u);
        }
        else
        {
          v7 = CVisual::Create(*(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL), (struct CVisual **)this + 65);
          v3 = v7;
          if ( v7 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x666u);
          }
          else
          {
            v8 = CRenderDataVisual::Create(
                   *(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL),
                   (struct CRenderDataVisual **)this + 66);
            v3 = v8;
            if ( v8 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x667u);
          }
        }
      }
    }
  }
  return v3;
}
