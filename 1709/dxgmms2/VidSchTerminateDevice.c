/*
 * XREFs of VidSchTerminateDevice @ 0x1C00709F0
 * Callers:
 *     VidSchiCreateDeviceInternal @ 0x1C0070C1C (VidSchiCreateDeviceInternal.c)
 *     VidSchTerminateAdapter @ 0x1C00B5480 (VidSchTerminateAdapter.c)
 * Callees:
 *     VidSchiDecrementDeviceReference @ 0x1C000EC50 (VidSchiDecrementDeviceReference.c)
 *     ?DdiDestroyDevice@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C0020644 (-DdiDestroyDevice@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 *     McTemplateK0ppqpttq @ 0x1C00260AC (McTemplateK0ppqpttq.c)
 *     VidSchFlushDevice @ 0x1C0070780 (VidSchFlushDevice.c)
 *     VidSchiCloseProcessAdapterInfo @ 0x1C0070ADC (VidSchiCloseProcessAdapterInfo.c)
 *     VidSchControlVSyncDevice @ 0x1C0071270 (VidSchControlVSyncDevice.c)
 */

__int64 __fastcall VidSchTerminateDevice(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v7; // rax
  void *v8; // rdx
  unsigned int v9; // ebx
  __int64 v10; // r8
  HANDLE CurrentProcessId; // r9
  unsigned int v12; // [rsp+40h] [rbp-28h]
  _QWORD v13[2]; // [rsp+50h] [rbp-18h] BYREF

  if ( a1 )
  {
    v3 = *(_QWORD *)(a1 + 32);
    ExAcquireResourceExclusiveLite((PERESOURCE)(v3 + 2704), 1u);
    _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1304), 1, 0);
    ExReleaseResourceLite((PERESOURCE)(v3 + 2704));
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
          v9 = *(_DWORD *)(a1 + 48);
          CurrentProcessId = PsGetCurrentProcessId();
          if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          {
            v12 = (v9 >> 2) & 1;
            McTemplateK0ppqpttq(
              v12,
              &EventDestroyDevice,
              v10,
              CurrentProcessId,
              *(_QWORD *)(v3 + 16),
              -1,
              a1,
              (v9 >> 1) & 1,
              v12);
          }
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
