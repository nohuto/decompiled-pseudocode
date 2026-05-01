/*
 * XREFs of ?RmpPowerBoostEnableDisable@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x18000481C
 * Callers:
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x180009D04 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@T_RM_OPTIMIZA.c)
 * Callees:
 *     ?RmpSystemApplyInswapPowerBoost@@YAJK@Z @ 0x180004A30 (-RmpSystemApplyInswapPowerBoost@@YAJK@Z.c)
 *     ?RmpPowerBoostArmWatchdog@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x180004A80 (-RmpPowerBoostArmWatchdog@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?RmpPowerBoostReleaseLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x180028B20 (-RmpPowerBoostReleaseLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x180028B44 (CempQueryUnbiasedInterruptTimeMs64.c)
 *     ?RmpPowerBoostAcquireLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x180028B8C (-RmpPowerBoostAcquireLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpPowerBoostEnableDisable(struct _RM_SERVICE_GLOBALS *a1, unsigned int a2)
{
  char *v2; // rdi
  __int64 v5; // rax
  int v6; // eax
  struct _TP_TIMER *v7; // rcx
  int v8; // ecx
  bool v9; // al
  int v11; // ebx
  __int64 UnbiasedInterruptTimeMs64; // rax
  bool v13; // [rsp+30h] [rbp-89h] BYREF
  char v14; // [rsp+31h] [rbp-88h] BYREF
  char v15; // [rsp+32h] [rbp-87h] BYREF
  bool v16; // [rsp+33h] [rbp-86h] BYREF
  int v17; // [rsp+34h] [rbp-85h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-79h] BYREF
  int *v19; // [rsp+60h] [rbp-59h]
  int v20; // [rsp+68h] [rbp-51h]
  int v21; // [rsp+6Ch] [rbp-4Dh]
  bool *v22; // [rsp+70h] [rbp-49h]
  int v23; // [rsp+78h] [rbp-41h]
  int v24; // [rsp+7Ch] [rbp-3Dh]
  char *v25; // [rsp+80h] [rbp-39h]
  int v26; // [rsp+88h] [rbp-31h]
  int v27; // [rsp+8Ch] [rbp-2Dh]
  char *v28; // [rsp+90h] [rbp-29h]
  int v29; // [rsp+98h] [rbp-21h]
  int v30; // [rsp+9Ch] [rbp-1Dh]
  char *v31; // [rsp+A0h] [rbp-19h]
  int v32; // [rsp+A8h] [rbp-11h]
  int v33; // [rsp+ACh] [rbp-Dh]
  char *v34; // [rsp+B0h] [rbp-9h]
  int v35; // [rsp+B8h] [rbp-1h]
  int v36; // [rsp+BCh] [rbp+3h]
  char *v37; // [rsp+C0h] [rbp+7h]
  int v38; // [rsp+C8h] [rbp+Fh]
  int v39; // [rsp+CCh] [rbp+13h]
  bool *v40; // [rsp+D0h] [rbp+17h]
  int v41; // [rsp+D8h] [rbp+1Fh]
  int v42; // [rsp+DCh] [rbp+23h]

  v2 = (char *)a1 + 128;
  RmpPowerBoostAcquireLockExclusive((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 128));
  if ( a2 )
  {
    if ( (*((_BYTE *)a1 + 2228) & 2) != 0 )
    {
      v17 = -1073741585;
      goto LABEL_6;
    }
    v11 = *((_DWORD *)v2 + 16);
    UnbiasedInterruptTimeMs64 = CempQueryUnbiasedInterruptTimeMs64();
    *((_QWORD *)v2 + 1) = UnbiasedInterruptTimeMs64;
    if ( (v11 & 1) != 0 )
    {
      ++*((_QWORD *)v2 + 2);
    }
    else
    {
      *(_QWORD *)v2 = UnbiasedInterruptTimeMs64;
      v17 = RmpSystemApplyInswapPowerBoost(a2);
      if ( v17 < 0 )
        goto LABEL_6;
      *((_DWORD *)v2 + 16) |= 2u;
      *((_QWORD *)v2 + 2) = 1LL;
      RmpPowerBoostArmWatchdog((struct _RM_POWERBOOST_CONTEXT *)v2);
    }
  }
  else
  {
    v5 = *((_QWORD *)v2 + 2);
    if ( v5 == 1 && (v2[64] & 2) != 0 )
    {
      v6 = RmpSystemApplyInswapPowerBoost(0);
      v7 = (struct _TP_TIMER *)*((_QWORD *)v2 + 3);
      *((_DWORD *)v2 + 16) &= ~2u;
      *((_QWORD *)v2 + 2) = 0LL;
      v17 = v6;
      SetThreadpoolTimer(v7, 0LL, 0, 0);
      *((_DWORD *)v2 + 16) &= ~1u;
    }
    else
    {
      *((_QWORD *)v2 + 2) = v5 - 1;
    }
  }
  v17 = 0;
LABEL_6:
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v21 = 0;
    v19 = &v17;
    v26 = 8;
    v22 = &v13;
    v29 = 8;
    v13 = a2 != 0;
    v28 = v2 + 8;
    v24 = 0;
    v27 = 0;
    v30 = 0;
    v33 = 0;
    v36 = 0;
    v39 = 0;
    v31 = v2 + 16;
    v32 = 8;
    v8 = *((_DWORD *)v2 + 16) >> 1;
    v14 = *((_DWORD *)v2 + 16) & 1;
    v20 = 4;
    v34 = &v14;
    v37 = &v15;
    v9 = (*((_DWORD *)a1 + 557) & 2) != 0;
    v23 = 1;
    v42 = 0;
    v16 = v9;
    v40 = &v16;
    v25 = v2;
    v35 = 1;
    v15 = v8 & 1;
    v38 = 1;
    v41 = 1;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008055A, 0LL, 0LL, 0xAu, &pData);
  }
  RmpPowerBoostReleaseLockExclusive((struct _RM_POWERBOOST_CONTEXT *)v2);
  return (unsigned int)v17;
}
