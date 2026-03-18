/*
 * XREFs of SmGlobalsInitialize @ 0x140850418
 * Callers:
 *     SmInitSystem @ 0x14085032C (SmInitSystem.c)
 * Callees:
 *     ExInitializePushLock @ 0x140025A30 (ExInitializePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x1400A9850 (ExWaitForRundownProtectionRelease.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x140155CBC (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     memset @ 0x140192F40 (memset.c)
 *     SmRegistrationCtxInitialize @ 0x14059F620 (SmRegistrationCtxInitialize.c)
 */

__int64 __fastcall SmGlobalsInitialize(__int64 a1)
{
  struct _EX_RUNDOWN_REF *v2; // rbx
  __int64 v3; // rsi
  __int64 result; // rax
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  memset((void *)a1, 0, 0xB50uLL);
  *(_QWORD *)&v5 = 59LL;
  *((_QWORD *)&v5 + 1) = PsGetHostSilo;
  SMKM_STORE_MGR<SM_TRAITS>::SmInitialize(a1, &v5);
  *(_QWORD *)(a1 + 1936) = 0LL;
  SmKmGlobals = PsInitialSystemProcess;
  memset((void *)(a1 + 1976), 0, 0x28uLL);
  *(_QWORD *)(a1 + 1976) = 0LL;
  *(_QWORD *)(a1 + 1984) = 0LL;
  *(_QWORD *)(a1 + 1992) = 0LL;
  *(_DWORD *)(a1 + 2016) = -1;
  *(_QWORD *)(a1 + 2024) = 0LL;
  *(_BYTE *)(a1 + 1944) = 5;
  memset((void *)(a1 + 2032), 0, 0x230uLL);
  v2 = (struct _EX_RUNDOWN_REF *)(a1 + 2040);
  v3 = 16LL;
  do
  {
    ExInitializePushLock(&v2->Count);
    ExWaitForRundownProtectionRelease(v2);
    v2[1].Count = 0LL;
    v2 += 4;
    --v3;
  }
  while ( v3 );
  memset((void *)(a1 + 2544), 0, 0x28uLL);
  *(_QWORD *)(a1 + 2544) = 0LL;
  *(_QWORD *)(a1 + 2560) = a1 + 2552;
  *(_QWORD *)(a1 + 2552) = a1 + 2552;
  SmRegistrationCtxInitialize((_QWORD *)(a1 + 2592));
  *(_QWORD *)(a1 + 2608) = 0LL;
  *(_QWORD *)(a1 + 2616) = 0LL;
  *(_QWORD *)(a1 + 2600) = 0LL;
  memset((void *)(a1 + 2624), 0, 0x70uLL);
  *(_WORD *)(a1 + 2632) = 1;
  *(_BYTE *)(a1 + 2634) = 6;
  *(_DWORD *)(a1 + 2636) = 0;
  *(_QWORD *)(a1 + 2648) = a1 + 2640;
  *(_QWORD *)(a1 + 2640) = a1 + 2640;
  memset((void *)(a1 + 2736), 0, 0x70uLL);
  result = a1 + 2752;
  *(_WORD *)(a1 + 2744) = 1;
  *(_BYTE *)(a1 + 2746) = 6;
  *(_DWORD *)(a1 + 2748) = 0;
  *(_QWORD *)(a1 + 2760) = a1 + 2752;
  *(_QWORD *)(a1 + 2752) = a1 + 2752;
  *(_DWORD *)(a1 + 2880) = 3;
  return result;
}
