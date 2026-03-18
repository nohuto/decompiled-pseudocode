/*
 * XREFs of Usbh_PCE_wRun_Action @ 0x1C000EF90
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C000ED90 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhUnlockPcqWithTag @ 0x1C0007AAC (UsbhUnlockPcqWithTag.c)
 *     UsbhHubRunPortChangeQueue @ 0x1C000E060 (UsbhHubRunPortChangeQueue.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D4D4 (WPP_RECORDER_SF_dq.c)
 */

void __fastcall Usbh_PCE_wRun_Action(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v6; // rdx
  KIRQL v7; // al
  __int64 v8; // r8
  KIRQL v9; // bp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // r9
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  int v43; // r9d
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  KIRQL v52; // [rsp+70h] [rbp+8h]

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v6 = *(_DWORD **)(a1 + 64);
  if ( !v6 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *v6 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v6);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v6,
      a3,
      33,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      *(_WORD *)(a2 + 4),
      a3);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v8 = *(unsigned __int16 *)(a2 + 4);
  *(_DWORD *)(a2 + 448) = 1;
  v9 = v7;
  v52 = v7;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 64);
    if ( v10 )
    {
      v9 = v7;
      v11 = *(_QWORD *)(v10 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
      *(_DWORD *)v11 = 724267376;
      *(_QWORD *)(v11 + 8) = 0LL;
      *(_QWORD *)(v11 + 16) = 5LL;
      *(_QWORD *)(v11 + 24) = v8;
    }
  }
  v12 = *(unsigned __int16 *)(a2 + 4);
  v13 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v14 = *(_QWORD *)(a1 + 64);
    if ( v14 )
    {
      v9 = v7;
      v15 = *(_QWORD *)(v14 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
      *(_DWORD *)v15 = 724267376;
      *(_QWORD *)(v15 + 8) = 0LL;
      *(_QWORD *)(v15 + 16) = v13;
      *(_QWORD *)(v15 + 24) = v12;
    }
  }
  v16 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v16;
  v17 = a2 + 32 * (v16 + 43);
  *(_DWORD *)v17 = 5;
  *(_DWORD *)(v17 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v17 + 8) = -1;
  *(_QWORD *)(v17 + 12) = 0LL;
  *(_QWORD *)(v17 + 20) = 0LL;
  *(_DWORD *)(v17 + 28) = 0;
  v18 = *(int *)(a2 + 12);
  v19 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v20 = *(_QWORD *)(a1 + 64);
    if ( v20 )
    {
      v9 = v7;
      v21 = *(_QWORD *)(v20 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v20 + 880)) & *(_DWORD *)(v20 + 884));
      *(_DWORD *)v21 = 812660063;
      *(_QWORD *)(v21 + 8) = 0LL;
      *(_QWORD *)(v21 + 16) = v18;
      *(_QWORD *)(v21 + 24) = v19;
    }
  }
  if ( (_DWORD)v18 == 5 )
  {
    v28 = *(unsigned __int16 *)(a2 + 4);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v29 = *(_QWORD *)(a1 + 64);
      if ( v29 )
      {
        v30 = *(_QWORD *)(v29 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v29 + 880)) & *(_DWORD *)(v29 + 884));
        *(_DWORD *)v30 = 896546143;
        *(_QWORD *)(v30 + 8) = 0LL;
        *(_QWORD *)(v30 + 16) = 5LL;
        *(_QWORD *)(v30 + 24) = v28;
      }
    }
    v31 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 12;
    *(_DWORD *)(v31 + a2 + 1384) = 12;
  }
  else
  {
    if ( (_DWORD)v18 != 4 )
    {
      if ( (_DWORD)v18 == 6 )
      {
LABEL_18:
        KeResetEvent((PRKEVENT)(a2 + 496));
        v22 = *(unsigned __int16 *)(a2 + 4);
        v23 = *(int *)(a2 + 12);
        if ( (UsbhLogMask & 0x10) != 0 )
        {
          v24 = *(_QWORD *)(a1 + 64);
          if ( v24 )
          {
            v9 = v52;
            v25 = *(_QWORD *)(v24 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v24 + 880)) & *(_DWORD *)(v24 + 884));
            *(_DWORD *)v25 = 757952880;
            *(_QWORD *)(v25 + 8) = 0LL;
            *(_QWORD *)(v25 + 16) = v23;
            *(_QWORD *)(v25 + 24) = v22;
          }
        }
LABEL_21:
        v26 = *(_DWORD *)(a2 + 12);
        v27 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 448) = 0;
        *(_DWORD *)(v27 + a2 + 1384) = v26;
        KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v9);
      }
      else
      {
        switch ( (int)v18 )
        {
          case 3:
            Log(a1, 512, 1597337650, v18, *(unsigned __int16 *)(a2 + 4));
            v46 = 32LL * *(unsigned int *)(a2 + 2400);
            *(_DWORD *)(a2 + 12) = 14;
            *(_DWORD *)(v46 + a2 + 1384) = 14;
            break;
          case 8:
            Log(a1, 512, 1597337650, v18, *(unsigned __int16 *)(a2 + 4));
            v47 = 32LL * *(unsigned int *)(a2 + 2400);
            *(_DWORD *)(a2 + 12) = 10;
            *(_DWORD *)(v47 + a2 + 1384) = 10;
            break;
          case 9:
            Log(a1, 512, 1597337652, v18, *(unsigned __int16 *)(a2 + 4));
            v42 = 32LL * *(unsigned int *)(a2 + 2400);
            *(_DWORD *)(a2 + 12) = 8;
            *(_DWORD *)(v42 + a2 + 1384) = 8;
            v43 = *(_DWORD *)(a2 + 12);
            *(_QWORD *)(a2 + 384) = KeGetCurrentThread();
            Log(a1, 16, 1886465325, v43, *(unsigned __int16 *)(a2 + 4));
            v44 = *(_DWORD *)(a2 + 12);
            v45 = 32LL * *(unsigned int *)(a2 + 2400);
            *(_DWORD *)(a2 + 448) = 0;
            *(_DWORD *)(v45 + a2 + 1384) = v44;
            goto LABEL_30;
          case 10:
          case 14:
            Log(a1, 512, 1597337649, v18, *(unsigned __int16 *)(a2 + 4));
            break;
          case 12:
            Log(a1, 512, 1597337650, v18, *(unsigned __int16 *)(a2 + 4));
            v48 = 32LL * *(unsigned int *)(a2 + 2400);
            *(_DWORD *)(a2 + 12) = 13;
            *(_DWORD *)(v48 + a2 + 1384) = 13;
            break;
          case 16:
            Log(a1, 512, 1597337655, v18, *(unsigned __int16 *)(a2 + 4));
            v50 = 32LL * *(unsigned int *)(a2 + 2400);
            *(_DWORD *)(a2 + 12) = 17;
            *(_DWORD *)(v50 + a2 + 1384) = 17;
            *(_QWORD *)(a2 + 384) = KeGetCurrentThread();
            UsbhUnlockPcqWithTag(a1, a2, v52);
            goto LABEL_31;
          case 17:
            Log(a1, 512, 1597337654, v18, *(unsigned __int16 *)(a2 + 4));
            v49 = 32LL * *(unsigned int *)(a2 + 2400);
            *(_DWORD *)(a2 + 12) = 17;
            *(_DWORD *)(v49 + a2 + 1384) = 17;
            break;
          case 19:
            KeResetEvent((PRKEVENT)(a2 + 496));
            v51 = 32LL * *(unsigned int *)(a2 + 2400);
            *(_DWORD *)(a2 + 12) = 19;
            *(_DWORD *)(v51 + a2 + 1384) = 19;
            break;
          case 20:
            goto LABEL_18;
          default:
            Log(a1, 512, 1597337656, v18, *(unsigned __int16 *)(a2 + 4));
            Log(a1, 16, 1886465325, *(_DWORD *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
            goto LABEL_21;
        }
        UsbhUnlockPcqWithTag(a1, a2, v9);
      }
      return;
    }
    v38 = *(unsigned __int16 *)(a2 + 4);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v39 = *(_QWORD *)(a1 + 64);
      if ( v39 )
      {
        v40 = *(_QWORD *)(v39 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v39 + 880)) & *(_DWORD *)(v39 + 884));
        *(_DWORD *)v40 = 862991711;
        *(_QWORD *)(v40 + 8) = 0LL;
        *(_QWORD *)(v40 + 16) = 4LL;
        *(_QWORD *)(v40 + 24) = v38;
      }
    }
    v41 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 3;
    *(_DWORD *)(v41 + a2 + 1384) = 3;
  }
  v32 = *(int *)(a2 + 12);
  v33 = *(unsigned __int16 *)(a2 + 4);
  *(_QWORD *)(a2 + 384) = KeGetCurrentThread();
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v34 = *(_QWORD *)(a1 + 64);
    if ( v34 )
    {
      v35 = *(_QWORD *)(v34 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v34 + 880)) & *(_DWORD *)(v34 + 884));
      *(_DWORD *)v35 = 757952880;
      *(_QWORD *)(v35 + 24) = v33;
      *(_QWORD *)(v35 + 16) = v32;
      *(_QWORD *)(v35 + 8) = 0LL;
    }
  }
  v36 = *(_DWORD *)(a2 + 12);
  v37 = 32LL * *(unsigned int *)(a2 + 2400);
  *(_DWORD *)(a2 + 448) = 0;
  *(_DWORD *)(v37 + a2 + 1384) = v36;
LABEL_30:
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v52);
LABEL_31:
  UsbhHubRunPortChangeQueue(a1, a2, a3);
}
