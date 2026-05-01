/*
 * XREFs of _lambda_7c6f95392d1fa211f578d6d8eb47d107_::_lambda_invoker_cdecl_ @ 0x180177700
 * Callers:
 *     <none>
 * Callees:
 *     InitOnceBeginInitialize_0 @ 0x180195112 (InitOnceBeginInitialize_0.c)
 */

void __fastcall lambda_7c6f95392d1fa211f578d6d8eb47d107_::_lambda_invoker_cdecl_()
{
  _QWORD *v0; // rbx
  bool v1; // zf
  __int64 v2; // rbx
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( InitOnceBeginInitialize_0(
         &`ScalingCompatTelemetry::CScalingCompatTelemetry::Instance'::`2'::wrapper,
         1u,
         &fPending,
         &Context)
    && !fPending )
  {
    v0 = Context;
    v1 = *((_BYTE *)Context + 16) == 0;
    *(_QWORD *)Context = &IamTraceLogging::`vftable';
    if ( !v1 )
    {
      v2 = v0[1];
      EventUnregister(*(_QWORD *)(v2 + 32));
      *(_QWORD *)(v2 + 32) = 0LL;
      *(_DWORD *)v2 = 0;
    }
  }
}
