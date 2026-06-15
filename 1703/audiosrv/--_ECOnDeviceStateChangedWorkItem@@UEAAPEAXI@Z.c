/*
 * XREFs of ??_ECOnDeviceStateChangedWorkItem@@UEAAPEAXI@Z @ 0x180080530
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180020560 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

COnDeviceStateChangedWorkItem *__fastcall COnDeviceStateChangedWorkItem::`vector deleting destructor'(
        COnDeviceStateChangedWorkItem *this,
        char a2)
{
  *(_QWORD *)this = &COnDeviceWorkItem::`vftable';
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 1) - 24LL));
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
