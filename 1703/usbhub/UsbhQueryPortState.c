/*
 * XREFs of UsbhQueryPortState @ 0x1C00130E0
 * Callers:
 *     UsbhSshResumeDownstream @ 0x1C0002760 (UsbhSshResumeDownstream.c)
 *     UsbhFdoColdStartCheckPort @ 0x1C0005DB0 (UsbhFdoColdStartCheckPort.c)
 *     UsbhFdoColdStartPdo @ 0x1C00072E8 (UsbhFdoColdStartPdo.c)
 *     UsbhBusSuspend_Action @ 0x1C0008F08 (UsbhBusSuspend_Action.c)
 *     UsbhFinishStart @ 0x1C0009190 (UsbhFinishStart.c)
 *     UsbhHubRunPortChangeQueue @ 0x1C000F560 (UsbhHubRunPortChangeQueue.c)
 *     UsbhFdoReturnPortStatus @ 0x1C00129D0 (UsbhFdoReturnPortStatus.c)
 *     UsbhSyncSuspendPdoPort @ 0x1C0018FE4 (UsbhSyncSuspendPdoPort.c)
 *     UsbhQueryChange @ 0x1C001A4D4 (UsbhQueryChange.c)
 *     UsbhSetupDevice @ 0x1C0021D38 (UsbhSetupDevice.c)
 *     UsbhFdoValidateConnectionPdo @ 0x1C003A8EC (UsbhFdoValidateConnectionPdo.c)
 *     UsbhOvercurrentResetWorker @ 0x1C003D350 (UsbhOvercurrentResetWorker.c)
 *     UsbhBusPnpStop_Action @ 0x1C003E56C (UsbhBusPnpStop_Action.c)
 *     UsbhHubSyncSuspendPortEvent @ 0x1C0040230 (UsbhHubSyncSuspendPortEvent.c)
 *     UsbhQueueSoftConnectChange @ 0x1C00410DC (UsbhQueueSoftConnectChange.c)
 *     UsbhPortResumeTimeout @ 0x1C0043A7C (UsbhPortResumeTimeout.c)
 *     UsbhFdoSetD0Warm @ 0x1C0045C78 (UsbhFdoSetD0Warm.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1C00463C4 (UsbhPdoWaitForD3Reconnect.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C0003AA4 (Usb_Disconnected.c)
 *     UsbhDispatch_HardResetEvent @ 0x1C0009330 (UsbhDispatch_HardResetEvent.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     UsbhSyncSendCommand @ 0x1C0013A80 (UsbhSyncSendCommand.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 *     UsbhFlushPortChange @ 0x1C003AA90 (UsbhFlushPortChange.c)
 *     WPP_RECORDER_SF_q @ 0x1C003C2E0 (WPP_RECORDER_SF_q.c)
 *     UsbhException @ 0x1C004F144 (UsbhException.c)
 */

__int64 __fastcall UsbhQueryPortState(__int64 a1, unsigned __int16 a2, __int64 a3, _DWORD *a4)
{
  __int64 v8; // rbp
  _DWORD *v9; // rax
  int v10; // ecx
  unsigned __int16 *PoolWithTag; // rax
  unsigned __int16 *v13; // r13
  __int64 v14; // rdi
  int v15; // esi
  __int64 v16; // rdx
  __int64 v17; // rcx
  KIRQL v18; // al
  char v19; // r9
  KIRQL v20; // r15
  __int64 v21; // rdx
  unsigned __int16 v22; // r10
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rcx
  _DWORD *v28; // rsi
  _QWORD *v29; // rax
  _DWORD *v30; // rsi
  _QWORD *v31; // rax
  _QWORD *v32; // rcx
  int v33; // edx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  KIRQL v38; // bp
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rsi
  _QWORD *v42; // rdi
  _QWORD *v43; // rdx
  _QWORD *v44; // r9
  __int64 v45; // r8
  __int64 v46; // rcx
  int v47; // eax
  unsigned __int16 v48; // ax
  _QWORD *v49; // rdx
  _QWORD *v50; // rcx
  int v51; // r9d
  __int64 v52; // rax
  int v53; // [rsp+48h] [rbp-60h]
  int v54; // [rsp+50h] [rbp-58h]
  char v55[8]; // [rsp+58h] [rbp-50h] BYREF
  _BYTE v56[2]; // [rsp+60h] [rbp-48h] BYREF
  __int16 v57; // [rsp+62h] [rbp-46h]
  unsigned __int16 v58; // [rsp+64h] [rbp-44h]
  unsigned __int16 v59; // [rsp+66h] [rbp-42h]
  int v60; // [rsp+B0h] [rbp+8h]

  v8 = 0LL;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v9 = *(_DWORD **)(a1 + 64);
  if ( !v9 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *v9 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  v10 = v9[640];
  if ( (v10 & 0x4000) != 0 )
  {
    Log(a1, 4, 1937076805, 0, 0LL);
    if ( a4 )
      *a4 = -1073713152;
    return 3221225486LL;
  }
  else if ( (v10 & 0x10) != 0 )
  {
    Log(a1, 4, 1752319312, 0, 0LL);
    if ( a4 )
      *a4 = -1073704960;
    return 3221225666LL;
  }
  else
  {
    PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0xAuLL, 0x42554855u);
    v13 = PoolWithTag;
    if ( PoolWithTag )
    {
      *(_QWORD *)PoolWithTag = 0LL;
      PoolWithTag[4] = 0;
      PoolWithTag[2] = 4;
      *(_DWORD *)a3 = 0;
      PoolWithTag[3] = a2;
      *(_DWORD *)PoolWithTag = 0;
      v56[0] = -93;
      *((_BYTE *)PoolWithTag + 8) = 0;
      v56[1] = 0;
      v57 = 0;
      v58 = a2;
      v59 = PoolWithTag[2];
      v14 = 0LL;
      v54 = UsbhSyncSendCommand(a1, (unsigned int)v56, (_DWORD)PoolWithTag, (int)PoolWithTag + 4);
      v15 = v54;
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        v16 = *(_QWORD *)(a1 + 64);
        if ( v16 )
        {
          v17 = *(_QWORD *)(v16 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 880)) & *(_DWORD *)(v16 + 884));
          *(_DWORD *)v17 = 1329877100;
          *(_QWORD *)(v17 + 16) = a2;
          *(_QWORD *)(v17 + 8) = 0LL;
          *(_QWORD *)(v17 + 24) = 1383420738LL;
        }
      }
      v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
      v19 = UsbhLogMask;
      v20 = v18;
      WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
      if ( (UsbhLogMask & 8) != 0 && (v21 = *(_QWORD *)(a1 + 64)) != 0 )
      {
        v22 = a2;
        v23 = *(_QWORD *)(v21 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v21 + 880)) & *(_DWORD *)(v21 + 884));
        *(_DWORD *)v23 = 1413771367;
        *(_QWORD *)(v23 + 16) = a2;
        *(_QWORD *)(v23 + 8) = 0LL;
        *(_QWORD *)(v23 + 24) = 0LL;
        v19 = UsbhLogMask;
      }
      else
      {
        v22 = a2;
      }
      if ( v22 )
      {
        v24 = *(_QWORD *)(a1 + 64);
        if ( !v24 )
          UsbhTrapFatal_Dbg(a1, 0LL);
        if ( *(_DWORD *)v24 != 541218120 )
          UsbhTrapFatal_Dbg(a1, v24);
        if ( v22 <= *(unsigned __int8 *)(v24 + 2938) )
        {
          v25 = *(_QWORD *)(v24 + 3056);
          if ( v25 )
          {
            v26 = v25 + 2928LL * (v22 - 1);
            if ( (v19 & 8) != 0 )
            {
              v27 = *(_QWORD *)(v24 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v24 + 880)) & *(_DWORD *)(v24 + 884));
              *(_DWORD *)v27 = 1044672615;
              *(_QWORD *)(v27 + 16) = v22;
              *(_QWORD *)(v27 + 8) = 0LL;
              *(_QWORD *)(v27 + 24) = v26;
            }
            if ( v26 )
            {
              v14 = *(_QWORD *)(v26 + 392);
              if ( v14 )
              {
                v28 = *(_DWORD **)(v14 + 64);
                if ( !v28 )
                  UsbhTrapFatal_Dbg(*(_QWORD *)(v26 + 392), 0LL);
                if ( *v28 != 1329877064 )
                  UsbhTrapFatal_Dbg(*(_QWORD *)(v26 + 392), *(_QWORD *)(v14 + 64));
                v29 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x30uLL, 0x42554855u);
                if ( v29 )
                {
                  v30 = v28 + 316;
                  *v29 = 0LL;
                  v29[1] = 0LL;
                  v29[2] = 0LL;
                  v29[3] = 0LL;
                  *(_DWORD *)v29 = 1668571500;
                  v29[4] = v14;
                  *((_DWORD *)v29 + 6) = 1383420738;
                  v29[5] = 0LL;
                  v31 = v29 + 1;
                  v32 = (_QWORD *)*((_QWORD *)v30 + 1);
                  if ( (_DWORD *)*v32 != v30 )
                    __fastfail(3u);
                  *v31 = v30;
                  v31[1] = v32;
                  *v32 = v31;
                  *((_QWORD *)v30 + 1) = v31;
                }
                else
                {
                  ++v28[320];
                }
                v15 = v54;
              }
            }
          }
        }
      }
      WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v20);
      if ( v14 )
      {
        v8 = *(_QWORD *)(v14 + 64);
        if ( !v8 )
          UsbhTrapFatal_Dbg(v14, 0LL);
        if ( *(_DWORD *)v8 != 1329877064 )
          UsbhTrapFatal_Dbg(v14, *(_QWORD *)(v14 + 64));
      }
      if ( v15 >= 0 && v8 && *(_BYTE *)(v8 + 2716) )
      {
        v60 = *(_DWORD *)v13;
        if ( ((v13[1] | *v13) & 8) != 0 )
        {
          v34 = FdoExt(a1);
          UsbhDispatch_HardResetEvent(a1, v34 + 2264, 3);
        }
        if ( (v60 & 1) == 0 && (v60 & 0x10000) != 0 )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_q(
              WPP_GLOBAL_Control->DeviceExtension,
              v33,
              3,
              21,
              (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids,
              a1);
          byte_1C0069688 = 1;
          UsbhFlushPortChange(a1, a2, v55);
          v35 = FdoExt(a1);
          UsbhDispatch_HardResetEvent(a1, v35 + 2264, 3);
        }
      }
      if ( v14 )
      {
        if ( (UsbhLogMask & 0x100) != 0 )
        {
          v36 = *(_QWORD *)(a1 + 64);
          if ( v36 )
          {
            v37 = *(_QWORD *)(v36 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v36 + 880)) & *(_DWORD *)(v36 + 884));
            *(_DWORD *)v37 = 1329877109;
            *(_QWORD *)(v37 + 8) = 0LL;
            *(_QWORD *)(v37 + 16) = v14;
            *(_QWORD *)(v37 + 24) = 1383420738LL;
          }
        }
        v38 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
        WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
        if ( (UsbhLogMask & 0x100) != 0 )
        {
          v39 = *(_QWORD *)(a1 + 64);
          if ( v39 )
          {
            v40 = *(_QWORD *)(v39 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v39 + 880)) & *(_DWORD *)(v39 + 884));
            *(_DWORD *)v40 = 1348891236;
            *(_QWORD *)(v40 + 8) = 0LL;
            *(_QWORD *)(v40 + 16) = v14;
            *(_QWORD *)(v40 + 24) = 1383420738LL;
          }
        }
        v41 = *(_QWORD *)(v14 + 64);
        if ( !v41 )
          UsbhTrapFatal_Dbg(v14, 0LL);
        if ( *(_DWORD *)v41 != 1329877064 )
          UsbhTrapFatal_Dbg(v14, *(_QWORD *)(v14 + 64));
        v42 = (_QWORD *)(v41 + 1264);
        v43 = *(_QWORD **)(v41 + 1264);
        if ( v43 == (_QWORD *)(v41 + 1264) )
        {
LABEL_66:
          v47 = *(_DWORD *)(v41 + 1280);
          if ( v47 )
            *(_DWORD *)(v41 + 1280) = v47 - 1;
        }
        else
        {
          while ( 1 )
          {
            v44 = v43 - 1;
            if ( (UsbhLogMask & 0x100) != 0 )
            {
              v45 = *(_QWORD *)(a1 + 64);
              if ( v45 )
              {
                v46 = *(_QWORD *)(v45 + 888)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v45 + 880)) & *(_DWORD *)(v45 + 884));
                *(_DWORD *)v46 = 1064591724;
                *(_QWORD *)(v46 + 8) = 0LL;
                *(_QWORD *)(v46 + 16) = v41;
                *(_QWORD *)(v46 + 24) = 1383420738LL;
              }
            }
            if ( *((_DWORD *)v44 + 6) == 1383420738 && !v44[5] )
              break;
            v43 = (_QWORD *)*v43;
            if ( v43 == v42 )
              goto LABEL_66;
          }
          v49 = (_QWORD *)*v43;
          v50 = (_QWORD *)v44[2];
          if ( (_QWORD *)v49[1] != v44 + 1 || (_QWORD *)*v50 != v44 + 1 )
            __fastfail(3u);
          *v50 = v49;
          v49[1] = v50;
          ExFreePoolWithTag(v44, 0);
        }
        if ( (_QWORD *)*v42 == v42 && !*(_DWORD *)(v41 + 1280) )
          KeSetEvent((PRKEVENT)(v41 + 1288), 0, 0);
        WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v38);
        v15 = v54;
      }
      Log(a1, 4, 1366324084, v15, 0LL);
      if ( v15 < 0 || (v48 = v13[2], v48 == 4) )
      {
        if ( (v15 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v15) )
        {
          Log(a1, 4, 1366324018, v13[2], 0LL);
          LOBYTE(v53) = 0;
          UsbhException(a1, a2, 8, (int)v13, 10, v15, 0, usbfile_bus_c, 1649, v53);
        }
        if ( v15 >= 0 )
        {
          v51 = v13[1];
          *(_WORD *)(a3 + 2) = v51;
          v52 = *v13;
          *(_WORD *)a3 = v52;
          Log(a1, 4, 1349546868, v51, v52);
        }
        if ( a4 )
          *a4 = 0;
        ExFreePoolWithTag(v13, 0);
        return (unsigned int)v15;
      }
      else
      {
        Log(a1, 4, 1366324017, v48, 0LL);
        LOBYTE(v53) = 0;
        UsbhException(a1, a2, 9, (int)v13, 10, v15, 0, usbfile_bus_c, 1635, v53);
        if ( a4 )
          *a4 = 0;
        ExFreePoolWithTag(v13, 0);
        return 3221225473LL;
      }
    }
    else
    {
      Log(a1, 4, 1366319468, 0, 0LL);
      if ( a4 )
        *a4 = -1073737728;
      return 3221225626LL;
    }
  }
}
