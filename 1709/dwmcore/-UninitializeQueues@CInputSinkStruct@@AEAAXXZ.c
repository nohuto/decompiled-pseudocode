/*
 * XREFs of ?UninitializeQueues@CInputSinkStruct@@AEAAXXZ @ 0x1800BA4B4
 * Callers:
 *     ??$SAFE_DELETE@VCInputSinkStruct@@@@YAXAEAPEAVCInputSinkStruct@@@Z @ 0x1800BA2D4 (--$SAFE_DELETE@VCInputSinkStruct@@@@YAXAEAPEAVCInputSinkStruct@@@Z.c)
 *     ?ReplaceInputHandle@CInputSinkStruct@@QEAAJPEAX@Z @ 0x1800BA55C (-ReplaceInputHandle@CInputSinkStruct@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInputThreadMessageSession@CInputManager@@SAPEAUIMessageSession@@XZ @ 0x1800BA6A8 (-GetInputThreadMessageSession@CInputManager@@SAPEAUIMessageSession@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CInputSinkStruct::UninitializeQueues(CInputSinkStruct *this)
{
  char *v1; // rsi
  _QWORD *v2; // rdi
  struct IMessageSession *InputThreadMessageSession; // rax
  struct IMessageSession *v4; // rbx
  struct IMessageSession *v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = (char *)this + 96;
  v2 = (_QWORD *)((char *)this + 8);
  do
  {
    InputThreadMessageSession = CInputManager::GetInputThreadMessageSession();
    v5 = InputThreadMessageSession;
    v4 = InputThreadMessageSession;
    if ( InputThreadMessageSession )
    {
      (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)InputThreadMessageSession + 8LL))(InputThreadMessageSession);
      (*(void (__fastcall **)(struct IMessageSession *, _QWORD, __int64))(*(_QWORD *)v4 + 136LL))(v4, *v2, 1LL);
      *v2 = 0LL;
    }
    v2[1] = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v5);
    v2 += 3;
  }
  while ( v2 - 1 != (_QWORD *)v1 );
}
