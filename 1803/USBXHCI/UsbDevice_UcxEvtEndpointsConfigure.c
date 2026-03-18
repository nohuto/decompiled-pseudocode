/*
 * XREFs of UsbDevice_UcxEvtEndpointsConfigure @ 0x1C0033E10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001C00 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     Command_SendCommand @ 0x1C0004578 (Command_SendCommand.c)
 *     Controller_IncrementNumberOfEndpointsOffloaded @ 0x1C0008308 (Controller_IncrementNumberOfEndpointsOffloaded.c)
 *     Controller_IsControllerAccessible @ 0x1C0008A48 (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000DAE4 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C000DF64 (WPP_RECORDER_SF_dddd.c)
 *     Debug_FreAssertMsg @ 0x1C000EC48 (Debug_FreAssertMsg.c)
 *     Endpoint_Disable @ 0x1C00110F8 (Endpoint_Disable.c)
 *     Endpoint_Enable @ 0x1C0011310 (Endpoint_Enable.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0019530 (WPP_RECORDER_SF_ddL.c)
 *     TR_ReAllocateTransferRingSegmentsForOffload @ 0x1C0020F48 (TR_ReAllocateTransferRingSegmentsForOffload.c)
 *     UsbDevice_InitializeEndpointContext @ 0x1C0032754 (UsbDevice_InitializeEndpointContext.c)
 *     WPP_RECORDER_SF_ddddd @ 0x1C0035154 (WPP_RECORDER_SF_ddddd.c)
 *     WPP_RECORDER_SF_dddddd @ 0x1C0035280 (WPP_RECORDER_SF_dddddd.c)
 *     WPP_RECORDER_SF_dq @ 0x1C00354D8 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_dqq @ 0x1C0035B34 (WPP_RECORDER_SF_dqq.c)
 *     WPP_RECORDER_SF_dqqd @ 0x1C0035C28 (WPP_RECORDER_SF_dqqd.c)
 *     XilCoreUsbDevice_GetDeviceContextBufferVA @ 0x1C003FC54 (XilCoreUsbDevice_GetDeviceContextBufferVA.c)
 *     XilCoreUsbDevice_GetInputContextBufferLA @ 0x1C003FC6C (XilCoreUsbDevice_GetInputContextBufferLA.c)
 *     XilCoreUsbDevice_GetInputContextBufferSize @ 0x1C003FC84 (XilCoreUsbDevice_GetInputContextBufferSize.c)
 *     XilCoreUsbDevice_GetInputContextBufferVA @ 0x1C003FC98 (XilCoreUsbDevice_GetInputContextBufferVA.c)
 */

__int64 __fastcall UsbDevice_UcxEvtEndpointsConfigure(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  _WORD *v3; // rax
  __int64 v4; // rcx
  unsigned int v5; // edi
  __int64 v6; // rbp
  int v7; // edx
  __int64 v8; // rsi
  __int64 *v9; // r14
  __int64 v10; // r10
  int v11; // ecx
  int v12; // ecx
  signed int TransferRingSegmentsForOffload; // ebx
  __int64 *v14; // rcx
  __int64 v15; // rbx
  int v16; // edx
  int v17; // r15d
  unsigned int *v18; // r12
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r13
  __int64 v25; // rcx
  __int64 v26; // rcx
  void *InputContextBufferVA; // rax
  size_t v28; // r8
  __int64 v29; // rcx
  __int64 v30; // r12
  char v31; // cl
  __int64 v32; // r15
  int v33; // ecx
  __int64 v34; // rdx
  unsigned int v35; // eax
  __int64 v36; // r12
  unsigned int v37; // r13d
  __int64 v38; // rax
  int v39; // edi
  __int64 v40; // rbx
  unsigned int i; // ebx
  int v42; // r8d
  __int64 *v43; // rax
  __int64 v44; // rax
  PWDF_DRIVER_GLOBALS v45; // rcx
  __int64 v47; // rcx
  __int64 DeviceContextBufferVA; // rax
  int v49; // r11d
  __int64 v50; // r9
  __int64 v51; // r9
  unsigned int j; // ecx
  int v53; // eax
  unsigned int v54; // edx
  __int64 v55; // rcx
  __int64 v56; // r8
  int v57; // [rsp+20h] [rbp-D8h]
  __int64 v58; // [rsp+28h] [rbp-D0h]
  __int64 v59; // [rsp+30h] [rbp-C8h]
  __int64 v61; // [rsp+68h] [rbp-90h]
  _DWORD *v62; // [rsp+70h] [rbp-88h]
  __int64 v63; // [rsp+80h] [rbp-78h]
  _BYTE *v64; // [rsp+88h] [rbp-70h]
  __int64 v65; // [rsp+90h] [rbp-68h]
  _QWORD v66[5]; // [rsp+98h] [rbp-60h] BYREF

  v2 = a2;
  memset(v66, 0, sizeof(v66));
  LOWORD(v66[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    v2,
    v66);
  v3 = (_WORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                  WdfDriverGlobals,
                  v2,
                  off_1C004B098);
  v4 = WdfFunctions_01023;
  v5 = 0;
  v64 = v3;
  *v3 = 0;
  v6 = v66[1];
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(v4 + 1616))(
         WdfDriverGlobals,
         *(_QWORD *)(v66[1] + 16LL),
         off_1C004B2F0);
  if ( *(_DWORD *)(v6 + 84) )
  {
    v9 = (__int64 *)(v8 + 8);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*v9 + 72),
        5u,
        0xCu,
        0x20u,
        (__int64)&WPP_1950dd83281a37607d7206f66e319380_Traceguids);
    v10 = *v9;
    v11 = *(_DWORD *)(*v9 + 532);
    if ( !v11 )
    {
      WPP_RECORDER_SF_(
        *(_QWORD *)(v10 + 72),
        2u,
        0xCu,
        0x21u,
        (__int64)&WPP_1950dd83281a37607d7206f66e319380_Traceguids);
      TransferRingSegmentsForOffload = -1073741637;
      goto LABEL_62;
    }
    v12 = v11 - 1;
    if ( v12 )
    {
      if ( v12 == 1 )
      {
        WPP_RECORDER_SF_(
          *(_QWORD *)(v10 + 72),
          2u,
          0xCu,
          0x22u,
          (__int64)&WPP_1950dd83281a37607d7206f66e319380_Traceguids);
        TransferRingSegmentsForOffload = -1073741822;
        goto LABEL_62;
      }
LABEL_7:
      TransferRingSegmentsForOffload = -1073741823;
LABEL_62:
      WPP_RECORDER_SF_dqqd(
        *(_QWORD *)(*v9 + 72),
        v7,
        *(unsigned __int8 *)(v8 + 135),
        45,
        v57,
        *(_BYTE *)(v8 + 135),
        v2,
        *(_QWORD *)v8,
        TransferRingSegmentsForOffload);
      v44 = WdfFunctions_01023;
      v45 = WdfDriverGlobals;
      *(_QWORD *)(v8 + 424) = 0LL;
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(v44 + 2104))(
               v45,
               v2,
               (unsigned int)TransferRingSegmentsForOffload);
    }
  }
  v9 = (__int64 *)(v8 + 8);
  v14 = *(__int64 **)(v8 + 8);
  v15 = v14[11];
  v61 = v15;
  v65 = v14[18];
  WPP_RECORDER_SF_dddd(
    v14[9],
    4u,
    0xCu,
    0x23u,
    (__int64)&WPP_1950dd83281a37607d7206f66e319380_Traceguids,
    *(unsigned __int8 *)(v8 + 135),
    *(_DWORD *)(v6 + 24),
    *(_DWORD *)(v6 + 40),
    *(_DWORD *)(v6 + 56));
  if ( !*(_BYTE *)(v8 + 134) )
  {
    v16 = *(unsigned __int8 *)(v8 + 135);
    LOBYTE(v16) = 3;
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(*v9 + 72),
      v16,
      12,
      36,
      (__int64)&WPP_1950dd83281a37607d7206f66e319380_Traceguids,
      *(_BYTE *)(v8 + 135),
      *(_QWORD *)v8);
    TransferRingSegmentsForOffload = *(_DWORD *)(v6 + 24) != 0 ? 0xC0000001 : 0;
    goto LABEL_62;
  }
  v17 = 0;
  v18 = *(unsigned int **)(v6 + 88);
  if ( *(_DWORD *)(v6 + 84) )
  {
    while ( 1 )
    {
      if ( *(_DWORD *)(v6 + 24) )
      {
        while ( 1 )
        {
          v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                  WdfDriverGlobals,
                  *(_QWORD *)(*(_QWORD *)(v6 + 32) + 8LL * v5),
                  off_1C004B1D8);
          v20 = v19;
          if ( *(unsigned __int8 *)(v19 + 98) == *((_WORD *)v18 + 2) )
            break;
          if ( ++v5 >= *(_DWORD *)(v6 + 24) )
            goto LABEL_16;
        }
        v5 = 0;
        if ( *(_BYTE *)(v19 + 1352) )
        {
          Debug_FreAssertMsg(
            (__int64)"Endpoint is already offloaded",
            0,
            (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\endpoint.h",
            1201);
        }
        else
        {
          v23 = *(_QWORD *)v19;
          *(_BYTE *)(v19 + 1352) = 1;
          Controller_IncrementNumberOfEndpointsOffloaded(v23);
        }
        TransferRingSegmentsForOffload = TR_ReAllocateTransferRingSegmentsForOffload(*(_QWORD *)(v20 + 88));
        if ( TransferRingSegmentsForOffload < 0 )
        {
          WPP_RECORDER_SF_dd(
            *(_QWORD *)(*v9 + 72),
            2u,
            0xCu,
            0x25u,
            (__int64)&WPP_1950dd83281a37607d7206f66e319380_Traceguids);
          goto LABEL_62;
        }
      }
      else
      {
LABEL_16:
        v5 = 0;
      }
      v21 = *v18;
      if ( !(_DWORD)v21 )
        break;
      v18 = (unsigned int *)((char *)v18 + v21);
      if ( (unsigned int)++v17 >= *(_DWORD *)(v6 + 84) )
      {
        v15 = v61;
        goto LABEL_20;
      }
    }
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*v9 + 72),
      2u,
      0xCu,
      0x26u,
      (__int64)&WPP_1950dd83281a37607d7206f66e319380_Traceguids);
    goto LABEL_7;
  }
LABEL_20:
  if ( !Controller_IsControllerAccessible(*v9) )
  {
    TransferRingSegmentsForOffload = *(_DWORD *)(v6 + 24) != 0 ? 0xC000000E : 0;
    if ( *(_DWORD *)(v6 + 40) )
    {
      do
      {
        v22 = (__int64 *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                           WdfDriverGlobals,
                           *(_QWORD *)(*(_QWORD *)(v6 + 48) + 8LL * v5),
                           off_1C004B1D8);
        Endpoint_Disable(v22, 0LL);
        ++v5;
      }
      while ( v5 < *(_DWORD *)(v6 + 40) );
    }
    goto LABEL_62;
  }
  *(_QWORD *)(v8 + 424) = v2;
  v24 = v8 + 560;
  v25 = v8 + 568;
  *(_BYTE *)(v8 + 432) = *(_DWORD *)(v6 + 24) == 0;
  if ( !*(_BYTE *)(v8 + 609) )
    v25 = v8 + 560;
  XilCoreUsbDevice_GetInputContextBufferSize(v25);
  InputContextBufferVA = (void *)XilCoreUsbDevice_GetInputContextBufferVA(v26);
  memset(InputContextBufferVA, 0, v28);
  v29 = v8 + 568;
  if ( !*(_BYTE *)(v8 + 609) )
    v29 = v8 + 560;
  v30 = XilCoreUsbDevice_GetInputContextBufferVA(v29);
  v62 = (_DWORD *)v30;
  v31 = -(*(_DWORD *)(v15 + 104) & 4);
  *(_DWORD *)(v30 + 4) |= 1u;
  v32 = v30 + (v31 != 0 ? 64LL : 32LL);
  if ( *(_BYTE *)(v8 + 136) )
  {
    v33 = *(_DWORD *)v32 | 0x4000000;
    *(_DWORD *)v32 = v33;
    *(_BYTE *)(v32 + 7) = *(_BYTE *)(v8 + 140);
    if ( *(_DWORD *)(v8 + 20) == 2 )
    {
      if ( *(_DWORD *)(v8 + 144) > 1u )
        *(_DWORD *)v32 = v33 | 0x2000000;
      *(_DWORD *)(v32 + 8) ^= (*(_DWORD *)(v32 + 8) ^ (*(_DWORD *)(v8 + 148) << 16)) & 0x30000;
    }
  }
  if ( (*(_QWORD *)(*v9 + 272) & 0x2000000000000000LL) != 0 && !*(_BYTE *)(v8 + 136) )
  {
    v34 = *(_QWORD *)(v8 + 24);
    if ( v34 )
    {
      if ( *(int *)(v8 + 20) < 2
        && *(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                         WdfDriverGlobals,
                         v34,
                         off_1C004B2F0)
                     + 144) > 1u )
      {
        *(_DWORD *)v32 |= 0x2000000u;
      }
    }
  }
  v35 = *(_DWORD *)(v6 + 24);
  if ( v35 )
  {
    while ( 1 )
    {
      v36 = 8LL * v5;
      v63 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
              WdfDriverGlobals,
              *(_QWORD *)(v36 + *(_QWORD *)(v6 + 32)),
              off_1C004B1D8);
      TransferRingSegmentsForOffload = Endpoint_Enable(v63);
      if ( TransferRingSegmentsForOffload < 0 )
        break;
      v35 = *(_DWORD *)(v6 + 24);
      if ( ++v5 >= v35 )
      {
        v30 = (__int64)v62;
        goto LABEL_49;
      }
    }
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(*v9 + 72),
      2u,
      0xCu,
      0x27u,
      (__int64)&WPP_1950dd83281a37607d7206f66e319380_Traceguids);
    if ( v5 )
    {
      do
      {
        v36 -= 8LL;
        v43 = (__int64 *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                           WdfDriverGlobals,
                           *(_QWORD *)(v36 + *(_QWORD *)(v6 + 32)),
                           off_1C004B1D8);
        Endpoint_Disable(v43, 0LL);
        --v5;
      }
      while ( v5 );
      v24 = v8 + 560;
    }
    if ( !*(_DWORD *)(v6 + 40) )
    {
      v2 = a2;
      goto LABEL_62;
    }
    *v64 = 1;
    HIDWORD(v59) = HIDWORD(a2);
    WPP_RECORDER_SF_dqq(*(_QWORD *)(*v9 + 72), *(unsigned __int8 *)(v8 + 135), v42, 40);
  }
  else
  {
LABEL_49:
    if ( v35 )
    {
      v37 = 0;
      do
      {
        v38 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                WdfDriverGlobals,
                *(_QWORD *)(*(_QWORD *)(v6 + 32) + 8LL * v37),
                off_1C004B1D8);
        v39 = *(_DWORD *)(v38 + 144);
        v40 = v30 + ((unsigned int)(v39 - 1) + 2LL) * ((*(_DWORD *)(v61 + 104) & 4) != 0 ? 64LL : 32LL);
        UsbDevice_InitializeEndpointContext(v8, v38, v40);
        *(_DWORD *)(v30 + 4) |= 1 << v39;
        WPP_RECORDER_SF_ddddd(
          *(_QWORD *)(*v9 + 72),
          *(unsigned __int8 *)(v40 + 2),
          *(unsigned __int16 *)(v40 + 6),
          (*(_DWORD *)(v40 + 4) >> 3) & 7,
          v57,
          *(_BYTE *)(v8 + 135),
          v39,
          (*(_DWORD *)(v40 + 4) >> 3) & 7,
          *(_WORD *)(v40 + 6),
          *(_BYTE *)(v40 + 2));
        ++v37;
      }
      while ( v37 < *(_DWORD *)(v6 + 24) );
      v24 = v8 + 560;
    }
  }
  for ( i = 0; i < *(_DWORD *)(v6 + 40); ++i )
  {
    *v62 |= 1 << *(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                               WdfDriverGlobals,
                               *(_QWORD *)(*(_QWORD *)(v6 + 48) + 8LL * i),
                               off_1C004B1D8)
                           + 144);
    if ( *(_BYTE *)(v8 + 609) )
    {
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(*v9 + 72),
        4u,
        0xCu,
        0x2Au,
        (__int64)&WPP_1950dd83281a37607d7206f66e319380_Traceguids);
    }
    else
    {
      v47 = v24 + 8;
      if ( (*(_DWORD *)(v61 + 104) & 4) != 0 )
      {
        if ( !*(_BYTE *)(v24 + 49) )
          v47 = v24;
        DeviceContextBufferVA = XilCoreUsbDevice_GetDeviceContextBufferVA(v47);
        v50 = ((unsigned int)(v49 - 1) + 1LL) << 6;
      }
      else
      {
        if ( !*(_BYTE *)(v24 + 49) )
          v47 = v24;
        DeviceContextBufferVA = XilCoreUsbDevice_GetDeviceContextBufferVA(v47);
        v50 = 32 * ((unsigned int)(v49 - 1) + 1LL);
      }
      v51 = DeviceContextBufferVA + v50;
      WPP_RECORDER_SF_dddddd(
        *(_QWORD *)(*v9 + 72),
        (unsigned __int8)BYTE2(*(_DWORD *)v51),
        *(unsigned __int16 *)(v51 + 6),
        (*(_DWORD *)(v51 + 4) >> 3) & 7,
        v57,
        *(_BYTE *)(v8 + 135),
        v49,
        (*(_DWORD *)(v51 + 4) >> 3) & 7,
        *(_WORD *)(v51 + 6),
        BYTE2(*(_DWORD *)v51),
        *(_BYTE *)v51 & 7);
    }
  }
  *(_DWORD *)(v8 + 152) &= ~*v62;
  *(_DWORD *)(v8 + 152) |= v62[1];
  for ( j = 0; j < 0x20; ++j )
  {
    v53 = *(_DWORD *)(v8 + 152);
    v54 = *(_DWORD *)v32;
    if ( _bittest(&v53, j) )
    {
      v54 = (j << 27) | v54 & 0x7FFFFFF;
      *(_DWORD *)v32 = v54;
    }
  }
  LODWORD(v59) = v54 >> 27;
  LODWORD(v58) = *(unsigned __int8 *)(v8 + 135);
  WPP_RECORDER_SF_dd(
    *(_QWORD *)(*v9 + 72),
    4u,
    0xCu,
    0x2Cu,
    (__int64)&WPP_1950dd83281a37607d7206f66e319380_Traceguids,
    v58,
    v59);
  memset((void *)(v8 + 440), 0, 0x60uLL);
  *(_QWORD *)(v8 + 488) = v8;
  *(_QWORD *)(v8 + 480) = UsbDevice_EndpointsConfigureCompletion;
  v55 = v24 + 8;
  *(_DWORD *)(v8 + 476) = *(_DWORD *)(v8 + 476) & 0xFFFF01FF | 0x3000;
  *(_BYTE *)(v8 + 479) = *(_BYTE *)(v8 + 135);
  if ( !*(_BYTE *)(v24 + 49) )
    v55 = v24;
  *(_QWORD *)(v8 + 464) = XilCoreUsbDevice_GetInputContextBufferLA(v55);
  *(_QWORD *)(v8 + 512) = v62;
  if ( !*(_BYTE *)(v24 + 49) )
    v56 = v24;
  *(_DWORD *)(v8 + 520) = XilCoreUsbDevice_GetInputContextBufferSize(v56);
  *(_DWORD *)(v8 + 524) = 1;
  *(_QWORD *)(v8 + 528) = v8;
  return Command_SendCommand(v65, v8 + 440);
}
