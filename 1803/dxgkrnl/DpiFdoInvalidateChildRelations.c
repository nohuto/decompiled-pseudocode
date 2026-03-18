/*
 * XREFs of DpiFdoInvalidateChildRelations @ 0x1C01F7D20
 * Callers:
 *     DpiPollDisplayChildren @ 0x1C01EFC94 (DpiPollDisplayChildren.c)
 *     DpiFdoHandleSystemPower @ 0x1C01F0CCC (DpiFdoHandleSystemPower.c)
 *     DpiFdoCreateRelatedObjects @ 0x1C01F24BC (DpiFdoCreateRelatedObjects.c)
 *     DpiFdoHandleQueryDeviceRelations @ 0x1C01F4FF0 (DpiFdoHandleQueryDeviceRelations.c)
 *     DpiFdoInvalidateChildWorkItem @ 0x1C01F8030 (DpiFdoInvalidateChildWorkItem.c)
 *     DpiFdoSetAdapterPowerState @ 0x1C01F8B44 (DpiFdoSetAdapterPowerState.c)
 *     DxgkPowerOnOffMonitor @ 0x1C01FC280 (DxgkPowerOnOffMonitor.c)
 *     DpiAcpiProcessEventRequests @ 0x1C0207D74 (DpiAcpiProcessEventRequests.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     DxgkDiagCalcDuration1us @ 0x1C003B9C8 (DxgkDiagCalcDuration1us.c)
 *     DxgkWriteDiagEntry @ 0x1C00C3130 (DxgkWriteDiagEntry.c)
 *     DpiDxgkDdiDisplayDetectControl @ 0x1C020A0CC (DpiDxgkDdiDisplayDetectControl.c)
 */

__int64 __fastcall DpiFdoInvalidateChildRelations(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r15
  int v5; // r14d
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rbx
  int v9; // r13d
  int v10; // ecx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rbx
  unsigned int v21; // eax
  _QWORD v23[2]; // [rsp+20h] [rbp-59h] BYREF
  __int64 v24; // [rsp+30h] [rbp-49h]
  __int64 v25; // [rsp+38h] [rbp-41h] BYREF
  _QWORD v26[10]; // [rsp+40h] [rbp-39h] BYREF

  v3 = a2;
  v5 = a1;
  v6 = *(_QWORD *)(a1 + 64);
  v25 = MEMORY[0xFFFFF78000000320];
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(v6 + 3168), 1u);
  v7 = MEMORY[0xFFFFF78000000320];
  v8 = KeQueryTimeIncrement() * v7;
  v9 = v3 & 1;
  v10 = (v3 & 0xFFFFFFFE) - 1;
  if ( (v3 & 1) == 0 )
    v10 = v3 & 0xFFFFFFFE;
  if ( *(_DWORD *)(v6 + 3384) < v10 || v8 - *(_QWORD *)(v6 + 3392) >= 10000000 )
  {
    *(_DWORD *)(v6 + 3384) = v10;
    *(_QWORD *)(v6 + 3392) = v8;
    v24 = 0x10000LL;
    v23[1] = a3;
    v23[0] = (v9 << 28) | 0x2000000u;
    LOBYTE(v24) = (v3 & 4) != 0;
    BYTE1(v24) = (v3 & 2) != 0;
    v17 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD *))DpiDxgkDdiDisplayDetectControl)(
            v6,
            *(_QWORD *)(v6 + 40),
            *(_QWORD *)(v6 + 48),
            v23);
    v11 = v17;
    if ( v17 < 0 )
    {
      v19 = WdLogNewEntry5_WdError(v18);
      *(_QWORD *)(v19 + 24) = *(_QWORD *)(*(_QWORD *)(v6 + 40) + 1128LL);
      *(_QWORD *)(v19 + 32) = v11;
      WdLogEvent5_WdError(v19);
    }
    ExReleaseResourceLite((PERESOURCE)(v6 + 3168));
    KeLeaveCriticalRegion();
    *(_BYTE *)(v6 + 3377) = 0;
  }
  else
  {
    ExReleaseResourceLite((PERESOURCE)(v6 + 3168));
    KeLeaveCriticalRegion();
    LODWORD(v11) = 1075708985;
    v16 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
    v16[3] = DpiFdoInvalidateChildRelations;
    v16[4] = *(int *)(v6 + 3384);
    v16[5] = v8;
    v16[6] = v3;
    v16[7] = 1075708985LL;
  }
  memset(v26, 0, 0x48uLL);
  v20 = *(_QWORD *)(v6 + 2536);
  v21 = DxgkDiagCalcDuration1us(&v25);
  memset(&v26[1], 0, 36);
  v26[0] = 0x480000001ELL;
  LODWORD(v26[6]) = 37;
  HIDWORD(v26[6]) = v9 | v5 & 0xFFFF00;
  v26[7] = __PAIR64__(v11, v21);
  v26[8] = v20;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v26);
  return (unsigned int)v11;
}
