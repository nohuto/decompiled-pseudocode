/*
 * XREFs of ??_GCAudioStream@@MEAAPEAXI@Z @ 0x1800B5484
 * Callers:
 *     ??_ECAudioStream@@OBI@EAAPEAXI@Z @ 0x180065A10 (--_ECAudioStream@@OBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CAudioStream@@MEAA@XZ @ 0x180044320 (--1CAudioStream@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180061038 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CAudioStream *__fastcall CAudioStream::`scalar deleting destructor'(CAudioStream *this, char a2)
{
  CAudioStream::~CAudioStream(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x288);
  return this;
}
