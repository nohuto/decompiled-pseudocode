/*
 * XREFs of ??0CAtlBaseModule@ATL@@QEAA@XZ @ 0x180038764
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x180001380 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x1800238D0 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset @ 0x180049B8A (memset.c)
 */

int *__fastcall ATL::CAtlBaseModule::CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  int v1; // eax
  char v2; // cl
  bool v3; // sf
  int *result; // rax

  memset(&stru_18012C298, 0, sizeof(stru_18012C298));
  Block = 0LL;
  qword_18012C2C8 = 0LL;
  qword_18012C280 = (__int64)&_ImageBase;
  qword_18012C278 = (__int64)&_ImageBase;
  qword_18012C290 = (__int64)&GUID_ATLVer70;
  ATL::_AtlBaseModule = 96;
  byte_18012C288 = 1;
  dword_18012C28C = 2048;
  v1 = ATL::CComCriticalSection::Init(&stru_18012C298);
  v2 = ATL::CAtlBaseModule::m_bInitFailed;
  v3 = v1 < 0;
  result = &ATL::_AtlBaseModule;
  if ( v3 )
    v2 = 1;
  ATL::CAtlBaseModule::m_bInitFailed = v2;
  return result;
}
