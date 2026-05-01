/*
 * XREFs of ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1801C4250
 * Callers:
 *     ?VerifyCriticalResult@CRVPrivate@@YA_NPEAJPEBGIPEAVCCriticalFailureHandler@@@Z @ 0x18000671C (-VerifyCriticalResult@CRVPrivate@@YA_NPEAJPEBGIPEAVCCriticalFailureHandler@@@Z.c)
 * Callees:
 *     ?Instance@CCriticalFailureTelemetry@@KAPEAV1@XZ @ 0x1801C4024 (-Instance@CCriticalFailureTelemetry@@KAPEAV1@XZ.c)
 *     ?ReportFailure_@CCriticalFailureTelemetry@@QEBAXJPEBGIPEA_K1_N@Z @ 0x1801C4104 (-ReportFailure_@CCriticalFailureTelemetry@@QEBAXJPEBGIPEA_K1_N@Z.c)
 *     ?_MatchesPreviousFailure@CCriticalFailureHandler@@AEBA_NJPEBGIPEA_K1@Z @ 0x1801C4348 (-_MatchesPreviousFailure@CCriticalFailureHandler@@AEBA_NJPEBGIPEA_K1@Z.c)
 *     ?_RecordFailure@CCriticalFailureHandler@@AEBAXJPEBGIPEA_K1@Z @ 0x1801C45F0 (-_RecordFailure@CCriticalFailureHandler@@AEBAXJPEBGIPEA_K1@Z.c)
 *     ?_RaiseFailFastException@CCriticalFailureHandler@@AEBAXJPEA_K0@Z @ 0x1801C47A4 (-_RaiseFailFastException@CCriticalFailureHandler@@AEBAXJPEA_K0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCriticalFailureHandler::HandleFailure(
        CCriticalFailureHandler *this,
        int *a2,
        const unsigned __int16 *a3,
        unsigned int a4)
{
  bool v7; // bp
  CCriticalFailureHandler *v8; // rcx
  CCriticalFailureTelemetry *v9; // rcx
  CCriticalFailureHandler *v10; // rcx

  if ( qword_1802B87B8 )
    qword_1802B87B8((unsigned int)*a2, a3, a4);
  v7 = CCriticalFailureHandler::_MatchesPreviousFailure(this, *a2, a3, a4, 0LL, 0LL);
  v8 = (CCriticalFailureHandler *)*((_QWORD *)CCriticalFailureTelemetry::Instance() + 1);
  if ( v8 && *(_DWORD *)v8 )
  {
    CCriticalFailureTelemetry::Instance();
    CCriticalFailureTelemetry::ReportFailure_(v9, *a2, a3, a4, 0LL, 0LL, v7);
  }
  if ( !v7 || IsDebuggerPresent() )
  {
    CCriticalFailureHandler::_RecordFailure(v8, *a2, a3, a4, 0LL, 0LL);
    CCriticalFailureHandler::_RaiseFailFastException(v10, *a2, 0LL, 0LL);
  }
  else if ( qword_1802B87C0 )
  {
    qword_1802B87C0((unsigned int)*a2, a3, a4);
  }
  *a2 = -2144862209;
}
