/*
 * XREFs of ??0CAtlBaseModule@ATL@@QEAA@XZ @ 0x140001B60
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x1400011D0 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x14000493C (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset @ 0x14001DC2C (memset.c)
 */

int *__fastcall ATL::CAtlBaseModule::CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  int v1; // eax
  char v2; // cl
  bool v3; // sf
  int *result; // rax

  memset(&stru_1400860C8, 0, sizeof(stru_1400860C8));
  Block = 0LL;
  qword_1400860F8 = 0LL;
  qword_1400860B0 = (__int64)&_ImageBase;
  hModule = &_ImageBase;
  qword_1400860C0 = (__int64)&GUID_ATLVer70;
  ATL::_AtlBaseModule = 96;
  byte_1400860B8 = 1;
  dword_1400860BC = 2048;
  v1 = ATL::CComCriticalSection::Init((ATL::CComCriticalSection *)&stru_1400860C8);
  v2 = ATL::CAtlBaseModule::m_bInitFailed;
  v3 = v1 < 0;
  result = &ATL::_AtlBaseModule;
  if ( v3 )
    v2 = 1;
  ATL::CAtlBaseModule::m_bInitFailed = v2;
  return result;
}
