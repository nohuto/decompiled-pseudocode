/*
 * XREFs of ?Initialize@CClientArea@@MEAAJPEAUIDwmChannel@@I@Z @ 0x180010D10
 * Callers:
 *     ?Create@CClientArea@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x180010A98 (-Create@CClientArea@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 * Callees:
 *     ?WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x180010D58 (-WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800140B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CClientArea::Initialize(CClientArea *this, struct IDwmChannel *a2, unsigned int a3)
{
  struct CResource **v4; // r8
  int v5; // eax
  unsigned int v6; // ebx
  int v8; // eax

  v4 = (struct CResource **)((char *)this + 16);
  if ( a3 )
  {
    v5 = CResource::WrapExistingResource(a2, a3, v4);
    v6 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x62u);
  }
  else
  {
    v8 = CResource::Create(40LL, a2, v4);
    v6 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x66u);
  }
  return v6;
}
