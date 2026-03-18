/*
 * XREFs of UsbhPdoSetDx @ 0x1C0001100
 * Callers:
 *     UsbhPdoDevicePowerState @ 0x1C0003C98 (UsbhPdoDevicePowerState.c)
 * Callees:
 *     UsbhPdoAbortAllDevicePipes @ 0x1C0001084 (UsbhPdoAbortAllDevicePipes.c)
 *     UsbhCompletePdoIdleIrp @ 0x1C0001280 (UsbhCompletePdoIdleIrp.c)
 *     UsbhCompletePdoWakeIrp @ 0x1C0001978 (UsbhCompletePdoWakeIrp.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0004944 (UsbhReleaseFdoPwrLock.c)
 *     GET_FDO_POWER_STATE @ 0x1C0004FA4 (GET_FDO_POWER_STATE.c)
 *     UsbhSetPdoPowerState @ 0x1C000577C (UsbhSetPdoPowerState.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     UsbhSyncSuspendPdoPort @ 0x1C0023164 (UsbhSyncSuspendPdoPort.c)
 *     UsbhSetPdoIdleReady @ 0x1C0024AC0 (UsbhSetPdoIdleReady.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPdoSetDx(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // r15
  __int64 v9; // r9
  int v10; // ebx
  int v11; // r14d
  int v12; // eax
  int v13; // r8d
  bool v14; // bp
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // r8
  unsigned int v18; // r14d

  v6 = PdoExt(a2);
  v7 = *(_QWORD *)(a1 + 8);
  v8 = v6;
  FdoExt(v7);
  v9 = *(_QWORD *)(a3 + 184);
  v10 = *(_DWORD *)(v9 + 24);
  v11 = *(_DWORD *)(v9 + 8);
  FdoExt(*(_QWORD *)(a1 + 8));
  Log(v7, 16, 1346651256, a3, a2);
  *(_DWORD *)(v8 + 1412) &= ~0x2000000u;
  v12 = GET_FDO_POWER_STATE(a1);
  if ( v12 == 201 )
  {
    v14 = 1;
    v16 = *(_DWORD *)(PdoExt(a2) + 1128);
    if ( v16 == 1 )
    {
      UsbhSetPdoPowerState(a1, a2, v15, 4, 4);
      v14 = v10 == 4;
      UsbhReleaseFdoPwrLock(v7, a1);
      UsbhPdoAbortAllDevicePipes(v7, a2);
      if ( !*(_DWORD *)(v8 + 2792) || (v11 & 0xF000) != 0x5000 )
      {
        LOBYTE(v17) = v10 == 4;
        UsbhSyncSuspendPdoPort(a1, a2, v17);
      }
      *(_DWORD *)(v8 + 2376) = v10 != 4;
LABEL_6:
      UsbhSetPdoIdleReady(v7, a2, a3);
      v18 = 0;
      if ( !v14 )
        return v18;
      goto LABEL_7;
    }
    if ( v16 > 1 )
    {
      if ( v16 <= 3 )
        goto LABEL_26;
      if ( v16 <= 5 )
      {
        if ( v10 == 4 )
        {
          *(_DWORD *)(v8 + 2376) = 0;
        }
        else
        {
          *(_DWORD *)(v8 + 2376) = 1;
          v14 = 0;
        }
        UsbhSetPdoPowerState(a1, a2, v15, v16, 4);
        UsbhReleaseFdoPwrLock(v7, a1);
        goto LABEL_6;
      }
      if ( v16 == 6 )
LABEL_26:
        UsbhSetPdoPowerState(a1, a2, v15, v16, 5);
    }
    UsbhReleaseFdoPwrLock(v7, a1);
    v18 = -1073741101;
LABEL_7:
    UsbhCompletePdoWakeIrp(v7, *(_QWORD *)(v8 + 840), 3221226195LL);
    if ( (*(_DWORD *)(v8 + 1412) & 0x100000) == 0 )
      UsbhCompletePdoIdleIrp(v7, *(_QWORD *)(v8 + 840), 3221226195LL);
    return v18;
  }
  if ( v12 <= 201 )
    goto LABEL_21;
  if ( v12 <= 206 )
  {
LABEL_15:
    v18 = -1073741101;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        19,
        (__int64)&WPP_ee5e40984a3c387d1cb2bd9d553f663f_Traceguids,
        *(_WORD *)(v8 + 1420));
    UsbhSetPdoPowerState(a1, a2, v13, 4, 5);
    UsbhReleaseFdoPwrLock(v7, a1);
    return v18;
  }
  if ( v12 <= 208 )
  {
LABEL_21:
    UsbhReleaseFdoPwrLock(v7, a1);
    return (unsigned int)-1073741823;
  }
  if ( v12 > 211 )
  {
    if ( v12 == 212 )
      goto LABEL_15;
    goto LABEL_21;
  }
  UsbhSetPdoPowerState(a1, a2, v13, 5, 4);
  Log(v7, 16, 1349862520, a3, a2);
  UsbhReleaseFdoPwrLock(v7, a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      20,
      (__int64)&WPP_ee5e40984a3c387d1cb2bd9d553f663f_Traceguids,
      *(_WORD *)(v8 + 1420));
  return 0;
}
