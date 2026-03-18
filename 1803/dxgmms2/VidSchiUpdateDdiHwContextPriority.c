/*
 * XREFs of VidSchiUpdateDdiHwContextPriority @ 0x1C00BF11C
 * Callers:
 *     ?VidSchiCreateHwContextInternal@@YAPEAUVIDSCH_HW_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_CONTEXT_DATA@@PEAVDXGCONTEXT@@@Z @ 0x1C0030470 (-VidSchiCreateHwContextInternal@@YAPEAUVIDSCH_HW_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_CONTEX.c)
 *     VidSchSetAbsolutePriorityHwContext @ 0x1C00BEA40 (VidSchSetAbsolutePriorityHwContext.c)
 *     VidSchSetInProcessPriorityHwContext @ 0x1C00BEB50 (VidSchSetInProcessPriorityHwContext.c)
 *     VidSchSetPriorityHwContext @ 0x1C00BEBD0 (VidSchSetPriorityHwContext.c)
 * Callees:
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ?DdiSetContextSchedulingProperties@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETCONTEXTSCHEDULINGPROPERTIES@@@Z @ 0x1C0022C20 (-DdiSetContextSchedulingProperties@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETCONTEXTSCHEDULINGPROPERT.c)
 */

__int64 __fastcall VidSchiUpdateDdiHwContextPriority(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  unsigned int v5; // ecx
  bool v6; // zf
  int v7; // eax
  _DXGKARG_SETCONTEXTSCHEDULINGPROPERTIES v9; // [rsp+20h] [rbp-30h] BYREF

  memset(&v9, 0, sizeof(v9));
  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(v2 + 32);
  if ( !*(_BYTE *)(a1 + 80) )
  {
    v7 = *(_DWORD *)(*(_QWORD *)(v2 + 40) + 16LL);
    if ( !v7 )
    {
      v9.priorityBand = DXGK_SCHEDULING_PRIORITY_BAND_IDLE;
      goto LABEL_14;
    }
    if ( v7 != 5 )
    {
      if ( (*(_DWORD *)(a1 + 68) & 1) == 0 )
      {
        v6 = *(_DWORD *)(a1 + 60) == -7;
        goto LABEL_5;
      }
LABEL_9:
      v9.priorityBand = DXGK_SCHEDULING_PRIORITY_BAND_FOCUS;
      goto LABEL_14;
    }
    LODWORD(v4) = *(_DWORD *)(a1 + 60);
LABEL_12:
    v9.priorityBand = DXGK_SCHEDULING_PRIORITY_BAND_REALTIME;
    v9.realtimeBandPriorityLevel = v4;
    goto LABEL_14;
  }
  v4 = *(unsigned int *)(a1 + 76);
  v5 = gulPublicPriorityToSchedulingPriority[v4];
  if ( v5 > 0x10 )
    goto LABEL_12;
  if ( v5 == 16 )
    goto LABEL_9;
  v6 = v5 == 0;
LABEL_5:
  v9.priorityBand = !v6;
LABEL_14:
  v9.inProcessPriority = *(_DWORD *)(a1 + 64);
  v9.hContext = *(HANDLE *)(a1 + 40);
  v9.quantum = 20000LL;
  v9.gracePeriodSamePriority = 10000LL;
  v9.gracePeriodLowerPriority = 0LL;
  return ADAPTER_RENDER::DdiSetContextSchedulingProperties(*(ADAPTER_RENDER **)(*(_QWORD *)(v3 + 16) + 2464LL), &v9);
}
