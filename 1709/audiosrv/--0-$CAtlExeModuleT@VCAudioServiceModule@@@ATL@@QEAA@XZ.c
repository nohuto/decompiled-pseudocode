/*
 * XREFs of ??0?$CAtlExeModuleT@VCAudioServiceModule@@@ATL@@QEAA@XZ @ 0x180060A4C
 * Callers:
 *     ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x180061F40 (-Initialize@CAudioSrv@@UEAAJJ@Z.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x18002B200 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset @ 0x180033A5A (memset.c)
 *     ?ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z @ 0x180061AC0 (-ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z.c)
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
  if ( (int)ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)(a1 + 24)) >= 0 )
    *(_DWORD *)(a1 + 8) = 56;
  else
    ATL::CAtlBaseModule::m_bInitFailed = 1;
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
