/*
 * XREFs of ?RmpActivityHostIsJobFrozen@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002DC64
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001A400 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpPolicyComputeDesiredState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002DB50 (-RmpPolicyComputeDesiredState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180059F78 (-RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

_BOOL8 __fastcall RmpActivityHostIsJobFrozen(struct _RM_ACTIVITY_HOST *a1)
{
  int v2; // [rsp+50h] [rbp+8h] BYREF

  if ( (*((_BYTE *)a1 + 804) & 1) != 0 )
    return (*((_DWORD *)a1 + 289) >> 8) & 1;
  (*(void (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, int *))(*(_QWORD *)(*((_QWORD *)a1 + 6) + 40LL) + 120LL))(
    (char *)a1 + 552,
    *((unsigned int *)a1 + 155),
    (char *)a1 + 88,
    *((unsigned int *)a1 + 156),
    *((_QWORD *)a1 + 4),
    &v2);
  return v2 == 7;
}
