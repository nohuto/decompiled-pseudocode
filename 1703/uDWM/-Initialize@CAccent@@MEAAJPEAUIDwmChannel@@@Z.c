/*
 * XREFs of ?Initialize@CAccent@@MEAAJPEAUIDwmChannel@@@Z @ 0x18001CA90
 * Callers:
 *     ?Create@CAccent@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180016970 (-Create@CAccent@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?_AddOcclusionInstruction@CAccent@@IEAAJXZ @ 0x18001E2BC (-_AddOcclusionInstruction@CAccent@@IEAAJXZ.c)
 *     ?Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180023A60 (-Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAccent::Initialize(CAccent *this, struct IDwmChannel *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax

  *((_DWORD *)this + 70) = 0;
  *((_DWORD *)this + 74) = 4;
  *((_BYTE *)this + 312) = 0;
  v3 = CVisual::Initialize(this, a2);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xD7u);
  }
  else
  {
    v5 = CAccent::_AddOcclusionInstruction(this);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xD8u);
  }
  return v4;
}
