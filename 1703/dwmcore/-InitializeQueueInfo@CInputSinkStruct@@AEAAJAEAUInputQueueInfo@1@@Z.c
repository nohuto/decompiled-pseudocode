/*
 * XREFs of ?InitializeQueueInfo@CInputSinkStruct@@AEAAJAEAUInputQueueInfo@1@@Z @ 0x1800B1D14
 * Callers:
 *     ?InitializeQueues@CInputSinkStruct@@AEAAXXZ @ 0x1800B1DEC (-InitializeQueues@CInputSinkStruct@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInputThreadMessageSession@CInputManager@@SAPEAUIMessageSession@@XZ @ 0x1800B1ED4 (-GetInputThreadMessageSession@CInputManager@@SAPEAUIMessageSession@@XZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInputSinkStruct::InitializeQueueInfo(
        CInputSinkStruct *this,
        struct CInputSinkStruct::InputQueueInfo *a2)
{
  struct IMessageSession *InputThreadMessageSession; // rax
  struct IMessageSession *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  struct IMessageSession *v9; // [rsp+20h] [rbp-98h] BYREF
  int v10; // [rsp+28h] [rbp-90h] BYREF
  __int64 v11; // [rsp+30h] [rbp-88h]
  _BYTE v12[40]; // [rsp+38h] [rbp-80h] BYREF
  _BYTE v13[64]; // [rsp+60h] [rbp-58h] BYREF

  memset_0(&v10, 0, 0x38uLL);
  InputThreadMessageSession = CInputManager::GetInputThreadMessageSession();
  v9 = InputThreadMessageSession;
  v5 = InputThreadMessageSession;
  if ( InputThreadMessageSession )
    (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)InputThreadMessageSession + 8LL))(InputThreadMessageSession);
  v6 = NtQueryCompositionInputQueueAndTransform(*((_QWORD *)this + 8), *(unsigned int *)a2, &v10, v13, v9);
  v7 = v6 | 0x10000000;
  if ( v6 >= 0 )
  {
    if ( v5 && (unsigned int)(v10 - 3) <= 1 )
      v7 = (*(__int64 (__fastcall **)(struct IMessageSession *, _BYTE *, char *))(*(_QWORD *)v5 + 96LL))(
             v5,
             v12,
             (char *)a2 + 4);
    if ( (unsigned int)(v10 - 2) <= 1 )
      *((_QWORD *)a2 + 1) = v11;
  }
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)&v9);
  return v7;
}
