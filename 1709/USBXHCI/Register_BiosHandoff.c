/*
 * XREFs of Register_BiosHandoff @ 0x1C0002780
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0005680 (Controller_WdfEvtDeviceD0Entry.c)
 *     Register_PrepareHardware @ 0x1C005D868 (Register_PrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001A20 (WPP_RECORDER_SF_.c)
 *     Register_ControllerStop @ 0x1C00028B4 (Register_ControllerStop.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     Etw_StartDeviceFail @ 0x1C0038BB4 (Etw_StartDeviceFail.c)
 *     Register_ReadSecureMmio @ 0x1C005DB2C (Register_ReadSecureMmio.c)
 *     Register_WriteSecureMmio @ 0x1C005DDE8 (Register_WriteSecureMmio.c)
 */

__int64 __fastcall Register_BiosHandoff(_QWORD *a1)
{
  __int64 v1; // rdi
  int v3; // edx
  char v4; // cl
  __int64 v5; // rax
  char v6; // cl
  int v7; // ebp
  int v8; // r15d
  char v9; // al
  __int64 v10; // rcx
  int v11; // r9d
  __int64 v12; // rcx
  int v13; // eax
  int v14; // ecx
  __int64 v15; // rax
  int v16; // ecx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  int v21; // eax
  int v22; // edx
  unsigned int v23; // esi
  signed __int32 v24[8]; // [rsp+0h] [rbp-A8h] BYREF
  int v25; // [rsp+28h] [rbp-80h]
  int v26; // [rsp+30h] [rbp-78h] BYREF
  int v27; // [rsp+38h] [rbp-70h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+40h] [rbp-68h] BYREF
  __int128 v29; // [rsp+48h] [rbp-60h]
  __int128 v30; // [rsp+58h] [rbp-50h]
  char v31; // [rsp+B0h] [rbp+8h] BYREF
  char v32; // [rsp+B8h] [rbp+10h] BYREF
  char v33; // [rsp+C0h] [rbp+18h] BYREF
  int v34; // [rsp+C8h] [rbp+20h] BYREF

  v1 = a1[8];
  if ( v1 )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(a1[1] + 72LL),
      4u,
      6u,
      0x2Fu,
      (__int64)&WPP_a32df80a94123ec82d8da458aa91e220_Traceguids);
    if ( *(_BYTE *)(a1[1] + 441LL) )
    {
      Register_ReadSecureMmio((int)a1, v1 + 3, 0, 1, &v31);
      v4 = v31;
    }
    else
    {
      v4 = *(_BYTE *)(v1 + 3);
    }
    v5 = a1[1];
    v6 = v4 | 1;
    v32 = v6;
    if ( *(_BYTE *)(v5 + 441) )
    {
      Register_WriteSecureMmio(a1, v1 + 3, 0LL, &v32);
    }
    else
    {
      *(_BYTE *)(v1 + 3) = v6;
      _InterlockedOr(v24, 0);
    }
    v7 = 0;
    v8 = 20;
    while ( 1 )
    {
      if ( *(_BYTE *)(a1[1] + 441LL) )
      {
        Register_ReadSecureMmio((int)a1, v1 + 2, 0, 1, &v33);
        v9 = v33;
      }
      else
      {
        v9 = *(_BYTE *)(v1 + 2);
      }
      if ( (v9 & 1) == 0 )
      {
        v10 = a1[1];
        v11 = 48;
        v25 = v7;
        LOBYTE(v3) = 4;
LABEL_11:
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v10 + 72),
          v3,
          6,
          v11,
          (__int64)&WPP_a32df80a94123ec82d8da458aa91e220_Traceguids,
          v25);
        goto LABEL_12;
      }
      if ( !v8 )
        break;
      --v8;
      Interval.QuadPart = -1000000LL;
      v7 += 100;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    v10 = a1[1];
    v29 = *(_OWORD *)(v10 + 272);
    if ( (v29 & 4) != 0 )
    {
      v11 = 49;
      v25 = 2000;
      LOBYTE(v3) = 3;
      goto LABEL_11;
    }
    LOBYTE(v3) = 2;
    WPP_RECORDER_SF_d(*(_QWORD *)(v10 + 72), v3, 6, 50, (__int64)&WPP_a32df80a94123ec82d8da458aa91e220_Traceguids, 208);
    Etw_StartDeviceFail(a1[1], v18, 1LL);
    return 3221225473LL;
  }
  else
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(a1[1] + 72LL),
      3u,
      6u,
      0x2Eu,
      (__int64)&WPP_a32df80a94123ec82d8da458aa91e220_Traceguids);
LABEL_12:
    v12 = a1[4];
    if ( *(_BYTE *)(a1[1] + 441LL) )
    {
      Register_ReadSecureMmio((int)a1, v12 + 4, 2, 1, &v34);
      LOBYTE(v13) = v34;
    }
    else
    {
      v13 = *(_DWORD *)(v12 + 4);
    }
    if ( (v13 & 1) != 0 )
      goto LABEL_15;
    v19 = a1[1];
    v30 = *(_OWORD *)(v19 + 272);
    if ( (__int64)v30 < 0 )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(v19 + 72), 2u, 6u, 0x33u, (__int64)&WPP_a32df80a94123ec82d8da458aa91e220_Traceguids);
      Etw_StartDeviceFail(a1[1], v20, 2LL);
      return 3221225473LL;
    }
    WPP_RECORDER_SF_(*(_QWORD *)(v19 + 72), 2u, 6u, 0x34u, (__int64)&WPP_a32df80a94123ec82d8da458aa91e220_Traceguids);
    v21 = Register_ControllerStop((int)a1);
    v23 = v21;
    if ( v21 >= 0 )
    {
LABEL_15:
      if ( v1 )
      {
        if ( *(_BYTE *)(a1[1] + 441LL) )
        {
          Register_ReadSecureMmio((int)a1, v1 + 4, 2, 1, &v26);
          v14 = v26;
        }
        else
        {
          v14 = *(_DWORD *)(v1 + 4);
        }
        v15 = a1[1];
        v16 = v14 & 0x1FFFDFFF;
        v27 = v16;
        if ( *(_BYTE *)(v15 + 441) )
        {
          Register_WriteSecureMmio(a1, v1 + 4, 2LL, &v27);
        }
        else
        {
          *(_DWORD *)(v1 + 4) = v16;
          _InterlockedOr(v24, 0);
        }
      }
      return 0LL;
    }
    else
    {
      LOBYTE(v22) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        v22,
        6,
        53,
        (__int64)&WPP_a32df80a94123ec82d8da458aa91e220_Traceguids,
        v21);
      return v23;
    }
  }
}
