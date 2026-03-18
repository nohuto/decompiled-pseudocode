/*
 * XREFs of ?LookUpAndRemove@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z @ 0x1C02B8C34
 * Callers:
 *     Win32FreePoolImpl @ 0x1C00D3F90 (Win32FreePoolImpl.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C010C994 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 * Callees:
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     ?Wait@CPlatformSingleWatierSignal@NSInstrumentation@@QEAAXXZ @ 0x1C02B84A0 (-Wait@CPlatformSingleWatierSignal@NSInstrumentation@@QEAAXXZ.c)
 *     ?LowerBound@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEBA_KAEBQEAX@Z @ 0x1C02B8D34 (-LowerBound@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEBA_KAEBQEAX@Z.c)
 */

char __fastcall NSInstrumentation::CSortedVector<void *,void *>::LookUpAndRemove(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  char v6; // di
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rdx
  __int64 v10; // rcx

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a1, 0LL);
  v6 = 1;
  _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 16), 0, 1);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 28), 1u);
  if ( *(_DWORD *)(a1 + 24) )
    NSInstrumentation::CPlatformSingleWatierSignal::Wait((NSInstrumentation::CPlatformSingleWatierSignal *)(a1 + 8));
  v7 = *(_QWORD *)(a1 + 40);
  if ( !v7 )
    goto LABEL_9;
  v8 = NSInstrumentation::CSortedVector<void *,void *>::LowerBound(a1, a2);
  if ( v8 >= v7 || (v9 = (_QWORD *)(16 * v8 + *(_QWORD *)(a1 + 48)), *v9 != *a2) )
    v9 = 0LL;
  if ( v9 )
  {
    *a3 = v9[1];
    v10 = *(_QWORD *)(a1 + 48);
    memmove(
      (void *)(16 * (((__int64)v9 - v10) >> 4) + v10),
      (const void *)(16 * (((__int64)v9 - v10) >> 4) + v10 + 16),
      16 * (*(_QWORD *)(a1 + 40) - (((__int64)v9 - v10) >> 4)) - 16);
    --*(_QWORD *)(a1 + 40);
  }
  else
  {
LABEL_9:
    v6 = 0;
  }
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 28));
  ExReleasePushLockExclusiveEx(a1, 0LL);
  KeLeaveCriticalRegion();
  return v6;
}
