/*
 * XREFs of ?FreeAll@CLeakTrackingAllocator@NSInstrumentation@@QEAAXXZ @ 0x1C02B27A4
 * Callers:
 *     UninitializeWin32PoolTracking @ 0x1C01160E0 (UninitializeWin32PoolTracking.c)
 * Callees:
 *     ?Enumerate@CPointerHashTable@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z @ 0x1C003F8F4 (-Enumerate@CPointerHashTable@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z.c)
 *     ?Enumerate@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z @ 0x1C02B26DC (-Enumerate@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z.c)
 */

void __fastcall NSInstrumentation::CLeakTrackingAllocator::FreeAll(NSInstrumentation::CLeakTrackingAllocator *this)
{
  __int64 v1; // rbx
  NSInstrumentation::CPointerHashTable *v2; // rcx
  __int64 v3; // rcx

  v1 = (__int64)WPP_MAIN_CB.DeviceQueue.1;
  v2 = *(NSInstrumentation::CPointerHashTable **)(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.1 + 48LL);
  if ( v2 )
    NSInstrumentation::CPointerHashTable::Enumerate(
      v2,
      (void (*)(void *, void *, void *))NSInstrumentation::CLeakTrackingAllocator::CleanupCallback,
      *(void **)&WPP_MAIN_CB.DeviceQueue.32);
  v3 = *(_QWORD *)(v1 + 56);
  if ( v3 )
    NSInstrumentation::CSortedVector<void *,void *>::Enumerate(
      v3,
      (void (__fastcall *)(__int64, _QWORD, __int64))NSInstrumentation::CLeakTrackingAllocator::CleanupCallback,
      v1);
}
