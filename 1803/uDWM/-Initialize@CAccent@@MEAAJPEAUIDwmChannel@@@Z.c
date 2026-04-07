/*
 * XREFs of ?Initialize@CAccent@@MEAAJPEAUIDwmChannel@@@Z @ 0x1800107D0
 * Callers:
 *     ?Create@CAccent@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18000CF18 (-Create@CAccent@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?_AddOcclusionInstruction@CAccent@@IEAAJXZ @ 0x180010824 (-_AddOcclusionInstruction@CAccent@@IEAAJXZ.c)
 *     ?Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180025F40 (-Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAccent::Initialize(CAccent *this, struct IDwmChannel *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax

  *((_DWORD *)this + 70) = 0;
  *((_DWORD *)this + 74) = 5;
  *((_BYTE *)this + 312) = 0;
  v3 = CVisual::Initialize(this, a2);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xD5u);
  }
  else
  {
    v5 = CAccent::_AddOcclusionInstruction(this);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xD6u);
  }
  return v4;
}
