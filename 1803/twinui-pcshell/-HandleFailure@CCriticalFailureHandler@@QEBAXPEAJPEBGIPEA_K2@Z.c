/*
 * XREFs of ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1802FF2BC
 * Callers:
 *     ?_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameManager@@@Z @ 0x18008146C (-_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameMana.c)
 *     ?RuntimeClassInitialize@CApplicationManager@@QEAAJXZ @ 0x18010AA28 (-RuntimeClassInitialize@CApplicationManager@@QEAAJXZ.c)
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18010C7F0 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?_CreatePerMonitorComponents@CApplicationManager@@AEAAJPEAUIServiceProvider@@PEAUIImmersiveMonitor@@@Z @ 0x18010EDA8 (-_CreatePerMonitorComponents@CApplicationManager@@AEAAJPEAUIServiceProvider@@PEAUIImmersiveMonit.c)
 *     ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x180110654 (-_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ.c)
 *     _lambda_a15a07f4e0c3f5666a19ba90306a96ee_::operator() @ 0x180129318 (_lambda_a15a07f4e0c3f5666a19ba90306a96ee_--operator().c)
 *     ?BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ @ 0x180129650 (-BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ.c)
 *     ?_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z @ 0x18012B514 (-_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z.c)
 *     ?InitializePrivilegedOperationsForIam@PrivilegedOperationsService@@QEAAJPEAUIPrivilegedOperationsConsumer@@@Z @ 0x18019F3B4 (-InitializePrivilegedOperationsForIam@PrivilegedOperationsService@@QEAAJPEAUIPrivilegedOperation.c)
 *     ?SubscribeToServices@PrivilegedOperationsService@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801A0D80 (-SubscribeToServices@PrivilegedOperationsService@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@ViewEventDispatcher@@QEAAJXZ @ 0x1801CCFA0 (-RuntimeClassInitialize@ViewEventDispatcher@@QEAAJXZ.c)
 *     ?SubscribeToServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801CE960 (-SubscribeToServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?v_PublishServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x1801D10C0 (-v_PublishServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z.c)
 *     ?RuntimeClassInitialize@WindowEventDispatcher@@QEAAJXZ @ 0x1801D84CC (-RuntimeClassInitialize@WindowEventDispatcher@@QEAAJXZ.c)
 *     ?SubscribeToServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801D8740 (-SubscribeToServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?v_PublishServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x1801DAA20 (-v_PublishServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z.c)
 *     ?Initialize@ConnectedStandbyHelper@@QEAAJPEAUIWindowDispatcherConnectedStandby@@@Z @ 0x1801E1A24 (-Initialize@ConnectedStandbyHelper@@QEAAJPEAUIWindowDispatcherConnectedStandby@@@Z.c)
 * Callees:
 *     ??$ReportFailure@AEAJAEAPEBGAEAIAEAPEA_KAEAPEA_KAEB_N@CCriticalFailureTelemetry@@SAXAEAJAEAPEBGAEAIAEAPEA_K3AEB_N@Z @ 0x1802FF0A4 (--$ReportFailure@AEAJAEAPEBGAEAIAEAPEA_KAEAPEA_KAEB_N@CCriticalFailureTelemetry@@SAXAEAJAEAPEBGA.c)
 *     ?_MatchesPreviousFailure@CCriticalFailureHandler@@AEBA_NJPEBGIPEA_K1@Z @ 0x1802FF4F8 (-_MatchesPreviousFailure@CCriticalFailureHandler@@AEBA_NJPEBGIPEA_K1@Z.c)
 *     ?_RaiseFailFastException@CCriticalFailureHandler@@AEBAXJPEA_K0@Z @ 0x1802FF6DC (-_RaiseFailFastException@CCriticalFailureHandler@@AEBAXJPEA_K0@Z.c)
 *     ?_RecordFailure@CCriticalFailureHandler@@AEBAXJPEBGIPEA_K1@Z @ 0x1802FF7C8 (-_RecordFailure@CCriticalFailureHandler@@AEBAXJPEBGIPEA_K1@Z.c)
 */

void __fastcall CCriticalFailureHandler::HandleFailure(
        CCriticalFailureHandler *this,
        int *a2,
        const unsigned __int16 *a3,
        unsigned int a4)
{
  int v5; // edx
  bool v8; // bl
  CCriticalFailureHandler *v9; // rcx
  CCriticalFailureHandler *v10; // rcx
  unsigned __int64 v11; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 *v12; // [rsp+38h] [rbp-20h] BYREF
  unsigned __int64 v13; // [rsp+60h] [rbp+8h] BYREF
  const unsigned __int16 *v14; // [rsp+70h] [rbp+18h] BYREF
  unsigned int v15; // [rsp+78h] [rbp+20h] BYREF

  v15 = a4;
  v14 = a3;
  v13 = (unsigned __int64)this;
  v5 = *a2;
  v11 = 0LL;
  v12 = 0LL;
  v8 = CCriticalFailureHandler::_MatchesPreviousFailure(this, v5, a3, a4, 0LL, 0LL);
  LOBYTE(v13) = v8;
  CCriticalFailureTelemetry::ReportFailure<long &,unsigned short const * &,unsigned int &,unsigned __int64 * &,unsigned __int64 * &,bool const &>(
    a2,
    &v14,
    &v15,
    &v12,
    (CCriticalFailureTelemetry **)&v11,
    (bool *)&v13);
  if ( !v8 || IsDebuggerPresent() )
  {
    CCriticalFailureHandler::_RecordFailure(v9, *a2, a3, a4, 0LL, 0LL);
    CCriticalFailureHandler::_RaiseFailFastException(v10, *a2, 0LL, 0LL);
  }
  *a2 = -2144862209;
}
