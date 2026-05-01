/*
 * XREFs of ??$PendingActivation@AEBQEAUHWND__@@@IamTraceLogging@@SAXAEBQEAUHWND__@@@Z @ 0x180102B84
 * Callers:
 *     _lambda_bb299bb733d931796faa9380238be063_::operator() @ 0x180104E54 (_lambda_bb299bb733d931796faa9380238be063_--operator().c)
 * Callees:
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Create@CAppManagerTelemetry@@IEAAXXZ @ 0x180105D94 (-Create@CAppManagerTelemetry@@IEAAXXZ.c)
 *     ?IsEnabled@IamTraceLogging@@SA_NE_K@Z @ 0x1801088A0 (-IsEnabled@IamTraceLogging@@SA_NE_K@Z.c)
 *     ?PendingActivation_@IamTraceLogging@@QEAAXPEAUHWND__@@@Z @ 0x18010962C (-PendingActivation_@IamTraceLogging@@QEAAXPEAUHWND__@@@Z.c)
 */

void __fastcall IamTraceLogging::PendingActivation<HWND__ * const &>(HWND *a1, unsigned __int64 a2)
{
  IamTraceLogging *v3; // rcx
  WINBOOL fPending; // [rsp+38h] [rbp+10h] BYREF
  LPVOID Context; // [rsp+40h] [rbp+18h] BYREF

  if ( IamTraceLogging::IsEnabled((unsigned __int8)a1, a2) )
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`IamTraceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) )
    {
      if ( fPending )
      {
        Context = qword_1804386B8;
        qword_1804386B8[0] = &IamTraceLogging::`vftable';
        atexit(lambda_119a121fb38785c27806b92be2d82d86_::_lambda_invoker_cdecl_);
        CAppManagerTelemetry::Create((CAppManagerTelemetry *)qword_1804386B8);
        InitOnceComplete(&`IamTraceLogging::Instance'::`2'::wrapper, 0, qword_1804386B8);
      }
    }
    IamTraceLogging::PendingActivation_(v3, *a1);
  }
}
