/*
 * XREFs of RootHub_D0Exit @ 0x1C00045D0
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C0001C10 (Controller_WdfEvtDeviceD0Exit.c)
 * Callees:
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x1C0002C30 (RootHub_WaitForPendingU3TransitionCompletion.c)
 *     RootHub_HandleResumedPorts @ 0x1C00030F0 (RootHub_HandleResumedPorts.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0005320 (WPP_RECORDER_SF_ddd.c)
 *     WPP_RECORDER_SF_qD @ 0x1C00054F0 (WPP_RECORDER_SF_qD.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     Debug_FreAssertMsg @ 0x1C00160A4 (Debug_FreAssertMsg.c)
 *     Register_ReadSecureMmio @ 0x1C005DB2C (Register_ReadSecureMmio.c)
 *     Register_WriteSecureMmio @ 0x1C005DDE8 (Register_WriteSecureMmio.c)
 */

__int64 __fastcall RootHub_D0Exit(_QWORD *a1, int a2, int a3)
{
  __int64 v6; // r15
  __int64 result; // rax
  unsigned int *v8; // rdx
  int v9; // ecx
  unsigned int v10; // ebp
  __int64 v11; // rcx
  unsigned int v12; // eax
  unsigned __int64 v13; // rsi
  int *v14; // rbx
  __int64 v15; // r14
  int v16; // ecx
  __int64 v17; // rax
  int v18; // ecx
  __int64 v19; // rbx
  unsigned __int64 v20; // rsi
  int *v21; // rbx
  __int64 v22; // r14
  int v23; // ecx
  __int64 v24; // rax
  int v25; // ecx
  __int64 v26; // rbx
  __int64 v27; // r14
  unsigned int *v28; // rsi
  __int64 v29; // rcx
  unsigned int v30; // ebx
  int v31; // edx
  int v32; // edx
  int v33; // edx
  int v34; // edx
  int v35; // edx
  int v36; // edx
  int v37; // edx
  __int64 v38; // rbx
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // rcx
  signed __int32 v42[8]; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v43; // [rsp+28h] [rbp-A0h]
  int v44; // [rsp+40h] [rbp-88h] BYREF
  int v45; // [rsp+48h] [rbp-80h] BYREF
  int v46; // [rsp+50h] [rbp-78h] BYREF
  int v47; // [rsp+58h] [rbp-70h] BYREF
  unsigned int v48; // [rsp+60h] [rbp-68h] BYREF
  int v49; // [rsp+68h] [rbp-60h] BYREF
  __int128 v50; // [rsp+70h] [rbp-58h]
  __int128 v51; // [rsp+80h] [rbp-48h]
  int v52; // [rsp+D0h] [rbp+8h]
  unsigned int v53; // [rsp+E8h] [rbp+20h] BYREF

  v6 = *(_QWORD *)(a1[1] + 88LL);
  result = RootHub_HandleResumedPorts((__int64)a1);
  v9 = 2;
  v52 = 2;
  if ( *((_DWORD *)a1 + 4) )
  {
    v10 = 0;
    do
    {
      if ( a2 != 5 )
      {
        if ( (int)RootHub_WaitForPendingU3TransitionCompletion(a1, v10 + 1, 0) < 0 && a3 == 7 )
          ((void (__fastcall *)(_QWORD, _QWORD))qword_1C004F870)(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.32, *a1);
        v8 = (unsigned int *)(a1[5] + 16LL * v10);
        v11 = *(_QWORD *)(a1[1] + 88LL);
        if ( *(_BYTE *)(*(_QWORD *)(v11 + 8) + 441LL) )
        {
          Register_ReadSecureMmio(v11, (int)v8, 2, 1, &v53);
          v12 = v53;
        }
        else
        {
          v12 = *v8;
        }
        if ( (v12 & 0x201) == 0x201 )
        {
          v40 = (v12 >> 5) & 0xF;
          if ( ((v40 - 4) & 0xFFFFFFF9) != 0 || v40 == 8 )
            v52 = 1;
        }
      }
      v50 = *(_OWORD *)(a1[1] + 272LL);
      if ( (v50 & 0x40000000) != 0 )
      {
        v13 = (unsigned __int64)v10 << 6;
        v14 = (int *)(a1[5] + 16LL * v10);
        v15 = *(_QWORD *)(a1[6] + v13 + 16);
        if ( *(_DWORD *)v15 == 1 )
        {
          if ( KeGetCurrentIrql() )
            Debug_FreAssertMsg(
              "Code Path Requires Passive Level",
              0LL,
              "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\dynamiclock.c",
              88LL);
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
            WdfDriverGlobals,
            *(_QWORD *)(v15 + 8),
            0LL);
        }
        else
        {
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2528))(
            WdfDriverGlobals,
            *(_QWORD *)(v15 + 8));
        }
        if ( *(_BYTE *)(*(_QWORD *)(v6 + 8) + 441LL) )
        {
          Register_ReadSecureMmio(v6, (int)v14, 2, 1, &v44);
          v16 = v44;
        }
        else
        {
          v16 = *v14;
        }
        if ( a3 != 7 || (v16 & 0x20000) == 0 )
        {
          v17 = *(_QWORD *)(v6 + 8);
          v18 = v16 & 0xE00C200 | 0x20000;
          v45 = v18;
          if ( *(_BYTE *)(v17 + 441) )
          {
            Register_WriteSecureMmio(v6, v14, 2LL, &v45);
          }
          else
          {
            *v14 = v18;
            _InterlockedOr(v42, 0);
          }
        }
        v19 = *(_QWORD *)(a1[6] + v13 + 16);
        if ( *(_DWORD *)v19 == 1 )
        {
          if ( KeGetCurrentIrql() )
            Debug_FreAssertMsg(
              "Code Path Requires Passive Level",
              0LL,
              "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\dynamiclock.c",
              107LL);
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
            WdfDriverGlobals,
            *(_QWORD *)(v19 + 8));
        }
        else
        {
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2536))(
            WdfDriverGlobals,
            *(_QWORD *)(v19 + 8));
        }
      }
      if ( (unsigned int)(a3 - 3) <= 3 )
      {
        v51 = *(_OWORD *)(a1[1] + 272LL);
        if ( (v51 & 0x20000000) != 0 )
        {
          v20 = (unsigned __int64)v10 << 6;
          v21 = (int *)(a1[5] + 16LL * v10);
          v22 = *(_QWORD *)(a1[6] + v20 + 16);
          if ( *(_DWORD *)v22 == 1 )
          {
            if ( KeGetCurrentIrql() )
              Debug_FreAssertMsg(
                "Code Path Requires Passive Level",
                0LL,
                "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\dynamiclock.c",
                88LL);
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
              WdfDriverGlobals,
              *(_QWORD *)(v22 + 8),
              0LL);
          }
          else
          {
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2528))(
              WdfDriverGlobals,
              *(_QWORD *)(v22 + 8));
          }
          if ( *(_BYTE *)(*(_QWORD *)(v6 + 8) + 441LL) )
          {
            Register_ReadSecureMmio(v6, (int)v21, 2, 1, &v46);
            LOWORD(v23) = v46;
          }
          else
          {
            v23 = *v21;
          }
          v24 = *(_QWORD *)(v6 + 8);
          v25 = v23 & 0xC200;
          v47 = v25;
          if ( *(_BYTE *)(v24 + 441) )
          {
            Register_WriteSecureMmio(v6, v21, 2LL, &v47);
          }
          else
          {
            *v21 = v25;
            _InterlockedOr(v42, 0);
          }
          v26 = *(_QWORD *)(a1[6] + v20 + 16);
          if ( *(_DWORD *)v26 == 1 )
          {
            if ( KeGetCurrentIrql() )
              Debug_FreAssertMsg(
                "Code Path Requires Passive Level",
                0LL,
                "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\dynamiclock.c",
                107LL);
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
              WdfDriverGlobals,
              *(_QWORD *)(v26 + 8));
          }
          else
          {
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2536))(
              WdfDriverGlobals,
              *(_QWORD *)(v26 + 8));
          }
        }
      }
      v27 = a1[1];
      v28 = (unsigned int *)(a1[5] + 16LL * v10);
      v29 = *(_QWORD *)(v27 + 88);
      if ( *(_BYTE *)(*(_QWORD *)(v29 + 8) + 441LL) )
      {
        Register_ReadSecureMmio(v29, *((_DWORD *)a1 + 10) + 16 * v10, 2, 1, &v48);
        v30 = v48;
      }
      else
      {
        v30 = *v28;
      }
      WPP_RECORDER_SF_qD(
        *(_QWORD *)(v27 + 72),
        (_DWORD)v8,
        11,
        12,
        (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
        (char)v28,
        v30);
      v31 = (v30 >> 3) & 1;
      LOBYTE(v31) = 4;
      WPP_RECORDER_SF_ddd(
        *(_QWORD *)(v27 + 72),
        v31,
        11,
        13,
        (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
        v30 & 1,
        (v30 & 2) != 0,
        (v30 & 8) != 0);
      v32 = (v30 >> 5) & 0xF;
      LOBYTE(v32) = 4;
      WPP_RECORDER_SF_ddd(
        *(_QWORD *)(v27 + 72),
        v32,
        11,
        14,
        (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
        (v30 & 0x10) != 0,
        (v30 & 0x200) != 0,
        (v30 >> 5) & 0xF);
      v33 = HIWORD(v30) & 1;
      LOBYTE(v33) = 4;
      WPP_RECORDER_SF_ddd(
        *(_QWORD *)(v27 + 72),
        v33,
        11,
        15,
        (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
        (v30 >> 10) & 0xF,
        (unsigned __int16)v30 >> 14,
        BYTE2(v30) & 1);
      v34 = (v30 >> 20) & 1;
      LOBYTE(v34) = 4;
      WPP_RECORDER_SF_ddd(
        *(_QWORD *)(v27 + 72),
        v34,
        11,
        16,
        (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
        (v30 & 0x20000) != 0,
        (v30 & 0x40000) != 0,
        (v30 & 0x100000) != 0);
      v35 = (v30 >> 22) & 1;
      LOBYTE(v35) = 4;
      WPP_RECORDER_SF_ddd(
        *(_QWORD *)(v27 + 72),
        v35,
        11,
        17,
        (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
        (v30 & 0x80000) != 0,
        (v30 & 0x200000) != 0,
        (v30 & 0x400000) != 0);
      v36 = (v30 >> 26) & 1;
      LOBYTE(v36) = 4;
      WPP_RECORDER_SF_ddd(
        *(_QWORD *)(v27 + 72),
        v36,
        11,
        18,
        (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
        (v30 & 0x800000) != 0,
        (v30 & 0x2000000) != 0,
        (v30 & 0x4000000) != 0);
      LOBYTE(v37) = 4;
      WPP_RECORDER_SF_ddd(
        *(_QWORD *)(v27 + 72),
        v37,
        11,
        19,
        (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
        (v30 & 0x8000000) != 0,
        (v30 & 0x40000000) != 0,
        (v30 & 0x80000000) != 0);
      result = ++v10 + 1;
    }
    while ( (unsigned int)result <= *((_DWORD *)a1 + 4) );
    v9 = v52;
  }
  v38 = a1[1];
  v49 = v9;
  v39 = *(_QWORD *)(v38 + 424);
  if ( v39 )
  {
    result = PoFxPowerControl(v39, &GUID_HC_SUB_DX_STATE, &v49, 4LL, 0LL, 0LL, 0LL);
    if ( (int)result < 0 )
    {
      v41 = *(_QWORD *)(v38 + 72);
      LODWORD(v43) = result;
      return WPP_RECORDER_SF_d(v41, 4u, 4u, 0x21u, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids, v43);
    }
  }
  return result;
}
