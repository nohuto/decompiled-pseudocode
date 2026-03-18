/*
 * XREFs of ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x140155CBC
 * Callers:
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x140005AC8 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     SmGlobalsInitialize @ 0x140850418 (SmGlobalsInitialize.c)
 * Callees:
 *     ExInitializePushLock @ 0x140025A30 (ExInitializePushLock.c)
 *     InitializeSListHead @ 0x1400B46E0 (InitializeSListHead.c)
 *     memset @ 0x140192F40 (memset.c)
 *     SmKmInitialize @ 0x1405E15E4 (SmKmInitialize.c)
 */

void (__fastcall *__fastcall SMKM_STORE_MGR<SM_TRAITS>::SmInitialize(__int64 a1, _OWORD *a2))(__int64 a1)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx
  void (__fastcall *result)(__int64); // rax
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  memset((void *)a1, 0, 0x740uLL);
  *(_OWORD *)(a1 + 1824) = *a2;
  SmKmInitialize(a1);
  *(_QWORD *)(a1 + 440) = 0LL;
  *(_QWORD *)(a1 + 448) = 0LL;
  *(_QWORD *)(a1 + 456) = 0LL;
  memset((void *)(a1 + 1424), 0, 0x70uLL);
  *(_WORD *)(a1 + 1432) = 1;
  *(_BYTE *)(a1 + 1434) = 6;
  *(_DWORD *)(a1 + 1436) = 0;
  *(_QWORD *)(a1 + 1448) = a1 + 1440;
  *(_QWORD *)(a1 + 1440) = a1 + 1440;
  memset((void *)(a1 + 1536), 0, 0x70uLL);
  *(_WORD *)(a1 + 1544) = 1;
  *(_BYTE *)(a1 + 1546) = 6;
  *(_DWORD *)(a1 + 1548) = 0;
  *(_QWORD *)(a1 + 1560) = a1 + 1552;
  *(_QWORD *)(a1 + 1552) = a1 + 1552;
  memset((void *)(a1 + 464), 0, 0x308uLL);
  v4 = (_QWORD *)(a1 + 464);
  v5 = 32LL;
  do
  {
    v4[1] = v4;
    *v4 = 0LL;
    v4 += 3;
    --v5;
  }
  while ( v5 );
  *(_QWORD *)(a1 + 1232) = 0LL;
  InitializeSListHead((PSLIST_HEADER)(a1 + 1248));
  memset((void *)(a1 + 1264), 0, 0x88uLL);
  *(_QWORD *)(a1 + 1280) = a1 + 1272;
  *(_QWORD *)(a1 + 1272) = 0LL;
  *(_QWORD *)(a1 + 1344) = a1 + 1336;
  *(_QWORD *)(a1 + 1336) = a1 + 1336;
  *(_WORD *)(a1 + 1288) = 1;
  *(_BYTE *)(a1 + 1290) = 6;
  *(_DWORD *)(a1 + 1292) = 0;
  *(_QWORD *)(a1 + 1304) = a1 + 1296;
  *(_QWORD *)(a1 + 1296) = a1 + 1296;
  *(_WORD *)(a1 + 1312) = 0;
  *(_BYTE *)(a1 + 1314) = 6;
  *(_DWORD *)(a1 + 1316) = 0;
  *(_QWORD *)(a1 + 1328) = a1 + 1320;
  *(_QWORD *)(a1 + 1320) = a1 + 1320;
  ExInitializePushLock((PKSPIN_LOCK)(a1 + 1384));
  *(_QWORD *)(a1 + 1368) = a1 + 1360;
  *(_QWORD *)(a1 + 1360) = 0LL;
  *(_DWORD *)(a1 + 1392) = 7;
  InitializeSListHead((PSLIST_HEADER)(a1 + 1408));
  KeQueryPerformanceCounter(&PerformanceFrequency);
  *(_DWORD *)(a1 + 1848) = 10000 * PerformanceFrequency.QuadPart / 1000000;
  *(_QWORD *)(a1 + 1664) = 0LL;
  *(_BYTE *)(a1 + 1664) = 8;
  *(_QWORD *)(a1 + 1680) = a1 + 1672;
  *(_QWORD *)(a1 + 1672) = a1 + 1672;
  *(_QWORD *)(a1 + 1688) = 0LL;
  *(_QWORD *)(a1 + 1720) = 0LL;
  *(_QWORD *)(a1 + 1752) = SMKM_STORE_MGR<SM_TRAITS>::SmHighMemPriorityWatchdogDpc;
  result = SMKM_STORE_MGR<SM_TRAITS>::SmHighMemPriorityWatchdogWorker;
  *(_QWORD *)(a1 + 1784) = 0LL;
  *(_QWORD *)(a1 + 1744) = 0LL;
  *(_DWORD *)(a1 + 1728) = 275;
  *(_QWORD *)(a1 + 1760) = a1;
  *(_QWORD *)(a1 + 1816) = 0LL;
  *(_QWORD *)(a1 + 1792) = 0LL;
  *(_QWORD *)(a1 + 1808) = SMKM_STORE_MGR<SM_TRAITS>::SmHighMemPriorityWatchdogWorker;
  return result;
}
