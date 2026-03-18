/*
 * XREFs of VidSchTerminateDevice @ 0x1C0078CB0
 * Callers:
 *     VidSchiCreateDeviceInternal @ 0x1C0057A8C (VidSchiCreateDeviceInternal.c)
 *     VidSchTerminateAdapter @ 0x1C00BE350 (VidSchTerminateAdapter.c)
 * Callees:
 *     VidSchiDecrementDeviceReference @ 0x1C0012CAC (VidSchiDecrementDeviceReference.c)
 *     ?DdiDestroyDevice@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C0022B90 (-DdiDestroyDevice@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 *     McTemplateK0ppqpttq @ 0x1C0028CE0 (McTemplateK0ppqpttq.c)
 *     VidSchControlVSyncDevice @ 0x1C0056E00 (VidSchControlVSyncDevice.c)
 *     VidSchFlushDevice @ 0x1C0078E70 (VidSchFlushDevice.c)
 *     VidSchiCloseProcessAdapterInfo @ 0x1C0079134 (VidSchiCloseProcessAdapterInfo.c)
 */

__int64 __fastcall VidSchTerminateDevice(char *P, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v5; // rax
  void *v6; // rdx
  unsigned int v7; // ebx
  __int64 v8; // r8
  HANDLE CurrentProcessId; // r9
  unsigned int v10; // [rsp+40h] [rbp-28h]

  if ( P )
  {
    v3 = *((_QWORD *)P + 4);
    ExAcquireResourceExclusiveLite((PERESOURCE)(v3 + 2728), 1u);
    _InterlockedCompareExchange((volatile signed __int32 *)P + 332, 1, 0);
    ExReleaseResourceLite((PERESOURCE)(v3 + 2728));
    VidSchFlushDevice((int)P);
    if ( (*((_DWORD *)P + 12) & 1) != 0 )
    {
      v6 = (void *)*((_QWORD *)P + 2);
      if ( v6 )
      {
        ADAPTER_RENDER::DdiDestroyDevice(*(ADAPTER_RENDER **)(v3 + 8), v6);
        *((_QWORD *)P + 2) = 0LL;
        if ( bTracingEnabled )
        {
          v7 = *((_DWORD *)P + 12);
          CurrentProcessId = PsGetCurrentProcessId();
          if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          {
            v10 = (v7 >> 2) & 1;
            McTemplateK0ppqpttq(
              v10,
              &EventDestroyDevice,
              v8,
              CurrentProcessId,
              *(_QWORD *)(v3 + 16),
              -1,
              P,
              (v7 >> 1) & 1,
              v10);
          }
        }
      }
    }
    if ( *((_DWORD *)P + 264) )
    {
      *((_DWORD *)P + 264) = 1;
      VidSchControlVSyncDevice((__int64)P, 4LL, 0);
    }
    if ( P[224] )
      VidSchiCloseProcessAdapterInfo(*((_QWORD *)P + 5), v3);
    ExDeleteResourceLite((PERESOURCE)(P + 952));
    VidSchiDecrementDeviceReference(P, 0);
    return 0LL;
  }
  else
  {
    v5 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v5 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v5);
    return 3221225485LL;
  }
}
