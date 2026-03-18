/*
 * XREFs of UsbhHubRunPortChangeQueue @ 0x1C000F560
 * Callers:
 *     Usbh_PCE_wRun_Action @ 0x1C000FE10 (Usbh_PCE_wRun_Action.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C0003AA4 (Usb_Disconnected.c)
 *     UsbhDispatch_PortChangeQueueNullEventEx @ 0x1C000E190 (UsbhDispatch_PortChangeQueueNullEventEx.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C000FBC0 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     UsbhHubDispatchPortEvent @ 0x1C0010E20 (UsbhHubDispatchPortEvent.c)
 *     UsbhQueryPortState @ 0x1C00130E0 (UsbhQueryPortState.c)
 *     UsbhUnlatchPdo @ 0x1C00245B0 (UsbhUnlatchPdo.c)
 *     UsbhPCE_psSUSPEND @ 0x1C00273D4 (UsbhPCE_psSUSPEND.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003C218 (WPP_RECORDER_SF_dq.c)
 *     UsbhHubProcessTimeoutObj @ 0x1C00400D4 (UsbhHubProcessTimeoutObj.c)
 *     UsbhPCE_wChangeERROR @ 0x1C0040F14 (UsbhPCE_wChangeERROR.c)
 *     UsbhException @ 0x1C004F144 (UsbhException.c)
 */

__int64 UsbhHubRunPortChangeQueue(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v3; // r14
  __int64 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rcx
  _DWORD *v9; // rdx
  unsigned __int16 v10; // si
  char v11; // cl
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r10
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rsi
  __int16 v22; // ax
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned int PortState; // r15d
  int v29; // eax
  int v30; // r14d
  int v31; // r8d
  _DWORD *v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rcx
  _DWORD *v36; // rdx
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 result; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  int v43; // eax
  int v44; // [rsp+50h] [rbp-41h]
  __int64 v45; // [rsp+68h] [rbp-29h] BYREF
  int v46; // [rsp+70h] [rbp-21h]
  int v47; // [rsp+78h] [rbp-19h]
  __int16 v48; // [rsp+7Ch] [rbp-15h]
  int v49; // [rsp+80h] [rbp-11h]
  __int64 v50; // [rsp+F8h] [rbp+67h]
  __int64 v52; // [rsp+110h] [rbp+7Fh] BYREF
  va_list va; // [rsp+110h] [rbp+7Fh]
  va_list va1; // [rsp+118h] [rbp+87h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v52 = va_arg(va1, _QWORD);
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
    v45 = 0LL;
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
    v11 = UsbhLogMask;
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v12 = *(_QWORD *)(a1 + 64);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
        *(_DWORD *)v13 = 909198672;
        *(_QWORD *)(v13 + 24) = v10;
        *(_QWORD *)(v13 + 8) = 0LL;
        *(_QWORD *)(v13 + 16) = 0LL;
        v11 = UsbhLogMask;
      }
    }
    if ( (v11 & 8) != 0 )
    {
      v14 = *(_QWORD *)(a1 + 64);
      if ( v14 )
      {
        v15 = *(_QWORD *)(v14 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
        *(_DWORD *)v15 = 1413771367;
        *(_QWORD *)(v15 + 16) = v10;
        *(_QWORD *)(v15 + 8) = 0LL;
        *(_QWORD *)(v15 + 24) = 0LL;
        v11 = UsbhLogMask;
      }
    }
    if ( v10 )
    {
      v16 = *(_QWORD *)(a1 + 64);
      if ( !v16 )
        UsbhTrapFatal_Dbg(a1, 0LL);
      if ( *(_DWORD *)v16 != 541218120 )
        UsbhTrapFatal_Dbg(a1, v16);
      if ( v10 <= *(unsigned __int8 *)(v16 + 2938) )
      {
        v17 = *(_QWORD *)(v16 + 3056);
        if ( v17 )
        {
          v18 = v17 + 2928LL * (v10 - 1);
          if ( (v11 & 8) != 0 )
          {
            v19 = *(_QWORD *)(v16 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 880)) & *(_DWORD *)(v16 + 884));
            *(_DWORD *)v19 = 1044672615;
            *(_QWORD *)(v19 + 16) = v10;
            *(_QWORD *)(v19 + 8) = 0LL;
            *(_QWORD *)(v19 + 24) = v18;
          }
          if ( v18 )
            v45 = UsbhDispatch_PortChangeQueueNullEventEx(a1, v18, 16, v3, (__int64)&v45);
        }
      }
    }
    if ( !v45 )
      break;
    *(_QWORD *)(a2 + 376) = v3;
    v20 = v45;
    *(_QWORD *)(v3 + 24) = KeGetCurrentThread();
    v21 = v20 - 16;
    v22 = UsbhLogMask;
    v23 = *(unsigned __int16 *)(a2 + 4);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v24 = *(_QWORD *)(a1 + 64);
      if ( v24 )
      {
        v25 = *(_QWORD *)(v24 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v24 + 880)) & *(_DWORD *)(v24 + 884));
        *(_DWORD *)v25 = 1313891184;
        *(_QWORD *)(v25 + 8) = 0LL;
        *(_QWORD *)(v25 + 16) = v23;
        *(_QWORD *)(v25 + 24) = 0LL;
        v22 = UsbhLogMask;
      }
      if ( (v22 & 0x200) != 0 )
      {
        v26 = *(_QWORD *)(a1 + 64);
        if ( v26 )
        {
          v27 = *(_QWORD *)(v26 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v26 + 880)) & *(_DWORD *)(v26 + 884));
          *(_DWORD *)v27 = 1145332592;
          *(_QWORD *)(v27 + 8) = 0LL;
          *(_QWORD *)(v27 + 16) = a2;
          *(_QWORD *)(v27 + 24) = v21;
        }
      }
    }
    if ( (*(_DWORD *)(v21 + 8) & 0x16) != 0 )
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 2876));
    if ( (*(_DWORD *)(v21 + 8) & 1) != 0 )
      *(_WORD *)(a2 + 2839) = 256;
    PortState = UsbhQueryPortState(a1);
    if ( PortState >> 30 == 3 )
    {
      v43 = *(_DWORD *)(v21 + 48);
      LODWORD(v52) = 0;
      if ( v43 == 2 )
      {
        UsbhHubProcessTimeoutObj(a1, a2, v21, (__int64 *)va);
        UsbhPCE_wChangeERROR(a1, a2, *(_QWORD *)(v21 + 8), v3, 0, 0LL);
      }
      else if ( v43 == 1 )
      {
        UsbhPCE_wChangeERROR(a1, a2, *(_QWORD *)(v21 + 8), v3, 1, *(_QWORD *)(v21 + 40));
      }
      else
      {
        UsbhPCE_wChangeERROR(a1, a2, *(_QWORD *)(v21 + 8), v3, 0, 0LL);
      }
      v48 = *(_WORD *)(a2 + 4);
      v47 = 1145332592;
      v49 = 0x80000;
      v30 = UsbhHubDispatchPortEvent(a1);
      if ( !Usb_Disconnected(PortState) && !*(_BYTE *)(v6 + 5268) )
      {
        LOBYTE(v44) = 1;
        UsbhException(a1, *(unsigned __int16 *)(a2 + 4), 1, v21, 56, PortState, v46, usbfile_pchange_c, 6038, v44);
      }
    }
    else
    {
      if ( *(_DWORD *)(v21 + 48) == 2 )
        v29 = UsbhHubProcessTimeoutObj(a1, a2, v21, (__int64 *)va);
      else
        v29 = UsbhHubDispatchPortEvent(a1);
      v30 = v29;
    }
    *(_BYTE *)(a2 + 2840) = 0;
    if ( *(_DWORD *)(v21 + 48) == 1 )
      UsbhUnlatchPdo(a1, *(_QWORD *)(v21 + 40), v21, 1230065731LL);
    ExFreePoolWithTag((PVOID)v21, 0);
    *(_QWORD *)(a2 + 376) = 0LL;
    if ( v30 == 5 )
    {
      LODWORD(v3) = a3;
      UsbhPCE_psSUSPEND(a1, a2, a3);
      break;
    }
    if ( *(int *)(a2 + 2876) > 50 )
    {
      LOBYTE(v44) = 1;
      UsbhException(a1, 0, 139, 0, 0, -1073741823, -1073704960, usbfile_pchange_c, 6117, v44);
LABEL_92:
      *(_DWORD *)(a2 + 400) = 4;
LABEL_50:
      v32 = *(_DWORD **)(a1 + 64);
      if ( !v32 )
        UsbhTrapFatal_Dbg(a1, 0LL);
      if ( *v32 != 541218120 )
        UsbhTrapFatal_Dbg(a1, v32);
      LODWORD(v3) = a3;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dq(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v32,
          v31,
          71,
          (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
          *(_WORD *)(a2 + 4),
          a3);
      v33 = *(unsigned __int16 *)(a2 + 4);
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        v34 = *(_QWORD *)(a1 + 64);
        if ( v34 )
        {
          v35 = *(_QWORD *)(v34 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v34 + 880)) & *(_DWORD *)(v34 + 884));
          *(_DWORD *)v35 = 959530320;
          *(_QWORD *)(v35 + 8) = 0LL;
          *(_QWORD *)(v35 + 16) = 0LL;
          *(_QWORD *)(v35 + 24) = v33;
        }
      }
      LODWORD(v50) = 0;
      UsbhDispatch_PortChangeQueueEventEx(a1, a2, 19, a3, v50, 0, 0LL, 0LL);
      break;
    }
    if ( v30 == 4 )
      goto LABEL_50;
    if ( v30 == 3 )
      goto LABEL_92;
    v3 = a3;
  }
  *(_DWORD *)(a2 + 8) = 0;
  v36 = *(_DWORD **)(a1 + 64);
  if ( !v36 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *v36 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v36);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      58,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      *(_WORD *)(a2 + 4));
  v37 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v38 = *(_QWORD *)(a1 + 64);
    if ( v38 )
    {
      v39 = *(_QWORD *)(v38 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v38 + 880)) & *(_DWORD *)(v38 + 884));
      *(_DWORD *)v39 = 909133136;
      *(_QWORD *)(v39 + 8) = 0LL;
      *(_QWORD *)(v39 + 16) = 0LL;
      *(_QWORD *)(v39 + 24) = v37;
    }
  }
  LODWORD(v50) = 0;
  result = UsbhDispatch_PortChangeQueueEventEx(a1, a2, 6, v3, v50, 0, 0LL, 0LL);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v41 = *(_QWORD *)(a1 + 64);
    if ( v41 )
    {
      result = 762017649LL;
      v42 = *(_QWORD *)(v41 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v41 + 880)) & *(_DWORD *)(v41 + 884));
      *(_DWORD *)v42 = 762017649;
      *(_QWORD *)(v42 + 8) = 0LL;
      *(_QWORD *)(v42 + 16) = a2;
      *(_QWORD *)(v42 + 24) = 0LL;
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
