/*
 * XREFs of WdipSemSqmLogInflightLimitExceededDataPoints @ 0x14052DB58
 * Callers:
 *     WdipTimeoutCheckRoutine @ 0x14052DCB0 (WdipTimeoutCheckRoutine.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     WdipSemFastFree @ 0x14060CB80 (WdipSemFastFree.c)
 *     WdipSemGetGuidKey @ 0x1407A1E48 (WdipSemGetGuidKey.c)
 *     WdipSemSqmAddToStream @ 0x1407A2004 (WdipSemSqmAddToStream.c)
 *     WdipSemSqmIncrementDword @ 0x1407A21C0 (WdipSemSqmIncrementDword.c)
 */

__int64 WdipSemSqmLogInflightLimitExceededDataPoints()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // edi
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rbx
  unsigned int i; // esi
  _QWORD *v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rbx
  int v11; // [rsp+20h] [rbp-28h] BYREF
  _DWORD v12[4]; // [rsp+28h] [rbp-20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v11 = 0;
  v1 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403A2DA8, 0LL);
  v5 = (unsigned int)dword_1403A2DA0;
  if ( dword_1403A2DA0 )
  {
    v1 = WdipSemSqmIncrementDword(v2, (unsigned int)dword_1403A2DA0);
    if ( v1 < 0 )
      v1 = 0;
    if ( (_DWORD)v5 )
    {
      v8 = WdipSemFrequentScenarioTable;
      do
      {
        v9 = *v8;
        if ( (int)WdipSemGetGuidKey(*v8, &v11) >= 0 )
        {
          v12[0] = v11;
          v12[1] = *(unsigned __int16 *)(v9 + 16);
          v12[2] = *(_DWORD *)(v9 + 20);
          v1 = WdipSemSqmAddToStream(1062LL, 3LL, v12);
          if ( v1 < 0 )
            v1 = 0;
        }
        else
        {
          v1 = 0;
        }
        ++v8;
        --v5;
      }
      while ( v5 );
    }
  }
  for ( i = 0; i < dword_1403A2DA0; WdipSemFrequentScenarioTable[v10] = 0LL )
  {
    v10 = i;
    WdipSemFastFree(5LL, WdipSemFrequentScenarioTable[i++]);
  }
  dword_1403A2DA0 = 0;
  ExReleasePushLockEx((ULONG_PTR)&qword_1403A2DA8, 0LL, v3, v4);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v1;
}
