/*
 * XREFs of ??_ECBaseStreamGroupProxy@@MEAAPEAXI@Z @ 0x1800A4F50
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBaseStreamGroupProxy@@MEAA@XZ @ 0x18000A568 (--1CBaseStreamGroupProxy@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CBaseStreamGroupProxy *__fastcall CBaseStreamGroupProxy::`vector deleting destructor'(
        CBaseStreamGroupProxy *this,
        char a2)
{
  CBaseStreamGroupProxy::~CBaseStreamGroupProxy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xD0);
  return this;
}
