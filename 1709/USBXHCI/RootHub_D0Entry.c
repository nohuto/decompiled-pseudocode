/*
 * XREFs of RootHub_D0Entry @ 0x1C0002A70
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0005680 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_InternalReset @ 0x1C0011414 (Controller_InternalReset.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C0005410 (WPP_RECORDER_SF_DD.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     Debug_FreAssertMsg @ 0x1C00160A4 (Debug_FreAssertMsg.c)
 *     Register_ReadSecureMmio @ 0x1C005DB2C (Register_ReadSecureMmio.c)
 *     Register_WriteSecureMmio @ 0x1C005DDE8 (Register_WriteSecureMmio.c)
 */

__int64 __fastcall RootHub_D0Entry(__int64 a1, int a2)
{
  int v2; // r14d
  __int64 v4; // r15
  int *v5; // rbx
  int v6; // eax
  unsigned __int64 v7; // rsi
  int v8; // edx
  int v9; // r9d
  __int64 v10; // rbp
  int v11; // ecx
  __int64 v12; // rax
  int v13; // ecx
  __int64 v14; // rbx
  signed __int32 v16[8]; // [rsp+0h] [rbp-88h] BYREF
  __int128 v17; // [rsp+40h] [rbp-48h]
  int v18; // [rsp+90h] [rbp+8h] BYREF
  int v19; // [rsp+98h] [rbp+10h] BYREF
  int v20; // [rsp+A0h] [rbp+18h] BYREF

  v19 = a2;
  v2 = 1;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL);
  *(_BYTE *)(a1 + 57) = 1;
  if ( *(_DWORD *)(a1 + 16) )
  {
    while ( 1 )
    {
      v5 = (int *)(*(_QWORD *)(a1 + 40) + 16LL * (unsigned int)(v2 - 1));
      if ( *(_BYTE *)(*(_QWORD *)(v4 + 8) + 441LL) )
      {
        Register_ReadSecureMmio(v4, *(_DWORD *)(a1 + 40) + 16 * (v2 - 1), 2, 1, &v19);
        LOBYTE(v6) = v19;
      }
      else
      {
        v6 = *v5;
      }
      v7 = (unsigned __int64)(unsigned int)(v2 - 1) << 6;
      v8 = *(unsigned __int8 *)(v7 + *(_QWORD *)(a1 + 48) + 1);
      if ( (_BYTE)v8 == 2 )
        break;
      if ( (_BYTE)v8 == 3 )
      {
        v9 = 32;
LABEL_6:
        LOBYTE(v8) = 4;
        WPP_RECORDER_SF_DD(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          v8,
          11,
          v9,
          (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
          v2,
          v6);
        v17 = *(_OWORD *)(*(_QWORD *)(a1 + 8) + 272LL);
        if ( (v17 & 0x20000000) != 0 )
        {
          v10 = *(_QWORD *)(v7 + *(_QWORD *)(a1 + 48) + 16);
          if ( *(_DWORD *)v10 == 1 )
          {
            if ( KeGetCurrentIrql() )
              Debug_FreAssertMsg(
                "Code Path Requires Passive Level",
                0LL,
                "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\dynamiclock.c",
                88LL);
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
              WdfDriverGlobals,
              *(_QWORD *)(v10 + 8),
              0LL);
          }
          else
          {
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2528))(
              WdfDriverGlobals,
              *(_QWORD *)(v10 + 8));
          }
          if ( *(_BYTE *)(*(_QWORD *)(v4 + 8) + 441LL) )
          {
            Register_ReadSecureMmio(v4, (int)v5, 2, 1, &v18);
            LOWORD(v11) = v18;
          }
          else
          {
            v11 = *v5;
          }
          v12 = *(_QWORD *)(v4 + 8);
          v13 = v11 & 0xC200 | 0xE000000;
          v20 = v13;
          if ( *(_BYTE *)(v12 + 441) )
          {
            Register_WriteSecureMmio(v4, v5, 2LL, &v20);
          }
          else
          {
            *v5 = v13;
            _InterlockedOr(v16, 0);
          }
          v14 = *(_QWORD *)(v7 + *(_QWORD *)(a1 + 48) + 16);
          if ( *(_DWORD *)v14 == 1 )
          {
            if ( KeGetCurrentIrql() )
              Debug_FreAssertMsg(
                "Code Path Requires Passive Level",
                0LL,
                "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\dynamiclock.c",
                107LL);
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
              WdfDriverGlobals,
              *(_QWORD *)(v14 + 8));
          }
          else
          {
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2536))(
              WdfDriverGlobals,
              *(_QWORD *)(v14 + 8));
          }
        }
        goto LABEL_15;
      }
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_DD(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v8,
        11,
        33,
        (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
        v2,
        *(_BYTE *)(v7 + *(_QWORD *)(a1 + 48) + 1));
LABEL_15:
      if ( (unsigned int)++v2 > *(_DWORD *)(a1 + 16) )
        return 0LL;
    }
    v9 = 31;
    goto LABEL_6;
  }
  return 0LL;
}
