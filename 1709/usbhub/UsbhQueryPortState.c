/*
 * XREFs of UsbhQueryPortState @ 0x1C0011680
 * Callers:
 *     UsbhSshResumeDownstream @ 0x1C000266C (UsbhSshResumeDownstream.c)
 *     UsbhFdoColdStartCheckPort @ 0x1C000550C (UsbhFdoColdStartCheckPort.c)
 *     UsbhFdoColdStartPdo @ 0x1C0007280 (UsbhFdoColdStartPdo.c)
 *     UsbhBusSuspend_Action @ 0x1C0007D9C (UsbhBusSuspend_Action.c)
 *     UsbhHubRunPortChangeQueue @ 0x1C000E060 (UsbhHubRunPortChangeQueue.c)
 *     UsbhFdoReturnPortStatus @ 0x1C0010FC0 (UsbhFdoReturnPortStatus.c)
 *     UsbhHubProcessIsr @ 0x1C0014D30 (UsbhHubProcessIsr.c)
 *     UsbhFinishStart @ 0x1C0017D60 (UsbhFinishStart.c)
 *     UsbhSetupDevice @ 0x1C0022C90 (UsbhSetupDevice.c)
 *     UsbhSyncSuspendPdoPort @ 0x1C0023164 (UsbhSyncSuspendPdoPort.c)
 *     UsbhFdoValidateConnectionPdo @ 0x1C003BC1C (UsbhFdoValidateConnectionPdo.c)
 *     UsbhOvercurrentResetWorker @ 0x1C003E200 (UsbhOvercurrentResetWorker.c)
 *     UsbhBusPnpStop_Action @ 0x1C003F41C (UsbhBusPnpStop_Action.c)
 *     UsbhHubSyncSuspendPortEvent @ 0x1C0041020 (UsbhHubSyncSuspendPortEvent.c)
 *     UsbhQueueSoftConnectChange @ 0x1C0041ECC (UsbhQueueSoftConnectChange.c)
 *     UsbhPortResumeTimeout @ 0x1C00448BC (UsbhPortResumeTimeout.c)
 *     UsbhFdoSetD0Warm @ 0x1C0046A38 (UsbhFdoSetD0Warm.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1C0047184 (UsbhPdoWaitForD3Reconnect.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C00036E4 (Usb_Disconnected.c)
 *     UsbhSyncSendCommand @ 0x1C0011D30 (UsbhSyncSendCommand.c)
 *     UsbhDispatch_HardResetEvent @ 0x1C00141E0 (UsbhDispatch_HardResetEvent.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 *     UsbhFlushPortChange @ 0x1C003BDC0 (UsbhFlushPortChange.c)
 *     WPP_RECORDER_SF_q @ 0x1C003D59C (WPP_RECORDER_SF_q.c)
 *     UsbhException @ 0x1C004FE34 (UsbhException.c)
 */

__int64 __fastcall UsbhQueryPortState(__int64 a1, unsigned __int16 a2, __int64 a3, _DWORD *a4)
{
  __int64 v8; // rbp
  _DWORD *v9; // rax
  int v10; // ecx
  unsigned __int16 *PoolWithTag; // r12
  __int64 v12; // r13
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  KIRQL v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rsi
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // rdx
  int v27; // edx
  __int64 v28; // rdx
  __int64 v29; // rcx
  KIRQL v30; // bp
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rsi
  __int64 *v34; // rdi
  __int64 *v35; // r9
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 *v38; // rdx
  __int64 **v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  unsigned __int16 v42; // cx
  __int64 v43; // r9
  unsigned int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  unsigned __int16 v48; // bp
  __int16 v49; // si
  __int64 v50; // rax
  __int64 v51; // rax
  int v52; // eax
  int v53; // [rsp+48h] [rbp-60h]
  char v54[4]; // [rsp+54h] [rbp-54h] BYREF
  _BYTE v55[2]; // [rsp+58h] [rbp-50h] BYREF
  __int16 v56; // [rsp+5Ah] [rbp-4Eh]
  unsigned __int16 v57; // [rsp+5Ch] [rbp-4Ch]
  unsigned __int16 v58; // [rsp+5Eh] [rbp-4Ah]

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
    if ( PoolWithTag )
    {
      *(_QWORD *)PoolWithTag = 0LL;
      PoolWithTag[4] = 0;
      PoolWithTag[2] = 4;
      *(_DWORD *)a3 = 0;
      PoolWithTag[3] = a2;
      *(_DWORD *)PoolWithTag = 0;
      v55[0] = -93;
      *((_BYTE *)PoolWithTag + 8) = 0;
      v55[1] = 0;
      v56 = 0;
      v57 = a2;
      v58 = PoolWithTag[2];
      v12 = (int)UsbhSyncSendCommand(a1, (unsigned int)v55, (_DWORD)PoolWithTag, (int)PoolWithTag + 4);
      v13 = 0LL;
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        v14 = *(_QWORD *)(a1 + 64);
        if ( v14 )
        {
          v15 = *(_QWORD *)(v14 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
          *(_DWORD *)v15 = 1329877100;
          *(_QWORD *)(v15 + 16) = a2;
          *(_QWORD *)(v15 + 8) = 0LL;
          *(_QWORD *)(v15 + 24) = 1383420738LL;
        }
      }
      v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
      WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
      if ( (UsbhLogMask & 8) != 0 )
      {
        v17 = *(_QWORD *)(a1 + 64);
        if ( v17 )
        {
          v18 = *(_QWORD *)(v17 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v17 + 880)) & *(_DWORD *)(v17 + 884));
          *(_DWORD *)v18 = 1413771367;
          *(_QWORD *)(v18 + 16) = a2;
          *(_QWORD *)(v18 + 8) = 0LL;
          *(_QWORD *)(v18 + 24) = 0LL;
        }
      }
      if ( a2 )
      {
        v19 = *(_QWORD *)(a1 + 64);
        if ( !v19 )
          UsbhTrapFatal_Dbg(a1, 0LL);
        if ( *(_DWORD *)v19 != 541218120 )
          UsbhTrapFatal_Dbg(a1, v19);
        if ( a2 <= *(unsigned __int8 *)(v19 + 2938) )
        {
          v20 = *(_QWORD *)(v19 + 3056);
          if ( v20 )
          {
            v21 = 2928LL * a2 + v20 - 2928;
            if ( (UsbhLogMask & 8) != 0 )
            {
              v22 = *(_QWORD *)(v19 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v19 + 880)) & *(_DWORD *)(v19 + 884));
              *(_DWORD *)v22 = 1044672615;
              *(_QWORD *)(v22 + 8) = 0LL;
              *(_QWORD *)(v22 + 16) = a2;
              *(_QWORD *)(v22 + 24) = v21;
            }
            if ( v21 )
            {
              v13 = *(_QWORD *)(v21 + 392);
              if ( v13 )
              {
                v23 = *(_QWORD *)(v13 + 64);
                if ( !v23 )
                  UsbhTrapFatal_Dbg(*(_QWORD *)(v21 + 392), 0LL);
                if ( *(_DWORD *)v23 != 1329877064 )
                  UsbhTrapFatal_Dbg(*(_QWORD *)(v21 + 392), *(_QWORD *)(v13 + 64));
                v24 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x30uLL, 0x42554855u);
                if ( v24 )
                {
                  *v24 = 0LL;
                  v24[1] = 0LL;
                  v24[2] = 0LL;
                  v24[3] = 0LL;
                  v24[5] = 0LL;
                  *(_DWORD *)v24 = 1668571500;
                  v24[4] = v13;
                  *((_DWORD *)v24 + 6) = 1383420738;
                  v25 = v24 + 1;
                  v26 = *(_QWORD **)(v23 + 1272);
                  if ( *v26 != v23 + 1264 )
                    __fastfail(3u);
                  *v25 = v23 + 1264;
                  v25[1] = v26;
                  *v26 = v25;
                  *(_QWORD *)(v23 + 1272) = v25;
                }
                else
                {
                  ++*(_DWORD *)(v23 + 1280);
                }
              }
            }
          }
        }
      }
      WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v16);
      if ( v13 )
      {
        v8 = *(_QWORD *)(v13 + 64);
        if ( !v8 )
          UsbhTrapFatal_Dbg(v13, 0LL);
        if ( *(_DWORD *)v8 != 1329877064 )
          UsbhTrapFatal_Dbg(v13, *(_QWORD *)(v13 + 64));
      }
      if ( (int)v12 >= 0 && v8 && *(_BYTE *)(v8 + 2732) )
      {
        v48 = PoolWithTag[1];
        v49 = *PoolWithTag;
        if ( ((*PoolWithTag | v48) & 8) != 0 )
        {
          v50 = FdoExt(a1);
          UsbhDispatch_HardResetEvent(a1, v50 + 2264, 3LL);
        }
        if ( (v49 & 1) == 0 && (v48 & 1) != 0 )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_q(
              WPP_GLOBAL_Control->DeviceExtension,
              v27,
              3,
              21,
              (__int64)&WPP_e3e41794e16d35283050e58212bb38b7_Traceguids,
              a1);
          byte_1C006A688 = 1;
          UsbhFlushPortChange(a1, a2, v54);
          v51 = FdoExt(a1);
          UsbhDispatch_HardResetEvent(a1, v51 + 2264, 3LL);
        }
      }
      if ( v13 )
      {
        if ( (UsbhLogMask & 0x100) != 0 )
        {
          v28 = *(_QWORD *)(a1 + 64);
          if ( v28 )
          {
            v29 = *(_QWORD *)(v28 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v28 + 880)) & *(_DWORD *)(v28 + 884));
            *(_DWORD *)v29 = 1329877109;
            *(_QWORD *)(v29 + 8) = 0LL;
            *(_QWORD *)(v29 + 16) = v13;
            *(_QWORD *)(v29 + 24) = 1383420738LL;
          }
        }
        v30 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
        WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
        if ( (UsbhLogMask & 0x100) != 0 )
        {
          v31 = *(_QWORD *)(a1 + 64);
          if ( v31 )
          {
            v32 = *(_QWORD *)(v31 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v31 + 880)) & *(_DWORD *)(v31 + 884));
            *(_DWORD *)v32 = 1348891236;
            *(_QWORD *)(v32 + 8) = 0LL;
            *(_QWORD *)(v32 + 16) = v13;
            *(_QWORD *)(v32 + 24) = 1383420738LL;
          }
        }
        v33 = *(_QWORD *)(v13 + 64);
        if ( !v33 )
          UsbhTrapFatal_Dbg(v13, 0LL);
        if ( *(_DWORD *)v33 != 1329877064 )
          UsbhTrapFatal_Dbg(v13, *(_QWORD *)(v13 + 64));
        v34 = (__int64 *)(v33 + 1264);
        v35 = *(__int64 **)(v33 + 1264);
        if ( v35 == (__int64 *)(v33 + 1264) )
        {
LABEL_97:
          v52 = *(_DWORD *)(v33 + 1280);
          if ( v52 )
            *(_DWORD *)(v33 + 1280) = v52 - 1;
        }
        else
        {
          while ( 1 )
          {
            if ( (UsbhLogMask & 0x100) != 0 )
            {
              v36 = *(_QWORD *)(a1 + 64);
              if ( v36 )
              {
                v37 = *(_QWORD *)(v36 + 888)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v36 + 880)) & *(_DWORD *)(v36 + 884));
                *(_DWORD *)v37 = 1064591724;
                *(_QWORD *)(v37 + 8) = 0LL;
                *(_QWORD *)(v37 + 16) = v33;
                *(_QWORD *)(v37 + 24) = 1383420738LL;
              }
            }
            if ( *((_DWORD *)v35 + 4) == 1383420738 && !v35[4] )
              break;
            v35 = (__int64 *)*v35;
            if ( v35 == v34 )
              goto LABEL_97;
          }
          v38 = (__int64 *)*v35;
          if ( *(__int64 **)(*v35 + 8) != v35 || (v39 = (__int64 **)v35[1], *v39 != v35) )
            __fastfail(3u);
          *v39 = v38;
          v38[1] = (__int64)v39;
          ExFreePoolWithTag(v35 - 1, 0);
        }
        if ( (__int64 *)*v34 == v34 && !*(_DWORD *)(v33 + 1280) )
          KeSetEvent((PRKEVENT)(v33 + 1288), 0, 0);
        WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v30);
      }
      if ( (UsbhLogMask & 4) != 0 )
      {
        v40 = *(_QWORD *)(a1 + 64);
        if ( v40 )
        {
          v41 = *(_QWORD *)(v40 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v40 + 880)) & *(_DWORD *)(v40 + 884));
          *(_DWORD *)v41 = 1953722449;
          *(_QWORD *)(v41 + 8) = 0LL;
          *(_QWORD *)(v41 + 16) = v12;
          *(_QWORD *)(v41 + 24) = 0LL;
        }
      }
      if ( (int)v12 < 0 || (v42 = PoolWithTag[2], v42 == 4) )
      {
        if ( (v12 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v12) )
        {
          Log(a1, 4, 1366324018, PoolWithTag[2], 0LL);
          LOBYTE(v53) = 0;
          UsbhException(a1, a2, 8, (int)PoolWithTag, 10, v12, 0, usbfile_bus_c, 1649, v53);
        }
        if ( (int)v12 >= 0 )
        {
          v43 = PoolWithTag[1];
          *(_WORD *)(a3 + 2) = PoolWithTag[1];
          v44 = *PoolWithTag;
          *(_WORD *)a3 = v44;
          if ( (UsbhLogMask & 4) != 0 )
          {
            v45 = *(_QWORD *)(a1 + 64);
            if ( v45 )
            {
              v46 = *(_QWORD *)(v45 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v45 + 880)) & *(_DWORD *)(v45 + 884));
              *(_DWORD *)v46 = 1953722448;
              *(_QWORD *)(v46 + 8) = 0LL;
              *(_QWORD *)(v46 + 16) = v43;
              *(_QWORD *)(v46 + 24) = v44;
            }
          }
        }
        if ( a4 )
          *a4 = 0;
        ExFreePoolWithTag(PoolWithTag, 0);
        return (unsigned int)v12;
      }
      else
      {
        Log(a1, 4, 1366324017, v42, 0LL);
        LOBYTE(v53) = 0;
        UsbhException(a1, a2, 9, (int)PoolWithTag, 10, v12, 0, usbfile_bus_c, 1635, v53);
        if ( a4 )
          *a4 = 0;
        ExFreePoolWithTag(PoolWithTag, 0);
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
