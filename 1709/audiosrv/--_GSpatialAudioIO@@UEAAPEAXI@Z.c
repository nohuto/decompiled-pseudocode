/*
 * XREFs of ??_GSpatialAudioIO@@UEAAPEAXI@Z @ 0x1800D3A80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180028D50 (--3@YAXPEAX@Z.c)
 *     ??1SpatialAudioIO@@UEAA@XZ @ 0x18005CA04 (--1SpatialAudioIO@@UEAA@XZ.c)
 */

SpatialAudioIO *__fastcall SpatialAudioIO::`scalar deleting destructor'(SpatialAudioIO *this, char a2)
{
  SpatialAudioIO::~SpatialAudioIO(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
