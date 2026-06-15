/*
 * XREFs of ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x180001450
 * Callers:
 *     <none>
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x18002A1F4 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 */

int ATL::_dynamic_initializer_for___AtlBaseModule__()
{
  memset(&stru_18004F148, 0, sizeof(stru_18004F148));
  ATL::_AtlBaseModule = 96;
  Block = 0LL;
  qword_18004F178 = 0LL;
  qword_18004F130 = (__int64)&_ImageBase;
  qword_18004F128 = (__int64)&_ImageBase;
  qword_18004F140 = (__int64)&GUID_ATLVer70;
  byte_18004F138 = 1;
  dword_18004F13C = 2048;
  ATL::CComCriticalSection::Init((ATL::CComCriticalSection *)&stru_18004F148);
  return atexit((void (__cdecl *)())ATL::_dynamic_atexit_destructor_for___AtlBaseModule__);
}
