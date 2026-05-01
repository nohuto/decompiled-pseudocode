/*
 * XREFs of ?RmpEnforcementApplyLimitsProcessHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x18003AC78
 * Callers:
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x18000A840 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 * Callees:
 *     ?RmpActivityHostApplyLimits@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x18003A1CC (-RmpActivityHostApplyLimits@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z.c)
 */

NTSTATUS __fastcall RmpEnforcementApplyLimitsProcessHost(
        struct _RM_ACTIVITY_HOST *a1,
        struct _RM_ENFORCEMENT_SETTINGS *a2)
{
  void *v3; // rdi
  NTSTATUS result; // eax
  int v6; // ecx
  __int16 ProcessInformation; // [rsp+40h] [rbp+8h] BYREF
  int v8; // [rsp+48h] [rbp+10h] BYREF
  int v9; // [rsp+50h] [rbp+18h] BYREF

  v3 = (void *)*((_QWORD *)a1 + 116);
  if ( *((_DWORD *)a2 + 11) != 0x100000
    || (ProcessInformation = 256,
        v8 = 1,
        v9 = 1,
        result = NtSetInformationProcess(v3, ProcessPriorityClass, &ProcessInformation, 2u),
        result >= 0)
    && (result = NtSetInformationProcess(v3, ProcessPagePriority, &v8, 4u), result >= 0)
    && (result = NtSetInformationProcess(v3, ProcessIoPriority, &v9, 4u), result >= 0) )
  {
    v6 = *((_DWORD *)a2 + 11);
    if ( v6 )
    {
      if ( v6 == 32 )
        goto LABEL_13;
      if ( v6 != 64 )
      {
        if ( v6 != 128 && v6 != 0x4000 && v6 != 0x8000 )
        {
          if ( v6 != 0x100000 )
            return -1073741823;
          goto LABEL_14;
        }
LABEL_13:
        *((_DWORD *)a2 + 11) = v6;
        return RmpActivityHostApplyLimits(a1, a2);
      }
    }
LABEL_14:
    *((_DWORD *)a2 + 11) = 64;
    return RmpActivityHostApplyLimits(a1, a2);
  }
  return result;
}
