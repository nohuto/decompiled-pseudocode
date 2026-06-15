/*
 * XREFs of ??_GSpatialAudioIO@@UEAAPEAXI@Z @ 0x180102420
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000B360 (--3@YAXPEAX@Z.c)
 *     ??1SpatialAudioIO@@UEAA@XZ @ 0x18004D22C (--1SpatialAudioIO@@UEAA@XZ.c)
 */

SpatialAudioIO *__fastcall SpatialAudioIO::`scalar deleting destructor'(SpatialAudioIO *this, char a2)
{
  SpatialAudioIO::~SpatialAudioIO(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
