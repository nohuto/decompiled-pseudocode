/*
 * XREFs of wil::details::ScopeExitFnGuard__lambda_9566a7ebb49e26bd67a2921c9c088adc___::operator() @ 0x1800DD444
 * Callers:
 *     ?InvokeAppToAppServiceEnticement@RealtimeEnticementManager@Cortana@TwinUI@@AEAAJXZ @ 0x1800DCC84 (-InvokeAppToAppServiceEnticement@RealtimeEnticementManager@Cortana@TwinUI@@AEAAJXZ.c)
 *     wil::details::ScopeExitFnGuard__lambda_9566a7ebb49e26bd67a2921c9c088adc___::_ScopeExitFnGuard__lambda_9566a7ebb49e26bd67a2921c9c088adc___ @ 0x1800DD43C (wil--details--ScopeExitFnGuard__lambda_9566a7ebb49e26bd67a2921c9c088adc___--_ScopeExitFnGuard__l.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::ScopeExitFnGuard__lambda_9566a7ebb49e26bd67a2921c9c088adc___::operator()(
        wil *a1,
        __int64 a2,
        unsigned int a3)
{
  unsigned int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // eax
  int v6; // [rsp+20h] [rbp-18h]
  _QWORD v7[7]; // [rsp+0h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  wil *v9; // [rsp+40h] [rbp+8h]
  wil *v10; // [rsp+48h] [rbp+10h] BYREF

  v9 = a1;
  v7[4] = -2LL;
  try
  {
    if ( *((_BYTE *)a1 + 9) )
    {
      *((_BYTE *)a1 + 9) = 0;
      v10 = 0LL;
      if ( (****(int (__fastcall *****)(_QWORD, GUID *, wil **))a1)(
             **(_QWORD **)a1,
             &_uuidof__AUIDisposable_Platform__,
             &v10) >= 0 )
        (*(void (__fastcall **)(wil *))(*(_QWORD *)v10 + 48LL))(v10);
      a1 = v10;
      if ( v10 )
      {
        v10 = 0LL;
        (*(void (__fastcall **)(wil *))(*(_QWORD *)a1 + 16LL))(a1);
      }
    }
  }
  catch ( ... )
  {
    LOBYTE(a1) = *((_BYTE *)v9 + 8);
    if ( (_BYTE)a1 == 2 )
    {
      v3 = wil::ResultFromCaughtException(a1, v7, a3);
      v4 = wil::verify_hresult<long>(v3);
      wil::details::in1diag3::FailFast_Hr(retaddr, (void *)0x8B6, (unsigned int)"wil", (const char *)v4, v6);
      __debugbreak();
    }
    if ( (_BYTE)a1 == 1 )
    {
      v5 = wil::ResultFromCaughtException(a1, v7, a3);
      wil::details::in1diag3::Log_Hr(retaddr, (void *)0x8BA, (__int64)"wil", (const char *)v5);
    }
  }
}
