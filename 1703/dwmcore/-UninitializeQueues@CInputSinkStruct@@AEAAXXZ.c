/*
 * XREFs of ?UninitializeQueues@CInputSinkStruct@@AEAAXXZ @ 0x1800B1E4C
 * Callers:
 *     ??$SAFE_DELETE@VCInputSinkStruct@@@@YAXAEAPEAVCInputSinkStruct@@@Z @ 0x1800B1B8C (--$SAFE_DELETE@VCInputSinkStruct@@@@YAXAEAPEAVCInputSinkStruct@@@Z.c)
 *     ?ReplaceInputHandle@CInputSinkStruct@@QEAAJPEAX@Z @ 0x1800B1C20 (-ReplaceInputHandle@CInputSinkStruct@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInputThreadMessageSession@CInputManager@@SAPEAUIMessageSession@@XZ @ 0x1800B1ED4 (-GetInputThreadMessageSession@CInputManager@@SAPEAUIMessageSession@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CInputSinkStruct::UninitializeQueues(CInputSinkStruct *this)
{
  unsigned int *v1; // rsi
  unsigned int *v2; // rdi
  struct IMessageSession *InputThreadMessageSession; // rax
  struct IMessageSession *v4; // rbx
  struct IMessageSession *v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = (unsigned int *)((char *)this + 64);
  v2 = (unsigned int *)((char *)this + 4);
  do
  {
    InputThreadMessageSession = CInputManager::GetInputThreadMessageSession();
    v5 = InputThreadMessageSession;
    v4 = InputThreadMessageSession;
    if ( InputThreadMessageSession )
    {
      (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)InputThreadMessageSession + 8LL))(InputThreadMessageSession);
      (*(void (__fastcall **)(struct IMessageSession *, _QWORD, __int64))(*(_QWORD *)v4 + 136LL))(v4, *v2, 1LL);
      *v2 = 0;
    }
    *(_QWORD *)(v2 + 1) = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)&v5);
    v2 += 4;
  }
  while ( v2 - 1 != v1 );
}
