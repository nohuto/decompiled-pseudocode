/*
 * XREFs of ?HampHostCheckQueueTerminateWorker@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@E@Z @ 0x180016E7C
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180016A30 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampHostQueueTerminate@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_HOST_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180043978 (-HampHostQueueTerminate@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_HOST_TERMINATE_TYPE@@W4_H.c)
 * Callees:
 *     ?RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18001549C (-RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?HampHostShouldTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180016EC0 (-HampHostShouldTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001F020 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001F6F0 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 */

unsigned __int8 __fastcall HampHostCheckQueueTerminateWorker(struct _RM_HAM_ACTIVITY_HOST *a1, char a2)
{
  unsigned int v4; // edx
  char v5; // di
  int v7; // eax
  int v8; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0;
  if ( HampHostShouldTerminate(a1) )
  {
    v7 = *((_DWORD *)a1 + 157);
    if ( (v7 & 0x800) == 0 )
    {
      *((_DWORD *)a1 + 157) = v7 | 0x800;
      RmpObjectAddRef((struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64));
      TpPostWork(*((_QWORD *)a1 + 76));
    }
    if ( a2 && (*((_DWORD *)a1 + 157) & 0x800) != 0 )
    {
      do
      {
        v8 = *((_DWORD *)a1 + 178);
        HampHostReleaseLockExclusiveEx(a1, v4);
        RmpReleaseGlobalLock();
        RtlWaitOnAddress((char *)a1 + 712, &v8, 4LL);
        RmpAcquireGlobalLock();
        HampHostAcquireLockExclusiveEx(a1, 0);
      }
      while ( (*((_DWORD *)a1 + 157) & 0x800) != 0 );
    }
    return 1;
  }
  return v5;
}
