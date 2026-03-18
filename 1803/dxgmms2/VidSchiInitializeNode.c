/*
 * XREFs of VidSchiInitializeNode @ 0x1C007BE30
 * Callers:
 *     VidSchInitializeAdapter @ 0x1C007B520 (VidSchInitializeAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ?DdiSetupPriorityBands@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETUPPRIORITYBANDS@@@Z @ 0x1C0022CB0 (-DdiSetupPriorityBands@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETUPPRIORITYBANDS@@@Z.c)
 */

__int64 __fastcall VidSchiInitializeNode(__int64 a1)
{
  __int64 v1; // r14
  __int64 v3; // rax
  PVOID PoolWithTag; // rax
  __int64 v5; // rdi
  SIZE_T v6; // rdx
  PVOID v7; // rax
  __int64 result; // rax
  unsigned int i; // esi
  unsigned int j; // esi
  unsigned int k; // esi
  UINT v12; // eax
  ADAPTER_RENDER *v13; // rcx
  _DXGKARG_SETUPPRIORITYBANDS v14; // [rsp+20h] [rbp-98h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  v3 = *(unsigned int *)(v1 + 200);
  *(_DWORD *)(a1 + 192) = v3;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 112 * v3, 0x68536956u);
  v5 = 0LL;
  *(_QWORD *)(a1 + 184) = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  memset(PoolWithTag, 0, 112LL * *(unsigned int *)(a1 + 192));
  v6 = 88LL * *(unsigned int *)(v1 + 200);
  *(_DWORD *)(a1 + 208) = *(_DWORD *)(v1 + 200);
  v7 = ExAllocatePoolWithTag((POOL_TYPE)512, v6, 0x68536956u);
  *(_QWORD *)(a1 + 200) = v7;
  if ( !v7 )
    return 3221225495LL;
  memset(v7, 0, 88LL * *(unsigned int *)(a1 + 208));
  if ( (*(_DWORD *)(a1 + 12) & 2) == 0 )
    return 0LL;
  InitializeSListHead((PSLIST_HEADER)(a1 + 2848));
  for ( i = 0;
        i < 0x40;
        ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 2848), (PSLIST_ENTRY)(48LL * (int)i++ + a1 + 2864)) )
  {
    ;
  }
  InitializeSListHead((PSLIST_HEADER)(a1 + 5936));
  for ( j = 0; j < 2; ExpInterlockedPushEntrySList(
                        (PSLIST_HEADER)(a1 + 5936),
                        (PSLIST_ENTRY)(a1 + 48 * ((int)j++ + 124LL))) )
    ;
  InitializeSListHead((PSLIST_HEADER)(a1 + 6048));
  for ( k = 0; k < 2; ExpInterlockedPushEntrySList(
                        (PSLIST_HEADER)(a1 + 6048),
                        (PSLIST_ENTRY)(48LL * (int)k++ + a1 + 6064)) )
    ;
  memset(&v14, 0, sizeof(v14));
  do
  {
    v14.processQuantumForBand[v5] = 50000LL;
    v14.processGracePeriodForBand[v5++] = 20000LL;
  }
  while ( v5 < 2 );
  v14.processQuantumForBand[3] = 20000LL;
  v14.gracePeriodForBand[2] = 10000LL;
  v14.processQuantumForBand[2] = 10000LL;
  v12 = *(_DWORD *)(v1 + 184);
  v14.processGracePeriodForBand[3] = 50000LL;
  v13 = *(ADAPTER_RENDER **)(v1 + 8);
  v14.targetNormalBandPercentage = v12;
  v14.processGracePeriodForBand[2] = 30000LL;
  result = ADAPTER_RENDER::DdiSetupPriorityBands(v13, &v14);
  if ( (int)(result + 0x80000000) < 0 || (_DWORD)result == -1073741822 )
    return 0LL;
  return result;
}
