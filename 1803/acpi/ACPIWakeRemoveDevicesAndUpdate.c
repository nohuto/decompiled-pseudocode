/*
 * XREFs of ACPIWakeRemoveDevicesAndUpdate @ 0x1C00417F8
 * Callers:
 *     ACPIDeviceCancelWaitWakeIrp @ 0x1C0019920 (ACPIDeviceCancelWaitWakeIrp.c)
 *     ACPIDeviceIrpWaitWakeRequestPending @ 0x1C001B8E0 (ACPIDeviceIrpWaitWakeRequestPending.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase6 @ 0x1C001EA20 (ACPIDevicePowerProcessPhase5SystemSubPhase6.c)
 *     OSNotifyDeviceWake @ 0x1C002EECC (OSNotifyDeviceWake.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x1C002F100 (OSNotifyDeviceWakeByGPEEvent.c)
 *     OSNotifyDeviceWakeByInterrupt @ 0x1C002F2CC (OSNotifyDeviceWakeByInterrupt.c)
 *     ACPIRootPowerCallBack @ 0x1C0039860 (ACPIRootPowerCallBack.c)
 *     ACPIWakeEmptyRequestQueue @ 0x1C0040A54 (ACPIWakeEmptyRequestQueue.c)
 * Callees:
 *     memset @ 0x1C0004540 (memset.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C00173F8 (WPP_RECORDER_SF_Dqss.c)
 *     ACPIGpeIndexToByteIndex @ 0x1C0027A9C (ACPIGpeIndexToByteIndex.c)
 *     ACPIGpeIndexToGpeRegister @ 0x1C0027AF4 (ACPIGpeIndexToGpeRegister.c)
 *     ACPIWriteGpeEnableRegister @ 0x1C0034A3C (ACPIWriteGpeEnableRegister.c)
 *     ACPIWriteGpeStatusRegister @ 0x1C0034ADC (ACPIWriteGpeStatusRegister.c)
 */

void __fastcall ACPIWakeRemoveDevicesAndUpdate(__int64 a1, __int64 a2)
{
  char v4; // bp
  unsigned __int16 *v5; // rdx
  unsigned int i; // r10d
  __int64 v7; // r9
  __int64 *v8; // rsi
  __int64 *v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 **v12; // rcx
  __int64 **v13; // rax
  __int64 v14; // rax
  const char *v15; // rdx
  const char *v16; // rcx
  unsigned int v17; // eax
  int v18; // edi
  __int64 v19; // rbx
  unsigned __int8 v20; // cl
  _BYTE *v21; // rax
  unsigned int j; // ebx

  v4 = *((_BYTE *)AcpiInformation + 133);
  KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
  if ( !v4 )
  {
    v5 = (unsigned __int16 *)AcpiInformation;
    for ( i = 0; i < *((unsigned __int16 *)AcpiInformation + 51); v5 = (unsigned __int16 *)AcpiInformation )
    {
      v7 = i++;
      *((_BYTE *)GpeCurEnable + v7) &= *((_BYTE *)GpeSpecialHandler + v7) | (unsigned __int8)~(*((_BYTE *)GpeWakeEnable
                                                                                               + v7) | *((_BYTE *)GpeWakeHandler + v7));
    }
    memset(GpeWakeEnable, 0, v5[51]);
  }
  v8 = (__int64 *)AcpiPowerWaitWakeList;
  while ( v8 != &AcpiPowerWaitWakeList )
  {
    v9 = v8;
    v8 = (__int64 *)*v8;
    v10 = v9[5];
    if ( v10 == a1 )
    {
      _InterlockedExchange64((volatile __int64 *)(v9[25] + 104), 0LL);
      if ( !*(_BYTE *)(v9[25] + 68) )
      {
        v11 = *v9;
        if ( *(__int64 **)(*v9 + 8) != v9 || (v12 = (__int64 **)v9[1], *v12 != v9) )
          __fastfail(3u);
        *v12 = (__int64 *)v11;
        *(_QWORD *)(v11 + 8) = v12;
        v13 = *(__int64 ***)(a2 + 8);
        if ( *v13 != (__int64 *)a2 )
          __fastfail(3u);
        *v9 = a2;
        v9[1] = (__int64)v13;
        *v13 = v9;
        *(_QWORD *)(a2 + 8) = v9;
        *((_DWORD *)v9 + 14) &= ~0x40u;
        *((_DWORD *)v9 + 27) |= 2u;
      }
      continue;
    }
    if ( !v4 && (*(_QWORD *)(v10 + 952) & 0x500000000LL) == 0 && *((_DWORD *)v9 + 26) >= AcpiMostRecentSleepState )
    {
      if ( *(_BYTE *)((unsigned int)ACPIGpeIndexToByteIndex(*(unsigned int *)(v10 + 456)) + GpeMap) )
      {
        v14 = *(_QWORD *)(v10 + 8);
        v15 = (const char *)&unk_1C005B1F0;
        v16 = (const char *)&unk_1C005B1F0;
        if ( (v14 & 0x200000000000LL) != 0 )
        {
          v15 = *(const char **)(v10 + 560);
          if ( (v14 & 0x400000000000LL) != 0 )
            v16 = *(const char **)(v10 + 568);
        }
        WPP_RECORDER_SF_Dqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          0x11u,
          0x18u,
          (__int64)&WPP_77f4a81bb1c43aa26362b868938d336a_Traceguids,
          *(_DWORD *)(v10 + 456),
          v10,
          v15,
          v16);
        continue;
      }
      v17 = ACPIGpeIndexToGpeRegister(*(unsigned int *)(v10 + 456));
      v18 = 1 << (*(_BYTE *)(v10 + 456) & 7);
      v19 = v17;
      v20 = *((_BYTE *)GpeWakeEnable + v17);
      if ( (v20 & (unsigned __int8)v18) == 0 )
      {
        *((_BYTE *)GpeWakeEnable + v17) = v18 | v20;
        ACPIWriteGpeStatusRegister(v17, v18);
        if ( ((unsigned __int8)v18 & *((_BYTE *)GpeEnable + v19)) != 0 )
        {
          if ( ((unsigned __int8)v18 & *((_BYTE *)GpeSpecialHandler + v19)) == 0 )
          {
            v21 = GpeWakeHandler;
            goto LABEL_26;
          }
        }
        else if ( ((unsigned __int8)v18 & *((_BYTE *)GpeCurEnable + v19)) == 0 )
        {
          *((_BYTE *)GpeIsLevel + v19) |= v18;
          v21 = GpeCurEnable;
LABEL_26:
          v21[v19] |= v18;
        }
      }
    }
  }
  if ( !v4 )
  {
    for ( j = 0; j < *((unsigned __int16 *)AcpiInformation + 51); ++j )
    {
      if ( AcpiPowerLeavingS0 )
        *((_BYTE *)GpeCurEnable + j) &= ~*((_BYTE *)GpeWakeEnable + j);
      else
        *((_BYTE *)GpeCurEnable + j) |= *((_BYTE *)GpeWakeEnable + j) & (unsigned __int8)~*((_BYTE *)GpePending + j);
      ACPIWriteGpeEnableRegister(j, *((_BYTE *)GpeCurEnable + j));
    }
  }
  KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
}
