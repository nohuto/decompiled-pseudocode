/*
 * XREFs of ??0CAtlBaseModule@ATL@@QEAA@XZ @ 0x14001C148
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x1400011E0 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x1400143AC (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset @ 0x14001D9AC (memset.c)
 */

int *__fastcall ATL::CAtlBaseModule::CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  int v1; // eax
  char v2; // cl
  bool v3; // sf
  int *result; // rax

  memset(&stru_14008A0C8, 0, sizeof(stru_14008A0C8));
  qword_14008A0F0 = 0LL;
  qword_14008A0F8 = 0LL;
  qword_14008A0B0 = (__int64)&_ImageBase;
  hModule = &_ImageBase;
  qword_14008A0C0 = (__int64)&GUID_ATLVer70;
  ATL::_AtlBaseModule = 96;
  byte_14008A0B8 = 1;
  dword_14008A0BC = 2048;
  v1 = ATL::CComCriticalSection::Init(&stru_14008A0C8);
  v2 = ATL::CAtlBaseModule::m_bInitFailed;
  v3 = v1 < 0;
  result = &ATL::_AtlBaseModule;
  if ( v3 )
    v2 = 1;
  ATL::CAtlBaseModule::m_bInitFailed = v2;
  return result;
}
