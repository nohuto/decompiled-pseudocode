/*
 * XREFs of VidSchiCreateDeviceInternal @ 0x1C0057A8C
 * Callers:
 *     VidSchCreateDevice @ 0x1C0057A50 (VidSchCreateDevice.c)
 *     VidSchCreateSystemDevices @ 0x1C007F53C (VidSchCreateSystemDevices.c)
 * Callees:
 *     VidSchiIncrementDeviceReference @ 0x1C0004CC8 (VidSchiIncrementDeviceReference.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00053A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     VidSchiInterlockedInsertTailList @ 0x1C0007300 (VidSchiInterlockedInsertTailList.c)
 *     ?DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z @ 0x1C0016154 (-DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     McTemplateK0ppqpttq @ 0x1C0028CE0 (McTemplateK0ppqpttq.c)
 *     VidSchControlVSyncDevice @ 0x1C0056E00 (VidSchControlVSyncDevice.c)
 *     VidSchiOpenProcessAdapterInfo @ 0x1C0057D30 (VidSchiOpenProcessAdapterInfo.c)
 *     VidSchSetQueuedPresentLimit @ 0x1C0057FF0 (VidSchSetQueuedPresentLimit.c)
 *     VidSchiReadDeviceConfiguration @ 0x1C0058048 (VidSchiReadDeviceConfiguration.c)
 *     VidSchTerminateDevice @ 0x1C0078CB0 (VidSchTerminateDevice.c)
 */

__int64 __fastcall VidSchiCreateDeviceInternal(__int64 a1, __int64 a2, __int64 a3, char **a4)
{
  struct DXGPROCESS *Current; // rsi
  char *PoolWithTag; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  char *v12; // rbx
  __int64 v13; // xmm1_8
  __int64 v14; // rdi
  int v15; // eax
  int v16; // edi
  __int64 v18; // rax
  _QWORD *v19; // rax
  ADAPTER_RENDER *v20; // rcx
  bool v21; // zf
  unsigned int v22; // esi
  __int64 v23; // r8
  HANDLE CurrentProcessId; // r9
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned int v27; // [rsp+40h] [rbp-48h]
  _DXGKARG_CREATEDEVICE v28; // [rsp+50h] [rbp-38h] BYREF

  *a4 = 0LL;
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    Current = *(struct DXGPROCESS **)(g_pVidSchSystemProcess + 8);
  }
  else
  {
    if ( !a3 )
    {
      v25 = WdLogNewEntry5_WdWarning(a1, a2);
      WdLogEvent5_WdWarning(v25);
      return 3221225485LL;
    }
    Current = DXGPROCESS::GetCurrent();
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x540uLL, 0x68536956u);
  v12 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x540uLL);
    *(_DWORD *)v12 = 1986348118;
    *((_QWORD *)v12 + 1) = a3;
    ExInitializeResourceLite((PERESOURCE)(v12 + 952));
    *((_QWORD *)v12 + 4) = a1;
    *((_OWORD *)v12 + 3) = *(_OWORD *)a2;
    v13 = *(_QWORD *)(a2 + 16);
    *((_DWORD *)v12 + 122) = -1;
    *((_QWORD *)v12 + 8) = v13;
    VidSchiReadDeviceConfiguration(v12);
    *((_QWORD *)v12 + 10) = v12 + 72;
    *((_QWORD *)v12 + 9) = v12 + 72;
    *((_QWORD *)v12 + 12) = v12 + 88;
    *((_QWORD *)v12 + 11) = v12 + 88;
    *((_QWORD *)v12 + 157) = v12 + 1248;
    *((_QWORD *)v12 + 156) = v12 + 1248;
    *((_QWORD *)v12 + 16) = v12 + 120;
    *((_QWORD *)v12 + 15) = v12 + 120;
    *((_QWORD *)v12 + 18) = v12 + 136;
    *((_QWORD *)v12 + 17) = v12 + 136;
    *((_QWORD *)v12 + 20) = v12 + 152;
    *((_QWORD *)v12 + 19) = v12 + 152;
    VidSchSetQueuedPresentLimit(v12, 0LL);
    memset64(v12 + 360, 1uLL, 0x10uLL);
    VidSchiIncrementDeviceReference((__int64)v12);
    VidSchiInterlockedInsertTailList((KSPIN_LOCK *)(a1 + 1904), a1 + 272, (_QWORD *)v12 + 13, 0LL);
    if ( (*(_DWORD *)a2 & 1) != 0 )
    {
      v18 = g_pVidSchSystemProcess;
      *((_QWORD *)v12 + 5) = g_pVidSchSystemProcess;
      v14 = v18;
    }
    else
    {
      v14 = *((_QWORD *)Current + 9);
      if ( v14 )
        v14 = *(_QWORD *)(v14 + 24);
      *((_QWORD *)v12 + 5) = v14;
    }
    v15 = *(_DWORD *)(*(_QWORD *)(v14 + 2616) + 4 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5));
    if ( _bittest(&v15, *(_DWORD *)(a1 + 4) & 0x1F) )
    {
      v16 = -1073741790;
    }
    else
    {
      v16 = VidSchiOpenProcessAdapterInfo(v14, a1);
      if ( v16 >= 0 )
      {
        v12[224] = 1;
        if ( (*(_DWORD *)a2 & 1) != 0 )
        {
          memset(&v28, 0, sizeof(v28));
          v28.hDevice = 0LL;
          v28.Flags.Value |= 1u;
          v19 = *(_QWORD **)(*((_QWORD *)Current + 6) + 8LL * *(unsigned int *)(a1 + 4));
          if ( v19 )
            v19 = (_QWORD *)v19[2];
          v20 = *(ADAPTER_RENDER **)(a1 + 8);
          v28.hKmdProcess = v19;
          v16 = ADAPTER_RENDER::DdiCreateDevice(v20, &v28);
          if ( v16 < 0 )
            goto LABEL_31;
          v21 = bTracingEnabled == 0;
          *((_QWORD *)v12 + 2) = v28.hDevice;
          if ( !v21 )
          {
            v22 = *((_DWORD *)v12 + 12);
            CurrentProcessId = PsGetCurrentProcessId();
            if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            {
              v27 = (v22 >> 2) & 1;
              McTemplateK0ppqpttq(
                v27,
                &EventCreateDevice,
                v23,
                CurrentProcessId,
                *(_QWORD *)(a1 + 16),
                -1,
                v12,
                (v22 >> 1) & 1,
                v27);
            }
          }
        }
        else
        {
          *((_QWORD *)v12 + 2) = *(_QWORD *)(a3 + 432);
        }
        if ( (*((_DWORD *)v12 + 12) & 2) == 0 || (v16 = VidSchControlVSyncDevice((__int64)v12, 2LL, 1), v16 >= 0) )
        {
          *a4 = v12;
          return (unsigned int)v16;
        }
      }
    }
LABEL_31:
    VidSchTerminateDevice(v12);
    return (unsigned int)v16;
  }
  v26 = WdLogNewEntry5_WdWarning(v11, v10);
  WdLogEvent5_WdWarning(v26);
  return 3221225495LL;
}
