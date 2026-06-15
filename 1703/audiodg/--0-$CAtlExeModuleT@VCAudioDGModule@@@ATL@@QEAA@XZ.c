/*
 * XREFs of ??0?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAA@XZ @ 0x14000155C
 * Callers:
 *     ??0CAudioDGModule@@QEAA@XZ @ 0x140003588 (--0CAudioDGModule@@QEAA@XZ.c)
 * Callees:
 *     ?ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z @ 0x140001B10 (-ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z.c)
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x14000493C (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset @ 0x14001DC2C (memset.c)
 */

__int64 *ATL::CAtlExeModuleT<CAudioDGModule>::CAtlExeModuleT<CAudioDGModule>()
{
  DWORD CurrentThreadId; // eax
  HRESULT v1; // eax
  ATL::CAtlComModule *v2; // rcx

  memset(&unk_140085F38, 0, 0x28uLL);
  dword_140085F28 = 0;
  qword_140085F30 = 0LL;
  dword_140085F2C = 0;
  qword_140085F60 = 0LL;
  ATL::_pAtlModule = (CAudioDGModule *)&_AtlModule;
  if ( (int)ATL::CComCriticalSection::Init((ATL::CComCriticalSection *)&unk_140085F38) < 0 )
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  else
    dword_140085F28 = 56;
  ATL::CAtlModule::m_libid = LIBID_PolicyServerLib;
  CurrentThreadId = GetCurrentThreadId();
  qword_140085F70 = 0LL;
  dword_140085F68 = CurrentThreadId;
  dword_140085F78 = 5000;
  dword_140085F7C = 1000;
  byte_140085F80 = 1;
  byte_140085F82 = 0;
  v1 = CoInitializeEx(0LL, 0);
  if ( v1 < 0 )
  {
    if ( v1 != -2147417850 || !GetModuleHandleW(L"Mscoree.dll") )
    {
      ATL::CAtlBaseModule::m_bInitFailed = 1;
      return &_AtlModule;
    }
  }
  else
  {
    byte_140085F82 = 1;
  }
  ATL::CAtlComModule::ExecuteObjectMain(v2, 1);
  return &_AtlModule;
}
