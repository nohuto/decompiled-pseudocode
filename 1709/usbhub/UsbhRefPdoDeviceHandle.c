/*
 * XREFs of UsbhRefPdoDeviceHandle @ 0x1C0024DB0
 * Callers:
 *     UsbhPdoAbortAllDevicePipes @ 0x1C0001084 (UsbhPdoAbortAllDevicePipes.c)
 *     UsbhClearPdoIdleReady @ 0x1C0005F00 (UsbhClearPdoIdleReady.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0006C34 (UsbhSyncResetDeviceInternal.c)
 *     UsbhPdoInternalDeviceControl @ 0x1C0010A80 (UsbhPdoInternalDeviceControl.c)
 *     UsbhSyncSendCommandToDevice @ 0x1C0016E10 (UsbhSyncSendCommandToDevice.c)
 *     UsbhPdoPnp_QueryInterface @ 0x1C001A000 (UsbhPdoPnp_QueryInterface.c)
 *     UsbhSetPdoIdleReady @ 0x1C0024AC0 (UsbhSetPdoIdleReady.c)
 *     UsbhPdoSetDeviceData @ 0x1C0024B84 (UsbhPdoSetDeviceData.c)
 *     UsbhFdoReturnDeviceHandle @ 0x1C003B874 (UsbhFdoReturnDeviceHandle.c)
 *     UsbhFdoHandleNotifyForwardProgress @ 0x1C003EA64 (UsbhFdoHandleNotifyForwardProgress.c)
 *     UsbhGetNodeConnectionInfoForPdo @ 0x1C0048490 (UsbhGetNodeConnectionInfoForPdo.c)
 *     UsbhIoctlGetDescriptorForPDO @ 0x1C0048A44 (UsbhIoctlGetDescriptorForPDO.c)
 *     UsbhGetHubNodeInfo @ 0x1C004EE68 (UsbhGetHubNodeInfo.c)
 *     UsbhPdoQueryWmiDataBlock @ 0x1C004F250 (UsbhPdoQueryWmiDataBlock.c)
 *     UsbhPdoRemoveCleanup @ 0x1C0056010 (UsbhPdoRemoveCleanup.c)
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 *     _guard_dispatch_icall_nop @ 0x1C00294E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UsbhRefPdoDeviceHandle(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // r15
  __int64 v8; // rax
  KSPIN_LOCK *v9; // r14
  KIRQL v10; // r12
  __int64 v11; // rdi
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // r10
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 (__fastcall *v20)(_QWORD, __int64, __int64, _QWORD); // rax
  int v21; // ecx
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // r8

  v4 = a4;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v8 = *(_QWORD *)(a1 + 64);
  if ( !v8 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v8 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  v9 = (KSPIN_LOCK *)(v8 + 3720);
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 3720));
  if ( !a2 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v11 = *(_QWORD *)(a2 + 64);
  if ( !v11 )
    UsbhTrapFatal_Dbg(a2, 0LL);
  if ( *(_DWORD *)v11 != 1329877064 )
    UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
  v12 = *(int *)(v11 + 1144);
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    v13 = *(_QWORD *)(a1 + 64);
    if ( v13 )
    {
      v14 = *(_QWORD *)(v13 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
      *(_DWORD *)v14 = 824923716;
      *(_QWORD *)(v14 + 8) = 0LL;
      *(_QWORD *)(v14 + 16) = a2;
      *(_QWORD *)(v14 + 24) = v12;
    }
  }
  v15 = *(_DWORD *)(v11 + 1144);
  if ( v15 == 2 )
  {
    v16 = *(_QWORD *)(v11 + 1152);
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      v17 = *(_QWORD *)(a1 + 64);
      if ( v17 )
      {
        v18 = *(_QWORD *)(v17 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v17 + 880)) & *(_DWORD *)(v17 + 884));
        *(_DWORD *)v18 = 724260420;
        *(_QWORD *)(v18 + 8) = 0LL;
        *(_QWORD *)(v18 + 16) = v4;
        *(_QWORD *)(v18 + 24) = v16;
      }
    }
    v19 = *(_QWORD *)(a1 + 64);
    if ( !v19 )
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *(_DWORD *)v19 != 541218120 )
      UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
    v20 = *(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(v19 + 4464);
    if ( v20 )
    {
      v21 = v20(*(_QWORD *)(v19 + 4232), v16, a3, (unsigned int)v4);
      if ( v21 >= 0 )
      {
        v22 = *(_QWORD *)(v11 + 1152);
LABEL_19:
        if ( (UsbhLogMask & 0x100) != 0 )
        {
          v23 = *(_QWORD *)(a1 + 64);
          if ( v23 )
          {
            v24 = *(_QWORD *)(v23 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v23 + 880)) & *(_DWORD *)(v23 + 884));
            *(_DWORD *)v24 = 841700932;
            *(_QWORD *)(v24 + 16) = v21;
            *(_QWORD *)(v24 + 8) = 0LL;
            *(_QWORD *)(v24 + 24) = v22;
          }
        }
        goto LABEL_22;
      }
    }
    else
    {
      v21 = -1073741822;
    }
    v22 = 0LL;
    goto LABEL_19;
  }
  if ( v15 <= 1 )
    Log(a1, 256, 1146497825, a2, *(int *)(v11 + 1144));
  v22 = 0LL;
LABEL_22:
  KeReleaseSpinLock(v9, v10);
  return v22;
}
