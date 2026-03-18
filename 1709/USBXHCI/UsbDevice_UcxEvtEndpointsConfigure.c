/*
 * XREFs of UsbDevice_UcxEvtEndpointsConfigure @ 0x1C00362A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0005320 (WPP_RECORDER_SF_ddd.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00055AC (WPP_RECORDER_SF_dd.c)
 *     Controller_IsControllerAccessible @ 0x1C0005F34 (Controller_IsControllerAccessible.c)
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     TR_ReAllocateTransferRingSegmentsForOffload @ 0x1C0007CE4 (TR_ReAllocateTransferRingSegmentsForOffload.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     Command_SendCommand @ 0x1C000D784 (Command_SendCommand.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C00152C4 (WPP_RECORDER_SF_dddd.c)
 *     Debug_FreAssertMsg @ 0x1C00160A4 (Debug_FreAssertMsg.c)
 *     Endpoint_Disable_Internal @ 0x1C001849C (Endpoint_Disable_Internal.c)
 *     Endpoint_Enable @ 0x1C00185D0 (Endpoint_Enable.c)
 *     XilUsbDevice_GetDeviceContextBufferVA @ 0x1C00333D0 (XilUsbDevice_GetDeviceContextBufferVA.c)
 *     UsbDevice_InitializeEndpointContext @ 0x1C0034C10 (UsbDevice_InitializeEndpointContext.c)
 *     WPP_RECORDER_SF_ddddd @ 0x1C0037574 (WPP_RECORDER_SF_ddddd.c)
 *     WPP_RECORDER_SF_dddddd @ 0x1C00376A0 (WPP_RECORDER_SF_dddddd.c)
 *     WPP_RECORDER_SF_dq @ 0x1C00378F8 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_dqq @ 0x1C0037F54 (WPP_RECORDER_SF_dqq.c)
 *     WPP_RECORDER_SF_dqqd @ 0x1C0038048 (WPP_RECORDER_SF_dqqd.c)
 *     ESM_AddEvent @ 0x1C003DBEC (ESM_AddEvent.c)
 */

__int64 __fastcall UsbDevice_UcxEvtEndpointsConfigure(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  _WORD *v3; // rax
  __int64 v4; // rcx
  unsigned int v5; // esi
  __int64 v6; // rbp
  __int64 v7; // rdi
  int v8; // edx
  signed int TransferRingSegmentsForOffload; // esi
  __int64 *v10; // rcx
  __int64 v11; // r13
  int v12; // edx
  int v13; // r14d
  unsigned int *v14; // r15
  __int64 v15; // rax
  __int64 v16; // rbx
  signed __int32 v17; // eax
  signed __int32 v18; // ett
  __int64 v19; // rax
  unsigned int i; // r14d
  __int64 v21; // rbx
  int v22; // r8d
  __int64 v23; // rcx
  __int64 v24; // rcx
  _DWORD *v25; // r14
  char v26; // al
  __int64 v27; // r15
  int v28; // ecx
  __int64 v29; // rdx
  unsigned int v30; // r12d
  __int64 v31; // r13
  __int64 v32; // rbx
  unsigned int j; // r12d
  __int64 v34; // rdx
  int v35; // esi
  __int64 v36; // rbx
  __int64 v37; // rbx
  int v38; // r8d
  __int64 v39; // rbx
  int v40; // r8d
  PWDF_DRIVER_GLOBALS v41; // rcx
  __int64 v43; // rbx
  unsigned int k; // ebx
  int v45; // esi
  __int64 DeviceContextBufferVA; // rax
  __int64 v47; // r9
  __int64 v48; // r9
  unsigned int v49; // r8d
  int v50; // eax
  __int64 v51; // rcx
  __int64 v52; // r8
  int v53; // [rsp+20h] [rbp-C8h]
  __int64 v54; // [rsp+28h] [rbp-C0h]
  __int64 v55; // [rsp+30h] [rbp-B8h]
  __int64 v57; // [rsp+68h] [rbp-80h]
  _BYTE *v58; // [rsp+78h] [rbp-70h]
  __int64 v59; // [rsp+80h] [rbp-68h]
  _QWORD v60[5]; // [rsp+88h] [rbp-60h] BYREF

  v2 = a2;
  memset(v60, 0, sizeof(v60));
  LOWORD(v60[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v2,
    v60);
  v3 = (_WORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                  WdfDriverGlobals,
                  v2,
                  off_1C004E098);
  v4 = WdfFunctions_01015;
  v5 = 0;
  v58 = v3;
  *v3 = 0;
  v6 = v60[1];
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(v4 + 1616))(
         WdfDriverGlobals,
         *(_QWORD *)(v60[1] + 16LL),
         off_1C004E2F0);
  if ( *(_DWORD *)(v6 + 84) )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v7 + 8) + 72LL),
        5u,
        0xCu,
        0x20u,
        (__int64)&WPP_a5fd15ff1a8637a5810b72c9190e663e_Traceguids);
    v8 = *(_DWORD *)(*(_QWORD *)(v7 + 8) + 524LL);
    if ( !v8 )
    {
      TransferRingSegmentsForOffload = -1073741637;
      goto LABEL_55;
    }
    if ( --v8 )
    {
      if ( v8 == 1 )
      {
        TransferRingSegmentsForOffload = -1073741822;
        goto LABEL_55;
      }
LABEL_7:
      TransferRingSegmentsForOffload = -1073741823;
LABEL_55:
      WPP_RECORDER_SF_dqqd(
        *(_QWORD *)(*(_QWORD *)(v7 + 8) + 72LL),
        v8,
        *(unsigned __int8 *)(v7 + 135),
        43,
        v53,
        *(_BYTE *)(v7 + 135),
        v2,
        *(_QWORD *)v7,
        TransferRingSegmentsForOffload);
      v41 = WdfDriverGlobals;
      *(_QWORD *)(v7 + 424) = 0LL;
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
               v41,
               v2,
               (unsigned int)TransferRingSegmentsForOffload);
    }
  }
  v10 = *(__int64 **)(v7 + 8);
  v11 = v10[11];
  v57 = v11;
  v59 = v10[18];
  WPP_RECORDER_SF_dddd(
    v10[9],
    4u,
    0xCu,
    0x21u,
    (__int64)&WPP_a5fd15ff1a8637a5810b72c9190e663e_Traceguids,
    *(unsigned __int8 *)(v7 + 135),
    *(_DWORD *)(v6 + 24),
    *(_DWORD *)(v6 + 40),
    *(_DWORD *)(v6 + 56));
  if ( !*(_BYTE *)(v7 + 134) )
  {
    v12 = *(unsigned __int8 *)(v7 + 135);
    LOBYTE(v12) = 3;
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(*(_QWORD *)(v7 + 8) + 72LL),
      v12,
      12,
      34,
      (__int64)&WPP_a5fd15ff1a8637a5810b72c9190e663e_Traceguids,
      *(_BYTE *)(v7 + 135),
      *(_QWORD *)v7);
    TransferRingSegmentsForOffload = *(_DWORD *)(v6 + 24) != 0 ? 0xC0000001 : 0;
    goto LABEL_55;
  }
  v13 = 0;
  v14 = *(unsigned int **)(v6 + 88);
  if ( *(_DWORD *)(v6 + 84) )
  {
    while ( 1 )
    {
      if ( *(_DWORD *)(v6 + 24) )
      {
        while ( 1 )
        {
          v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
                  WdfDriverGlobals,
                  *(_QWORD *)(*(_QWORD *)(v6 + 32) + 8LL * v5),
                  off_1C004E1D8);
          v16 = v15;
          if ( *(unsigned __int8 *)(v15 + 98) == *((_WORD *)v14 + 2) )
            break;
          if ( ++v5 >= *(_DWORD *)(v6 + 24) )
            goto LABEL_20;
        }
        _m_prefetchw((const void *)(v15 + 32));
        v17 = *(_DWORD *)(v15 + 32);
        do
        {
          v18 = v17;
          v17 = _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 32), v17 | 0x200, v17);
        }
        while ( v18 != v17 );
        Debug_FreAssertMsg(
          (__int64)"Endpoint is already offloaded",
          (v17 & 0x200) == 0,
          (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\endpoint.h",
          1195);
        TransferRingSegmentsForOffload = TR_ReAllocateTransferRingSegmentsForOffload(*(_QWORD *)(v16 + 88));
        if ( TransferRingSegmentsForOffload < 0 )
        {
          WPP_RECORDER_SF_dd(
            *(_QWORD *)(*(_QWORD *)(v7 + 8) + 72LL),
            2u,
            0xCu,
            0x23u,
            (__int64)&WPP_a5fd15ff1a8637a5810b72c9190e663e_Traceguids);
          goto LABEL_55;
        }
      }
LABEL_20:
      v19 = *v14;
      v5 = 0;
      if ( !(_DWORD)v19 )
        break;
      v14 = (unsigned int *)((char *)v14 + v19);
      if ( (unsigned int)++v13 >= *(_DWORD *)(v6 + 84) )
        goto LABEL_22;
    }
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(v7 + 8) + 72LL),
      2u,
      0xCu,
      0x24u,
      (__int64)&WPP_a5fd15ff1a8637a5810b72c9190e663e_Traceguids);
    goto LABEL_7;
  }
LABEL_22:
  if ( !Controller_IsControllerAccessible(*(_QWORD *)(v7 + 8)) )
  {
    TransferRingSegmentsForOffload = *(_DWORD *)(v6 + 24) != 0 ? 0xC000000E : 0;
    for ( i = 0; i < *(_DWORD *)(v6 + 40); ++i )
    {
      v21 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
              WdfDriverGlobals,
              *(_QWORD *)(*(_QWORD *)(v6 + 48) + 8LL * i),
              off_1C004E1D8);
      Endpoint_Disable_Internal(v21, 0, v22);
      ESM_AddEvent((PVOID)(v21 + 288));
    }
    goto LABEL_55;
  }
  *(_QWORD *)(v7 + 424) = v2;
  v23 = v7 + 568;
  *(_BYTE *)(v7 + 432) = *(_DWORD *)(v6 + 24) == 0;
  if ( !*(_BYTE *)(v7 + 608) )
    v23 = v7 + 560;
  memset(*(void **)(*(_QWORD *)(v23 + 32) + 16LL), 0, *(unsigned int *)(*(_QWORD *)(v23 + 32) + 44LL));
  v24 = v7 + 568;
  if ( !*(_BYTE *)(v7 + 608) )
    v24 = v7 + 560;
  v25 = *(_DWORD **)(*(_QWORD *)(v24 + 32) + 16LL);
  v26 = -(*(_DWORD *)(v11 + 104) & 4);
  v25[1] |= 1u;
  v27 = v26 != 0 ? 64LL : 32LL;
  if ( *(_BYTE *)(v7 + 136) )
  {
    v28 = *(_DWORD *)((char *)v25 + v27) | 0x4000000;
    *(_DWORD *)((char *)v25 + v27) = v28;
    *((_BYTE *)v25 + v27 + 7) = *(_BYTE *)(v7 + 140);
    if ( *(_DWORD *)(v7 + 20) == 2 )
    {
      if ( *(_DWORD *)(v7 + 144) > 1u )
        *(_DWORD *)((char *)v25 + v27) = v28 | 0x2000000;
      *(_DWORD *)((char *)v25 + v27 + 8) ^= (*(_DWORD *)((char *)v25 + v27 + 8) ^ (*(_DWORD *)(v7 + 148) << 16)) & 0x30000;
    }
  }
  if ( (*(_QWORD *)(*(_QWORD *)(v7 + 8) + 272LL) & 0x2000000000000000LL) != 0 && !*(_BYTE *)(v7 + 136) )
  {
    v29 = *(_QWORD *)(v7 + 24);
    if ( v29 )
    {
      if ( *(int *)(v7 + 20) < 2
        && *(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                         WdfDriverGlobals,
                         v29,
                         off_1C004E2F0)
                     + 144) > 1u )
      {
        *(_DWORD *)((char *)v25 + v27) |= 0x2000000u;
      }
    }
  }
  v30 = 0;
  if ( *(_DWORD *)(v6 + 24) )
  {
    while ( 1 )
    {
      v31 = 8LL * v30;
      v32 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
              WdfDriverGlobals,
              *(_QWORD *)(*(_QWORD *)(v6 + 32) + v31),
              off_1C004E1D8);
      TransferRingSegmentsForOffload = Endpoint_Enable(v32);
      if ( TransferRingSegmentsForOffload < 0 )
        break;
      if ( ++v30 >= *(_DWORD *)(v6 + 24) )
      {
        v11 = v57;
        goto LABEL_47;
      }
    }
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(*(_QWORD *)(v7 + 8) + 72LL),
      2u,
      0xCu,
      0x25u,
      (__int64)&WPP_a5fd15ff1a8637a5810b72c9190e663e_Traceguids);
    for ( ; v30; --v30 )
    {
      v31 -= 8LL;
      v39 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
              WdfDriverGlobals,
              *(_QWORD *)(*(_QWORD *)(v6 + 32) + v31),
              off_1C004E1D8);
      Endpoint_Disable_Internal(v39, 0, v40);
      ESM_AddEvent((PVOID)(v39 + 288));
    }
    if ( !*(_DWORD *)(v6 + 40) )
    {
      v2 = a2;
      goto LABEL_55;
    }
    *v58 = 1;
    HIDWORD(v55) = HIDWORD(a2);
    WPP_RECORDER_SF_dqq(*(_QWORD *)(*(_QWORD *)(v7 + 8) + 72LL), *(unsigned __int8 *)(v7 + 135), v38, 38);
  }
  else
  {
LABEL_47:
    for ( j = 0; j < *(_DWORD *)(v6 + 24); ++j )
    {
      v34 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
              WdfDriverGlobals,
              *(_QWORD *)(*(_QWORD *)(v6 + 32) + 8LL * j),
              off_1C004E1D8);
      v35 = *(_DWORD *)(v34 + 144);
      v36 = (unsigned int)(v35 - 1) + 2LL;
      if ( (*(_DWORD *)(v11 + 104) & 4) != 0 )
        v37 = v36 << 6;
      else
        v37 = 32 * v36;
      v43 = (__int64)v25 + v37;
      UsbDevice_InitializeEndpointContext(v7, v34, v43);
      v25[1] |= 1 << v35;
      WPP_RECORDER_SF_ddddd(
        *(_QWORD *)(*(_QWORD *)(v7 + 8) + 72LL),
        *(unsigned __int8 *)(v43 + 2),
        *(unsigned __int16 *)(v43 + 6),
        (*(_DWORD *)(v43 + 4) >> 3) & 7,
        v53,
        *(_BYTE *)(v7 + 135),
        v35,
        (*(_DWORD *)(v43 + 4) >> 3) & 7,
        *(_WORD *)(v43 + 6),
        *(_BYTE *)(v43 + 2));
    }
  }
  for ( k = 0; k < *(_DWORD *)(v6 + 40); ++k )
  {
    v45 = *(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
                        WdfDriverGlobals,
                        *(_QWORD *)(*(_QWORD *)(v6 + 48) + 8LL * k),
                        off_1C004E1D8)
                    + 144);
    *v25 |= 1 << v45;
    if ( *(_BYTE *)(v7 + 608) )
    {
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(*(_QWORD *)(v7 + 8) + 72LL),
        4u,
        0xCu,
        0x28u,
        (__int64)&WPP_a5fd15ff1a8637a5810b72c9190e663e_Traceguids);
    }
    else
    {
      if ( (*(_DWORD *)(v57 + 104) & 4) != 0 )
      {
        DeviceContextBufferVA = XilUsbDevice_GetDeviceContextBufferVA(v7);
        v47 = ((unsigned int)(v45 - 1) + 1LL) << 6;
      }
      else
      {
        DeviceContextBufferVA = XilUsbDevice_GetDeviceContextBufferVA(v7);
        v47 = 32 * ((unsigned int)(v45 - 1) + 1LL);
      }
      v48 = DeviceContextBufferVA + v47;
      WPP_RECORDER_SF_dddddd(
        *(_QWORD *)(*(_QWORD *)(v7 + 8) + 72LL),
        *(unsigned __int8 *)(v48 + 2),
        *(unsigned __int16 *)(v48 + 6),
        (*(_DWORD *)(v48 + 4) >> 3) & 7,
        v53,
        *(_BYTE *)(v7 + 135),
        v45,
        (*(_DWORD *)(v48 + 4) >> 3) & 7,
        *(_WORD *)(v48 + 6),
        *(_BYTE *)(v48 + 2),
        *(_BYTE *)v48 & 7);
    }
  }
  v49 = 0;
  *(_DWORD *)(v7 + 152) &= ~*v25;
  *(_DWORD *)(v7 + 152) |= v25[1];
  do
  {
    v50 = *(_DWORD *)(v7 + 152);
    if ( _bittest(&v50, v49) )
      *(_DWORD *)((char *)v25 + v27) = (v49 << 27) | *(_DWORD *)((char *)v25 + v27) & 0x7FFFFFF;
    ++v49;
  }
  while ( v49 < 0x20 );
  LODWORD(v55) = *(_DWORD *)((char *)v25 + v27) >> 27;
  LODWORD(v54) = *(unsigned __int8 *)(v7 + 135);
  WPP_RECORDER_SF_dd(
    *(_QWORD *)(*(_QWORD *)(v7 + 8) + 72LL),
    4u,
    0xCu,
    0x2Au,
    (__int64)&WPP_a5fd15ff1a8637a5810b72c9190e663e_Traceguids,
    v54,
    v55);
  memset((void *)(v7 + 440), 0, 0x60uLL);
  *(_QWORD *)(v7 + 488) = v7;
  *(_QWORD *)(v7 + 480) = UsbDevice_EndpointsConfigureCompletion;
  v51 = v7 + 568;
  v52 = v7 + 568;
  *(_DWORD *)(v7 + 476) = *(_DWORD *)(v7 + 476) & 0xFFFF01FF | 0x3000;
  *(_BYTE *)(v7 + 479) = *(_BYTE *)(v7 + 135);
  if ( !*(_BYTE *)(v7 + 608) )
    v51 = v7 + 560;
  *(_QWORD *)(v7 + 464) = *(_QWORD *)(*(_QWORD *)(v51 + 32) + 24LL);
  *(_QWORD *)(v7 + 512) = v25;
  if ( !*(_BYTE *)(v7 + 608) )
    v52 = v7 + 560;
  *(_DWORD *)(v7 + 520) = *(_DWORD *)(*(_QWORD *)(v52 + 32) + 44LL);
  *(_DWORD *)(v7 + 524) = 1;
  *(_QWORD *)(v7 + 528) = v7;
  return Command_SendCommand(v59, v7 + 440);
}
