/*
 * XREFs of ??0CAtlBaseModule@ATL@@QEAA@XZ @ 0x18001717C
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x1800013C0 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x180017218 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 */

int *__fastcall ATL::CAtlBaseModule::CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  int v1; // eax
  char v2; // cl
  bool v3; // sf
  int *result; // rax

  memset_0(&stru_18018AA88, 0, sizeof(stru_18018AA88));
  Block = 0LL;
  dword_18018AAB8 = 0;
  dword_18018AABC = 0;
  qword_18018AA70 = (__int64)&_ImageBase;
  qword_18018AA68 = (__int64)&_ImageBase;
  qword_18018AA80 = (__int64)&GUID_ATLVer70;
  ATL::_AtlBaseModule = 96;
  byte_18018AA78 = 1;
  dword_18018AA7C = 2048;
  v1 = ATL::CComCriticalSection::Init((ATL::CComCriticalSection *)&stru_18018AA88);
  v2 = ATL::CAtlBaseModule::m_bInitFailed;
  v3 = v1 < 0;
  result = &ATL::_AtlBaseModule;
  if ( v3 )
    v2 = 1;
  ATL::CAtlBaseModule::m_bInitFailed = v2;
  return result;
}
