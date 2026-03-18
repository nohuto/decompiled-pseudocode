/*
 * XREFs of Register_PrepareHardware @ 0x1C005D868
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C005A020 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001A20 (WPP_RECORDER_SF_.c)
 *     Register_ControllerReset @ 0x1C0002420 (Register_ControllerReset.c)
 *     Register_BiosHandoff @ 0x1C0002780 (Register_BiosHandoff.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0005F70 (WPP_RECORDER_SF_qd.c)
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C000E154 (WPP_RECORDER_SF_ddL.c)
 *     Controller_IsSecureDevice @ 0x1C0011780 (Controller_IsSecureDevice.c)
 *     XilRegister_ReadUlong @ 0x1C001F6D0 (XilRegister_ReadUlong.c)
 *     Register_MapSecureMmio @ 0x1C005D0D4 (Register_MapSecureMmio.c)
 *     Register_ParseCapabilityRegister @ 0x1C005D19C (Register_ParseCapabilityRegister.c)
 */

__int64 __fastcall Register_PrepareHardware(__int64 a1, __int64 a2)
{
  unsigned int i; // edi
  __int64 v5; // rsi
  __int64 v6; // rax
  int v7; // edi
  int v8; // eax
  unsigned __int16 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r10
  _QWORD *v12; // rcx
  __int64 v14; // [rsp+28h] [rbp-60h]
  __int64 v15; // [rsp+28h] [rbp-60h]
  __int64 v16; // [rsp+30h] [rbp-58h]
  __int64 v17; // [rsp+38h] [rbp-50h]
  __int128 v18; // [rsp+40h] [rbp-48h] BYREF

  for ( i = 0;
        i < (*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2432))(
              WdfDriverGlobals,
              a2);
        ++i )
  {
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2440))(
           WdfDriverGlobals,
           a2,
           i);
    if ( *(_BYTE *)v5 == 3 )
    {
      LODWORD(v14) = i;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        4u,
        6u,
        0xCu,
        (__int64)&WPP_a32df80a94123ec82d8da458aa91e220_Traceguids,
        v14);
      LODWORD(v17) = *(_DWORD *)(v5 + 12);
      LODWORD(v16) = *(_DWORD *)(v5 + 4);
      LODWORD(v15) = *(_DWORD *)(v5 + 8);
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        4u,
        6u,
        0xDu,
        (__int64)&WPP_a32df80a94123ec82d8da458aa91e220_Traceguids,
        v15,
        v16,
        v17);
      if ( !*(_QWORD *)(a1 + 24) )
      {
        v6 = MmMapIoSpaceEx(*(_QWORD *)(v5 + 4), *(unsigned int *)(v5 + 12), 516LL);
        *(_QWORD *)(a1 + 24) = v6;
        if ( !v6 )
        {
          WPP_RECORDER_SF_(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            2u,
            6u,
            0xEu,
            (__int64)&WPP_a32df80a94123ec82d8da458aa91e220_Traceguids);
          v7 = -1073741670;
          goto LABEL_23;
        }
        *(_DWORD *)(a1 + 20) = *(_DWORD *)(v5 + 12);
        *(_BYTE *)(a1 + 16) = 1;
        LODWORD(v16) = *(_DWORD *)(a1 + 20);
        WPP_RECORDER_SF_qd(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          4u,
          6u,
          0xFu,
          (__int64)&WPP_a32df80a94123ec82d8da458aa91e220_Traceguids,
          v6,
          v16);
      }
    }
  }
  if ( !*(_QWORD *)(a1 + 24) )
  {
    v7 = -1073741670;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      2u,
      6u,
      0x10u,
      (__int64)&WPP_a32df80a94123ec82d8da458aa91e220_Traceguids);
    goto LABEL_23;
  }
  if ( !Controller_IsSecureDevice(*(_QWORD *)(a1 + 8)) || (v7 = Register_MapSecureMmio((_QWORD *)a1), v7 >= 0) )
  {
    v8 = Register_ParseCapabilityRegister(a1);
    v7 = v8;
    if ( v8 < 0 )
    {
      v9 = 17;
LABEL_15:
      LODWORD(v14) = v8;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        3u,
        6u,
        v9,
        (__int64)&WPP_a32df80a94123ec82d8da458aa91e220_Traceguids,
        v14);
      goto LABEL_23;
    }
    v8 = Register_BiosHandoff((_QWORD *)a1);
    v7 = v8;
    if ( v8 < 0 )
    {
      v9 = 18;
      goto LABEL_15;
    }
    v8 = Register_ControllerReset(a1, 0);
    v7 = v8;
    if ( v8 < 0 )
    {
      v9 = 19;
      goto LABEL_15;
    }
    if ( (XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 16LL)) & 1) == 0 )
    {
      v10 = *(_QWORD *)(a1 + 8);
      v18 = 1uLL;
      v11 = 2LL;
      v12 = (_QWORD *)(v10 + 272);
      do
      {
        *v12 |= *(_QWORD *)((char *)&v18 + (_QWORD)v12 - v10 - 272);
        ++v12;
        --v11;
      }
      while ( v11 );
    }
  }
LABEL_23:
  if ( !*(_QWORD *)(a1 + 24) )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      2u,
      6u,
      0x14u,
      (__int64)&WPP_a32df80a94123ec82d8da458aa91e220_Traceguids);
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v7;
}
