/*
 * XREFs of ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK@Z @ 0x18000B204
 * Callers:
 *     ?HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK@Z @ 0x18000F184 (-HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK@Z.c)
 * Callees:
 *     CempLockSleepConditionVariableExclusive @ 0x180005CAC (CempLockSleepConditionVariableExclusive.c)
 *     ?HampHostQueueTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@@Z @ 0x180006920 (-HampHostQueueTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800072D8 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180009928 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180009954 (-HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampHostCanRegisterProcess@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000B46C (-HampHostCanRegisterProcess@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostStartProcessPresenceChange@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000B4B4 (-HampHostStartProcessPresenceChange@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000FD20 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180011D50 (-RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180014210 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostHasActivities@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001A3B0 (-HampHostHasActivities@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001B210 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x180028B44 (CempQueryUnbiasedInterruptTimeMs64.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HampHostRegisterProcess(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        void *a2,
        void *a3,
        struct _PSM_APP_IDENTITY *a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  int v10; // r14d
  int UnbiasedInterruptTimeMs64; // ebx
  int v12; // edx
  unsigned int v13; // ebp
  unsigned int v14; // edx
  int v15; // esi
  char v16; // bl
  int v17; // ebx
  unsigned int v18; // ebp
  __int64 v20; // rbx
  __int64 v21; // rdx
  unsigned int v22; // edx
  __int64 v24; // [rsp+70h] [rbp+8h] BYREF

  v10 = 0;
  HampHostAcquireLockExclusiveEx(a1, 0);
  if ( (*((_QWORD *)a1 + 79) & 0x10000000000000LL) != 0 )
  {
    UnbiasedInterruptTimeMs64 = CempQueryUnbiasedInterruptTimeMs64();
    do
    {
      if ( !HampHostHasActivities(a1) )
        break;
      if ( (*((_QWORD *)a1 + 79) & 0x800000000LL) != 0 )
        break;
      v24 = -10000LL * (unsigned int)(60000 - v12);
      CempLockSleepConditionVariableExclusive((__int64)a1, (__int64)a1 + 16, (__int64)&v24);
    }
    while ( (unsigned int)CempQueryUnbiasedInterruptTimeMs64() - UnbiasedInterruptTimeMs64 <= 0xEA60 );
  }
  HampHostStartProcessPresenceChange(a1);
  v13 = a6;
  if ( HampHostCanRegisterProcess(a1, a6) )
  {
    if ( *((_DWORD *)a1 + 200) == -1
      || *((_QWORD *)a1 + 99)
      || (v15 = TpAllocTimer((char *)a1 + 792, HampHostCacheTimeoutCallback, a1, 0LL), v15 >= 0) )
    {
      v16 = ~(*((_QWORD *)a1 + 79) >> 44);
      HampHostReleaseLockExclusiveEx(a1, v14);
      v17 = v16 & 1;
      if ( v17 )
      {
        RmpAcquireGlobalLock();
        RmHamHostReference(a1);
        RmpReleaseGlobalLock();
      }
      v18 = v13 & 0xFFFFFFFE;
      v15 = (*(__int64 (__fastcall **)(void *, void *, struct _PSM_APP_IDENTITY *, unsigned __int64, unsigned int, char, _QWORD))(*(_QWORD *)(*((_QWORD *)a1 - 2) + 40LL) + 184LL))(
              a2,
              a3,
              a4,
              a5,
              v18,
              1,
              0LL);
      if ( v15 >= 0 )
      {
        HampHostAcquireLockExclusiveEx(a1, 0);
        if ( *((_DWORD *)a1 + 140) == 2 )
        {
          v20 = *((_QWORD *)a1 + 93);
          HampAppAcquireLockExclusive((struct _HAM_APPLICATION *)v20);
          *(_DWORD *)(v20 + 608) &= 0xFFF8C807;
          *(_DWORD *)(v20 + 608) |= 0xC800u;
          HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v20, v21);
        }
        if ( !HampHostCanRegisterProcess(a1, v18) )
          v10 = HampHostQueueTerminate((__int64)a1, 3u, 0x900u, 0LL, 1);
        *((_QWORD *)a1 + 79) |= 0x100000000000uLL;
        v15 = 0;
      }
      else
      {
        if ( v17 )
        {
          RmpAcquireGlobalLock();
          if ( (*((_QWORD *)a1 + 72))-- == 1LL )
            RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64));
          RmpReleaseGlobalLock();
        }
        HampHostAcquireLockExclusiveEx(a1, 0);
      }
    }
  }
  else
  {
    v15 = -1058275325;
  }
  *((_QWORD *)a1 + 79) &= ~0x80000000000uLL;
  RtlWakeAllConditionVariable((char *)a1 + 656);
  HampHostReleaseLockExclusiveEx(a1, v22);
  if ( v10 )
    HampDepGroupRunStateChangeWorker(*((struct _HAM_DEPENDENCY_GROUP **)a1 + 83));
  return (unsigned int)v15;
}
