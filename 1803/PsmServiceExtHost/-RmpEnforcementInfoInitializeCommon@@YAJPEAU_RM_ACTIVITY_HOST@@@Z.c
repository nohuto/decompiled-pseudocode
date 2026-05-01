/*
 * XREFs of ?RmpEnforcementInfoInitializeCommon@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000E5C4
 * Callers:
 *     ?RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000E17C (-RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PS.c)
 * Callees:
 *     ?RmpEmptyWorkerCleanup@@YAXPEAU_RM_EMPTY_WORKER_CONTEXT@@@Z @ 0x18003222C (-RmpEmptyWorkerCleanup@@YAXPEAU_RM_EMPTY_WORKER_CONTEXT@@@Z.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 */

__int64 __fastcall RmpEnforcementInfoInitializeCommon(struct _RM_ACTIVITY_HOST *a1)
{
  NTSTATUS Event; // edi
  char *v3; // rbx
  __int128 v4; // xmm1
  void *EventHandle[2]; // [rsp+30h] [rbp-28h] BYREF
  void *v7[2]; // [rsp+40h] [rbp-18h] BYREF

  memset_0(EventHandle, 0, 0x20uLL);
  Event = TpAllocWork(EventHandle, RmpEmptyWorkerCallback, a1, *((_QWORD *)a1 + 6) + 2016LL);
  if ( Event >= 0 )
  {
    Event = NtCreateEvent(&EventHandle[1], 0x1F0003u, 0LL, NotificationEvent, 0);
    if ( Event >= 0 )
    {
      Event = NtCreateEvent(v7, 0x1F0003u, 0LL, NotificationEvent, 0);
      if ( Event >= 0 )
        Event = 0;
    }
  }
  if ( Event < 0 )
  {
    RmpEmptyWorkerCleanup((struct _RM_EMPTY_WORKER_CONTEXT *)EventHandle);
  }
  else
  {
    v3 = (char *)a1 + 1064;
    Event = 0;
    memset_0(v3, 0, 0xC0uLL);
    *((_DWORD *)v3 + 6) = 1;
    *((_DWORD *)v3 + 7) = 100;
    RtlInitializeConditionVariable(v3 + 72);
    RtlInitializeConditionVariable(v3 + 80);
    v4 = *(_OWORD *)v7;
    *((_OWORD *)v3 + 10) = *(_OWORD *)EventHandle;
    *((_OWORD *)v3 + 11) = v4;
  }
  return (unsigned int)Event;
}
