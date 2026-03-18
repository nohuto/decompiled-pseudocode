/*
 * XREFs of VidSchiCreateDeviceInternal @ 0x1C0070C1C
 * Callers:
 *     VidSchCreateDevice @ 0x1C0070BE0 (VidSchCreateDevice.c)
 *     VidSchCreateSystemDevices @ 0x1C007C648 (VidSchCreateSystemDevices.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0002090 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     VidSchiInterlockedInsertTailList @ 0x1C00071A0 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiIncrementDeviceReference @ 0x1C000F00C (VidSchiIncrementDeviceReference.c)
 *     ?DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z @ 0x1C00168B4 (-DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     McTemplateK0ppqpttq @ 0x1C00260AC (McTemplateK0ppqpttq.c)
 *     VidSchTerminateDevice @ 0x1C00709F0 (VidSchTerminateDevice.c)
 *     VidSchiOpenProcessAdapterInfo @ 0x1C0070EA0 (VidSchiOpenProcessAdapterInfo.c)
 *     VidSchSetQueuedPresentLimit @ 0x1C0071160 (VidSchSetQueuedPresentLimit.c)
 *     VidSchiReadDeviceConfiguration @ 0x1C00711B8 (VidSchiReadDeviceConfiguration.c)
 *     VidSchControlVSyncDevice @ 0x1C0071270 (VidSchControlVSyncDevice.c)
 */

__int64 __fastcall VidSchiCreateDeviceInternal(__int64 a1, _DWORD *a2, __int64 a3, __int64 *a4)
{
  struct DXGPROCESS *Current; // rsi
  PVOID PoolWithTag; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int128 v12; // xmm0
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  int v16; // eax
  int v17; // edi
  __int64 v18; // r8
  __int64 v20; // rax
  ADAPTER_RENDER *v21; // rcx
  bool v22; // zf
  unsigned int v23; // esi
  HANDLE CurrentProcessId; // r9
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned int v27; // [rsp+40h] [rbp-48h]
  _DXGKARG_CREATEDEVICE v28; // [rsp+50h] [rbp-38h] BYREF

  *a4 = 0LL;
  if ( (*a2 & 1) != 0 )
  {
    Current = *(struct DXGPROCESS **)(g_pVidSchSystemProcess + 8);
  }
  else
  {
    if ( !a3 )
    {
      v25 = WdLogNewEntry5_WdWarning(a1);
      WdLogEvent5_WdWarning(v25);
      return 3221225485LL;
    }
    Current = DXGPROCESS::GetCurrent();
  }
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x528uLL, 0x68536956u);
  v11 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x528uLL);
    *(_DWORD *)v11 = 1986348118;
    *(_QWORD *)(v11 + 8) = a3;
    ExInitializeResourceLite((PERESOURCE)(v11 + 928));
    *(_QWORD *)(v11 + 32) = a1;
    v12 = *(_OWORD *)a2;
    *(_DWORD *)(v11 + 464) = -1;
    *(_OWORD *)(v11 + 48) = v12;
    VidSchiReadDeviceConfiguration(v11);
    *(_QWORD *)(v11 + 72) = v11 + 64;
    *(_QWORD *)(v11 + 64) = v11 + 64;
    *(_QWORD *)(v11 + 1232) = v11 + 1224;
    *(_QWORD *)(v11 + 1224) = v11 + 1224;
    *(_QWORD *)(v11 + 104) = v11 + 96;
    *(_QWORD *)(v11 + 96) = v11 + 96;
    *(_QWORD *)(v11 + 120) = v11 + 112;
    *(_QWORD *)(v11 + 112) = v11 + 112;
    *(_QWORD *)(v11 + 136) = v11 + 128;
    *(_QWORD *)(v11 + 128) = v11 + 128;
    VidSchSetQueuedPresentLimit(v11, 0LL);
    memset64((void *)(v11 + 336), 1uLL, 0x10uLL);
    VidSchiIncrementDeviceReference(v11);
    VidSchiInterlockedInsertTailList((KSPIN_LOCK *)(a1 + 1888), a1 + 256, (_QWORD *)(v11 + 80), 0LL);
    if ( (*a2 & 1) != 0 )
    {
      *(_QWORD *)(v11 + 40) = g_pVidSchSystemProcess;
    }
    else
    {
      v13 = *((_QWORD *)Current + 8);
      if ( v13 )
        v14 = *(_QWORD *)(v13 + 24);
      else
        v14 = 0LL;
      *(_QWORD *)(v11 + 40) = v14;
    }
    v15 = (unsigned __int64)*(unsigned int *)(a1 + 4) >> 5;
    v16 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 40) + 2616LL) + 4 * v15);
    if ( _bittest(&v16, *(_DWORD *)(a1 + 4) & 0x1F) )
    {
      v17 = -1073741790;
      goto LABEL_28;
    }
    v17 = VidSchiOpenProcessAdapterInfo(*(_QWORD *)(v11 + 40), a1);
    if ( v17 >= 0 )
    {
      *(_BYTE *)(v11 + 200) = 1;
      if ( (*a2 & 1) != 0 )
      {
        memset(&v28, 0, sizeof(v28));
        v20 = *((_QWORD *)Current + 5);
        v28.hDevice = 0LL;
        v28.Flags.Value |= 1u;
        v21 = *(ADAPTER_RENDER **)(a1 + 8);
        v28.hKmdProcess = *(HANDLE *)(*(_QWORD *)(v20 + 8LL * *(unsigned int *)(a1 + 4)) + 16LL);
        v17 = ADAPTER_RENDER::DdiCreateDevice(v21, &v28);
        if ( v17 < 0 )
          goto LABEL_28;
        v22 = bTracingEnabled == 0;
        *(_QWORD *)(v11 + 16) = v28.hDevice;
        if ( !v22 )
        {
          v23 = *(_DWORD *)(v11 + 48);
          CurrentProcessId = PsGetCurrentProcessId();
          if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          {
            v27 = (v23 >> 2) & 1;
            McTemplateK0ppqpttq(
              v27,
              &EventCreateDevice,
              v18,
              CurrentProcessId,
              *(_QWORD *)(a1 + 16),
              -1,
              v11,
              (v23 >> 1) & 1,
              v27);
          }
        }
      }
      else
      {
        *(_QWORD *)(v11 + 16) = *(_QWORD *)(a3 + 416);
      }
      if ( (*(_DWORD *)(v11 + 48) & 2) == 0
        || (LOBYTE(v18) = 1, v17 = VidSchControlVSyncDevice(v11, 2LL, v18), v17 >= 0) )
      {
        *a4 = v11;
        return (unsigned int)v17;
      }
    }
LABEL_28:
    VidSchTerminateDevice(v11, v15);
    return (unsigned int)v17;
  }
  v26 = WdLogNewEntry5_WdWarning(v10);
  WdLogEvent5_WdWarning(v26);
  return 3221225495LL;
}
