/*
 * XREFs of ??0?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAA@XZ @ 0x14001BD18
 * Callers:
 *     ??0CAudioDGModule@@QEAA@XZ @ 0x1400130E0 (--0CAudioDGModule@@QEAA@XZ.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x1400143AC (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ?ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z @ 0x14001BE60 (-ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z.c)
 *     memset @ 0x14001D9AC (memset.c)
 */

void *ATL::CAtlExeModuleT<CAudioDGModule>::CAtlExeModuleT<CAudioDGModule>()
{
  DWORD CurrentThreadId; // eax
  HRESULT v1; // eax
  ATL::CAtlComModule *v2; // rcx

  memset(&stru_140089F38, 0, sizeof(stru_140089F38));
  dword_140089F28 = 0;
  qword_140089F30 = 0LL;
  dword_140089F2C = 0;
  qword_140089F60 = 0LL;
  ATL::_pAtlModule = (CAudioDGModule *)&_AtlModule;
  if ( (int)ATL::CComCriticalSection::Init(&stru_140089F38) < 0 )
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  else
    dword_140089F28 = 56;
  ATL::CAtlModule::m_libid = LIBID_PolicyServerLib;
  CurrentThreadId = GetCurrentThreadId();
  qword_140089F70 = 0LL;
  dword_140089F68 = CurrentThreadId;
  dword_140089F78 = 5000;
  dword_140089F7C = 1000;
  byte_140089F80 = 1;
  byte_140089F82 = 0;
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
    byte_140089F82 = 1;
  }
  ATL::CAtlComModule::ExecuteObjectMain(v2, 1);
  return &_AtlModule;
}
