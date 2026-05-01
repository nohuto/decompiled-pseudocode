/*
 * XREFs of ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK@Z @ 0x180043BC8
 * Callers:
 *     ?HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK@Z @ 0x1800423B4 (-HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK@Z.c)
 * Callees:
 *     ?RmpActivityHostIsPple@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180018F44 (-RmpActivityHostIsPple@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     CempQueryUnbiasedInterruptTimeMs @ 0x18001FBDC (CempQueryUnbiasedInterruptTimeMs.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 *     ?HampHostAcquireLockShared@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180043230 (-HampHostAcquireLockShared@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostReleaseLockShared@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180043CF8 (-HampHostReleaseLockShared@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall HampHostRegisterProcess(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        __int64 a2,
        void *a3,
        struct _PSM_APP_IDENTITY *a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  unsigned int v6; // ebp
  unsigned int v9; // esi
  int UnbiasedInterruptTimeMs; // r14d
  unsigned int i; // eax
  int v14; // eax
  __int64 result; // rax
  __int64 v16; // [rsp+70h] [rbp+8h] BYREF

  v6 = a6;
  v9 = a6 & 1;
  HampHostAcquireLockShared(a1, a2);
  if ( RmpActivityHostIsPple((struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64)) )
  {
    UnbiasedInterruptTimeMs = CempQueryUnbiasedInterruptTimeMs();
    for ( i = 0; i <= 0xEA60; i = CempQueryUnbiasedInterruptTimeMs() - UnbiasedInterruptTimeMs )
    {
      if ( *((struct _RM_HAM_ACTIVITY_HOST **)a1 + 73) == (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 + 584) )
        break;
      if ( (*((_DWORD *)a1 + 157) & 0x2000) != 0 )
        break;
      v16 = -10000LL * (60000 - i);
      RtlSleepConditionVariableSRW((char *)a1 + 16, a1, &v16, 1LL);
    }
  }
  v14 = *((_DWORD *)a1 + 157);
  if ( (v14 & 0x2000) != 0 && (!v9 || (v14 & 0x4000) != 0) )
  {
    HampHostReleaseLockShared(a1);
    result = (*(__int64 (__fastcall **)(__int64, void *, struct _PSM_APP_IDENTITY *, unsigned __int64, unsigned int, char, _QWORD))(*(_QWORD *)(*((_QWORD *)a1 - 3) + 56LL) + 248LL))(
               a2,
               a3,
               a4,
               a5,
               v6 & 0xFFFFFFFE,
               1,
               0LL);
    if ( (int)result >= 0 )
      return 0LL;
  }
  else
  {
    HampHostReleaseLockShared(a1);
    return 3221226030LL;
  }
  return result;
}
