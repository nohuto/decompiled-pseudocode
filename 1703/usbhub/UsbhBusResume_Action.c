/*
 * XREFs of UsbhBusResume_Action @ 0x1C000E1D0
 * Callers:
 *     UsbhReleaseBusStateLock @ 0x1C000ADD0 (UsbhReleaseBusStateLock.c)
 * Callees:
 *     UsbhPostInterrupt @ 0x1C000AE90 (UsbhPostInterrupt.c)
 *     UsbhRefPdo @ 0x1C000B0C0 (UsbhRefPdo.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C000FBC0 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhUnlatchPdo @ 0x1C00245B0 (UsbhUnlatchPdo.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 */

LONG __fastcall UsbhBusResume_Action(PDEVICE_OBJECT DeviceObject, int a2)
{
  struct _KEVENT *DeviceExtension; // rbx
  unsigned __int16 i; // si
  unsigned __int8 *v6; // rdx
  void *v7; // rdx
  __int64 v8; // rcx
  void *v9; // rdx
  __int64 v10; // rcx
  unsigned __int8 *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r10
  __int64 v14; // rcx
  _DWORD *v15; // rdx
  void *v16; // rdx
  __int64 v17; // rcx
  void *v18; // rdx
  __int64 v19; // rcx
  unsigned __int8 *v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r10
  __int64 v23; // rcx
  __int64 v24; // r15
  void *v25; // rdx
  __int64 v26; // rcx
  KIRQL v27; // al
  char v28; // r9
  void *v29; // rdx
  __int64 v30; // rcx
  unsigned __int8 *v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  _QWORD *v34; // r14
  __int64 v35; // rdx
  __int64 v37; // rbx
  KIRQL v38; // [rsp+68h] [rbp-40h]

  if ( !DeviceObject )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  DeviceExtension = (struct _KEVENT *)DeviceObject->DeviceExtension;
  if ( !DeviceExtension )
    UsbhTrapFatal_Dbg(DeviceObject, 0LL);
  if ( DeviceExtension->Header.LockNV != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceObject->DeviceExtension);
  Log((_DWORD)DeviceObject, 2048, 1919251262, 0, 0LL);
  LODWORD(DeviceExtension[110].Header.WaitListHead.Blink) = 0;
  KeResetEvent(DeviceExtension + 112);
  DeviceExtension[113].Header.LockNV = 0;
  for ( i = 1; ; ++i )
  {
    v6 = (unsigned __int8 *)DeviceObject->DeviceExtension;
    if ( !v6 )
      UsbhTrapFatal_Dbg(DeviceObject, 0LL);
    if ( *(_DWORD *)v6 != 541218120 )
      UsbhTrapFatal_Dbg(DeviceObject, v6);
    if ( i > v6[2938] )
      break;
    if ( *(_DWORD *)v6 != 541218120 )
      UsbhTrapFatal_Dbg(DeviceObject, v6);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        59,
        (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
        i);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v7 = DeviceObject->DeviceExtension;
      if ( v7 )
      {
        v8 = *((_QWORD *)v7 + 111)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v7 + 220) & *((_DWORD *)v7 + 221));
        *(_DWORD *)v8 = 858801488;
        *(_QWORD *)(v8 + 24) = i;
        *(_QWORD *)(v8 + 8) = 0LL;
        *(_QWORD *)(v8 + 16) = 0LL;
      }
    }
    if ( (UsbhLogMask & 8) != 0 )
    {
      v9 = DeviceObject->DeviceExtension;
      if ( v9 )
      {
        v10 = *((_QWORD *)v9 + 111)
            + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v9 + 220) & *((_DWORD *)v9 + 221));
        *(_DWORD *)v10 = 1413771367;
        *(_QWORD *)(v10 + 16) = i;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 24) = 0LL;
      }
    }
    if ( i )
    {
      v11 = (unsigned __int8 *)DeviceObject->DeviceExtension;
      if ( !v11 )
        UsbhTrapFatal_Dbg(DeviceObject, 0LL);
      if ( *(_DWORD *)v11 != 541218120 )
        UsbhTrapFatal_Dbg(DeviceObject, v11);
      if ( i <= v11[2938] )
      {
        v12 = *((_QWORD *)v11 + 382);
        if ( v12 )
        {
          v13 = v12 + 2928LL * (i - 1);
          if ( (UsbhLogMask & 8) != 0 )
          {
            v14 = *((_QWORD *)v11 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v11 + 220) & *((_DWORD *)v11 + 221));
            *(_DWORD *)v14 = 1044672615;
            *(_QWORD *)(v14 + 16) = i;
            *(_QWORD *)(v14 + 8) = 0LL;
            *(_QWORD *)(v14 + 24) = v13;
          }
          if ( v13 )
            UsbhDispatch_PortChangeQueueEventEx((_DWORD)DeviceObject, v13, 3, a2, 0LL, 0, 0LL, 0LL);
        }
      }
    }
    v15 = DeviceObject->DeviceExtension;
    if ( !v15 )
      UsbhTrapFatal_Dbg(DeviceObject, 0LL);
    if ( *v15 != 541218120 )
      UsbhTrapFatal_Dbg(DeviceObject, v15);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        56,
        (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
        i);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v16 = DeviceObject->DeviceExtension;
      if ( v16 )
      {
        v17 = *((_QWORD *)v16 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v16 + 220) & *((_DWORD *)v16 + 221));
        *(_DWORD *)v17 = 825247056;
        *(_QWORD *)(v17 + 24) = i;
        *(_QWORD *)(v17 + 8) = 0LL;
        *(_QWORD *)(v17 + 16) = 0LL;
      }
    }
    if ( (UsbhLogMask & 8) != 0 )
    {
      v18 = DeviceObject->DeviceExtension;
      if ( v18 )
      {
        v19 = *((_QWORD *)v18 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v18 + 220) & *((_DWORD *)v18 + 221));
        *(_DWORD *)v19 = 1413771367;
        *(_QWORD *)(v19 + 16) = i;
        *(_QWORD *)(v19 + 8) = 0LL;
        *(_QWORD *)(v19 + 24) = 0LL;
      }
    }
    if ( i )
    {
      v20 = (unsigned __int8 *)DeviceObject->DeviceExtension;
      if ( !v20 )
        UsbhTrapFatal_Dbg(DeviceObject, 0LL);
      if ( *(_DWORD *)v20 != 541218120 )
        UsbhTrapFatal_Dbg(DeviceObject, v20);
      if ( i <= v20[2938] )
      {
        v21 = *((_QWORD *)v20 + 382);
        if ( v21 )
        {
          v22 = v21 + 2928LL * (i - 1);
          if ( (UsbhLogMask & 8) != 0 )
          {
            v23 = *((_QWORD *)v20 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v20 + 220) & *((_DWORD *)v20 + 221));
            *(_DWORD *)v23 = 1044672615;
            *(_QWORD *)(v23 + 16) = i;
            *(_QWORD *)(v23 + 8) = 0LL;
            *(_QWORD *)(v23 + 24) = v22;
          }
          if ( v22 )
            UsbhDispatch_PortChangeQueueEventEx((_DWORD)DeviceObject, v22, 1, a2, 0LL, 0, 0LL, 0LL);
        }
      }
    }
    v24 = 0LL;
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      v25 = DeviceObject->DeviceExtension;
      if ( v25 )
      {
        v26 = *((_QWORD *)v25 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v25 + 220) & *((_DWORD *)v25 + 221));
        *(_DWORD *)v26 = 1329877100;
        *(_QWORD *)(v26 + 16) = i;
        *(_QWORD *)(v26 + 8) = 0LL;
        *(_QWORD *)(v26 + 24) = 1382380368LL;
      }
    }
    v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    v28 = UsbhLogMask;
    v38 = v27;
    WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
    if ( (UsbhLogMask & 8) != 0 )
    {
      v29 = DeviceObject->DeviceExtension;
      if ( v29 )
      {
        v30 = *((_QWORD *)v29 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v29 + 220) & *((_DWORD *)v29 + 221));
        *(_DWORD *)v30 = 1413771367;
        *(_QWORD *)(v30 + 16) = i;
        *(_QWORD *)(v30 + 8) = 0LL;
        *(_QWORD *)(v30 + 24) = 0LL;
        v28 = UsbhLogMask;
      }
    }
    if ( i )
    {
      v31 = (unsigned __int8 *)DeviceObject->DeviceExtension;
      if ( !v31 )
        UsbhTrapFatal_Dbg(DeviceObject, 0LL);
      if ( *(_DWORD *)v31 != 541218120 )
        UsbhTrapFatal_Dbg(DeviceObject, v31);
      if ( i <= v31[2938] )
      {
        v32 = *((_QWORD *)v31 + 382);
        if ( v32 )
        {
          v33 = v32 + 2928LL * (i - 1);
          if ( (v28 & 8) != 0 )
          {
            v32 = *((_QWORD *)v31 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v31 + 220) & *((_DWORD *)v31 + 221));
            *(_DWORD *)v32 = 1044672615;
            *(_QWORD *)(v32 + 16) = i;
            *(_QWORD *)(v32 + 8) = 0LL;
            *(_QWORD *)(v32 + 24) = v33;
          }
          if ( v33 )
          {
            v24 = *(_QWORD *)(v33 + 392);
            if ( v24 )
              v24 = UsbhRefPdo(v32, v24, 0LL, 1382380368);
          }
        }
      }
    }
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v38);
    if ( v24 )
    {
      v37 = PdoExt(v24);
      KeWaitForSingleObject((PVOID)(v37 + 2864), Executive, 0, 0, 0LL);
      *(_DWORD *)(v37 + 1412) &= ~0x10000000u;
      KeSetEvent((PRKEVENT)(v37 + 2864), 0, 0);
      UsbhUnlatchPdo(DeviceObject, v24, 0LL, 1382380368LL);
    }
  }
  UsbhPostInterrupt(DeviceObject);
  v34 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(FdoExt(DeviceObject) + 3288), 0LL);
  Log((_DWORD)DeviceObject, 2048, 1114863917, 0, (__int64)v34);
  return UsbhDecHubBusy((__int64)DeviceObject, v35, v34);
}
