/*
 * XREFs of ?HampHostAllocateState@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_TP_CALLBACK_ENVIRON_V3@@@Z @ 0x1800195A4
 * Callers:
 *     ?RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800191D4 (-RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PS.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HampHostAllocateState(struct _RM_HAM_ACTIVITY_HOST *a1, struct _TP_CALLBACK_ENVIRON_V3 *a2)
{
  __int64 result; // rax

  result = TpAllocWork((char *)a1 + 616, RmHamHostStateWorker, (char *)a1 - 64, a2);
  if ( (int)result >= 0 )
  {
    result = TpAllocWork((char *)a1 + 608, HampTerminateHostWorker, a1, 0LL);
    if ( (int)result >= 0 && (*((_BYTE *)a1 + 708) & 1) != 0 )
      return (*(__int64 (__fastcall **)(_QWORD, void (*)(void *, void *), struct _RM_HAM_ACTIVITY_HOST *, char *))(*(_QWORD *)(*((_QWORD *)a1 - 3) + 56LL) + 256LL))(
               *((_QWORD *)a1 + 108),
               HampHostResourceTimerCallback,
               a1,
               (char *)a1 + 744);
  }
  return result;
}
