/*
 * XREFs of Register_BiosHandoff @ 0x1C0018848
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C000BB80 (Controller_WdfEvtDeviceD0Entry.c)
 *     Register_PrepareHardware @ 0x1C005ABEC (Register_PrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001C00 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     Register_ControllerStop @ 0x1C0018D10 (Register_ControllerStop.c)
 *     XilRegister_ReadUchar @ 0x1C00196CC (XilRegister_ReadUchar.c)
 *     XilRegister_ReadUlong @ 0x1C0019708 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C00197EC (XilRegister_WriteUlong.c)
 *     Etw_StartDeviceFail @ 0x1C0036790 (Etw_StartDeviceFail.c)
 *     Register_WriteSecureMmio @ 0x1C005B15C (Register_WriteSecureMmio.c)
 */

__int64 __fastcall Register_BiosHandoff(_QWORD *a1)
{
  __int64 v1; // r14
  __int64 v3; // rcx
  char Uchar; // al
  __int64 v5; // rcx
  char v6; // al
  int v7; // ebx
  int i; // r15d
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int16 v11; // r9
  unsigned __int8 v12; // dl
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned int v15; // ebx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  int Ulong; // eax
  signed __int32 v23[8]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v24; // [rsp+28h] [rbp-30h]
  char v25; // [rsp+60h] [rbp+8h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+68h] [rbp+10h] BYREF

  v1 = a1[8];
  v3 = *(_QWORD *)(a1[1] + 72LL);
  if ( v1 )
  {
    WPP_RECORDER_SF_(v3, 4u, 6u, 0x2Fu, (__int64)&WPP_aa9a6dc92bdc315c6241291f5ec849eb_Traceguids);
    Uchar = XilRegister_ReadUchar(a1, v1 + 3);
    v5 = a1[1];
    v6 = Uchar | 1;
    v25 = v6;
    if ( *(_BYTE *)(v5 + 441) )
    {
      Register_WriteSecureMmio(a1, v1 + 3, 0LL, &v25);
    }
    else
    {
      *(_BYTE *)(v1 + 3) = v6;
      _InterlockedOr(v23, 0);
    }
    v7 = 20;
    for ( i = 0; ; i += 100 )
    {
      if ( (XilRegister_ReadUchar(a1, v1 + 2) & 1) == 0 )
      {
        v16 = a1[1];
        v11 = 48;
        LODWORD(v24) = i;
        v12 = 4;
        v10 = *(_QWORD *)(v16 + 72);
        goto LABEL_15;
      }
      if ( !v7 )
        break;
      --v7;
      Interval.QuadPart = -1000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    v9 = a1[1];
    v10 = *(_QWORD *)(v9 + 72);
    if ( (*(_QWORD *)(v9 + 272) & 4) == 0 )
    {
      LODWORD(v24) = 2000;
      WPP_RECORDER_SF_d(v10, 2u, 6u, 0x32u, (__int64)&WPP_aa9a6dc92bdc315c6241291f5ec849eb_Traceguids, v24);
      v14 = 1LL;
      goto LABEL_13;
    }
    v11 = 49;
    LODWORD(v24) = 2000;
    v12 = 3;
LABEL_15:
    WPP_RECORDER_SF_d(v10, v12, 6u, v11, (__int64)&WPP_aa9a6dc92bdc315c6241291f5ec849eb_Traceguids, v24);
  }
  else
  {
    WPP_RECORDER_SF_(v3, 3u, 6u, 0x2Eu, (__int64)&WPP_aa9a6dc92bdc315c6241291f5ec849eb_Traceguids);
  }
  if ( (XilRegister_ReadUlong(a1, a1[4] + 4LL) & 1) != 0 )
  {
LABEL_21:
    if ( v1 )
    {
      Ulong = XilRegister_ReadUlong(a1, v1 + 4);
      XilRegister_WriteUlong(a1, v1 + 4, Ulong & 0x1FFFDFFF);
    }
    return 0;
  }
  v17 = a1[1];
  v18 = *(_QWORD *)(v17 + 72);
  if ( *(__int64 *)(v17 + 272) >= 0 )
  {
    WPP_RECORDER_SF_(v18, 2u, 6u, 0x34u, (__int64)&WPP_aa9a6dc92bdc315c6241291f5ec849eb_Traceguids);
    v19 = Register_ControllerStop(a1);
    v15 = v19;
    if ( v19 < 0 )
    {
      v20 = a1[1];
      LODWORD(v24) = v19;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v20 + 72),
        2u,
        6u,
        0x35u,
        (__int64)&WPP_aa9a6dc92bdc315c6241291f5ec849eb_Traceguids,
        v24);
      return v15;
    }
    goto LABEL_21;
  }
  WPP_RECORDER_SF_(v18, 2u, 6u, 0x33u, (__int64)&WPP_aa9a6dc92bdc315c6241291f5ec849eb_Traceguids);
  v14 = 2LL;
LABEL_13:
  Etw_StartDeviceFail(a1[1], v13, v14);
  return (unsigned int)-1073741823;
}
