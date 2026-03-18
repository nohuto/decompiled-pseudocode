/*
 * XREFs of ?InitializePowerManagement@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0173AD8
 * Callers:
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C010DDB0 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C00061DC (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 */

__int64 __fastcall ADAPTER_RENDER::InitializePowerManagement(ADAPTER_RENDER *this)
{
  __int64 v1; // r15
  int DriverVersion; // eax
  void (__fastcall *v4)(__int64); // rcx
  bool v5; // cc
  __int64 v6; // rax
  unsigned int v7; // r12d
  __int64 v8; // rbx
  unsigned int v9; // r14d
  __int64 v10; // rdi
  __int64 v11; // r10
  int v12; // eax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  _QWORD v18[10]; // [rsp+40h] [rbp-19h] BYREF
  char v19; // [rsp+C0h] [rbp+67h] BYREF

  v1 = *((_QWORD *)this + 2);
  memset(v18, 0, sizeof(v18));
  v18[8] = *(_QWORD *)(v1 + 192);
  v18[1] = DxgSetPowerComponentActiveNoWaitCB;
  v18[0] = &DxgSetPowerComponentActiveCBInternal;
  v18[2] = DxgSetPowerComponentIdleCBInternal;
  v18[3] = DxgSetPowerComponentActiveNoWaitForceAsyncCB;
  v18[4] = DxgSetPowerComponentIdleForceAsyncCBInternal;
  v18[5] = DxgkLatencyToleranceTimerNotification;
  LODWORD(v18[9]) = *(_DWORD *)(v1 + 2752);
  v18[7] = DxgkNotifyMemorySegmentHasData;
  DriverVersion = DXGADAPTER::GetDriverVersion((DXGADAPTER *)v1);
  v4 = (void (__fastcall *)(__int64))v18[6];
  v5 = DriverVersion < 1300;
  v6 = *((_QWORD *)this + 51);
  if ( !v5 )
    v4 = DxgNotifyVSyncCB;
  v18[6] = v4;
  (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)(v6 + 8) + 688LL))(*((_QWORD *)this + 52), v18);
  (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)(*((_QWORD *)this + 54) + 8LL) + 728LL))(
    *((_QWORD *)this + 55),
    v18);
  v7 = *(_DWORD *)(v1 + 2464);
  LODWORD(v8) = 0;
  v9 = 0;
  if ( v7 )
  {
    v10 = 0LL;
    do
    {
      v11 = *(_QWORD *)(v1 + 2320);
      v12 = *(_DWORD *)(v10 + v11 + 208);
      if ( v12 )
      {
        switch ( v12 )
        {
          case 2:
            v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, unsigned int, char *))(*(_QWORD *)(*((_QWORD *)this + 51) + 8LL) + 696LL))(
                    *((_QWORD *)this + 52),
                    2LL,
                    0LL,
                    *(unsigned int *)(v10 + v11 + 212),
                    v9,
                    &v19);
            break;
          case 3:
            v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)(*((_QWORD *)this + 54)
                                                                                             + 8LL)
                                                                                 + 736LL))(
                    *((_QWORD *)this + 55),
                    *(unsigned __int16 *)(v10 + v11 + 6),
                    *(unsigned int *)(v10 + v11 + 212),
                    *(unsigned int *)(v10 + v11),
                    3);
            break;
          case 4:
            v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)(*((_QWORD *)this + 54)
                                                                                             + 8LL)
                                                                                 + 736LL))(
                    *((_QWORD *)this + 55),
                    0LL,
                    0LL,
                    *(unsigned int *)(v10 + v11),
                    4);
            break;
          default:
            goto LABEL_15;
        }
      }
      else
      {
        v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, unsigned int, __int64))(*(_QWORD *)(*((_QWORD *)this + 51) + 8LL)
                                                                                               + 696LL))(
                *((_QWORD *)this + 52),
                0LL,
                *(unsigned __int16 *)(v10 + v11 + 6),
                *(unsigned int *)(v10 + v11 + 212),
                v9,
                v10 + v11 + 358);
      }
      v8 = v13;
      if ( v13 < 0 )
      {
        v16 = WdLogNewEntry5_WdError(v15, v14);
        *(_QWORD *)(v16 + 24) = v8;
        WdLogEvent5_WdError(v16);
        return (unsigned int)v8;
      }
LABEL_15:
      ++v9;
      v10 += 520LL;
    }
    while ( v9 < v7 );
  }
  return (unsigned int)v8;
}
