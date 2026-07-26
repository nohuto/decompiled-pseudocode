/*
 * XREFs of ?ndisMpHookInvokeCancelOidRequestHandler@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAX@Z @ 0x1C007D380
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 */

void __fastcall ndisMpHookInvokeCancelOidRequestHandler(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *a1, void *a2)
{
  __int64 v2; // rsi

  v2 = *((_QWORD *)a1 + 473);
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_q(0xFFu, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, (__int64)a1);
  (*(void (__fastcall **)(_QWORD, void *))(*(_QWORD *)(v2 + 352) + 128LL))(*((_QWORD *)a1 + 3), a2);
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_q(0x100u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, (__int64)a1);
}
