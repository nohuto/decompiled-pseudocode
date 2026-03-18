/*
 * XREFs of DpiFdoInvalidateChildRelations @ 0x1C0112120
 * Callers:
 *     DpiFdoSetAdapterPowerState @ 0x1C0102954 (DpiFdoSetAdapterPowerState.c)
 *     DpiFdoHandleSystemPower @ 0x1C01032E4 (DpiFdoHandleSystemPower.c)
 *     DxgkPowerOnOffMonitor @ 0x1C0103FE8 (DxgkPowerOnOffMonitor.c)
 *     DpiFdoCreateRelatedObjects @ 0x1C0112030 (DpiFdoCreateRelatedObjects.c)
 *     DpiFdoHandleQueryDeviceRelations @ 0x1C0116260 (DpiFdoHandleQueryDeviceRelations.c)
 *     DpiPollDisplayChildren @ 0x1C01C2850 (DpiPollDisplayChildren.c)
 *     DpiAcpiProcessEventRequests @ 0x1C01CC590 (DpiAcpiProcessEventRequests.c)
 * Callees:
 *     DxgkDiagCalcDuration1us @ 0x1C0010B98 (DxgkDiagCalcDuration1us.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00F2CA0 (DxgkWriteDiagEntry.c)
 *     DpiDxgkDdiDisplayDetectControl @ 0x1C011233C (DpiDxgkDdiDisplayDetectControl.c)
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
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rbx
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v25; // rax
  __int64 v26; // rax
  _QWORD v27[2]; // [rsp+20h] [rbp-59h] BYREF
  __int64 v28; // [rsp+30h] [rbp-49h]
  __int64 v29; // [rsp+38h] [rbp-41h] BYREF
  _QWORD v30[10]; // [rsp+40h] [rbp-39h] BYREF

  v4 = a2;
  ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*(_QWORD *)(a1 + 64) + 168LL));
  v6 = *(_QWORD *)(a1 + 64);
  v29 = MEMORY[0xFFFFF78000000320];
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(v6 + 3144), 1u);
  v7 = MEMORY[0xFFFFF78000000320];
  v8 = KeQueryTimeIncrement() * v7;
  v9 = v4 & 1;
  v10 = (v4 & 0xFFFFFFFE) - 1;
  if ( (v4 & 1) == 0 )
    v10 = v4 & 0xFFFFFFFE;
  if ( *(_DWORD *)(v6 + 3360) < v10 || v8 - *(_QWORD *)(v6 + 3368) >= 10000000 )
  {
    *(_DWORD *)(v6 + 3360) = v10;
    *(_QWORD *)(v6 + 3368) = v8;
    v28 = 0x10000LL;
    v27[1] = a3;
    v27[0] = (unsigned int)(v9 << 28) | 0x2000000LL;
    LOBYTE(v28) = (v4 & 4) != 0;
    BYTE1(v28) = (v4 & 2) != 0;
    v11 = DpiDxgkDdiDisplayDetectControl(v6, *(_QWORD *)(v6 + 40), *(_QWORD *)(v6 + 48), v27);
    v14 = v11;
    if ( v11 < 0 )
    {
      v26 = WdLogNewEntry5_WdError(v13, v12);
      *(_QWORD *)(v26 + 24) = *(_QWORD *)(*(_QWORD *)(v6 + 40) + 1128LL);
      *(_QWORD *)(v26 + 32) = v14;
      WdLogEvent5_WdError(v26);
    }
    ExReleaseResourceLite((PERESOURCE)(v6 + 3144));
    KeLeaveCriticalRegion();
    *(_BYTE *)(v6 + 3353) = 0;
  }
  else
  {
    ExReleaseResourceLite((PERESOURCE)(v6 + 3144));
    KeLeaveCriticalRegion();
    LODWORD(v14) = 1075708985;
    v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v22, v21, v23, v24);
    v25[3] = DpiFdoInvalidateChildRelations;
    v25[4] = *(int *)(v6 + 3360);
    v25[5] = v8;
    v25[6] = v4;
    v25[7] = 1075708985LL;
  }
  memset(v30, 0, 0x48uLL);
  v15 = *(_QWORD *)(v6 + 2536);
  v16 = DxgkDiagCalcDuration1us(&v29);
  memset(&v30[1], 0, 36);
  v30[0] = 0x480000001ELL;
  LODWORD(v30[6]) = 37;
  HIDWORD(v30[6]) = v9 | a1 & 0xFFFF00;
  v30[7] = __PAIR64__(v14, v16);
  v30[8] = v15;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v30, v17, v18, v19);
  return (unsigned int)v14;
}
