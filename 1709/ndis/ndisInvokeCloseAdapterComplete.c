/*
 * XREFs of ndisInvokeCloseAdapterComplete @ 0x1C00AAF80
 * Callers:
 *     ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x1C00AAE00 (-ndisMQueuedFinishClose@@YAXPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 */

void __fastcall ndisInvokeCloseAdapterComplete(__int64 a1)
{
  __int64 v1; // rdi

  v1 = *(_QWORD *)(a1 + 24);
  if ( (unsigned __int8)byte_1C009874D >= 4u )
    WPP_SF_qq(0x5Fu, &WPP_4a5d38b576c633146a968e2982301690_Traceguids, v1, a1);
  (*(void (__fastcall **)(_QWORD))(v1 + 120))(*(_QWORD *)(a1 + 32));
  if ( (unsigned __int8)byte_1C009874D >= 4u )
    WPP_SF_qq(0x60u, &WPP_4a5d38b576c633146a968e2982301690_Traceguids, v1, a1);
}
