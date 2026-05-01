/*
 * XREFs of ?VerifyCriticalResult@CRVPrivate@@YA_NPEAJPEBGIPEAVCCriticalFailureHandler@@@Z @ 0x18000671C
 * Callers:
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18000A960 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CApplicationManager@@QEAAJXZ @ 0x180010124 (-RuntimeClassInitialize@CApplicationManager@@QEAAJXZ.c)
 *     ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x1800106D8 (-_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ.c)
 *     ?_CreatePerMonitorComponents@CApplicationManager@@AEAAJPEAUIServiceProvider@@PEAUIImmersiveMonitor@@@Z @ 0x180010F44 (-_CreatePerMonitorComponents@CApplicationManager@@AEAAJPEAUIServiceProvider@@PEAUIImmersiveMonit.c)
 *     ?BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ @ 0x18004DAF0 (-BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ.c)
 *     ?_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameManager@@@Z @ 0x18004F518 (-_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameMana.c)
 *     ?_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z @ 0x18004F740 (-_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_96e0e644045a5df6c639af1253b871cf__&___ptr64_::Run @ 0x180051020 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_96e0e644045a5df6c639af1253b871cf__-___ptr64.c)
 *     ?SubscribeToServices@PrivilegedOperationsService@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800F35C0 (-SubscribeToServices@PrivilegedOperationsService@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?InitializePrivilegedOperationsForIam@PrivilegedOperationsService@@QEAAJPEAUIPrivilegedOperationsConsumer@@@Z @ 0x1800F3BE0 (-InitializePrivilegedOperationsForIam@PrivilegedOperationsService@@QEAAJPEAUIPrivilegedOperation.c)
 *     ?RuntimeClassInitialize@ViewEventDispatcher@@QEAAJXZ @ 0x18011C054 (-RuntimeClassInitialize@ViewEventDispatcher@@QEAAJXZ.c)
 *     ?SubscribeToServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x18011EC50 (-SubscribeToServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?v_PublishServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x18011FAC0 (-v_PublishServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z.c)
 *     ?Initialize@ConnectedStandbyHelper@@QEAAJPEAVViewEventDispatcher@@@Z @ 0x180139CBC (-Initialize@ConnectedStandbyHelper@@QEAAJPEAVViewEventDispatcher@@@Z.c)
 * Callees:
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1801C4250 (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

bool __fastcall CRVPrivate::VerifyCriticalResult(
        unsigned __int64 this,
        unsigned __int16 *a2,
        const unsigned __int16 *a3,
        __int64 a4)
{
  unsigned int v4; // edi
  int *v6; // rbx
  LSTATUS ValueW; // eax
  unsigned __int64 *v9; // [rsp+20h] [rbp-28h]
  unsigned __int64 *v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = a4;
  v4 = (unsigned int)a3;
  v6 = (int *)this;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    LODWORD(v12) = 4;
    ValueW = RegGetValueW(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", 0x10u, 0LL, &v11, (LPDWORD)&v12);
    this = (unsigned __int16)ValueW | 0x80070000;
    if ( ValueW <= 0 )
      this = (unsigned int)ValueW;
    if ( (this & 0x80000000) == 0LL )
    {
      switch ( v11 )
      {
        case 2:
          *v6 = -2023406815;
          break;
        case 3:
          *v6 = -2023406814;
          break;
        case 4:
          *v6 = -2147418094;
          break;
        case 5:
          *v6 = -2147022986;
          break;
      }
    }
    CRVPrivate::cfhImmersiveShellStartup = 1;
  }
  if ( *v6 < 0 && *v6 != -2147024882 && *v6 != -2144862209 )
    CCriticalFailureHandler::HandleFailure((CCriticalFailureHandler *)this, v6, a2, v4, v9, v10);
  return *v6 >= 0;
}
