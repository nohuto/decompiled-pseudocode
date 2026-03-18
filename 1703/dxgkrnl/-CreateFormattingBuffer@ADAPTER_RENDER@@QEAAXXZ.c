/*
 * XREFs of ?CreateFormattingBuffer@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0173560
 * Callers:
 *     ?EnableFormattingBuffer@ADAPTER_RENDER@@QEAAXH@Z @ 0x1C017394C (-EnableFormattingBuffer@ADAPTER_RENDER@@QEAAXH@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00B1A9C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

void __fastcall ADAPTER_RENDER::CreateFormattingBuffer(ADAPTER_RENDER *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax

  if ( *((_QWORD *)this + 110) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v5 + 24) = 3484LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( !*((_QWORD *)this + 110) )
    *((_QWORD *)this + 110) = operator new[](0xFC00uLL, 0x4B677844u, (POOL_TYPE)512);
}
