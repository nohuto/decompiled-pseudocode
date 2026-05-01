/*
 * XREFs of ?HampHostCheckQueueTerminateWorker@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@E@Z @ 0x180006CD0
 * Callers:
 *     ?HampHostQueueTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@@Z @ 0x180006920 (-HampHostQueueTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180019090 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180014210 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostShouldTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180016C24 (-HampHostShouldTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001B210 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 */

unsigned __int8 __fastcall HampHostCheckQueueTerminateWorker(struct _RM_HAM_ACTIVITY_HOST *a1, char a2)
{
  unsigned int v4; // edx
  char v5; // di
  __int64 v6; // rax
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0;
  if ( HampHostShouldTerminate(a1) )
  {
    v6 = *((_QWORD *)a1 + 79);
    if ( (v6 & 0x200000000LL) == 0 )
    {
      *((_QWORD *)a1 + 79) = v6 | 0x200000000LL;
      if ( _InterlockedIncrement64((volatile signed __int64 *)a1 - 6) <= 1 )
        __fastfail(0xEu);
      TpPostWork(*((_QWORD *)a1 + 76));
    }
    if ( a2 && (*((_DWORD *)a1 + 158) & 0x30000LL) != 0 )
    {
      do
      {
        v8 = *((_QWORD *)a1 + 96);
        HampHostReleaseLockExclusiveEx(a1, v4);
        RmpReleaseGlobalLock();
        RtlWaitOnAddress((char *)a1 + 768, &v8, 8LL, 0LL);
        RmpAcquireGlobalLock();
        HampHostAcquireLockExclusiveEx(a1, 0);
      }
      while ( (*((_DWORD *)a1 + 158) & 0x30000LL) != 0 );
    }
    return 1;
  }
  return v5;
}
