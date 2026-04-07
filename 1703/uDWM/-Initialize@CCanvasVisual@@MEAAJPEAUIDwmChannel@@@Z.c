/*
 * XREFs of ?Initialize@CCanvasVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180020C00
 * Callers:
 *     ?Create@CCanvasVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180014E18 (-Create@CCanvasVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001E8B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCanvasVisual::Initialize(CBaseObject **this, struct IDwmChannel *a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CResource::Create(0x25u, (__int64)a2, this + 2);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x6Bu);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x27u);
  }
  return v3;
}
