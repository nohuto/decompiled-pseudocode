/*
 * XREFs of UninitializeWin32PoolTracking @ 0x1C01160E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Destroy@CLeakTrackingAllocator@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C0116144 (-Destroy@CLeakTrackingAllocator@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Empty@CLeakTrackingAllocator@NSInstrumentation@@QEAA_NXZ @ 0x1C0116268 (-Empty@CLeakTrackingAllocator@NSInstrumentation@@QEAA_NXZ.c)
 *     ?FreeAll@CLeakTrackingAllocator@NSInstrumentation@@QEAAXXZ @ 0x1C02B27A4 (-FreeAll@CLeakTrackingAllocator@NSInstrumentation@@QEAAXXZ.c)
 */

__int64 __fastcall UninitializeWin32PoolTracking(NSInstrumentation::CLeakTrackingAllocator *a1)
{
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C v1; // rbx
  unsigned int v2; // edi
  struct NSInstrumentation::CLeakTrackingAllocator *v3; // rcx
  unsigned int v5; // esi
  PVOID PoolWithTag; // rax
  NSInstrumentation::CLeakTrackingAllocator *v7; // rcx
  void *v8; // r14
  void *v9; // rcx
  int v10; // [rsp+90h] [rbp+30h] BYREF
  __int64 v11; // [rsp+98h] [rbp+38h] BYREF
  __int64 v12; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v13; // [rsp+A8h] [rbp+48h] BYREF

  v1 = WPP_MAIN_CB.DeviceQueue.1;
  v2 = 0;
  if ( WPP_MAIN_CB.DeviceQueue.1 )
  {
    if ( !NSInstrumentation::CLeakTrackingAllocator::Empty(a1) )
    {
      v5 = *(_DWORD *)(*(_QWORD *)&v1 + 44LL);
      v2 = 1;
      PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 4 * v5, 0x746C7355u);
      v8 = PoolWithTag;
      if ( PoolWithTag )
      {
        if ( (int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))Win32ExtractSessionPoolTagInfo)(
                    gSessionId,
                    PoolWithTag,
                    v5,
                    &v10,
                    &v13,
                    &v12,
                    &v11,
                    v1,
                    v5) < 0 )
        {
          v13 = 0LL;
          v11 = 0LL;
          v12 = 0LL;
        }
        DbgkWerCaptureLiveKernelDump(L"win32k.sys", 171LL, gSessionId);
        ExFreePoolWithTag(v8, 0x746C7355u);
      }
      NSInstrumentation::CLeakTrackingAllocator::FreeAll(v7);
    }
    NSInstrumentation::CLeakTrackingAllocator::Destroy(v3);
    WPP_MAIN_CB.DeviceQueue.1 = 0LL;
  }
  if ( gSessionId == gServiceSessionId )
  {
    if ( gpxsGlobals )
    {
      v9 = (void *)*((_QWORD *)gpxsGlobals + 5);
      if ( v9 )
      {
        ExFreePoolWithTag(v9, 0);
        *((_QWORD *)gpxsGlobals + 5) = 0LL;
      }
    }
  }
  return v2;
}
