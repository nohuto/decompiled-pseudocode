/*
 * XREFs of VidSchTerminateDevice @ 0x1C006BEF0
 * Callers:
 *     VidSchiCreateDeviceInternal @ 0x1C006C10C (VidSchiCreateDeviceInternal.c)
 *     VidSchTerminateAdapter @ 0x1C00ACAA0 (VidSchTerminateAdapter.c)
 * Callees:
 *     VidSchiDecrementDeviceReference @ 0x1C00103AC (VidSchiDecrementDeviceReference.c)
 *     ?DdiDestroyDevice@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C001E8E4 (-DdiDestroyDevice@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 *     Template_ppqpttq @ 0x1C0024030 (Template_ppqpttq.c)
 *     VidSchFlushDevice @ 0x1C004EE80 (VidSchFlushDevice.c)
 *     VidSchiCloseProcessAdapterInfo @ 0x1C006BFE4 (VidSchiCloseProcessAdapterInfo.c)
 *     VidSchControlVSyncDevice @ 0x1C006C630 (VidSchControlVSyncDevice.c)
 */

__int64 __fastcall VidSchTerminateDevice(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v7; // rax
  void *v8; // rdx
  bool v9; // bp
  bool v10; // bl
  HANDLE CurrentProcessId; // rax
  __int64 v12; // r8
  _QWORD v13[2]; // [rsp+50h] [rbp-18h] BYREF

  if ( a1 )
  {
    v3 = *(_QWORD *)(a1 + 32);
    ExAcquireResourceExclusiveLite((PERESOURCE)(v3 + 2688), 1u);
    _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1304), 1, 0);
    ExReleaseResourceLite((PERESOURCE)(v3 + 2688));
    v13[0] = 13LL;
    v13[1] = 0LL;
    VidSchFlushDevice(a1, (int *)v13, v4, v5);
    if ( (*(_DWORD *)(a1 + 48) & 1) != 0 )
    {
      v8 = *(void **)(a1 + 16);
      if ( v8 )
      {
        ADAPTER_RENDER::DdiDestroyDevice(*(ADAPTER_RENDER **)(v3 + 8), v8);
        *(_QWORD *)(a1 + 16) = 0LL;
        if ( bTracingEnabled )
        {
          v9 = (*(_DWORD *)(a1 + 48) & 4) != 0;
          v10 = (*(_DWORD *)(a1 + 48) & 2) != 0;
          CurrentProcessId = PsGetCurrentProcessId();
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            Template_ppqpttq(
              *(_QWORD *)(v3 + 16),
              &EventDestroyDevice,
              v12,
              CurrentProcessId,
              *(_QWORD *)(v3 + 16),
              -1,
              a1,
              v10,
              v9);
        }
      }
    }
    if ( *(_DWORD *)(a1 + 1032) )
    {
      *(_DWORD *)(a1 + 1032) = 1;
      VidSchControlVSyncDevice(a1, 4LL, 0LL);
    }
    if ( *(_BYTE *)(a1 + 200) )
      VidSchiCloseProcessAdapterInfo(*(_QWORD *)(a1 + 40), v3);
    ExDeleteResourceLite((PERESOURCE)(a1 + 928));
    VidSchiDecrementDeviceReference((char *)a1, 0);
    return 0LL;
  }
  else
  {
    v7 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v7);
    return 3221225485LL;
  }
}
