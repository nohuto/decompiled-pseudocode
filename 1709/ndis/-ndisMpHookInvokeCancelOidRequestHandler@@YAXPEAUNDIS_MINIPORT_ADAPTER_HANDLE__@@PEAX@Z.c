/*
 * XREFs of ?ndisMpHookInvokeCancelOidRequestHandler@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAX@Z @ 0x1C007C420
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 */

void __fastcall ndisMpHookInvokeCancelOidRequestHandler(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *a1, void *a2)
{
  __int64 v2; // rsi

  v2 = *((_QWORD *)a1 + 473);
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_q(0xFCu, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, (__int64)a1);
  (*(void (__fastcall **)(_QWORD, void *))(*(_QWORD *)(v2 + 352) + 128LL))(*((_QWORD *)a1 + 3), a2);
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_q(0xFDu, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, (__int64)a1);
}
