/*
 * XREFs of ?HampManagerInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180038014
 * Callers:
 *     ?RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180037CC4 (-RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     CemRcTableInitialize @ 0x18002A2D0 (CemRcTableInitialize.c)
 *     ?HampSystemIsLegacyHangReportingEnabled@@YAKXZ @ 0x180041878 (-HampSystemIsLegacyHangReportingEnabled@@YAKXZ.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 *     CempLockInitialize @ 0x18006AAEC (CempLockInitialize.c)
 */

void __fastcall HampManagerInitialize(struct _HOST_ACTIVITY_MANAGER *a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  char IsLegacyHangReportingEnabled; // al

  memset(HampNextHandleValues, 0xFFu, sizeof(HampNextHandleValues));
  memset_0(a1, 0, 0x298uLL);
  RtlInitializeSRWLock(a1);
  *((_DWORD *)a1 + 2) = 0;
  v2 = (_QWORD *)((char *)a1 + 16);
  v3 = 6LL;
  do
  {
    v2[1] = v2;
    *v2 = v2;
    v2 += 2;
    --v3;
  }
  while ( v3 );
  CemRcTableInitialize((__int64)HampActDestroy, (_QWORD *)a1 + 25);
  memset_0((char *)a1 + 112, 0, 0x58uLL);
  CemRcTableInitialize((__int64)HampSessionDestroy, (_QWORD *)a1 + 19);
  *((_QWORD *)a1 + 33) = (char *)a1 + 256;
  *((_QWORD *)a1 + 32) = (char *)a1 + 256;
  memset_0((char *)a1 + 336, 0, 0x38uLL);
  *((_QWORD *)a1 + 42) = a1;
  *((_DWORD *)a1 + 93) = 300000;
  *((_DWORD *)a1 + 94) = 600000;
  memset_0((char *)a1 + 504, 0, 0x68uLL);
  CempLockInitialize((char *)a1 + 512);
  memset_0((char *)a1 + 528, 0, 0x20uLL);
  *((_QWORD *)a1 + 66) = (char *)a1 + 504;
  *((_QWORD *)a1 + 67) = 0LL;
  *((_QWORD *)a1 + 68) = 0LL;
  *((_QWORD *)a1 + 71) = (char *)a1 + 560;
  *((_QWORD *)a1 + 70) = (char *)a1 + 560;
  *((_QWORD *)a1 + 63) = a1;
  memset_0((char *)a1 + 296, 0, 0x20uLL);
  memset_0((char *)a1 + 392, 0, 0x70uLL);
  *((_QWORD *)a1 + 49) = a1;
  CemRcTableInitialize((__int64)HampWakeContextDestroy, (_QWORD *)a1 + 53);
  *((_QWORD *)a1 + 59) = 0LL;
  *((_QWORD *)a1 + 60) = 0LL;
  CempLockInitialize((char *)a1 + 408);
  *((_DWORD *)a1 + 122) = 10000;
  *((_DWORD *)a1 + 123) = 10000;
  *((_OWORD *)a1 + 38) = xmmword_18007B568;
  *((_OWORD *)a1 + 39) = xmmword_18007B578;
  *((_QWORD *)a1 + 80) = 0x3E8FFFFFFFFLL;
  IsLegacyHangReportingEnabled = HampSystemIsLegacyHangReportingEnabled();
  *((_DWORD *)a1 + 164) &= ~1u;
  *((_DWORD *)a1 + 164) |= IsLegacyHangReportingEnabled & 1;
}
