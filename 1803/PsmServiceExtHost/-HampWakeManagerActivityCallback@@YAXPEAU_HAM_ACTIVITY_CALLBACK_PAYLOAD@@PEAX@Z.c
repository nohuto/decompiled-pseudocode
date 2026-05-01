/*
 * XREFs of ?HampWakeManagerActivityCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@PEAX@Z @ 0x18000ABE0
 * Callers:
 *     ?HampActInvalidateAndNotify@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_REASON@@@Z @ 0x180006180 (-HampActInvalidateAndNotify@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_REASON@@@Z.c)
 *     ?HampActIssueCallback@@YAXPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@@Z @ 0x180034278 (-HampActIssueCallback@@YAXPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@@Z.c)
 * Callees:
 *     ?HampWakeManagerFindContextByActivityHandle@@YAPEAU_HAM_HOST_WAKE_CONTEXT@@PEAU_HAM_WAKE_REFERENCE_MANAGER@@_K@Z @ 0x180005388 (-HampWakeManagerFindContextByActivityHandle@@YAPEAU_HAM_HOST_WAKE_CONTEXT@@PEAU_HAM_WAKE_REFEREN.c)
 *     ?HampWakeManagerReleaseLockShared@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x1800315C0 (-HampWakeManagerReleaseLockShared@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?HampWakeManagerAcquireLockShared@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x1800315E4 (-HampWakeManagerAcquireLockShared@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?HampWakeContextReleaseLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x180031CA0 (-HampWakeContextReleaseLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeContextQueueWorker@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x180031CC8 (-HampWakeContextQueueWorker@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x180031D0C (-HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 */

void __fastcall HampWakeManagerActivityCallback(
        struct _HAM_ACTIVITY_CALLBACK_PAYLOAD *a1,
        struct _HAM_WAKE_REFERENCE_MANAGER *a2)
{
  int v2; // eax
  struct _HAM_HOST_WAKE_CONTEXT *ContextByActivityHandle; // rax
  struct _HAM_HOST_WAKE_CONTEXT *v6; // rbx

  v2 = *((_DWORD *)a1 + 4);
  if ( v2 > 0 && v2 <= 2 )
  {
    HampWakeManagerAcquireLockShared(a2);
    ContextByActivityHandle = HampWakeManagerFindContextByActivityHandle(a2, *(_QWORD *)a1);
    v6 = ContextByActivityHandle;
    if ( ContextByActivityHandle )
    {
      HampWakeContextAcquireLockExclusive(ContextByActivityHandle);
      *((_BYTE *)v6 + 185) |= 4u;
      HampWakeContextQueueWorker(v6);
      HampWakeContextReleaseLockExclusive(v6);
    }
    HampWakeManagerReleaseLockShared(a2);
  }
}
