/*
 * XREFs of ?RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x1800548F8
 * Callers:
 *     ?RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180006DB8 (-RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800073E8 (-RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001A400 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpActivityHostCleanupRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x180053E38 (-RmpActivityHostCleanupRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpActivityHostRemoveFromRemediationGroup(char *P, char a2)
{
  __int64 v3; // rcx
  _QWORD **v4; // r9
  PVOID *v5; // r8

  v3 = *((_QWORD *)P + 178);
  v4 = (_QWORD **)*((_QWORD *)P + 179);
  if ( v4[1] != (_QWORD *)(P + 1432) || (v5 = (PVOID *)*((_QWORD *)P + 180), *v5 != P + 1432) )
    __fastfail(3u);
  *v5 = v4;
  v4[1] = v5;
  *((_QWORD *)P + 178) = 0LL;
  if ( *(_QWORD *)v3 == v3 && a2 )
    SetEvent(*(HANDLE *)(v3 + 16));
  RmpObjectRelease(P);
}
