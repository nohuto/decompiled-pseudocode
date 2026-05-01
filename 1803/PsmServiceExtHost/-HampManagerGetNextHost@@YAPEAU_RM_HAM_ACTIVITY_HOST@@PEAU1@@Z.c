/*
 * XREFs of ?HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180064470
 * Callers:
 *     ?HampOplockCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180033680 (-HampOplockCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 *     ?HampManagerTracingControlCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x180034170 (-HampManagerTracingControlCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180064564 (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampPdcUpdateState@@YAKPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x180065E10 (-HampPdcUpdateState@@YAKPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 * Callees:
 *     <none>
 */

struct _RM_HAM_ACTIVITY_HOST *__fastcall HampManagerGetNextHost(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  return HampHostEnumerateHostsInNode(
           (struct _HAM_RC_TREE_NODE *)((*(_QWORD *)((*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 93) + 88LL)
                                                                             + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                                                - 8) & 0xFFFFFFFFFFFFFFFCuLL)
                                                   - 8) & 0xFFFFFFFFFFFFFFFCuLL)
                                      - 40),
           0,
           (__int64)a1);
}
