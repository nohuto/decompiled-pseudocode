/*
 * XREFs of ?HampManagerAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18003B304
 * Callers:
 *     ?RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180039EFC (-RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     Pdcv2ActivationClientRegister @ 0x180038768 (Pdcv2ActivationClientRegister.c)
 *     ?HampSlsAllocateState@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z @ 0x18003B3A0 (-HampSlsAllocateState@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z.c)
 *     ?HampWakeManagerAllocateState@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x18003B3E8 (-HampWakeManagerAllocateState@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 */

__int64 __fastcall HampManagerAllocateState(struct _HOST_ACTIVITY_MANAGER *a1)
{
  char *v1; // rdi
  __int64 result; // rax
  _DWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF
  void *v5; // [rsp+28h] [rbp-20h]
  __int64 v6; // [rsp+30h] [rbp-18h]

  v1 = (char *)a1 + 336;
  v4[1] = 0;
  v4[0] = 1;
  v5 = &HampActPdcActivationCallback;
  v6 = 0LL;
  result = Pdcv2ActivationClientRegister((__int64)a1, (__int64)v4, (_QWORD *)a1 + 44);
  if ( (int)result >= 0 )
  {
    result = TpAllocWork(v1 + 24, HampPdcWorker, v1, 0LL);
    if ( (int)result >= 0 )
      result = 0LL;
    if ( (int)result >= 0 )
    {
      result = HampWakeManagerAllocateState((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 392));
      if ( (int)result >= 0 )
      {
        result = HampSlsAllocateState((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 504));
        if ( (int)result >= 0 )
          return 0LL;
      }
    }
  }
  return result;
}
