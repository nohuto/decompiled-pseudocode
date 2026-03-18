/*
 * XREFs of UsbhBusPause_Action @ 0x1C000E8D0
 * Callers:
 *     Usbh_BS_BusRun @ 0x1C000AB60 (Usbh_BS_BusRun.c)
 * Callees:
 *     UsbhPostInterrupt @ 0x1C000AE90 (UsbhPostInterrupt.c)
 *     UsbhRefPdo @ 0x1C000B0C0 (UsbhRefPdo.c)
 *     UsbhDerefPdo @ 0x1C000B1A0 (UsbhDerefPdo.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C000FBC0 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhSsh_CheckHubIdle @ 0x1C001A454 (UsbhSsh_CheckHubIdle.c)
 *     UsbhCancelEnumeration @ 0x1C0027A44 (UsbhCancelEnumeration.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003C218 (WPP_RECORDER_SF_dq.c)
 */

__int64 __fastcall UsbhBusPause_Action(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  char *DeviceExtension; // rbx
  __int64 v5; // rcx
  __int64 v6; // r8
  void *v7; // rdx
  __int64 v8; // rcx
  unsigned __int16 i; // si
  unsigned __int8 *v10; // rdx
  __int64 v11; // rcx
  unsigned __int8 *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r13
  __int64 v15; // rcx
  void *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  void *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // r15
  void *v23; // rdx
  __int64 v24; // rcx
  KIRQL v25; // al
  char v26; // r9
  void *v27; // rdx
  __int64 v28; // rcx
  unsigned __int8 *v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r8
  void *v33; // rdx
  __int64 v34; // rcx
  PDEVICE_OBJECT v35; // rcx
  void *v36; // rdx
  __int64 v37; // rcx
  unsigned __int8 *v38; // rdx
  __int64 v39; // r10
  __int64 v40; // rcx
  _DWORD *v41; // rdx
  void *v42; // rdx
  __int64 v43; // rcx
  void *v44; // rdx
  __int64 v45; // rcx
  unsigned __int8 *v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rdi
  __int64 v49; // rcx
  __int64 v50; // r15
  unsigned __int16 v51; // bx
  void *v52; // rdx
  __int64 v53; // rcx
  KIRQL v54; // al
  char v55; // r9
  void *v56; // rdx
  __int64 v57; // rcx
  unsigned __int8 *v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // rcx
  __int64 v63; // rbx
  __int64 v64; // rdx
  KIRQL v65; // [rsp+80h] [rbp-21h]
  KIRQL v66; // [rsp+98h] [rbp-9h]
  KIRQL v67; // [rsp+A8h] [rbp+7h]

  if ( !DeviceObject )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  if ( !DeviceExtension )
    UsbhTrapFatal_Dbg(DeviceObject, 0LL);
  if ( *(_DWORD *)DeviceExtension != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceObject->DeviceExtension);
  if ( (UsbhLogMask & 0x800) != 0 )
  {
    v5 = *((_QWORD *)DeviceExtension + 111)
       + 32LL
       * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension
                                                                                                  + 221));
    *(_DWORD *)v5 = 829776240;
    *(_QWORD *)(v5 + 8) = 0LL;
    *(_QWORD *)(v5 + 16) = 0LL;
    *(_QWORD *)(v5 + 24) = 0LL;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)DeviceExtension + 678, 0xFFFFFFFF) == 1 )
  {
    v6 = *((_QWORD *)DeviceExtension + 333);
    if ( (UsbhLogMask & 0x800) != 0 )
    {
      v7 = DeviceObject->DeviceExtension;
      if ( v7 )
      {
        v8 = *((_QWORD *)v7 + 111)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v7 + 220) & *((_DWORD *)v7 + 221));
        *(_DWORD *)v8 = 1363763555;
        *(_QWORD *)(v8 + 8) = 0LL;
        *(_QWORD *)(v8 + 16) = v6;
        *(_QWORD *)(v8 + 24) = 0LL;
      }
    }
    IoCancelIrp(*((PIRP *)DeviceExtension + 333));
  }
  KeWaitForSingleObject(DeviceExtension + 2688, Executive, 0, 0, 0LL);
  if ( *(_DWORD *)(a2 + 128) == 2 && (int)UsbhSsh_CheckHubIdle(DeviceObject) < 0 )
  {
    *((_DWORD *)DeviceExtension + 678) = 0;
    KeResetEvent((PRKEVENT)DeviceExtension + 112);
    UsbhPostInterrupt(DeviceObject);
    return 3221225473LL;
  }
  else
  {
    for ( i = 1; ; ++i )
    {
      v10 = (unsigned __int8 *)DeviceObject->DeviceExtension;
      if ( !v10 )
        UsbhTrapFatal_Dbg(DeviceObject, 0LL);
      if ( *(_DWORD *)v10 != 541218120 )
        UsbhTrapFatal_Dbg(DeviceObject, v10);
      if ( i > v10[2938] )
        break;
      if ( (UsbhLogMask & 8) != 0 )
      {
        v11 = *((_QWORD *)v10 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v10 + 220) & *((_DWORD *)v10 + 221));
        *(_DWORD *)v11 = 1413771367;
        *(_QWORD *)(v11 + 16) = i;
        *(_QWORD *)(v11 + 8) = 0LL;
        *(_QWORD *)(v11 + 24) = 0LL;
      }
      if ( i )
      {
        v12 = (unsigned __int8 *)DeviceObject->DeviceExtension;
        if ( !v12 )
          UsbhTrapFatal_Dbg(DeviceObject, 0LL);
        if ( *(_DWORD *)v12 != 541218120 )
          UsbhTrapFatal_Dbg(DeviceObject, v12);
        if ( i > v12[2938] )
        {
          v14 = 0LL;
        }
        else
        {
          v13 = *((_QWORD *)v12 + 382);
          if ( v13 )
          {
            v14 = v13 + 2928LL * (i - 1);
            if ( (UsbhLogMask & 8) != 0 )
            {
              v15 = *((_QWORD *)v12 + 111)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v12 + 220) & *((_DWORD *)v12 + 221));
              *(_DWORD *)v15 = 1044672615;
              *(_QWORD *)(v15 + 16) = i;
              *(_QWORD *)(v15 + 8) = 0LL;
              *(_QWORD *)(v15 + 24) = v14;
            }
          }
          else
          {
            v14 = 0LL;
          }
        }
      }
      else
      {
        v14 = 0LL;
      }
      if ( (UsbhLogMask & 0x800) != 0 )
      {
        v16 = DeviceObject->DeviceExtension;
        if ( v16 )
        {
          v17 = *((_QWORD *)v16 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v16 + 220) & *((_DWORD *)v16 + 221));
          *(_DWORD *)v17 = 1467310448;
          *(_QWORD *)(v17 + 24) = i;
          *(_QWORD *)(v17 + 8) = 0LL;
          *(_QWORD *)(v17 + 16) = 0LL;
        }
      }
      if ( v14 )
      {
        v18 = *(int *)(v14 + 696);
        if ( (UsbhLogMask & 0x800) != 0 )
        {
          v19 = DeviceObject->DeviceExtension;
          if ( v19 )
          {
            v20 = *((_QWORD *)v19 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v19 + 220) & *((_DWORD *)v19 + 221));
            *(_DWORD *)v20 = 846553456;
            *(_QWORD *)(v20 + 24) = i;
            *(_QWORD *)(v20 + 8) = 0LL;
            *(_QWORD *)(v20 + 16) = v18;
          }
        }
      }
      v21 = a2;
      if ( *(_DWORD *)(a2 + 128) == 6 )
        KeWaitForSingleObject((PVOID)(v14 + 520), Executive, 0, 0, 0LL);
      v22 = 0LL;
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        v23 = DeviceObject->DeviceExtension;
        if ( v23 )
        {
          v24 = *((_QWORD *)v23 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v23 + 220) & *((_DWORD *)v23 + 221));
          *(_DWORD *)v24 = 1329877100;
          *(_QWORD *)(v24 + 16) = i;
          *(_QWORD *)(v24 + 8) = 0LL;
          *(_QWORD *)(v24 + 24) = 1348564304LL;
        }
      }
      v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
      v26 = UsbhLogMask;
      v65 = v25;
      WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
      if ( (UsbhLogMask & 8) != 0 )
      {
        v27 = DeviceObject->DeviceExtension;
        if ( v27 )
        {
          v28 = *((_QWORD *)v27 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v27 + 220) & *((_DWORD *)v27 + 221));
          *(_DWORD *)v28 = 1413771367;
          *(_QWORD *)(v28 + 16) = i;
          *(_QWORD *)(v28 + 8) = 0LL;
          *(_QWORD *)(v28 + 24) = 0LL;
          v26 = UsbhLogMask;
        }
      }
      if ( i )
      {
        v29 = (unsigned __int8 *)DeviceObject->DeviceExtension;
        if ( !v29 )
          UsbhTrapFatal_Dbg(DeviceObject, 0LL);
        if ( *(_DWORD *)v29 != 541218120 )
          UsbhTrapFatal_Dbg(DeviceObject, v29);
        if ( i <= v29[2938] )
        {
          v30 = *((_QWORD *)v29 + 382);
          if ( v30 )
          {
            v31 = v30 + 2928LL * (i - 1);
            if ( (v26 & 8) != 0 )
            {
              v30 = *((_QWORD *)v29 + 111)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v29 + 220) & *((_DWORD *)v29 + 221));
              *(_DWORD *)v30 = 1044672615;
              *(_QWORD *)(v30 + 16) = i;
              *(_QWORD *)(v30 + 8) = 0LL;
              *(_QWORD *)(v30 + 24) = v31;
            }
            if ( v31 )
            {
              v22 = *(_QWORD *)(v31 + 392);
              if ( v22 )
                v22 = UsbhRefPdo(v30, v22, 0LL, 1348564304);
            }
          }
        }
      }
      WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v65);
      if ( v22 )
      {
        v63 = PdoExt(v22);
        KeWaitForSingleObject((PVOID)(v63 + 2864), Executive, 0, 0, 0LL);
        *(_DWORD *)(v63 + 1412) |= 0x10000000u;
        KeSetEvent((PRKEVENT)(v63 + 2864), 0, 0);
        Log((_DWORD)DeviceObject, 256, 1968194639, v22, 1348564304LL);
        LOBYTE(v63) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
        WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
        UsbhDerefPdo((__int64)DeviceObject, v22, 0LL, 0x50617550u);
        WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v63);
        v21 = a2;
      }
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        v33 = DeviceObject->DeviceExtension;
        if ( v33 )
        {
          v34 = *((_QWORD *)v33 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v33 + 220) & *((_DWORD *)v33 + 221));
          *(_DWORD *)v34 = 829912937;
          *(_QWORD *)(v34 + 24) = i;
          *(_QWORD *)(v34 + 8) = 0LL;
          *(_QWORD *)(v34 + 16) = v21;
        }
      }
      v35 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          79,
          (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
          i);
        v35 = WPP_GLOBAL_Control;
      }
      if ( (UsbhLogMask & 8) != 0 )
      {
        v36 = DeviceObject->DeviceExtension;
        if ( v36 )
        {
          v37 = *((_QWORD *)v36 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v36 + 220) & *((_DWORD *)v36 + 221));
          *(_DWORD *)v37 = 1413771367;
          *(_QWORD *)(v37 + 16) = i;
          *(_QWORD *)(v37 + 8) = 0LL;
          *(_QWORD *)(v37 + 24) = 0LL;
          v35 = WPP_GLOBAL_Control;
        }
      }
      if ( i )
      {
        v38 = (unsigned __int8 *)DeviceObject->DeviceExtension;
        if ( !v38 )
          UsbhTrapFatal_Dbg(DeviceObject, 0LL);
        if ( *(_DWORD *)v38 != 541218120 )
          UsbhTrapFatal_Dbg(DeviceObject, v38);
        if ( i <= v38[2938] )
        {
          v32 = *((_QWORD *)v38 + 382);
          if ( v32 )
          {
            v39 = v32 + 2928LL * (i - 1);
            if ( (UsbhLogMask & 8) != 0 )
            {
              v40 = *((_QWORD *)v38 + 111)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v38 + 220) & *((_DWORD *)v38 + 221));
              *(_DWORD *)v40 = 1044672615;
              *(_QWORD *)(v40 + 16) = i;
              *(_QWORD *)(v40 + 8) = 0LL;
              *(_QWORD *)(v40 + 24) = v39;
              v35 = WPP_GLOBAL_Control;
            }
            if ( v39 )
            {
              UsbhDispatch_PortChangeQueueEventEx((_DWORD)DeviceObject, v39, 4, v21, 0x80000LL, 0, 0LL, 0LL);
              v35 = WPP_GLOBAL_Control;
            }
          }
        }
      }
      if ( LOWORD(v35->DeviceType) )
      {
        WPP_RECORDER_SF_d(v35->DeviceExtension, 0, 1, 80, (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids, i);
        v35 = WPP_GLOBAL_Control;
      }
      v41 = DeviceObject->DeviceExtension;
      if ( !v41 )
        UsbhTrapFatal_Dbg(DeviceObject, 0LL);
      if ( *v41 != 541218120 )
        UsbhTrapFatal_Dbg(DeviceObject, v41);
      if ( LOWORD(v35->DeviceType) )
        WPP_RECORDER_SF_dq(
          v35->DeviceExtension,
          (_DWORD)v41,
          v32,
          66,
          (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
          i,
          v21);
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        v42 = DeviceObject->DeviceExtension;
        if ( v42 )
        {
          v43 = *((_QWORD *)v42 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v42 + 220) & *((_DWORD *)v42 + 221));
          *(_DWORD *)v43 = 842024272;
          *(_QWORD *)(v43 + 24) = i;
          *(_QWORD *)(v43 + 8) = 0LL;
          *(_QWORD *)(v43 + 16) = 0LL;
        }
      }
      if ( (UsbhLogMask & 8) != 0 )
      {
        v44 = DeviceObject->DeviceExtension;
        if ( v44 )
        {
          v45 = *((_QWORD *)v44 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v44 + 220) & *((_DWORD *)v44 + 221));
          *(_DWORD *)v45 = 1413771367;
          *(_QWORD *)(v45 + 16) = i;
          *(_QWORD *)(v45 + 8) = 0LL;
          *(_QWORD *)(v45 + 24) = 0LL;
        }
      }
      if ( i )
      {
        v46 = (unsigned __int8 *)DeviceObject->DeviceExtension;
        if ( !v46 )
          UsbhTrapFatal_Dbg(DeviceObject, 0LL);
        if ( *(_DWORD *)v46 != 541218120 )
          UsbhTrapFatal_Dbg(DeviceObject, v46);
        if ( i <= v46[2938] )
        {
          v47 = *((_QWORD *)v46 + 382);
          if ( v47 )
          {
            v48 = v47 + 2928LL * (i - 1);
            if ( (UsbhLogMask & 8) != 0 )
            {
              v49 = *((_QWORD *)v46 + 111)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v46 + 220) & *((_DWORD *)v46 + 221));
              v50 = 0LL;
              *(_DWORD *)v49 = 1044672615;
              *(_QWORD *)(v49 + 16) = i;
              *(_QWORD *)(v49 + 8) = 0LL;
              *(_QWORD *)(v49 + 24) = v48;
            }
            else
            {
              v50 = 0LL;
            }
            if ( v48 )
            {
              UsbhDispatch_PortChangeQueueEventEx((_DWORD)DeviceObject, v48, 2, v21, 0LL, 0, 0LL, 0LL);
              v51 = *(_WORD *)(v48 + 4);
              if ( (UsbhLogMask & 0x100) != 0 )
              {
                v52 = DeviceObject->DeviceExtension;
                if ( v52 )
                {
                  v53 = *((_QWORD *)v52 + 111)
                      + 32LL
                      * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v52 + 220) & *((_DWORD *)v52 + 221));
                  *(_DWORD *)v53 = 1329877100;
                  *(_QWORD *)(v53 + 16) = v51;
                  *(_QWORD *)(v53 + 8) = 0LL;
                  *(_QWORD *)(v53 + 24) = 1884308559LL;
                }
              }
              v54 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
              v55 = UsbhLogMask;
              v66 = v54;
              WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
              if ( (UsbhLogMask & 8) != 0 )
              {
                v56 = DeviceObject->DeviceExtension;
                if ( v56 )
                {
                  v57 = *((_QWORD *)v56 + 111)
                      + 32LL
                      * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v56 + 220) & *((_DWORD *)v56 + 221));
                  *(_DWORD *)v57 = 1413771367;
                  *(_QWORD *)(v57 + 16) = v51;
                  *(_QWORD *)(v57 + 8) = 0LL;
                  *(_QWORD *)(v57 + 24) = 0LL;
                  v55 = UsbhLogMask;
                }
              }
              if ( v51 )
              {
                v58 = (unsigned __int8 *)DeviceObject->DeviceExtension;
                if ( !v58 )
                  UsbhTrapFatal_Dbg(DeviceObject, 0LL);
                if ( *(_DWORD *)v58 != 541218120 )
                  UsbhTrapFatal_Dbg(DeviceObject, v58);
                if ( v51 <= v58[2938] )
                {
                  v59 = *((_QWORD *)v58 + 382);
                  if ( v59 )
                  {
                    v60 = v59 + 2928LL * (v51 - 1);
                    if ( (v55 & 8) != 0 )
                    {
                      v59 = *((_QWORD *)v58 + 111)
                          + 32LL
                          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v58 + 220) & *((_DWORD *)v58 + 221));
                      *(_DWORD *)v59 = 1044672615;
                      *(_QWORD *)(v59 + 16) = v51;
                      *(_QWORD *)(v59 + 8) = 0LL;
                      *(_QWORD *)(v59 + 24) = v60;
                    }
                    if ( v60 )
                    {
                      v50 = *(_QWORD *)(v60 + 392);
                      if ( v50 )
                        v50 = UsbhRefPdo(v59, v50, 0LL, 1884308559);
                    }
                  }
                }
              }
              WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
              KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v66);
              if ( v50 )
              {
                v64 = *(unsigned int *)(v48 + 400);
                *(_QWORD *)(v48 + 376) = v48 + 24;
                *(_DWORD *)(v48 + 416) = 1;
                UsbhCancelEnumeration(DeviceObject, v64, v48, v50);
                *(_QWORD *)(v48 + 376) = 0LL;
                if ( *(_DWORD *)(v48 + 416) )
                {
                  Log((_DWORD)DeviceObject, 1024, 1970032689, v50, v48);
                  v67 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
                  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
                  *(_DWORD *)(v48 + 416) = 0;
                  Log((_DWORD)DeviceObject, 1024, 1970032690, v50, v48);
                  UsbhDerefPdo((__int64)DeviceObject, v50, 0LL, 0x7050444Fu);
                  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
                  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v67);
                }
                else
                {
                  *(_DWORD *)(v48 + 400) = 0;
                }
              }
            }
          }
        }
      }
      if ( *(_DWORD *)(a2 + 128) == 6 )
        KeSetEvent((PRKEVENT)(v14 + 520), 0, 0);
    }
    if ( (UsbhLogMask & 0x800) != 0 )
    {
      v61 = *((_QWORD *)v10 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v10 + 220) & *((_DWORD *)v10 + 221));
      *(_DWORD *)v61 = 1047880048;
      *(_QWORD *)(v61 + 8) = 0LL;
      *(_QWORD *)(v61 + 16) = 0LL;
      *(_QWORD *)(v61 + 24) = 0LL;
    }
    return 0LL;
  }
}
