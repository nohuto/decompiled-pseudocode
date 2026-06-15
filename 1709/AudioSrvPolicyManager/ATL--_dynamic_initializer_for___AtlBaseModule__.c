/*
 * XREFs of ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x1800012C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x180020700 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset @ 0x1800275FE (memset.c)
 */

int ATL::_dynamic_initializer_for___AtlBaseModule__()
{
  memset(&CriticalSection, 0, sizeof(CriticalSection));
  ATL::_AtlBaseModule = 96;
  Block = 0LL;
  qword_18003AED8 = 0LL;
  qword_18003AE90 = (__int64)&_ImageBase;
  qword_18003AE88 = (__int64)&_ImageBase;
  qword_18003AEA0 = (__int64)&GUID_ATLVer70;
  byte_18003AE98 = 1;
  dword_18003AE9C = 2048;
  ATL::CComCriticalSection::Init((ATL::CComCriticalSection *)&CriticalSection);
  return atexit((void (__cdecl *)())ATL::_dynamic_atexit_destructor_for___AtlBaseModule__);
}
