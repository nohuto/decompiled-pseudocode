/*
 * XREFs of ??0CAtlBaseModule@ATL@@QEAA@XZ @ 0x1800321C4
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x180001390 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x18002B200 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset @ 0x180033A5A (memset.c)
 */

int *__fastcall ATL::CAtlBaseModule::CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  int v1; // eax
  char v2; // cl
  bool v3; // sf
  int *result; // rax

  memset(&CriticalSection, 0, sizeof(CriticalSection));
  Block = 0LL;
  qword_18014C608 = 0LL;
  qword_18014C5C0 = (__int64)&_ImageBase;
  qword_18014C5B8 = (__int64)&_ImageBase;
  qword_18014C5D0 = (__int64)&GUID_ATLVer70;
  ATL::_AtlBaseModule = 96;
  byte_18014C5C8 = 1;
  dword_18014C5CC = 2048;
  v1 = ATL::CComCriticalSection::Init(&CriticalSection);
  v2 = ATL::CAtlBaseModule::m_bInitFailed;
  v3 = v1 < 0;
  result = &ATL::_AtlBaseModule;
  if ( v3 )
    v2 = 1;
  ATL::CAtlBaseModule::m_bInitFailed = v2;
  return result;
}
