/*
 * XREFs of ?HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000E2FC
 * Callers:
 *     ?RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000E17C (-RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PS.c)
 * Callees:
 *     ?HampWakeContextFindOrCreate@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@_KPEAXPEAPEAU_CEM_RC_OBJECT@@@Z @ 0x180031400 (-HampWakeContextFindOrCreate@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@_KPEAXPEAPEAU_CEM_RC_OBJECT@@@.c)
 *     ?HampSystemAcquireHostWakeChannel@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAX@Z @ 0x1800325D8 (-HampSystemAcquireHostWakeChannel@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HampHostAllocateState(struct _HOST_ACTIVITY_MANAGER *a1, struct _RM_HAM_ACTIVITY_HOST *a2)
{
  HANDLE v4; // rsi
  int v5; // ebx
  int v6; // eax
  HANDLE Handle; // [rsp+58h] [rbp+10h] BYREF

  v4 = 0LL;
  Handle = 0LL;
  v5 = TpAllocWork((char *)a2 + 616, RmHamHostStateWorker, (char *)a2 - 64, 0LL);
  if ( v5 >= 0 )
  {
    v5 = TpAllocWork((char *)a2 + 608, HampHostTerminateWorker, a2, 0LL);
    if ( v5 >= 0 )
    {
      if ( (*((_BYTE *)a2 + 740) & 1) != 0 )
      {
        v5 = (*(__int64 (__fastcall **)(_QWORD, void (*)(void *, void *), struct _RM_HAM_ACTIVITY_HOST *, char *))(*(_QWORD *)(*((_QWORD *)a2 - 2) + 40LL) + 192LL))(
               *((_QWORD *)a2 + 130),
               HampHostQuiesceTimerCallback,
               a2,
               (char *)a2 + 760);
        if ( v5 >= 0 )
        {
          v5 = (*(__int64 (__fastcall **)(_QWORD, void (*)(void *, void *), struct _RM_HAM_ACTIVITY_HOST *, char *))(*(_QWORD *)(*((_QWORD *)a2 - 2) + 40LL) + 192LL))(
                 *((_QWORD *)a2 + 130),
                 HampHostDelayedEnforcementTimerCallback,
                 a2,
                 (char *)a2 + 920);
          if ( v5 >= 0 )
          {
            if ( *((_DWORD *)a2 + 140) != 2
              || (v6 = HampSystemAcquireHostWakeChannel(a2, &Handle), v4 = Handle, v5 = v6, v6 >= 0)
              && (v5 = HampWakeContextFindOrCreate(
                         (struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 392),
                         *((_QWORD *)a2 - 4),
                         Handle,
                         (struct _CEM_RC_OBJECT **)a2 + 117),
                  v5 >= 0) )
            {
              v5 = 0;
            }
            if ( v4 )
              NtClose(v4);
          }
        }
      }
      else
      {
        return 0;
      }
    }
  }
  return (unsigned int)v5;
}
