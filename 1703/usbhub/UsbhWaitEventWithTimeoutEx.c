/*
 * XREFs of UsbhWaitEventWithTimeoutEx @ 0x1C000B540
 * Callers:
 *     UsbhSshResumePort @ 0x1C0002B00 (UsbhSshResumePort.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0006D04 (UsbhSyncResetDeviceInternal.c)
 *     Usbh_PCE_Disable_Action @ 0x1C000C730 (Usbh_PCE_Disable_Action.c)
 *     Usbh_PCE_Suspend_Action @ 0x1C0016310 (Usbh_PCE_Suspend_Action.c)
 *     UsbhWaitForResetTimeout @ 0x1C0021B18 (UsbhWaitForResetTimeout.c)
 *     Usbh_PCE_Close_Action @ 0x1C004170C (Usbh_PCE_Close_Action.c)
 *     UsbhNotifyPnpOfFailure_Action @ 0x1C00439C8 (UsbhNotifyPnpOfFailure_Action.c)
 *     UsbhWaitForPortResume @ 0x1C004452C (UsbhWaitForPortResume.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1C00463C4 (UsbhPdoWaitForD3Reconnect.c)
 *     UsbhAsyncStop @ 0x1C004AC60 (UsbhAsyncStop.c)
 * Callees:
 *     UsbhPCE_wRun @ 0x1C0008D5C (UsbhPCE_wRun.c)
 *     UsbhIncHubBusy @ 0x1C000BC70 (UsbhIncHubBusy.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C000FBC0 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 *     UsbhTrapFatalTimeout_x9f @ 0x1C003BB40 (UsbhTrapFatalTimeout_x9f.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhWaitEventWithTimeoutEx(__int64 a1, void *a2, int a3, int a4, unsigned int a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r13
  _QWORD *v18; // r13
  NTSTATUS v19; // r12d
  NTSTATUS v20; // eax
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  _DWORD *v24; // rdx
  struct _KEVENT *v25; // r14
  __int64 Signalling; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rdx
  _QWORD *v30; // rax
  _QWORD *v31; // rcx
  struct _KEVENT *v32; // rcx
  __int64 v33; // rax
  char v34; // cl
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // r8
  __int64 v39; // rdx
  union _LARGE_INTEGER *v41; // rax
  NTSTATUS v42; // eax
  NTSTATUS v43; // eax
  volatile int Lock; // eax
  BOOLEAN v45; // r9
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp-40h] BYREF
  union _LARGE_INTEGER v47; // [rsp+48h] [rbp-38h] BYREF
  struct _KEVENT *v48; // [rsp+50h] [rbp-30h]
  __int64 v49; // [rsp+58h] [rbp-28h]
  PVOID Object; // [rsp+60h] [rbp-20h] BYREF
  __int64 v51; // [rsp+68h] [rbp-18h]
  PVOID v52; // [rsp+70h] [rbp-10h] BYREF
  __int64 v53; // [rsp+78h] [rbp-8h]
  int v55; // [rsp+D0h] [rbp+50h]

  v6 = a3;
  v47.QuadPart = 0LL;
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v9 = *(_QWORD *)(a1 + 64);
      if ( v9 )
      {
        HIBYTE(v55) = a4;
        LOBYTE(v55) = HIBYTE(a4);
        BYTE1(v55) = BYTE2(a4);
        BYTE2(v55) = BYTE1(a4);
        v10 = *(_QWORD *)(v9 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 880)) & *(_DWORD *)(v9 + 884));
        *(_DWORD *)v10 = v55;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 16) = a3;
        *(_QWORD *)(v10 + 24) = a2;
      }
    }
  }
  v11 = 10000LL * a3 + (int)(KeQueryTimeIncrement() - 1);
  v49 = v11;
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v12 = *(_QWORD *)(a1 + 64);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
        *(_DWORD *)v13 = 826627159;
        *(_QWORD *)(v13 + 8) = 0LL;
        *(_QWORD *)(v13 + 16) = 0LL;
        *(_QWORD *)(v13 + 24) = v6;
      }
    }
  }
  Timeout.QuadPart = -v11;
  v14 = MEMORY[0xFFFFF78000000008];
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v15 = *(_QWORD *)(a1 + 64);
      if ( v15 )
      {
        v16 = *(_QWORD *)(v15 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884));
        *(_DWORD *)v16 = 827618423;
        *(_QWORD *)(v16 + 16) = (unsigned int)v14;
        *(_QWORD *)(v16 + 24) = SHIDWORD(v14);
        *(_QWORD *)(v16 + 8) = 0LL;
      }
    }
  }
  if ( (_DWORD)v6 )
  {
    if ( !a5 )
    {
      v19 = KeWaitForSingleObject(a2, Executive, 0, 0, &Timeout);
LABEL_48:
      v17 = a6;
      goto LABEL_49;
    }
    v17 = a6;
    if ( a6 )
    {
      v18 = (_QWORD *)UsbhIncHubBusy(a1, (int)a6 + 24, a6, 1465152371, 0);
      Object = a2;
      v51 = a6 + 496;
      v19 = KeWaitForMultipleObjects(2u, &Object, WaitAny, Executive, 0, 0, &Timeout, 0LL);
      if ( v19 )
      {
        while ( 1 )
        {
          if ( v19 == 1 )
          {
            v19 = KeWaitForSingleObject(a2, Executive, 0, 0, &v47);
            if ( !v19 )
              goto LABEL_34;
            Timeout.QuadPart = MEMORY[0xFFFFF78000000008] - v14 - v11;
            v51 = a6 + 2464;
            v20 = KeWaitForMultipleObjects(2u, &Object, WaitAny, Executive, 0, 0, &Timeout, 0LL);
            v19 = v20;
            switch ( v20 )
            {
              case 0:
                goto LABEL_34;
              case 1:
                v21 = *(unsigned __int16 *)(a6 + 4);
                if ( (UsbhLogMask & 0x200) != 0 )
                {
                  if ( a1 )
                  {
                    v22 = *(_QWORD *)(a1 + 64);
                    if ( v22 )
                    {
                      v23 = *(_QWORD *)(v22 + 888)
                          + 32LL
                          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v22 + 880)) & *(_DWORD *)(v22 + 884));
                      *(_DWORD *)v23 = 1850889303;
                      *(_QWORD *)(v23 + 8) = 0LL;
                      *(_QWORD *)(v23 + 16) = a6;
                      *(_QWORD *)(v23 + 24) = v21;
                    }
                  }
                }
                *(_DWORD *)(a6 + 2844) = a5;
                if ( !a1 )
                  UsbhTrapFatal_Dbg(0LL, 0LL);
                v24 = *(_DWORD **)(a1 + 64);
                if ( !v24 )
                  UsbhTrapFatal_Dbg(a1, 0LL);
                if ( *v24 != 541218120 )
                  UsbhTrapFatal_Dbg(a1, v24);
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  WPP_RECORDER_SF_d(
                    WPP_GLOBAL_Control->DeviceExtension,
                    0,
                    1,
                    57,
                    (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
                    *(_WORD *)(a6 + 4));
                LODWORD(v48) = 0;
                UsbhDispatch_PortChangeQueueEventEx(a1, a6, 5, a6 + 24, (__int64)v48, 0, 0LL, 0LL);
                KeSetEvent((PRKEVENT)(a6 + 2464), 0, 0);
                break;
              case 258:
                goto LABEL_34;
            }
            v51 = a6 + 496;
          }
          else if ( v19 == 258 )
          {
            goto LABEL_34;
          }
          if ( MEMORY[0xFFFFF78000000008] - v14 >= v11 )
            break;
          Timeout.QuadPart = MEMORY[0xFFFFF78000000008] - v14 - v11;
          v19 = KeWaitForMultipleObjects(2u, &Object, WaitAny, Executive, 0, 0, &Timeout, 0LL);
          if ( !v19 )
            goto LABEL_34;
        }
        v19 = 258;
      }
LABEL_34:
      if ( !a1 )
        UsbhTrapFatal_Dbg(0LL, 0LL);
      v25 = *(struct _KEVENT **)(a1 + 64);
      if ( !v25 )
        UsbhTrapFatal_Dbg(a1, 0LL);
      if ( v25->Header.LockNV != 541218120 )
        UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
      v25[142].Header.Type = 1;
      v48 = v25 + 139;
      KeWaitForSingleObject(&v25[139], Executive, 0, 0, 0LL);
      Signalling = v25[142].Header.Signalling;
      if ( (UsbhLogMask & 0x10000) != 0 )
      {
        v27 = *(_QWORD *)(a1 + 64);
        if ( v27 )
        {
          v28 = *(_QWORD *)(v27 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v27 + 880)) & *(_DWORD *)(v27 + 884));
          *(_DWORD *)v28 = 1667581000;
          *(_QWORD *)(v28 + 8) = 0LL;
          *(_QWORD *)(v28 + 16) = v18;
          *(_QWORD *)(v28 + 24) = Signalling;
        }
      }
      if ( v25[142].Header.Signalling )
      {
        if ( v18 == (_QWORD *)1936941672 )
        {
          Lock = v25[130].Header.Lock;
          if ( Lock )
            v25[130].Header.LockNV = Lock - 1;
        }
        else if ( v18 )
        {
          v29 = v18[1];
          v30 = v18 + 1;
          v31 = (_QWORD *)v18[2];
          if ( *(_QWORD **)(v29 + 8) != v18 + 1 || (_QWORD *)*v31 != v30 )
            __fastfail(3u);
          *v31 = v29;
          *(_QWORD *)(v29 + 8) = v31;
          v18[2] = v18 + 1;
          *v30 = v30;
          ExFreePoolWithTag(v18, 0);
        }
        v32 = v25 + 139;
      }
      else
      {
        v32 = v48;
      }
      KeSetEvent(v32, 0, 0);
      goto LABEL_48;
    }
  }
  else
  {
    v17 = a6;
  }
  if ( a5 == 11 )
  {
    v52 = a2;
LABEL_63:
    v53 = v17 + 496;
    do
    {
      v41 = (_DWORD)v6 ? &Timeout : 0LL;
      v42 = KeWaitForMultipleObjects(2u, &v52, WaitAny, Executive, 0, 0, v41, 0LL);
      v19 = v42;
      if ( !v42 )
        break;
      if ( v42 == 1 )
      {
        v19 = KeWaitForSingleObject(a2, Executive, 0, 0, &v47);
        if ( !v19 )
          break;
        v53 = v17 + 2464;
        v43 = KeWaitForMultipleObjects(2u, &v52, WaitAny, Executive, 0, 0, 0LL, 0LL);
        v19 = v43;
        if ( !v43 )
          break;
        if ( v43 == 1 )
        {
          Log(a1, 512, 1465143918, v17, *(unsigned __int16 *)(v17 + 4));
          UsbhPCE_wRun(a1, v17 + 24, v17);
        }
        goto LABEL_63;
      }
    }
    while ( v42 != 258 );
  }
  else
  {
    Log(a1, 8, 2004112472, 0, 0LL);
    v19 = KeWaitForSingleObject(a2, Executive, 0, v45, 0LL);
  }
LABEL_49:
  v33 = MEMORY[0xFFFFF78000000008];
  v34 = UsbhLogMask;
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v35 = *(_QWORD *)(a1 + 64);
      if ( v35 )
      {
        v36 = *(_QWORD *)(v35 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v35 + 880)) & *(_DWORD *)(v35 + 884));
        *(_DWORD *)v36 = 844395639;
        *(_QWORD *)(v36 + 16) = (unsigned int)v33;
        *(_QWORD *)(v36 + 24) = SHIDWORD(v33);
        *(_QWORD *)(v36 + 8) = 0LL;
        v34 = UsbhLogMask;
      }
    }
  }
  v37 = v33 - v14;
  if ( (v34 & 8) != 0 )
  {
    if ( a1 )
    {
      v38 = *(_QWORD *)(a1 + 64);
      if ( v38 )
      {
        v39 = *(_QWORD *)(v38 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v38 + 880)) & *(_DWORD *)(v38 + 884));
        *(_DWORD *)v39 = 2017809495;
        *(_QWORD *)(v39 + 16) = v19;
        *(_QWORD *)(v39 + 24) = (unsigned int)v37;
        *(_QWORD *)(v39 + 8) = 0LL;
      }
    }
  }
  if ( v19 == 258 )
  {
    if ( v37 < v11 )
    {
      Log(a1, 8, 1465135393, HIDWORD(v37), (unsigned int)v37);
      Log(a1, 8, 1465135649, HIDWORD(v49), (unsigned int)v11);
    }
    if ( a5 )
    {
      if ( a5 != 11 )
      {
        v19 = KeWaitForSingleObject(a2, Executive, 0, 0, &v47);
        if ( v19 )
          UsbhTrapFatalTimeout_x9f(a1, a5, v17);
      }
    }
  }
  return (unsigned int)v19;
}
