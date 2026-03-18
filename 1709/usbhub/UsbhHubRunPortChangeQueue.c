/*
 * XREFs of UsbhHubRunPortChangeQueue @ 0x1C000E060
 * Callers:
 *     Usbh_PCE_wRun_Action @ 0x1C000EF90 (Usbh_PCE_wRun_Action.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C00036E4 (Usb_Disconnected.c)
 *     UsbhDispatch_PortChangeQueueNullEventEx @ 0x1C000E018 (UsbhDispatch_PortChangeQueueNullEventEx.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C000ED90 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     UsbhHubDispatchPortEvent @ 0x1C000FF30 (UsbhHubDispatchPortEvent.c)
 *     UsbhQueryPortState @ 0x1C0011680 (UsbhQueryPortState.c)
 *     UsbhUnlatchPdo @ 0x1C00248C0 (UsbhUnlatchPdo.c)
 *     UsbhPCE_psSUSPEND @ 0x1C0027594 (UsbhPCE_psSUSPEND.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D4D4 (WPP_RECORDER_SF_dq.c)
 *     UsbhHubProcessTimeoutObj @ 0x1C0040EC4 (UsbhHubProcessTimeoutObj.c)
 *     UsbhPCE_wChangeERROR @ 0x1C0041D04 (UsbhPCE_wChangeERROR.c)
 *     UsbhException @ 0x1C004FE34 (UsbhException.c)
 */

__int64 UsbhHubRunPortChangeQueue(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v3; // r14
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rcx
  _DWORD *v9; // rdx
  unsigned __int16 v10; // si
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r10
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rsi
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned int PortState; // r13d
  int v27; // eax
  int v28; // r14d
  int v29; // r8d
  _DWORD *v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rcx
  _DWORD *v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 result; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  int v41; // eax
  int v42; // [rsp+50h] [rbp-41h]
  __int64 v43; // [rsp+68h] [rbp-29h] BYREF
  int v44; // [rsp+70h] [rbp-21h]
  int v45; // [rsp+78h] [rbp-19h]
  __int16 v46; // [rsp+7Ch] [rbp-15h]
  int v47; // [rsp+80h] [rbp-11h]
  __int64 v48; // [rsp+F8h] [rbp+67h]
  __int64 v50; // [rsp+110h] [rbp+7Fh] BYREF
  va_list va; // [rsp+110h] [rbp+7Fh]
  va_list va1; // [rsp+118h] [rbp+87h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v50 = va_arg(va1, _QWORD);
  v3 = a3;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v6 = *(_QWORD *)(a1 + 64);
  if ( !v6 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v6 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  if ( !a3 )
    UsbhTrapFatal_Dbg(a1, a1);
  if ( *(_DWORD *)a2 != 1146120296 )
    UsbhTrapFatal_Dbg(a1, a1);
  v7 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v8 = *(_QWORD *)(v6 + 888)
       + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v6 + 880)) & *(_DWORD *)(v6 + 884));
    *(_DWORD *)v8 = 1466458992;
    *(_QWORD *)(v8 + 8) = 0LL;
    *(_QWORD *)(v8 + 16) = a2;
    *(_QWORD *)(v8 + 24) = v7;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      (unsigned int)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      98,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      *(_WORD *)(a2 + 4),
      a3);
  *(_DWORD *)(a2 + 8) = 1;
  while ( 1 )
  {
    v9 = *(_DWORD **)(a1 + 64);
    v10 = *(_WORD *)(a2 + 4);
    v43 = 0LL;
    if ( !v9 )
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *v9 != 541218120 )
      UsbhTrapFatal_Dbg(a1, v9);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dq(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v9,
        (unsigned int)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
        74,
        (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
        v10,
        v3);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v11 = *(_QWORD *)(a1 + 64);
      if ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
        *(_DWORD *)v12 = 909198672;
        *(_QWORD *)(v12 + 24) = v10;
        *(_QWORD *)(v12 + 8) = 0LL;
        *(_QWORD *)(v12 + 16) = 0LL;
      }
    }
    if ( (UsbhLogMask & 8) != 0 )
    {
      v13 = *(_QWORD *)(a1 + 64);
      if ( v13 )
      {
        v14 = *(_QWORD *)(v13 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
        *(_DWORD *)v14 = 1413771367;
        *(_QWORD *)(v14 + 16) = v10;
        *(_QWORD *)(v14 + 8) = 0LL;
        *(_QWORD *)(v14 + 24) = 0LL;
      }
    }
    if ( v10 )
    {
      v15 = *(_QWORD *)(a1 + 64);
      if ( !v15 )
        UsbhTrapFatal_Dbg(a1, 0LL);
      if ( *(_DWORD *)v15 != 541218120 )
        UsbhTrapFatal_Dbg(a1, v15);
      if ( v10 <= *(unsigned __int8 *)(v15 + 2938) )
      {
        v16 = *(_QWORD *)(v15 + 3056);
        if ( v16 )
        {
          v17 = 2928LL * v10 + v16 - 2928;
          if ( (UsbhLogMask & 8) != 0 )
          {
            v18 = *(_QWORD *)(v15 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884));
            *(_DWORD *)v18 = 1044672615;
            *(_QWORD *)(v18 + 16) = v10;
            *(_QWORD *)(v18 + 8) = 0LL;
            *(_QWORD *)(v18 + 24) = v17;
          }
          if ( v17 )
            v43 = UsbhDispatch_PortChangeQueueNullEventEx(a1, v17, 16, v3, (__int64)&v43);
        }
      }
    }
    if ( !v43 )
      break;
    *(_QWORD *)(a2 + 376) = v3;
    v19 = v43;
    *(_QWORD *)(v3 + 24) = KeGetCurrentThread();
    v20 = v19 - 16;
    v21 = *(unsigned __int16 *)(a2 + 4);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v22 = *(_QWORD *)(a1 + 64);
      if ( v22 )
      {
        v23 = *(_QWORD *)(v22 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v22 + 880)) & *(_DWORD *)(v22 + 884));
        *(_DWORD *)v23 = 1313891184;
        *(_QWORD *)(v23 + 8) = 0LL;
        *(_QWORD *)(v23 + 16) = v21;
        *(_QWORD *)(v23 + 24) = 0LL;
      }
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        v24 = *(_QWORD *)(a1 + 64);
        if ( v24 )
        {
          v25 = *(_QWORD *)(v24 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v24 + 880)) & *(_DWORD *)(v24 + 884));
          *(_DWORD *)v25 = 1145332592;
          *(_QWORD *)(v25 + 8) = 0LL;
          *(_QWORD *)(v25 + 16) = a2;
          *(_QWORD *)(v25 + 24) = v20;
        }
      }
    }
    if ( (*(_DWORD *)(v20 + 8) & 0x16) != 0 )
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 2876));
    if ( (*(_DWORD *)(v20 + 8) & 1) != 0 )
      *(_WORD *)(a2 + 2839) = 256;
    PortState = UsbhQueryPortState(a1);
    if ( PortState >> 30 == 3 )
    {
      v41 = *(_DWORD *)(v20 + 48);
      LODWORD(v50) = 0;
      if ( v41 == 2 )
      {
        UsbhHubProcessTimeoutObj(a1, a2, v20, (__int64 *)va);
        UsbhPCE_wChangeERROR(a1, a2, *(_QWORD *)(v20 + 8), v3, 0, 0LL);
      }
      else if ( v41 == 1 )
      {
        UsbhPCE_wChangeERROR(a1, a2, *(_QWORD *)(v20 + 8), v3, 1, *(_QWORD *)(v20 + 40));
      }
      else
      {
        UsbhPCE_wChangeERROR(a1, a2, *(_QWORD *)(v20 + 8), v3, 0, 0LL);
      }
      v46 = *(_WORD *)(a2 + 4);
      v45 = 1145332592;
      v47 = 0x80000;
      v28 = UsbhHubDispatchPortEvent(a1);
      if ( !Usb_Disconnected(PortState) && !*(_BYTE *)(v6 + 5268) )
      {
        LOBYTE(v42) = 1;
        UsbhException(a1, *(unsigned __int16 *)(a2 + 4), 1, v20, 56, PortState, v44, usbfile_pchange_c, 6038, v42);
      }
    }
    else
    {
      if ( *(_DWORD *)(v20 + 48) == 2 )
        v27 = UsbhHubProcessTimeoutObj(a1, a2, v20, (__int64 *)va);
      else
        v27 = UsbhHubDispatchPortEvent(a1);
      v28 = v27;
    }
    *(_BYTE *)(a2 + 2840) = 0;
    if ( *(_DWORD *)(v20 + 48) == 1 )
      UsbhUnlatchPdo(a1, *(_QWORD *)(v20 + 40), v20, 1230065731LL);
    ExFreePoolWithTag((PVOID)v20, 0);
    *(_QWORD *)(a2 + 376) = 0LL;
    if ( v28 == 5 )
    {
      LODWORD(v3) = a3;
      UsbhPCE_psSUSPEND(a1, a2, a3);
      break;
    }
    if ( *(int *)(a2 + 2876) > 50 )
    {
      LOBYTE(v42) = 1;
      UsbhException(a1, 0, 139, 0, 0, -1073741823, -1073704960, usbfile_pchange_c, 6117, v42);
LABEL_92:
      *(_DWORD *)(a2 + 400) = 4;
LABEL_50:
      v30 = *(_DWORD **)(a1 + 64);
      if ( !v30 )
        UsbhTrapFatal_Dbg(a1, 0LL);
      if ( *v30 != 541218120 )
        UsbhTrapFatal_Dbg(a1, v30);
      LODWORD(v3) = a3;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dq(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v30,
          v29,
          71,
          (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
          *(_WORD *)(a2 + 4),
          a3);
      v31 = *(unsigned __int16 *)(a2 + 4);
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        v32 = *(_QWORD *)(a1 + 64);
        if ( v32 )
        {
          v33 = *(_QWORD *)(v32 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v32 + 880)) & *(_DWORD *)(v32 + 884));
          *(_DWORD *)v33 = 959530320;
          *(_QWORD *)(v33 + 8) = 0LL;
          *(_QWORD *)(v33 + 16) = 0LL;
          *(_QWORD *)(v33 + 24) = v31;
        }
      }
      LODWORD(v48) = 0;
      UsbhDispatch_PortChangeQueueEventEx(a1, a2, 19, a3, v48, 0, 0LL, 0LL);
      break;
    }
    if ( v28 == 4 )
      goto LABEL_50;
    if ( v28 == 3 )
      goto LABEL_92;
    v3 = a3;
  }
  *(_DWORD *)(a2 + 8) = 0;
  v34 = *(_DWORD **)(a1 + 64);
  if ( !v34 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *v34 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v34);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      58,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      *(_WORD *)(a2 + 4));
  v35 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v36 = *(_QWORD *)(a1 + 64);
    if ( v36 )
    {
      v37 = *(_QWORD *)(v36 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v36 + 880)) & *(_DWORD *)(v36 + 884));
      *(_DWORD *)v37 = 909133136;
      *(_QWORD *)(v37 + 8) = 0LL;
      *(_QWORD *)(v37 + 16) = 0LL;
      *(_QWORD *)(v37 + 24) = v35;
    }
  }
  LODWORD(v48) = 0;
  result = UsbhDispatch_PortChangeQueueEventEx(a1, a2, 6, v3, v48, 0, 0LL, 0LL);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v39 = *(_QWORD *)(a1 + 64);
    if ( v39 )
    {
      result = 762017649LL;
      v40 = *(_QWORD *)(v39 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v39 + 880)) & *(_DWORD *)(v39 + 884));
      *(_DWORD *)v40 = 762017649;
      *(_QWORD *)(v40 + 8) = 0LL;
      *(_QWORD *)(v40 + 16) = a2;
      *(_QWORD *)(v40 + 24) = 0LL;
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_d(
             WPP_GLOBAL_Control->DeviceExtension,
             0,
             1,
             99,
             (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
             *(_WORD *)(a2 + 4));
  return result;
}
