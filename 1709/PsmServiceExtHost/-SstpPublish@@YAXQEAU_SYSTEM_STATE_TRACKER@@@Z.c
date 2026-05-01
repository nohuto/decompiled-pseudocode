/*
 * XREFs of ?SstpPublish@@YAXQEAU_SYSTEM_STATE_TRACKER@@@Z @ 0x180020FD4
 * Callers:
 *     ?SstpStart@@YAJPEAU_SYSTEM_STATE_TRACKER@@@Z @ 0x180020E40 (-SstpStart@@YAJPEAU_SYSTEM_STATE_TRACKER@@@Z.c)
 *     ?SstpOnStateChanged@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180020F40 (-SstpOnStateChanged@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 *     ?SstpRundown@@YAXPEAU_SYSTEM_STATE_TRACKER@@@Z @ 0x180049A90 (-SstpRundown@@YAXPEAU_SYSTEM_STATE_TRACKER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SstpPublish(struct _SYSTEM_STATE_TRACKER *const a1)
{
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))RtlPublishWnfStateData)(
    SstpTargetWnfStateName,
    0LL,
    (char *)a1 + 16,
    4LL,
    0LL);
}
