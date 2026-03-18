/*
 * XREFs of ??_ECHwConstantColorSource@@MEAAPEAXI@Z @ 0x1801F6710
 * Callers:
 *     <none>
 * Callees:
 *     ??1CHwConstantColorSource@@MEAA@XZ @ 0x1800D9874 (--1CHwConstantColorSource@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 */

CHwConstantColorSource *__fastcall CHwConstantColorSource::`vector deleting destructor'(
        CHwConstantColorSource *this,
        char a2)
{
  CHwConstantColorSource::~CHwConstantColorSource(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
