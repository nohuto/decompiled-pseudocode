/*
 * XREFs of ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180016998
 * Callers:
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x18000FAF0 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z.c)
 *     ?UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x180011420 (-UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x180011C00 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     ?RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001BAA8 (-RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800319C0 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 * Callees:
 *     ?RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180013FCC (-RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180014000 (-RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180014730 (-RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 */

void __fastcall RmpActivityHostResourceSetsChanged(struct _RM_ACTIVITY_HOST *a1, char a2)
{
  __int64 v4; // rcx
  int v5; // eax

  RmpActivityHostUpdateDigests(a1, a2);
  RmpActivityHostUpdateImportance(a1, a2);
  QueryUnbiasedInterruptTime((PULONGLONG)a1 + 164);
  if ( RmpActivityHostIsRevocable(a1) )
    SetEvent(*(HANDLE *)(*((_QWORD *)a1 + 6) + 88LL));
  if ( (a2 & 2) != 0 )
  {
    *((_QWORD *)a1 + 121) = 0LL;
    v4 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 1896LL);
    v5 = *(_DWORD *)(v4 + 240);
    if ( (v5 & 3) == 0 )
    {
      *(_DWORD *)(v4 + 240) = v5 | 1;
      TpPostWork(*(_QWORD *)(v4 + 224));
    }
  }
}
