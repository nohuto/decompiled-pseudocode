/*
 * XREFs of RootHub_UcxEvtInterruptTransfer @ 0x1C0005090
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001A20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0005410 (WPP_RECORDER_SF_DD.c)
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     Controller_SetControllerGone @ 0x1C00123D0 (Controller_SetControllerGone.c)
 *     Debug_FreAssertMsg @ 0x1C00160A4 (Debug_FreAssertMsg.c)
 *     RootHub_HideInvalidDebugPortStatusAndChange @ 0x1C00202E0 (RootHub_HideInvalidDebugPortStatusAndChange.c)
 *     Register_ReadSecureMmio @ 0x1C005DB2C (Register_ReadSecureMmio.c)
 */

__int64 __fastcall RootHub_UcxEvtInterruptTransfer(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // r15
  int v5; // edx
  __int64 v6; // r13
  unsigned __int8 *v7; // rsi
  size_t v8; // rbx
  __int64 v9; // r10
  char v10; // cl
  unsigned int v11; // r14d
  unsigned int v12; // ebx
  __int64 v13; // rdx
  char v14; // r8
  int *v15; // rdx
  int v16; // eax
  unsigned __int64 v17; // r8
  int v18; // edx
  int *v20; // rdx
  int v21; // eax
  unsigned __int16 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // [rsp+28h] [rbp-90h]
  int v25; // [rsp+40h] [rbp-78h] BYREF
  int v26; // [rsp+44h] [rbp-74h] BYREF
  _QWORD v27[5]; // [rsp+48h] [rbp-70h] BYREF

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C004E278);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 88LL);
  memset(v27, 0, sizeof(v27));
  LOWORD(v27[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    a2,
    v27);
  v6 = v27[1];
  v7 = *(unsigned __int8 **)(v27[1] + 40LL);
  v8 = *(unsigned int *)(v27[1] + 36LL);
  if ( *(_BYTE *)(*(_QWORD *)(v3 + 8) + 441LL) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      "Code Path Requires Passive Level",
      0LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\roothub.c",
      3182LL);
  v9 = *(_QWORD *)(v3 + 8);
  v10 = *(_BYTE *)(*(_QWORD *)(v9 + 88) + 16LL);
  if ( !v10 || *(_BYTE *)(v9 + 333) )
  {
    LOBYTE(v5) = 2;
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(v9 + 72),
      v5,
      4,
      221,
      (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids,
      v10,
      *(_BYTE *)(v9 + 333));
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      2u,
      0xBu,
      0xB7u,
      (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids);
    goto LABEL_44;
  }
  if ( *(_BYTE *)(v3 + 57) )
  {
    if ( !*(_DWORD *)(v9 + 392) && *(_DWORD *)(v9 + 416) != 1 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 3040))(
        WdfDriverGlobals,
        *(_QWORD *)(v9 + 408));
    *(_BYTE *)(v3 + 57) = 0;
  }
  if ( !(_DWORD)v8 )
    goto LABEL_20;
  memset(v7, 0, v8);
  if ( (unsigned int)v8 > 0x20 )
    v11 = 255;
  else
    v11 = 8 * v8 - 1;
  if ( v11 > *(_DWORD *)(v3 + 16) )
    v11 = *(_DWORD *)(v3 + 16);
  v12 = 1;
  if ( !v11 )
  {
LABEL_20:
    *(_DWORD *)(v6 + 4) = 0;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2104))(WdfDriverGlobals, a2);
  }
  while ( 1 )
  {
    v13 = v12 - 1;
    v14 = *(_BYTE *)((v13 << 6) + *(_QWORD *)(v3 + 48) + 1);
    if ( v14 != 2 )
      break;
    v15 = (int *)(*(_QWORD *)(v3 + 40) + 16 * v13);
    if ( *(_BYTE *)(*(_QWORD *)(v4 + 8) + 441LL) )
    {
      Register_ReadSecureMmio(v4, (int)v15, 2, 1, &v25);
      v16 = v25;
    }
    else
    {
      v16 = *v15;
    }
    if ( v16 == -1 )
    {
      v22 = 184;
      goto LABEL_42;
    }
    if ( (v16 & 0x1E0) == 0x1E0 )
      v16 &= ~0x400000u;
    if ( (v16 & 0x760000) != 0 )
    {
      v17 = (unsigned __int64)v12 >> 3;
      v18 = v7[v17] | (1 << (v12 & 7));
      v7[v17] = v18;
      LOBYTE(v18) = 4;
      WPP_RECORDER_SF_DD(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        v18,
        11,
        185,
        (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
        v12,
        v16);
    }
LABEL_19:
    if ( ++v12 > v11 )
      goto LABEL_20;
  }
  if ( v14 != 3 )
    goto LABEL_19;
  v20 = (int *)(*(_QWORD *)(v3 + 40) + 16 * v13);
  if ( *(_BYTE *)(*(_QWORD *)(v4 + 8) + 441LL) )
  {
    Register_ReadSecureMmio(v4, (int)v20, 2, 1, &v26);
    v21 = v26;
  }
  else
  {
    v21 = *v20;
  }
  if ( v21 != -1 )
  {
    if ( (v21 & 0xFA0000) != 0 )
    {
      LOBYTE(v20) = 4;
      WPP_RECORDER_SF_DD(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        (_DWORD)v20,
        11,
        187,
        (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
        v12,
        v21);
      if ( (unsigned __int8)RootHub_HideInvalidDebugPortStatusAndChange(v3, v12) )
      {
        LODWORD(v24) = v12;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          4u,
          0xBu,
          0xBCu,
          (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
          v24);
      }
      else
      {
        v7[(unsigned __int64)v12 >> 3] |= 1 << (v12 & 7);
      }
    }
    goto LABEL_19;
  }
  v22 = 186;
LABEL_42:
  WPP_RECORDER_SF_(
    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
    2u,
    0xBu,
    v22,
    (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids);
  LOBYTE(v23) = 1;
  Controller_SetControllerGone(*(_QWORD *)(v3 + 8), v23);
LABEL_44:
  *(_DWORD *)(v6 + 4) = -1073713152;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2104))(WdfDriverGlobals, a2);
}
