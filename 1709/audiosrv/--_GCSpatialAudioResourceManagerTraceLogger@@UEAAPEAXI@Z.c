/*
 * XREFs of ??_GCSpatialAudioResourceManagerTraceLogger@@UEAAPEAXI@Z @ 0x1800C36B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CSpatialAudioResourceManagerTraceLogger@@UEAA@XZ @ 0x1800C3584 (--1CSpatialAudioResourceManagerTraceLogger@@UEAA@XZ.c)
 */

CSpatialAudioResourceManagerTraceLogger *__fastcall CSpatialAudioResourceManagerTraceLogger::`scalar deleting destructor'(
        CSpatialAudioResourceManagerTraceLogger *this,
        char a2)
{
  CSpatialAudioResourceManagerTraceLogger::~CSpatialAudioResourceManagerTraceLogger(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xA8);
  return this;
}
