/*
 * XREFs of ?Initialize@CCanvasVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180016B20
 * Callers:
 *     ?Create@CCanvasVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180013480 (-Create@CCanvasVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800250B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCanvasVisual::Initialize(CCanvasVisual *this, struct IDwmChannel *a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CResource::Create(38LL, a2, (char *)this + 16);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x6Bu);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x27u);
  }
  return v3;
}
