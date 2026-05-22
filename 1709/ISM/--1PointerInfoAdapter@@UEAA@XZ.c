/*
 * XREFs of ??1PointerInfoAdapter@@UEAA@XZ @ 0x18006F744
 * Callers:
 *     ??_GPointerInfoAdapter@@UEAAPEAXI@Z @ 0x18006F700 (--_GPointerInfoAdapter@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall PointerInfoAdapter::~PointerInfoAdapter(PointerInfoAdapter *this)
{
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = &PointerInfoAdapter::`vftable'{for `IInputClient'};
  *((_QWORD *)this + 1) = &PointerInfoAdapter::`vftable'{for `RefCountedObject'};
  operator delete(*((void **)this + 9));
  operator delete(*((void **)this + 4));
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
}
