/*
 * XREFs of ??0CAtlBaseModule@ATL@@QEAA@XZ @ 0x14001B208
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x1400011E0 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140015B48 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset_0 @ 0x14001C9A0 (memset_0.c)
 */

int *__fastcall ATL::CAtlBaseModule::CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  int v1; // eax
  char v2; // cl
  bool v3; // sf
  int *result; // rax

  memset_0(&stru_1400880D8, 0, sizeof(stru_1400880D8));
  qword_140088100 = 0LL;
  dword_140088108 = 0;
  dword_14008810C = 0;
  qword_1400880C0 = (__int64)&_ImageBase;
  hModule = &_ImageBase;
  qword_1400880D0 = (__int64)&GUID_ATLVer70;
  ATL::_AtlBaseModule = 96;
  byte_1400880C8 = 1;
  dword_1400880CC = 2048;
  v1 = ATL::CComCriticalSection::Init(&stru_1400880D8);
  v2 = ATL::CAtlBaseModule::m_bInitFailed;
  v3 = v1 < 0;
  result = &ATL::_AtlBaseModule;
  if ( v3 )
    v2 = 1;
  ATL::CAtlBaseModule::m_bInitFailed = v2;
  return result;
}
