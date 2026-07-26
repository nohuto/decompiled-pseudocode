/*
 * XREFs of ?NdisPDPIQueryCounter@@YAXPEAUNDIS_PD_COUNTER_HANDLE__@@PEAT_NDIS_PD_COUNTER_VALUE@@@Z @ 0x1C00F9030
 * Callers:
 *     ?ndisPDPcwCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z @ 0x1C0076D80 (-ndisPDPcwCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 */

void __fastcall NdisPDPIQueryCounter(struct NDIS_PD_COUNTER_HANDLE__ *a1, union _NDIS_PD_COUNTER_VALUE *a2)
{
  __int64 v2; // rsi

  v2 = *((_QWORD *)a1 + 4);
  if ( (unsigned __int8)byte_1C0099624 >= 4u )
    WPP_SF_q(0x2Eu, &WPP_a3b9db0bffd8342d0da72f7b6cff8d15_Traceguids, (__int64)a1);
  (*(void (__fastcall **)(_QWORD, union _NDIS_PD_COUNTER_VALUE *))(*(_QWORD *)(v2 + 80) + 56LL))(
    *((_QWORD *)a1 + 6),
    a2);
  if ( (unsigned __int8)byte_1C0099624 >= 4u )
    WPP_SF_q(0x2Fu, &WPP_a3b9db0bffd8342d0da72f7b6cff8d15_Traceguids, (__int64)a1);
}
