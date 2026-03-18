/*
 * XREFs of VidSchiCreateDeviceInternal @ 0x1C006C10C
 * Callers:
 *     VidSchCreateDevice @ 0x1C006C0D0 (VidSchCreateDevice.c)
 *     VidSchCreateSystemDevices @ 0x1C0074ED8 (VidSchCreateSystemDevices.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0002B40 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     VidSchiInterlockedInsertTailList @ 0x1C00063A0 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiIncrementDeviceReference @ 0x1C00106D8 (VidSchiIncrementDeviceReference.c)
 *     ?DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z @ 0x1C0014274 (-DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     Template_ppqpttq @ 0x1C0024030 (Template_ppqpttq.c)
 *     VidSchTerminateDevice @ 0x1C006BEF0 (VidSchTerminateDevice.c)
 *     VidSchiOpenProcessAdapterInfo @ 0x1C006C378 (VidSchiOpenProcessAdapterInfo.c)
 *     VidSchSetQueuedPresentLimit @ 0x1C006C520 (VidSchSetQueuedPresentLimit.c)
 *     VidSchiReadDeviceConfiguration @ 0x1C006C578 (VidSchiReadDeviceConfiguration.c)
 *     VidSchControlVSyncDevice @ 0x1C006C630 (VidSchControlVSyncDevice.c)
 */

__int64 __fastcall VidSchiCreateDeviceInternal(__int64 a1, _DWORD *a2, __int64 a3, __int64 *a4)
{
  struct DXGPROCESS *Current; // rsi
  PVOID PoolWithTag; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int128 v13; // xmm0
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  int v17; // eax
  int v18; // edi
  __int64 v19; // r8
  __int64 v21; // rax
  ADAPTER_RENDER *v22; // rcx
  bool v23; // zf
  __int64 v24; // rax
  __int64 v25; // rax
  bool v26; // bp
  bool v27; // si
  HANDLE CurrentProcessId; // rax
  _DXGKARG_CREATEDEVICE v29; // [rsp+50h] [rbp-38h] BYREF

  *a4 = 0LL;
  if ( (*a2 & 1) != 0 )
  {
    Current = *(struct DXGPROCESS **)(g_pVidSchSystemProcess + 8);
  }
  else
  {
    if ( !a3 )
    {
      v24 = WdLogNewEntry5_WdWarning(a1, a2);
      WdLogEvent5_WdWarning(v24);
      return 3221225485LL;
    }
    Current = DXGPROCESS::GetCurrent();
  }
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x528uLL, 0x68536956u);
  v12 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x528uLL);
    *(_DWORD *)v12 = 1986348118;
    *(_QWORD *)(v12 + 8) = a3;
    ExInitializeResourceLite((PERESOURCE)(v12 + 928));
    *(_QWORD *)(v12 + 32) = a1;
    v13 = *(_OWORD *)a2;
    *(_DWORD *)(v12 + 464) = -1;
    *(_OWORD *)(v12 + 48) = v13;
    VidSchiReadDeviceConfiguration(v12);
    *(_QWORD *)(v12 + 72) = v12 + 64;
    *(_QWORD *)(v12 + 64) = v12 + 64;
    *(_QWORD *)(v12 + 1232) = v12 + 1224;
    *(_QWORD *)(v12 + 1224) = v12 + 1224;
    *(_QWORD *)(v12 + 104) = v12 + 96;
    *(_QWORD *)(v12 + 96) = v12 + 96;
    *(_QWORD *)(v12 + 120) = v12 + 112;
    *(_QWORD *)(v12 + 112) = v12 + 112;
    *(_QWORD *)(v12 + 136) = v12 + 128;
    *(_QWORD *)(v12 + 128) = v12 + 128;
    VidSchSetQueuedPresentLimit(v12, 0LL);
    memset64((void *)(v12 + 336), 1uLL, 0x10uLL);
    VidSchiIncrementDeviceReference(v12);
    VidSchiInterlockedInsertTailList((KSPIN_LOCK *)(a1 + 1880), a1 + 248, (_QWORD *)(v12 + 80), 0LL);
    if ( (*a2 & 1) != 0 )
    {
      *(_QWORD *)(v12 + 40) = g_pVidSchSystemProcess;
    }
    else
    {
      v14 = *((_QWORD *)Current + 8);
      if ( v14 )
        v15 = *(_QWORD *)(v14 + 24);
      else
        v15 = 0LL;
      *(_QWORD *)(v12 + 40) = v15;
    }
    v16 = (unsigned __int64)*(unsigned int *)(a1 + 4) >> 5;
    v17 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 40) + 2616LL) + 4 * v16);
    if ( _bittest(&v17, *(_DWORD *)(a1 + 4) & 0x1F) )
    {
      v18 = -1073741790;
      goto LABEL_26;
    }
    v18 = VidSchiOpenProcessAdapterInfo(*(_QWORD *)(v12 + 40), a1);
    if ( v18 >= 0 )
    {
      *(_BYTE *)(v12 + 200) = 1;
      if ( (*a2 & 1) != 0 )
      {
        memset(&v29, 0, sizeof(v29));
        v21 = *((_QWORD *)Current + 5);
        v29.hDevice = 0LL;
        v29.Flags.Value |= 1u;
        v22 = *(ADAPTER_RENDER **)(a1 + 8);
        v29.hKmdProcess = *(HANDLE *)(*(_QWORD *)(v21 + 8LL * *(unsigned int *)(a1 + 4)) + 16LL);
        v18 = ADAPTER_RENDER::DdiCreateDevice(v22, &v29);
        if ( v18 < 0 )
          goto LABEL_26;
        v23 = bTracingEnabled == 0;
        *(_QWORD *)(v12 + 16) = v29.hDevice;
        if ( !v23 )
        {
          v26 = (*(_DWORD *)(v12 + 48) & 4) != 0;
          v27 = (*(_DWORD *)(v12 + 48) & 2) != 0;
          CurrentProcessId = PsGetCurrentProcessId();
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            Template_ppqpttq(
              *(_QWORD *)(a1 + 16),
              &EventCreateDevice,
              v19,
              CurrentProcessId,
              *(_QWORD *)(a1 + 16),
              -1,
              v12,
              v27,
              v26);
        }
      }
      else
      {
        *(_QWORD *)(v12 + 16) = *(_QWORD *)(a3 + 416);
      }
      if ( (*(_DWORD *)(v12 + 48) & 2) == 0
        || (LOBYTE(v19) = 1, v18 = VidSchControlVSyncDevice(v12, 2LL, v19), v18 >= 0) )
      {
        *a4 = v12;
        return (unsigned int)v18;
      }
    }
LABEL_26:
    VidSchTerminateDevice(v12, v16);
    return (unsigned int)v18;
  }
  v25 = WdLogNewEntry5_WdWarning(v11, v10);
  WdLogEvent5_WdWarning(v25);
  return 3221225495LL;
}
