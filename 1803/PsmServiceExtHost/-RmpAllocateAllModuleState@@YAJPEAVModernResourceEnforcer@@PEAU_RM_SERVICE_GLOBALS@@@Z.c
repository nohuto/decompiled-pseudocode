/*
 * XREFs of ?RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180039EFC
 * Callers:
 *     RmpCreateResourceManagerServer @ 0x180038440 (RmpCreateResourceManagerServer.c)
 * Callees:
 *     ?CreateResourceManager@ExecutionModel@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@PEAPEAVResourceManager@1@@Z @ 0x18003A08C (-CreateResourceManager@ExecutionModel@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@P.c)
 *     ?RmpLookupDefaultSystemManagedAccount@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18003B1E4 (-RmpLookupDefaultSystemManagedAccount@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpLookupDefAppsAccount@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18003B298 (-RmpLookupDefAppsAccount@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?HampManagerAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18003B304 (-HampManagerAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?RmpGameModeAllocateState@@YAJPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x18003B43C (-RmpGameModeAllocateState@@YAJPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpEnforcerContextAllocateState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18003B548 (-RmpEnforcerContextAllocateState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpActivityHostAllocateModuleState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18003B63C (-RmpActivityHostAllocateModuleState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18003B8A4 (-RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 */

__int64 __fastcall RmpAllocateAllModuleState(struct ModernResourceEnforcer *a1, struct _RM_SERVICE_GLOBALS *this)
{
  unsigned int v4; // edi
  int ModuleState; // r8d
  struct ExecutionModel::ResourceManager **v6; // r9
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  int v9; // [rsp+30h] [rbp-38h] BYREF
  __int64 v10; // [rsp+38h] [rbp-30h]
  struct _UNICODE_STRING *p_DestinationString; // [rsp+40h] [rbp-28h]
  int v12; // [rsp+48h] [rbp-20h]
  __int128 v13; // [rsp+50h] [rbp-18h]
  DWORD cbSid; // [rsp+80h] [rbp+18h] BYREF

  v4 = 0;
  ModuleState = RmpActivityHostAllocateModuleState(this);
  if ( ModuleState >= 0 )
  {
    ModuleState = RmpCpuSetManagerAllocateState(this);
    if ( ModuleState >= 0 )
    {
      ModuleState = RmpEnforcerContextAllocateState(a1, this);
      if ( ModuleState >= 0 )
      {
        ModuleState = RmpGameModeAllocateState((struct _RM_SERVICE_GLOBALS *)((char *)this + 1160));
        if ( ModuleState >= 0 )
        {
          RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\MemoryPartition0");
          v9 = 48;
          p_DestinationString = &DestinationString;
          v10 = 0LL;
          v12 = 64;
          v13 = 0LL;
          ModuleState = NtOpenPartition((char *)this + 384, 1LL, &v9);
          if ( ModuleState >= 0 )
          {
            ModuleState = HampManagerAllocateState((struct _RM_SERVICE_GLOBALS *)((char *)this + 1312));
            if ( ModuleState >= 0 )
            {
              ModuleState = TpAllocTimer((char *)this + 584, RmpTelemetryTimerCallback, this, 0LL);
              if ( ModuleState >= 0 )
                ModuleState = 0;
              if ( ModuleState >= 0 )
              {
                if ( (*((_BYTE *)this + 2228) & 1) == 0
                  && ((int)RmpLookupDefAppsAccount(this) >= 0 || (int)RmpLookupDefaultSystemManagedAccount(this) >= 0) )
                {
                  *((_DWORD *)this + 557) |= 1u;
                }
                cbSid = 68;
                if ( CreateWellKnownSid(WinNullSid, 0LL, (char *)this + 2092, &cbSid) )
                {
                  if ( (int)ExecutionModel::CreateResourceManager(
                              this,
                              a1,
                              (struct _RM_SERVICE_GLOBALS *)((char *)this + 2232),
                              v6) < 0 )
                    return (unsigned int)-1073741823;
                  return v4;
                }
                else
                {
                  return (unsigned int)-1073741823;
                }
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)ModuleState;
}
