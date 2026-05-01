/*
 * XREFs of ?HampActNotifyResourcesAcquired@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x180023100
 * Callers:
 *     ?OnAcquired@HAM_ACTIVITY_RM_CONTEXT@@UEAAJPEAX@Z @ 0x180022E50 (-OnAcquired@HAM_ACTIVITY_RM_CONTEXT@@UEAAJPEAX@Z.c)
 * Callees:
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800165D0 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180019090 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x18001B8A0 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 */

__int64 __fastcall HampActNotifyResourcesAcquired(__int64 a1)
{
  struct _RM_HAM_ACTIVITY_HOST *v2; // rcx
  unsigned int v3; // eax
  unsigned int v4; // ebx

  if ( *(_BYTE *)(a1 + 540) == 2 )
  {
    RtlQueryPerformanceCounter(*(_QWORD *)(a1 + 512) + 8LL);
    v2 = *(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80);
    *(_BYTE *)(a1 + 541) = 1;
    HampHostUpdateActivityState(v2);
    v3 = HampActTryStart(a1);
    v4 = v3;
    if ( v3 && v3 - 8 <= 5 )
      HampHostCheckQueueStateWorker(*(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80), 0);
  }
  else
  {
    return 4;
  }
  return v4;
}
