/*
 * XREFs of DpiFdoInvalidateChildRelations @ 0x1C0118F60
 * Callers:
 *     DpiFdoSetAdapterPowerState @ 0x1C0100CC8 (DpiFdoSetAdapterPowerState.c)
 *     DpiFdoHandleSystemPower @ 0x1C01011E8 (DpiFdoHandleSystemPower.c)
 *     DxgkPowerOnOffMonitor @ 0x1C0103C58 (DxgkPowerOnOffMonitor.c)
 *     DpiFdoCreateRelatedObjects @ 0x1C0118E70 (DpiFdoCreateRelatedObjects.c)
 *     DpiFdoHandleQueryDeviceRelations @ 0x1C011AED0 (DpiFdoHandleQueryDeviceRelations.c)
 *     DpiPollDisplayChildren @ 0x1C01DBF3C (DpiPollDisplayChildren.c)
 *     DpiFdoInvalidateChildWorkItem @ 0x1C01DE960 (DpiFdoInvalidateChildWorkItem.c)
 *     DpiAcpiProcessEventRequests @ 0x1C01E696C (DpiAcpiProcessEventRequests.c)
 * Callees:
 *     DxgkDiagCalcDuration1us @ 0x1C0012764 (DxgkDiagCalcDuration1us.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00D2FA0 (DxgkWriteDiagEntry.c)
 *     DpiDxgkDdiDisplayDetectControl @ 0x1C011917C (DpiDxgkDdiDisplayDetectControl.c)
 */

__int64 __fastcall DpiFdoInvalidateChildRelations(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // r15
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rbx
  int v9; // r13d
  int v10; // ecx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rbx
  unsigned int v15; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // rax
  _QWORD v21[2]; // [rsp+20h] [rbp-59h] BYREF
  __int64 v22; // [rsp+30h] [rbp-49h]
  __int64 v23; // [rsp+38h] [rbp-41h] BYREF
  _QWORD v24[10]; // [rsp+40h] [rbp-39h] BYREF

  v4 = a2;
  ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*(_QWORD *)(a1 + 64) + 168LL));
  v6 = *(_QWORD *)(a1 + 64);
  v23 = MEMORY[0xFFFFF78000000320];
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(v6 + 3168), 1u);
  v7 = MEMORY[0xFFFFF78000000320];
  v8 = KeQueryTimeIncrement() * v7;
  v9 = v4 & 1;
  v10 = (v4 & 0xFFFFFFFE) - 1;
  if ( (v4 & 1) == 0 )
    v10 = v4 & 0xFFFFFFFE;
  if ( *(_DWORD *)(v6 + 3384) < v10 || v8 - *(_QWORD *)(v6 + 3392) >= 10000000 )
  {
    *(_DWORD *)(v6 + 3384) = v10;
    *(_QWORD *)(v6 + 3392) = v8;
    v22 = 0x10000LL;
    v21[1] = a3;
    v21[0] = (unsigned int)(v9 << 28) | 0x2000000LL;
    LOBYTE(v22) = (v4 & 4) != 0;
    BYTE1(v22) = (v4 & 2) != 0;
    v11 = DpiDxgkDdiDisplayDetectControl(v6, *(_QWORD *)(v6 + 40), *(_QWORD *)(v6 + 48), v21);
    v13 = v11;
    if ( v11 < 0 )
    {
      v20 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v20 + 24) = *(_QWORD *)(*(_QWORD *)(v6 + 40) + 1128LL);
      *(_QWORD *)(v20 + 32) = v13;
      WdLogEvent5_WdError(v20);
    }
    ExReleaseResourceLite((PERESOURCE)(v6 + 3168));
    KeLeaveCriticalRegion();
    *(_BYTE *)(v6 + 3377) = 0;
  }
  else
  {
    ExReleaseResourceLite((PERESOURCE)(v6 + 3168));
    KeLeaveCriticalRegion();
    LODWORD(v13) = 1075708985;
    v19 = (_QWORD *)WdLogNewEntry5_WdTrace(v18, v17);
    v19[3] = DpiFdoInvalidateChildRelations;
    v19[4] = *(int *)(v6 + 3384);
    v19[5] = v8;
    v19[6] = v4;
    v19[7] = 1075708985LL;
  }
  memset(v24, 0, 0x48uLL);
  v14 = *(_QWORD *)(v6 + 2536);
  v15 = DxgkDiagCalcDuration1us(&v23);
  memset(&v24[1], 0, 36);
  v24[0] = 0x480000001ELL;
  LODWORD(v24[6]) = 37;
  HIDWORD(v24[6]) = v9 | a1 & 0xFFFF00;
  v24[7] = __PAIR64__(v13, v15);
  v24[8] = v14;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v24);
  return (unsigned int)v13;
}
