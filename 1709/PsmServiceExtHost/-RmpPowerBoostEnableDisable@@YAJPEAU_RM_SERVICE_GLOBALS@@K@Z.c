/*
 * XREFs of ?RmpPowerBoostEnableDisable@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x18001D31C
 * Callers:
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18001B684 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@T_RM_OPTIMIZA.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpEnforcementApplyPowerBoost@@YAJK@Z @ 0x18001D53C (-RmpEnforcementApplyPowerBoost@@YAJK@Z.c)
 *     ?RmpPowerBoostArmWatchdog@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x18001DEA8 (-RmpPowerBoostArmWatchdog@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpPowerBoostEnableDisable(struct _RM_SERVICE_GLOBALS *a1, unsigned int a2)
{
  char *v3; // rbx
  __int64 v5; // rax
  int v6; // eax
  struct _TP_TIMER *v7; // rcx
  const GUID *v8; // r8
  const GUID *v9; // r9
  int v10; // ecx
  int v11; // eax
  DWORD v13; // eax
  DWORD TickCount; // eax
  bool v15; // [rsp+30h] [rbp-79h] BYREF
  char v16; // [rsp+31h] [rbp-78h] BYREF
  bool v17; // [rsp+32h] [rbp-77h] BYREF
  char v18; // [rsp+33h] [rbp-76h] BYREF
  int v19; // [rsp+34h] [rbp-75h] BYREF
  int v20; // [rsp+38h] [rbp-71h] BYREF
  int v21; // [rsp+3Ch] [rbp-6Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-69h] BYREF
  int *v23; // [rsp+60h] [rbp-49h]
  int v24; // [rsp+68h] [rbp-41h]
  int v25; // [rsp+6Ch] [rbp-3Dh]
  bool *v26; // [rsp+70h] [rbp-39h]
  int v27; // [rsp+78h] [rbp-31h]
  int v28; // [rsp+7Ch] [rbp-2Dh]
  int *v29; // [rsp+80h] [rbp-29h]
  int v30; // [rsp+88h] [rbp-21h]
  int v31; // [rsp+8Ch] [rbp-1Dh]
  int *v32; // [rsp+90h] [rbp-19h]
  int v33; // [rsp+98h] [rbp-11h]
  int v34; // [rsp+9Ch] [rbp-Dh]
  char *v35; // [rsp+A0h] [rbp-9h]
  int v36; // [rsp+A8h] [rbp-1h]
  int v37; // [rsp+ACh] [rbp+3h]
  char *v38; // [rsp+B0h] [rbp+7h]
  int v39; // [rsp+B8h] [rbp+Fh]
  int v40; // [rsp+BCh] [rbp+13h]
  bool *v41; // [rsp+C0h] [rbp+17h]
  int v42; // [rsp+C8h] [rbp+1Fh]
  int v43; // [rsp+CCh] [rbp+23h]
  char *v44; // [rsp+D0h] [rbp+27h]
  int v45; // [rsp+D8h] [rbp+2Fh]
  int v46; // [rsp+DCh] [rbp+33h]

  v3 = (char *)a1 + 144;
  RmpAcquireGlobalLock();
  if ( a2 )
  {
    if ( (*((_BYTE *)a1 + 1892) & 2) != 0 )
    {
      v19 = -1073741585;
      goto LABEL_6;
    }
    if ( (v3[24] & 1) != 0 )
    {
      TickCount = GetTickCount();
      ++*((_QWORD *)v3 + 1);
      *((_DWORD *)v3 + 1) = TickCount;
    }
    else
    {
      v13 = GetTickCount();
      *(_DWORD *)v3 = v13;
      *((_DWORD *)v3 + 1) = v13;
      v19 = RmpEnforcementApplyPowerBoost(a2);
      if ( v19 < 0 )
        goto LABEL_6;
      *((_DWORD *)v3 + 6) |= 2u;
      *((_QWORD *)v3 + 1) = 1LL;
      RmpPowerBoostArmWatchdog((struct _RM_POWERBOOST_CONTEXT *)v3);
    }
  }
  else
  {
    v5 = *((_QWORD *)v3 + 1);
    if ( v5 == 1 && (v3[24] & 2) != 0 )
    {
      v6 = RmpEnforcementApplyPowerBoost(0);
      v7 = (struct _TP_TIMER *)*((_QWORD *)v3 + 2);
      *((_DWORD *)v3 + 6) &= ~2u;
      *((_QWORD *)v3 + 1) = 0LL;
      v19 = v6;
      SetThreadpoolTimer(v7, 0LL, 0, 0);
      *((_DWORD *)v3 + 6) &= ~1u;
    }
    else
    {
      *((_QWORD *)v3 + 1) = v5 - 1;
    }
  }
  v19 = 0;
LABEL_6:
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v25 = 0;
    v10 = *((_DWORD *)v3 + 6);
    v23 = &v19;
    v26 = &v15;
    v15 = a2 != 0;
    v11 = *(_DWORD *)v3;
    v28 = 0;
    v31 = 0;
    v34 = 0;
    v37 = 0;
    v40 = 0;
    v43 = 0;
    v20 = v11;
    v29 = &v20;
    v21 = *((_DWORD *)v3 + 1);
    v32 = &v21;
    v35 = v3 + 8;
    v16 = v10 & 1;
    v24 = (int)v9;
    v38 = &v16;
    v41 = &v17;
    LOBYTE(v11) = (*((_BYTE *)a1 + 1892) & 2) != 0;
    v27 = 1;
    v46 = 0;
    v18 = v11;
    v44 = &v18;
    v30 = (int)v9;
    v33 = (int)v9;
    v36 = 8;
    v39 = 1;
    v17 = (v10 & 2) != 0;
    v42 = 1;
    v45 = 1;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005A391, v8, v9, 0xAu, &pData);
  }
  RmpReleaseGlobalLock();
  return (unsigned int)v19;
}
