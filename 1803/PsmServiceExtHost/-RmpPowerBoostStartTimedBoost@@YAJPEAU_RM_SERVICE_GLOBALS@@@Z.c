/*
 * XREFs of ?RmpPowerBoostStartTimedBoost@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800289E8
 * Callers:
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x18001B8A0 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?RmpPowerBoostReleaseLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x180028B20 (-RmpPowerBoostReleaseLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x180028B44 (CempQueryUnbiasedInterruptTimeMs64.c)
 *     ?RmpPowerBoostAcquireLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x180028B8C (-RmpPowerBoostAcquireLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     ?RmpPowerBoostArmTimedBoostTimer@@YAX_KPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x180028BF8 (-RmpPowerBoostArmTimedBoostTimer@@YAX_KPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     ?RmpSystemApplyAppLaunchPowerBoost@@YAJK@Z @ 0x180028CFC (-RmpSystemApplyAppLaunchPowerBoost@@YAJK@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpPowerBoostStartTimedBoost(struct _RM_SERVICE_GLOBALS *a1)
{
  struct _RM_SERVICE_GLOBALS *v1; // rdi
  char *v2; // rbx
  unsigned __int64 UnbiasedInterruptTimeMs64; // rax
  bool v4; // zf
  int v5; // edx
  const struct _TlgProvider_t *v6; // rcx
  char v7; // al
  char v9; // [rsp+30h] [rbp-19h] BYREF
  int v10; // [rsp+34h] [rbp-15h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  int *v12; // [rsp+60h] [rbp+17h]
  int v13; // [rsp+68h] [rbp+1Fh]
  int v14; // [rsp+6Ch] [rbp+23h]
  char *v15; // [rsp+70h] [rbp+27h]
  int v16; // [rsp+78h] [rbp+2Fh]
  int v17; // [rsp+7Ch] [rbp+33h]
  char *v18; // [rsp+80h] [rbp+37h]
  int v19; // [rsp+88h] [rbp+3Fh]
  int v20; // [rsp+8Ch] [rbp+43h]

  v1 = RmSvcGlobals;
  v2 = (char *)RmSvcGlobals + 128;
  RmpPowerBoostAcquireLockExclusive((struct _RM_SERVICE_GLOBALS *)((char *)RmSvcGlobals + 128));
  if ( (*((_BYTE *)v1 + 2228) & 2) != 0 )
  {
    v10 = -1073741585;
    goto LABEL_8;
  }
  if ( (v2[64] & 4) == 0 )
  {
    v10 = RmpSystemApplyAppLaunchPowerBoost(1u);
    if ( v10 < 0 )
      goto LABEL_8;
    *((_DWORD *)v2 + 16) |= 4u;
  }
  UnbiasedInterruptTimeMs64 = CempQueryUnbiasedInterruptTimeMs64();
  v4 = (v2[64] & 8) == 0;
  *((_QWORD *)v2 + 6) = UnbiasedInterruptTimeMs64 + 2000;
  if ( v4 )
    RmpPowerBoostArmTimedBoostTimer(UnbiasedInterruptTimeMs64, (struct _RM_POWERBOOST_CONTEXT *)v2);
  v10 = 0;
LABEL_8:
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v14 = 0;
    v17 = 0;
    v12 = &v10;
    v15 = v2 + 48;
    v7 = v5 & (*((_DWORD *)v1 + 557) >> 1);
    v13 = 4;
    v20 = 0;
    v9 = v7;
    v18 = &v9;
    v16 = 8;
    v19 = v5;
    TlgWrite(v6, &unk_1800805F5, 0LL, 0LL, 5u, &pData);
  }
  RmpPowerBoostReleaseLockExclusive((struct _RM_POWERBOOST_CONTEXT *)v2);
  return (unsigned int)v10;
}
