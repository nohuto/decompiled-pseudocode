/*
 * XREFs of ?DoEditionCoreMsgKSend@CBaseInput@@QEAAXXZ @ 0x1C0122700
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z @ 0x1C01228A4 (-GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z.c)
 */

void __fastcall CBaseInput::DoEditionCoreMsgKSend(CBaseInput *this, __int64 a2, __int64 a3, __int64 a4)
{
  void *DispatcherHandleByName; // rax

  DispatcherHandleByName = (void *)CRIMBase::GetDispatcherHandleByName(this, 11LL, 1LL, a4);
  ZwSetEvent(DispatcherHandleByName, 0LL);
}
