/*
 * XREFs of ndisCancelDequeuedDirectOidRequests @ 0x1C00704CC
 * Callers:
 *     ?ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C006F340 (-ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C006F4C0 (-ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C006F840 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ndisRequestPowerResume @ 0x1C0071150 (ndisRequestPowerResume.c)
 * Callees:
 *     ndisMOidRequestCompleteInternal @ 0x1C0045BB0 (ndisMOidRequestCompleteInternal.c)
 */

void __fastcall ndisCancelDequeuedDirectOidRequests(__int64 a1, _QWORD **a2)
{
  _QWORD *v4; // rdx
  _QWORD *v5; // rax

  while ( 1 )
  {
    v4 = *a2;
    if ( *a2 == a2 )
      break;
    if ( (_QWORD **)v4[1] != a2 || (v5 = (_QWORD *)*v4, *(_QWORD **)(*v4 + 8LL) != v4) )
      __fastfail(3u);
    *a2 = v5;
    v5[1] = a2;
    ndisMOidRequestCompleteInternal(a1, (__int64)(v4 - 9), -1073676276, 0LL);
  }
}
