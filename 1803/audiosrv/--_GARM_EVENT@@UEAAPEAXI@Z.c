/*
 * XREFs of ??_GARM_EVENT@@UEAAPEAXI@Z @ 0x1800EF020
 * Callers:
 *     ?DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z @ 0x18005ED9C (-DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180061038 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ARM_EVENT@@UEAA@XZ @ 0x1800EEFEC (--1ARM_EVENT@@UEAA@XZ.c)
 */

ARM_EVENT *__fastcall ARM_EVENT::`scalar deleting destructor'(ARM_EVENT *this, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl

  v4 = a2;
  ARM_EVENT::~ARM_EVENT(this, a2, a3, a4);
  if ( (v4 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x48);
  return this;
}
