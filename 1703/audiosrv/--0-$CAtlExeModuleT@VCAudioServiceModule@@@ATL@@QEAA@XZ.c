/*
 * XREFs of ??0?$CAtlExeModuleT@VCAudioServiceModule@@@ATL@@QEAA@XZ @ 0x180036600
 * Callers:
 *     ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x180035B70 (-Initialize@CAudioSrv@@UEAAJJ@Z.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x1800238D0 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ?ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z @ 0x180036714 (-ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z.c)
 *     memset @ 0x180049B8A (memset.c)
 */

__int64 __fastcall ATL::CAtlExeModuleT<CAudioServiceModule>::CAtlExeModuleT<CAudioServiceModule>(__int64 a1)
{
  DWORD CurrentThreadId; // eax
  ATL::CAtlComModule *v3; // rcx

  memset((void *)(a1 + 24), 0, 0x28uLL);
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 64) = 0LL;
  ATL::_pAtlModule = (struct ATL::CAtlModule *)a1;
  if ( (int)ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)(a1 + 24)) < 0 )
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  else
    *(_DWORD *)(a1 + 8) = 56;
  ATL::CAtlModule::m_libid = LIBID_PolicyServerLib;
  CurrentThreadId = GetCurrentThreadId();
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_DWORD *)(a1 + 72) = CurrentThreadId;
  *(_DWORD *)(a1 + 88) = 5000;
  *(_DWORD *)(a1 + 92) = 1000;
  *(_BYTE *)(a1 + 96) = 1;
  *(_BYTE *)(a1 + 98) = 1;
  ATL::CAtlComModule::ExecuteObjectMain(v3, 1);
  return a1;
}
