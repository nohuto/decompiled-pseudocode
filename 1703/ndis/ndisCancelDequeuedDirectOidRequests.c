/*
 * XREFs of ndisCancelDequeuedDirectOidRequests @ 0x1C006E5B8
 * Callers:
 *     ?ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C006D414 (-ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C006D594 (-ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C006D914 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ndisRequestPowerResume @ 0x1C006F184 (ndisRequestPowerResume.c)
 * Callees:
 *     ndisMOidRequestCompleteInternal @ 0x1C0027768 (ndisMOidRequestCompleteInternal.c)
 */

void __fastcall ndisCancelDequeuedDirectOidRequests(__int64 a1, __int64 **a2)
{
  __int64 *v4; // rdx
  __int64 v5; // rax

  while ( 1 )
  {
    v4 = *a2;
    if ( *a2 == (__int64 *)a2 )
      break;
    v5 = *v4;
    if ( (__int64 **)v4[1] != a2 || *(__int64 **)(v5 + 8) != v4 )
      __fastfail(3u);
    *a2 = (__int64 *)v5;
    *(_QWORD *)(v5 + 8) = a2;
    ndisMOidRequestCompleteInternal(a1, (__int64)(v4 - 9), -1073676276, 0LL);
  }
}
