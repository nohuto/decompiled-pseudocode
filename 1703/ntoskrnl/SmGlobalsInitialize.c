/*
 * XREFs of SmGlobalsInitialize @ 0x14081FBB8
 * Callers:
 *     SmInitSystem @ 0x14081FACC (SmInitSystem.c)
 * Callees:
 *     ExInitializePushLock @ 0x140023310 (ExInitializePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x14010EFC0 (ExWaitForRundownProtectionRelease.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x140164854 (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     memset @ 0x140192D80 (memset.c)
 *     SmRegistrationCtxInitialize @ 0x14045EF70 (SmRegistrationCtxInitialize.c)
 */

__int64 __fastcall SmGlobalsInitialize(__int64 a1)
{
  struct _EX_RUNDOWN_REF *v2; // rbx
  __int64 v3; // rsi
  __int64 result; // rax
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  memset((void *)a1, 0, 0xB40uLL);
  *(_QWORD *)&v5 = 59LL;
  *((_QWORD *)&v5 + 1) = PsGetHostSilo;
  SMKM_STORE_MGR<SM_TRAITS>::SmInitialize(a1, &v5);
  *(_QWORD *)(a1 + 1920) = 0LL;
  SmKmGlobals = PsInitialSystemProcess;
  memset((void *)(a1 + 1960), 0, 0x28uLL);
  *(_QWORD *)(a1 + 1960) = 0LL;
  *(_QWORD *)(a1 + 1968) = 0LL;
  *(_QWORD *)(a1 + 1976) = 0LL;
  *(_DWORD *)(a1 + 2000) = -1;
  *(_QWORD *)(a1 + 2008) = 0LL;
  *(_BYTE *)(a1 + 1928) = 5;
  memset((void *)(a1 + 2016), 0, 0x230uLL);
  v2 = (struct _EX_RUNDOWN_REF *)(a1 + 2024);
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
  memset((void *)(a1 + 2528), 0, 0x28uLL);
  *(_QWORD *)(a1 + 2528) = 0LL;
  *(_QWORD *)(a1 + 2544) = a1 + 2536;
  *(_QWORD *)(a1 + 2536) = a1 + 2536;
  SmRegistrationCtxInitialize((_QWORD *)(a1 + 2576));
  *(_QWORD *)(a1 + 2592) = 0LL;
  *(_QWORD *)(a1 + 2600) = 0LL;
  *(_QWORD *)(a1 + 2584) = 0LL;
  memset((void *)(a1 + 2608), 0, 0x70uLL);
  *(_WORD *)(a1 + 2616) = 1;
  *(_BYTE *)(a1 + 2618) = 6;
  *(_DWORD *)(a1 + 2620) = 0;
  *(_QWORD *)(a1 + 2632) = a1 + 2624;
  *(_QWORD *)(a1 + 2624) = a1 + 2624;
  memset((void *)(a1 + 2720), 0, 0x70uLL);
  result = a1 + 2736;
  *(_WORD *)(a1 + 2728) = 1;
  *(_BYTE *)(a1 + 2730) = 6;
  *(_DWORD *)(a1 + 2732) = 0;
  *(_QWORD *)(a1 + 2744) = a1 + 2736;
  *(_QWORD *)(a1 + 2736) = a1 + 2736;
  *(_DWORD *)(a1 + 2864) = 3;
  return result;
}
