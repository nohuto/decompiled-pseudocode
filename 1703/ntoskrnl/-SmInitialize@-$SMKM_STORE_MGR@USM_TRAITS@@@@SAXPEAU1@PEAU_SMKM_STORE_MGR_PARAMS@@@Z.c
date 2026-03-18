/*
 * XREFs of ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x140164854
 * Callers:
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x14012E500 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     SmGlobalsInitialize @ 0x14081FBB8 (SmGlobalsInitialize.c)
 * Callees:
 *     ExInitializePushLock @ 0x140023310 (ExInitializePushLock.c)
 *     InitializeSListHead @ 0x14012F490 (InitializeSListHead.c)
 *     memset @ 0x140192D80 (memset.c)
 *     SmKmInitialize @ 0x1405CC798 (SmKmInitialize.c)
 */

void (__fastcall *__fastcall SMKM_STORE_MGR<SM_TRAITS>::SmInitialize(__int64 a1, _OWORD *a2))(__int64 a1)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx
  void (__fastcall *result)(__int64); // rax
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  memset((void *)a1, 0, 0x730uLL);
  *(_OWORD *)(a1 + 1800) = *a2;
  SmKmInitialize(a1);
  *(_QWORD *)(a1 + 440) = 0LL;
  *(_QWORD *)(a1 + 448) = 0LL;
  *(_QWORD *)(a1 + 456) = 0LL;
  memset((void *)(a1 + 1400), 0, 0x70uLL);
  *(_WORD *)(a1 + 1408) = 1;
  *(_BYTE *)(a1 + 1410) = 6;
  *(_DWORD *)(a1 + 1412) = 0;
  *(_QWORD *)(a1 + 1424) = a1 + 1416;
  *(_QWORD *)(a1 + 1416) = a1 + 1416;
  memset((void *)(a1 + 1512), 0, 0x70uLL);
  *(_WORD *)(a1 + 1520) = 1;
  *(_BYTE *)(a1 + 1522) = 6;
  *(_DWORD *)(a1 + 1524) = 0;
  *(_QWORD *)(a1 + 1536) = a1 + 1528;
  *(_QWORD *)(a1 + 1528) = a1 + 1528;
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
  KeQueryPerformanceCounter(&PerformanceFrequency);
  *(_DWORD *)(a1 + 1824) = 10000 * PerformanceFrequency.QuadPart / 1000000;
  *(_QWORD *)(a1 + 1640) = 0LL;
  *(_BYTE *)(a1 + 1640) = 8;
  *(_QWORD *)(a1 + 1656) = a1 + 1648;
  *(_QWORD *)(a1 + 1648) = a1 + 1648;
  *(_QWORD *)(a1 + 1664) = 0LL;
  *(_QWORD *)(a1 + 1696) = 0LL;
  *(_QWORD *)(a1 + 1728) = SMKM_STORE_MGR<SM_TRAITS>::SmHighMemPriorityWatchdogDpc;
  result = SMKM_STORE_MGR<SM_TRAITS>::SmHighMemPriorityWatchdogWorker;
  *(_QWORD *)(a1 + 1760) = 0LL;
  *(_QWORD *)(a1 + 1720) = 0LL;
  *(_DWORD *)(a1 + 1704) = 275;
  *(_QWORD *)(a1 + 1736) = a1;
  *(_QWORD *)(a1 + 1792) = 0LL;
  *(_QWORD *)(a1 + 1768) = 0LL;
  *(_QWORD *)(a1 + 1784) = SMKM_STORE_MGR<SM_TRAITS>::SmHighMemPriorityWatchdogWorker;
  return result;
}
