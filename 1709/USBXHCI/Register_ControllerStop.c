/*
 * XREFs of Register_ControllerStop @ 0x1C00028B4
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C0001C10 (Controller_WdfEvtDeviceD0Exit.c)
 *     Register_BiosHandoff @ 0x1C0002780 (Register_BiosHandoff.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0005680 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_InternalReset @ 0x1C0011414 (Controller_InternalReset.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001A20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00055AC (WPP_RECORDER_SF_dd.c)
 *     Controller_IsControllerAccessible @ 0x1C0005F34 (Controller_IsControllerAccessible.c)
 *     Register_ReadSecureMmio @ 0x1C005DB2C (Register_ReadSecureMmio.c)
 *     Register_WriteSecureMmio @ 0x1C005DDE8 (Register_WriteSecureMmio.c)
 */

__int64 __fastcall Register_ControllerStop(__int64 a1)
{
  int v2; // edx
  unsigned int v3; // ebx
  unsigned int *v4; // rsi
  unsigned int v5; // ecx
  __int64 v6; // rax
  unsigned int v7; // ecx
  int i; // r14d
  unsigned int v9; // eax
  signed __int32 v11[8]; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v12; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v13; // [rsp+78h] [rbp+10h] BYREF
  int v14; // [rsp+80h] [rbp+18h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+88h] [rbp+20h] BYREF

  WPP_RECORDER_SF_(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
    4u,
    6u,
    0x36u,
    (__int64)&WPP_a32df80a94123ec82d8da458aa91e220_Traceguids);
  v3 = 0;
  if ( (unsigned __int8)Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8)) )
  {
    v4 = *(unsigned int **)(a1 + 32);
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 8) + 441LL) )
    {
      Register_ReadSecureMmio(a1, *(_QWORD *)(a1 + 32), 2, 1, &v12);
      v5 = v12;
    }
    else
    {
      v5 = *v4;
    }
    v6 = *(_QWORD *)(a1 + 8);
    v7 = v5 & 0xFFFFFFFE;
    v13 = v7;
    if ( *(_BYTE *)(v6 + 441) )
    {
      Register_WriteSecureMmio(a1, v4, 2LL, &v13);
    }
    else
    {
      *v4 = v7;
      _InterlockedOr(v11, 0);
    }
    for ( i = 16; ; --i )
    {
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 8) + 441LL) )
      {
        Register_ReadSecureMmio(a1, (_DWORD)v4 + 4, 2, 1, &v14);
        LOBYTE(v9) = v14;
      }
      else
      {
        v9 = v4[1];
      }
      if ( (v9 & 1) != 0 )
      {
        LOBYTE(v2) = 4;
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          v2,
          6,
          55,
          (__int64)&WPP_a32df80a94123ec82d8da458aa91e220_Traceguids,
          16 - i,
          1);
        return v3;
      }
      if ( !i )
        break;
      Interval.QuadPart = -10000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    LOBYTE(v2) = 2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v2,
      6,
      56,
      (__int64)&WPP_a32df80a94123ec82d8da458aa91e220_Traceguids,
      16);
    return (unsigned int)-1073741823;
  }
  return v3;
}
