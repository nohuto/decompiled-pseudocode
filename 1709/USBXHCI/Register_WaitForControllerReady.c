/*
 * XREFs of Register_WaitForControllerReady @ 0x1C00029A0
 * Callers:
 *     Register_ControllerReset @ 0x1C0002420 (Register_ControllerReset.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001A20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0005410 (WPP_RECORDER_SF_DD.c)
 *     Register_ReadSecureMmio @ 0x1C005DB2C (Register_ReadSecureMmio.c)
 */

__int64 __fastcall Register_WaitForControllerReady(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // edx
  int v4; // ebp
  __int64 v5; // rsi
  char i; // di
  int v7; // eax
  int v9; // edx
  int v10; // [rsp+60h] [rbp+8h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+68h] [rbp+10h] BYREF

  WPP_RECORDER_SF_(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
    4u,
    6u,
    0x41u,
    (__int64)&WPP_a32df80a94123ec82d8da458aa91e220_Traceguids);
  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(unsigned __int8 *)(*(_QWORD *)(v2 + 88) + 16LL);
  if ( !(_BYTE)v3 || *(_BYTE *)(v2 + 333) )
  {
    v9 = (unsigned __int8)v3;
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(v2 + 72),
      v9,
      4,
      221,
      (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids,
      *(_BYTE *)(*(_QWORD *)(v2 + 88) + 16LL),
      *(_BYTE *)(v2 + 333));
    return 0LL;
  }
  else
  {
    v4 = 100;
    v5 = *(_QWORD *)(a1 + 32);
    for ( i = 0; ; i += 100 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 8) + 441LL) )
      {
        Register_ReadSecureMmio(a1, v5 + 4, 2, 1, &v10);
        LOWORD(v7) = v10;
      }
      else
      {
        v7 = *(_DWORD *)(v5 + 4);
      }
      if ( (v7 & 0x800) == 0 )
      {
        LOBYTE(v3) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          v3,
          6,
          66,
          (__int64)&WPP_a32df80a94123ec82d8da458aa91e220_Traceguids,
          i);
        return 0LL;
      }
      if ( !v4 )
        break;
      Interval.QuadPart = -1000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
      --v4;
    }
    LOBYTE(v3) = 2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v3,
      6,
      67,
      (__int64)&WPP_a32df80a94123ec82d8da458aa91e220_Traceguids,
      16);
    return 3221225473LL;
  }
}
