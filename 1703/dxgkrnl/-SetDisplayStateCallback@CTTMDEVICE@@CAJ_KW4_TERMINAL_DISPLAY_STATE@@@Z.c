/*
 * XREFs of ?SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@@Z @ 0x1C01B0F20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DxgkPowerOnOffMonitor @ 0x1C0103FE8 (DxgkPowerOnOffMonitor.c)
 *     LPMSetTTMDisplayPowerState @ 0x1C019883C (LPMSetTTMDisplayPowerState.c)
 *     ?DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@E@Z @ 0x1C01C98D0 (-DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@E@Z.c)
 */

__int64 __fastcall CTTMDEVICE::SetDisplayStateCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v6; // rax
  __int64 v8; // rax
  char v9; // r13
  struct _DEVICE_OBJECT *v10; // r14
  __int64 v11; // r12
  struct _ERESOURCE *v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rsi
  __int64 v16; // rax
  int *v17; // r8
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v18; // rax
  int v19; // eax
  struct _ERESOURCE *v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rsi
  _QWORD *v23; // rax
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  int v29; // [rsp+38h] [rbp-69h] BYREF
  int v30; // [rsp+3Ch] [rbp-65h] BYREF
  _QWORD v31[8]; // [rsp+48h] [rbp-59h] BYREF
  _QWORD v32[8]; // [rsp+88h] [rbp-19h] BYREF

  v4 = (int)a2;
  if ( !a1 )
  {
    v6 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 4261LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 48)) )
    return 3221226166LL;
  v8 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 624), 1u) & 0x8000001F;
  if ( (int)v8 < 0 )
    v8 = ((unsigned __int8)(v8 - 1) | 0xFFFFFFE0) + 1;
  *(_DWORD *)(a1 + 8 * v8 + 628) = v4;
  *(_DWORD *)(a1 + 8LL * (unsigned int)v8 + 632) = MEMORY[0xFFFFF78000000008] / 0x2710uLL;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a1 + 888, 0LL);
  *(_QWORD *)(a1 + 896) = KeGetCurrentThread();
  v9 = *(_BYTE *)(a1 + 904);
  v10 = *(struct _DEVICE_OBJECT **)(a1 + 72);
  v11 = *(unsigned int *)(a1 + 80);
  *(_DWORD *)(a1 + 908) = v4;
  if ( !v9 )
    ObfReferenceObject(v10);
  *(_QWORD *)(a1 + 896) = 0LL;
  ExReleasePushLockExclusiveEx(a1 + 888, 0LL);
  KeLeaveCriticalRegion();
  if ( v9 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 48));
    return 3221226166LL;
  }
  if ( (*(_DWORD *)(a1 + 84) & 1) != 0 && (v4 & 0xFFFFFFFC) == 0 && (_DWORD)v4 != 1 )
  {
    v14 = LPMSetTTMDisplayPowerState(v4, v12);
    v15 = v14;
    if ( v14 < 0 )
    {
      v16 = WdLogNewEntry5_WdError(v13, v12);
      *(_QWORD *)(v16 + 24) = v4;
      *(_QWORD *)(v16 + 32) = v15;
      WdLogEvent5_WdError(v16);
    }
  }
  if ( (int)v4 < 0 )
    goto LABEL_26;
  if ( (int)v4 <= 1 )
  {
    memset(v32, 0, sizeof(v32));
    EtwActivityIdControl(3u, (LPGUID)&v32[1]);
    v17 = &v30;
    v32[7] = MEMORY[0xFFFFF78000000014];
    v18 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v32;
    LODWORD(v32[3]) = 54;
    v30 = 4;
    goto LABEL_21;
  }
  if ( (_DWORD)v4 == 2 )
  {
    v19 = DpiBrightnessNotifyMonitorDimming(v10, 1u);
    goto LABEL_22;
  }
  if ( (_DWORD)v4 != 3 )
  {
LABEL_26:
    LODWORD(v22) = -1073741811;
    v23 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12);
    v23[3] = v4;
    v23[4] = -1073741811LL;
    goto LABEL_27;
  }
  memset(v31, 0, sizeof(v31));
  EtwActivityIdControl(3u, (LPGUID)&v31[1]);
  v17 = &v29;
  v31[7] = MEMORY[0xFFFFF78000000014];
  v18 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v31;
  LODWORD(v31[3]) = 55;
  v29 = 1;
LABEL_21:
  v19 = DxgkPowerOnOffMonitor((__int64)v10, v11, v17, 0, v18);
LABEL_22:
  v22 = v19;
  if ( v19 >= 0 )
    goto LABEL_28;
  v23 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20);
  v23[3] = v11;
  v23[4] = v10;
  v23[5] = v22;
LABEL_27:
  WdLogEvent5_WdError(v23);
LABEL_28:
  if ( (*(_DWORD *)(a1 + 84) & 1) != 0 && (_DWORD)v4 == 1 )
  {
    v24 = LPMSetTTMDisplayPowerState(1, v20);
    v22 = v24;
    if ( v24 < 0 )
    {
      v27 = WdLogNewEntry5_WdError(v26, v25);
      *(_QWORD *)(v27 + 24) = 1LL;
      *(_QWORD *)(v27 + 32) = v22;
      WdLogEvent5_WdError(v27);
    }
  }
  v28 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 624), 1u) & 0x8000001F;
  if ( (int)v28 < 0 )
    v28 = ((unsigned __int8)(v28 - 1) | 0xFFFFFFE0) + 1;
  *(_DWORD *)(a1 + 8 * v28 + 628) = v4 | 0x80000000;
  *(_DWORD *)(a1 + 8LL * (unsigned int)v28 + 632) = MEMORY[0xFFFFF78000000008] / 0x2710uLL;
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 48));
  ObfDereferenceObject(v10);
  return (unsigned int)v22;
}
