/*
 * XREFs of ?Initialize@CClientArea@@MEAAJPEAUIDwmChannel@@I@Z @ 0x18002C5B0
 * Callers:
 *     ?Create@CClientArea@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x18002C3AC (-Create@CClientArea@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 * Callees:
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800250B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x18002C05C (-WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 */

__int64 __fastcall CClientArea::Initialize(CClientArea *this, struct IDwmChannel *a2, unsigned int a3)
{
  bool v4; // zf
  CBaseObject **v5; // r8
  int v6; // eax
  unsigned int v7; // ebx
  int v9; // eax

  v4 = a3 == 0;
  v5 = (CBaseObject **)((char *)this + 16);
  if ( v4 )
  {
    v9 = CResource::Create(0x28u, (__int64)a2, v5);
    v7 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x66u);
  }
  else
  {
    v6 = CResource::WrapExistingResource(a2, a3, v5);
    v7 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x62u);
  }
  return v7;
}
