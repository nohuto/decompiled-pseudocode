/*
 * XREFs of ??0?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAA@XZ @ 0x14001AE24
 * Callers:
 *     ??0CAudioDGModule@@QEAA@XZ @ 0x140014F34 (--0CAudioDGModule@@QEAA@XZ.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140015B48 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ?ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z @ 0x14001AF6C (-ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z.c)
 *     memset_0 @ 0x14001C9A0 (memset_0.c)
 */

void *ATL::CAtlExeModuleT<CAudioDGModule>::CAtlExeModuleT<CAudioDGModule>()
{
  DWORD CurrentThreadId; // eax
  HRESULT v1; // eax
  ATL::CAtlComModule *v2; // rcx

  memset_0(&stru_140087F38, 0, sizeof(stru_140087F38));
  dword_140087F28 = 0;
  qword_140087F30 = 0LL;
  dword_140087F2C = 0;
  qword_140087F60 = 0LL;
  ATL::_pAtlModule = (CAudioDGModule *)&_AtlModule;
  if ( (int)ATL::CComCriticalSection::Init(&stru_140087F38) < 0 )
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  else
    dword_140087F28 = 56;
  ATL::CAtlModule::m_libid = LIBID_PolicyServerLib;
  CurrentThreadId = GetCurrentThreadId();
  qword_140087F70 = 0LL;
  dword_140087F68 = CurrentThreadId;
  dword_140087F78 = 5000;
  dword_140087F7C = 1000;
  byte_140087F80 = 1;
  byte_140087F82 = 0;
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
    byte_140087F82 = 1;
  }
  ATL::CAtlComModule::ExecuteObjectMain(v2, 1);
  return &_AtlModule;
}
