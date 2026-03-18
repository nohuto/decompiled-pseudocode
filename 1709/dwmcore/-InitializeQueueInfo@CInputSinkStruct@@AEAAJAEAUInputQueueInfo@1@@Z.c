/*
 * XREFs of ?InitializeQueueInfo@CInputSinkStruct@@AEAAJAEAUInputQueueInfo@1@@Z @ 0x1800BA370
 * Callers:
 *     ?InitializeQueues@CInputSinkStruct@@AEAAXXZ @ 0x1800BA448 (-InitializeQueues@CInputSinkStruct@@AEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInputThreadMessageSession@CInputManager@@SAPEAUIMessageSession@@XZ @ 0x1800BA6A8 (-GetInputThreadMessageSession@CInputManager@@SAPEAUIMessageSession@@XZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInputSinkStruct::InitializeQueueInfo(
        CInputSinkStruct *this,
        struct CInputSinkStruct::InputQueueInfo *a2)
{
  unsigned int v4; // edi
  struct IMessageSession *InputThreadMessageSession; // rax
  struct IMessageSession *v6; // rbx
  int v7; // eax
  struct IMessageSession *v9; // [rsp+30h] [rbp-A8h] BYREF
  int v10; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v11; // [rsp+40h] [rbp-98h]
  _BYTE v12[40]; // [rsp+48h] [rbp-90h] BYREF
  _BYTE v13[64]; // [rsp+70h] [rbp-68h] BYREF

  v4 = -2147467259;
  memset_0(&v10, 0, 0x38uLL);
  InputThreadMessageSession = CInputManager::GetInputThreadMessageSession();
  v9 = InputThreadMessageSession;
  v6 = InputThreadMessageSession;
  if ( InputThreadMessageSession )
    (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)InputThreadMessageSession + 8LL))(InputThreadMessageSession);
  v7 = NtQueryCompositionInputQueueAndTransform(*((_QWORD *)this + 12), *(unsigned int *)a2, &v10, v13);
  if ( v7 < 0 )
  {
    v4 = v7 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7 | 0x10000000, 0x109u);
  }
  else
  {
    if ( v6 && (unsigned int)(v10 - 3) <= 1 )
      v4 = (*(__int64 (__fastcall **)(struct IMessageSession *, _BYTE *, char *))(*(_QWORD *)v6 + 96LL))(
             v6,
             v12,
             (char *)a2 + 8);
    if ( (unsigned int)(v10 - 2) <= 1 )
      *((_QWORD *)a2 + 2) = v11;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v9);
  return v4;
}
