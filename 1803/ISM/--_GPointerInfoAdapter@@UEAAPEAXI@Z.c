/*
 * XREFs of ??_GPointerInfoAdapter@@UEAAPEAXI@Z @ 0x1800615FC
 * Callers:
 *     ??_EPointerInfoAdapter@@W7EAAPEAXI@Z @ 0x1800623C0 (--_EPointerInfoAdapter@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??1PointerInfoAdapter@@UEAA@XZ @ 0x180061640 (--1PointerInfoAdapter@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

PointerInfoAdapter *__fastcall PointerInfoAdapter::`scalar deleting destructor'(PointerInfoAdapter *this, char a2)
{
  PointerInfoAdapter::~PointerInfoAdapter(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      operator delete(this);
    else
      free(this);
  }
  return this;
}
