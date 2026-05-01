/*
 * XREFs of ??$AppSizeConstraintsSet@AEAIAEBUCSize@Geometry@@AEBU12@@ApplicationViewTelemetry@ApplicationViewManagement@@SAXAEAIAEBUCSize@Geometry@@1@Z @ 0x180073D60
 * Callers:
 *     ?SetSizeConstraintsForDpi@AppSizeConstraintsCache@@EEAAJIAEBUAPP_SIZE_CONSTRAINTS@@@Z @ 0x180073C20 (-SetSizeConstraintsForDpi@AppSizeConstraintsCache@@EEAAJIAEBUAPP_SIZE_CONSTRAINTS@@@Z.c)
 * Callees:
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x180075568 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?AppSizeConstraintsSet_@ApplicationViewTelemetry@ApplicationViewManagement@@QEAAXIUtagSIZE@@0@Z @ 0x180142FD4 (-AppSizeConstraintsSet_@ApplicationViewTelemetry@ApplicationViewManagement@@QEAAXIUtagSIZE@@0@Z.c)
 *     ?Create@ApplicationViewTelemetry@ApplicationViewManagement@@IEAAXXZ @ 0x18014311C (-Create@ApplicationViewTelemetry@ApplicationViewManagement@@IEAAXXZ.c)
 */

void __fastcall ApplicationViewManagement::ApplicationViewTelemetry::AppSizeConstraintsSet<unsigned int &,Geometry::CSize const &,Geometry::CSize const &>(
        unsigned int *a1,
        struct tagSIZE *a2,
        struct tagSIZE *a3)
{
  unsigned __int8 v6; // dl
  unsigned __int64 v7; // r8
  struct tagSIZE v8; // rbx
  struct tagSIZE v9; // rdi
  ApplicationViewManagement::ApplicationViewTelemetry *v10; // rcx
  LPVOID Context[5]; // [rsp+20h] [rbp-28h] BYREF
  WINBOOL fPending; // [rsp+68h] [rbp+20h] BYREF

  Context[0] = 0LL;
  if ( InitOnceBeginInitialize(
         &`ApplicationViewManagement::ApplicationViewTelemetry::Instance'::`2'::wrapper,
         0,
         &fPending,
         Context)
    && fPending )
  {
    Context[0] = qword_180438B70;
    qword_180438B70[0] = &IamTraceLogging::`vftable';
    atexit(lambda_2a778f8121aa305892535f3550c397a2_::_lambda_invoker_cdecl_);
    ApplicationViewManagement::ApplicationViewTelemetry::Create((ApplicationViewManagement::ApplicationViewTelemetry *)qword_180438B70);
    InitOnceComplete(&`ApplicationViewManagement::ApplicationViewTelemetry::Instance'::`2'::wrapper, 0, qword_180438B70);
  }
  if ( wil::TraceLoggingProvider::IsEnabled_((wil::TraceLoggingProvider *)Context[0], v6, v7) )
  {
    v8 = *a3;
    v9 = *a2;
    Context[0] = 0LL;
    if ( InitOnceBeginInitialize(
           &`ApplicationViewManagement::ApplicationViewTelemetry::Instance'::`2'::wrapper,
           0,
           &fPending,
           Context) )
    {
      if ( fPending )
      {
        Context[0] = qword_180438B70;
        qword_180438B70[0] = &IamTraceLogging::`vftable';
        atexit(lambda_2a778f8121aa305892535f3550c397a2_::_lambda_invoker_cdecl_);
        ApplicationViewManagement::ApplicationViewTelemetry::Create((ApplicationViewManagement::ApplicationViewTelemetry *)qword_180438B70);
        InitOnceComplete(
          &`ApplicationViewManagement::ApplicationViewTelemetry::Instance'::`2'::wrapper,
          0,
          qword_180438B70);
      }
    }
    ApplicationViewManagement::ApplicationViewTelemetry::AppSizeConstraintsSet_(v10, *a1, v9, v8);
  }
}
