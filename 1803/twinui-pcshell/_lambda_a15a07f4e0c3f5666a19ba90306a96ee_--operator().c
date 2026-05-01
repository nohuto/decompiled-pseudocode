/*
 * XREFs of _lambda_a15a07f4e0c3f5666a19ba90306a96ee_::operator() @ 0x180129318
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a15a07f4e0c3f5666a19ba90306a96ee__&___ptr64_::Run @ 0x18012A8E0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a15a07f4e0c3f5666a19ba90306a96ee__-___ptr64.c)
 * Callees:
 *     ??4?$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18007150C (--4-$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180085EE0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z @ 0x18012B514 (-_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1802FF2BC (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

void __fastcall lambda_a15a07f4e0c3f5666a19ba90306a96ee_::operator()(__int64 a1)
{
  CCriticalFailureHandler *v2; // rcx
  int *v3; // rbx
  __int64 v4; // rdx
  unsigned __int64 *v5; // [rsp+20h] [rbp-18h]
  unsigned __int64 *v6; // [rsp+28h] [rbp-10h]
  unsigned int v7; // [rsp+40h] [rbp+8h] BYREF

  **(_DWORD **)a1 = CApplicationFrameService::_CreateFrameManager(*(_QWORD *)(a1 + 8), **(unsigned int **)(a1 + 16));
  if ( !**(_DWORD **)(a1 + 16) )
  {
    v3 = *(int **)a1;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v7) >= 0 )
      {
        switch ( v7 )
        {
          case 2u:
            *v3 = -2023406815;
            break;
          case 3u:
            *v3 = -2023406814;
            break;
          case 4u:
            *v3 = -2147418094;
            break;
          case 5u:
            *v3 = -2147022986;
            break;
        }
      }
      CRVPrivate::cfhImmersiveShellStartup = 1;
    }
    if ( *v3 < 0 && *v3 != -2147024882 && *v3 != -2144862209 )
      CCriticalFailureHandler::HandleFailure(
        v2,
        v3,
        L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
        0x4E0u,
        v5,
        v6);
  }
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = *(_QWORD *)(a1 + 24);
  *(_DWORD *)(*(_QWORD *)v4 + 196LL) = ((**(int **)a1 >> 31) & 0xFFFFFFFE) + 2;
  WakeByAddressAll((PVOID)(*(_QWORD *)v4 + 196LL));
  if ( **(int **)a1 >= 0 )
    Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=(
      *(__int64 **)(a1 + 32),
      (__int64 *)(*(_QWORD *)(a1 + 8) + 176LL));
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
}
