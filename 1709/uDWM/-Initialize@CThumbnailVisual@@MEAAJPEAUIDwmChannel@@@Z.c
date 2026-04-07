/*
 * XREFs of ?Initialize@CThumbnailVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x1800108B0
 * Callers:
 *     ?EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ @ 0x18000CC20 (-EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ.c)
 * Callees:
 *     ?Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x1800184C0 (-Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CThumbnailVisual::Initialize(CThumbnailVisual *this, struct IDwmChannel *a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CVisual::Initialize(this, a2);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x30u);
  return v3;
}
