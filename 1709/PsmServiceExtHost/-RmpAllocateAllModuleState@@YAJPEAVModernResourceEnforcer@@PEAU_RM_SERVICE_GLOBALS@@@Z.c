/*
 * XREFs of ?RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180021BD0
 * Callers:
 *     RmpCreateResourceManagerServer @ 0x180021774 (RmpCreateResourceManagerServer.c)
 * Callees:
 *     ?CreateResourceManager@ExecutionModel@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@PEAPEAVResourceManager@1@@Z @ 0x180021D80 (-CreateResourceManager@ExecutionModel@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@P.c)
 *     ?RmpLookupDefaultSystemManagedAccount@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800233F0 (-RmpLookupDefaultSystemManagedAccount@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpLookupDefAppsAccount@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800234A4 (-RmpLookupDefAppsAccount@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpGameModeAllocateState@@YAJPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180023510 (-RmpGameModeAllocateState@@YAJPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpEnforcerContextAllocateState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18002361C (-RmpEnforcerContextAllocateState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpActivityHostAllocateModuleState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18002376C (-RmpActivityHostAllocateModuleState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180023A6C (-RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     Pdcv2ActivationClientRegister @ 0x18002488C (Pdcv2ActivationClientRegister.c)
 */

__int64 __fastcall RmpAllocateAllModuleState(struct ModernResourceEnforcer *a1, struct _RM_SERVICE_GLOBALS *a2)
{
  unsigned int v4; // edi
  int ModuleState; // r8d
  __int64 v6; // rcx
  struct ExecutionModel::ResourceManager **v7; // r9
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-50h] BYREF
  __int64 v10; // [rsp+30h] [rbp-40h]
  int v11; // [rsp+38h] [rbp-38h] BYREF
  __int64 v12; // [rsp+40h] [rbp-30h]
  struct _UNICODE_STRING *p_DestinationString; // [rsp+48h] [rbp-28h]
  int v14; // [rsp+50h] [rbp-20h]
  __int128 v15; // [rsp+58h] [rbp-18h]
  DWORD cbSid; // [rsp+90h] [rbp+20h] BYREF

  v4 = 0;
  ModuleState = RmpActivityHostAllocateModuleState(a2);
  if ( ModuleState >= 0 )
  {
    ModuleState = RmpCpuSetManagerAllocateState(a2);
    if ( ModuleState >= 0 )
    {
      ModuleState = RmpEnforcerContextAllocateState(a1, a2);
      if ( ModuleState >= 0 )
      {
        ModuleState = RmpGameModeAllocateState((struct _RM_SERVICE_GLOBALS *)((char *)a2 + 1136));
        if ( ModuleState >= 0 )
        {
          RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\MemoryPartition0");
          v11 = 48;
          p_DestinationString = &DestinationString;
          v12 = 0LL;
          v14 = 64;
          v15 = 0LL;
          ModuleState = NtOpenPartition((char *)a2 + 360, 1LL, &v11);
          if ( ModuleState >= 0 )
          {
            *(_DWORD *)&DestinationString.Length = 1;
            DestinationString.Buffer = (PWSTR)&HampActPdcActivationCallback;
            v10 = 0LL;
            ModuleState = Pdcv2ActivationClientRegister(v6, &DestinationString, (char *)a2 + 1544);
            if ( ModuleState >= 0 )
              ModuleState = 0;
            if ( ModuleState >= 0 )
            {
              ModuleState = TpAllocTimer((char *)a2 + 560, RmpTelemetryTimerCallback, a2, 0LL);
              if ( ModuleState >= 0 )
                ModuleState = 0;
              if ( ModuleState >= 0 )
              {
                if ( (*((_BYTE *)a2 + 1892) & 1) == 0
                  && ((int)RmpLookupDefAppsAccount(a2) >= 0 || (int)RmpLookupDefaultSystemManagedAccount(a2) >= 0) )
                {
                  *((_DWORD *)a2 + 473) |= 1u;
                }
                cbSid = 68;
                if ( CreateWellKnownSid(WinNullSid, 0LL, (char *)a2 + 1756, &cbSid) )
                {
                  if ( (int)ExecutionModel::CreateResourceManager(
                              a2,
                              a1,
                              (struct _RM_SERVICE_GLOBALS *)((char *)a2 + 1896),
                              v7) < 0 )
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
