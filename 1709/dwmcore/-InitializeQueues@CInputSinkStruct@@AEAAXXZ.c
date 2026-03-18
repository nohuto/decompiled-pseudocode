/*
 * XREFs of ?InitializeQueues@CInputSinkStruct@@AEAAXXZ @ 0x1800BA448
 * Callers:
 *     ?ReplaceInputHandle@CInputSinkStruct@@QEAAJPEAX@Z @ 0x1800BA55C (-ReplaceInputHandle@CInputSinkStruct@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?InitializeQueueInfo@CInputSinkStruct@@AEAAJAEAUInputQueueInfo@1@@Z @ 0x1800BA370 (-InitializeQueueInfo@CInputSinkStruct@@AEAAJAEAUInputQueueInfo@1@@Z.c)
 */

void __fastcall CInputSinkStruct::InitializeQueues(CInputSinkStruct *this)
{
  struct CInputSinkStruct::InputQueueInfo *v1; // rsi
  struct CInputSinkStruct::InputQueueInfo *i; // rdi
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = (CInputSinkStruct *)((char *)this + 96);
  *((_BYTE *)this + 136) = (int)NtQueryCompositionInputIsImplicit(*((_QWORD *)this + 12), &v4) >= 0 && v4 != 0;
  for ( i = this; i != v1; i = (struct CInputSinkStruct::InputQueueInfo *)((char *)i + 24) )
    CInputSinkStruct::InitializeQueueInfo(this, i);
}
