/*
 * XREFs of Register_ControllerReset @ 0x1C0002420
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C0001C10 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0005680 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_InternalReset @ 0x1C0011414 (Controller_InternalReset.c)
 *     Register_PrepareHardware @ 0x1C005D868 (Register_PrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001A20 (WPP_RECORDER_SF_.c)
 *     Register_WaitForControllerReady @ 0x1C00029A0 (Register_WaitForControllerReady.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0005410 (WPP_RECORDER_SF_DD.c)
 *     Controller_IsControllerAccessible @ 0x1C0005F34 (Controller_IsControllerAccessible.c)
 *     Register_SetClearSSICPortUnused @ 0x1C0006048 (Register_SetClearSSICPortUnused.c)
 *     Register_RestoreRyzenFeatureBitsPostReset @ 0x1C0007B20 (Register_RestoreRyzenFeatureBitsPostReset.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     Etw_StartDeviceFail @ 0x1C0038BB4 (Etw_StartDeviceFail.c)
 *     Register_ReadSecureMmio @ 0x1C005DB2C (Register_ReadSecureMmio.c)
 *     Register_WriteSecureMmio @ 0x1C005DDE8 (Register_WriteSecureMmio.c)
 */

__int64 __fastcall Register_ControllerReset(__int64 a1, char a2)
{
  int *v5; // r14
  int v6; // eax
  int v7; // edx
  unsigned int v8; // edi
  int v9; // eax
  int v10; // edx
  __int64 v11; // rax
  int v12; // esi
  unsigned int v13; // edi
  unsigned int v14; // ebp
  int v15; // eax
  int v16; // edx
  __int64 v17; // rdx
  int v18; // edx
  int v19; // eax
  int v20; // edx
  unsigned int v21; // edi
  __int64 v22; // rcx
  void (*v23)(void); // rax
  signed __int32 v24[8]; // [rsp+0h] [rbp-78h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+40h] [rbp-38h] BYREF
  int v26; // [rsp+80h] [rbp+8h] BYREF
  int v27; // [rsp+90h] [rbp+18h] BYREF
  int v28; // [rsp+98h] [rbp+20h] BYREF

  WPP_RECORDER_SF_(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
    4u,
    6u,
    0x39u,
    (__int64)&WPP_a32df80a94123ec82d8da458aa91e220_Traceguids);
  if ( !(unsigned __int8)Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8)) )
    return 0LL;
  v5 = *(int **)(a1 + 32);
  v6 = Register_WaitForControllerReady(a1);
  v8 = v6;
  if ( v6 >= 0 )
  {
    if ( a2
      || (!*(_BYTE *)(*(_QWORD *)(a1 + 8) + 441LL)
        ? (v9 = v5[1])
        : (Register_ReadSecureMmio(a1, (_DWORD)v5 + 4, 2, 1, &v26), LOBYTE(v9) = v26),
          (v9 & 1) != 0) )
    {
      Register_SetClearSSICPortUnused(a1, 0LL);
      v11 = *(_QWORD *)(a1 + 8);
      v27 = 2;
      if ( *(_BYTE *)(v11 + 441) )
      {
        Register_WriteSecureMmio(a1, v5, 2LL, &v27);
      }
      else
      {
        *v5 = 2;
        _InterlockedOr(v24, 0);
      }
      v12 = 0;
      v13 = 1;
      if ( (_mm_srli_si128(*(__m128i *)(*(_QWORD *)(a1 + 8) + 272LL), 8).m128i_u8[0] & 2) != 0 )
      {
        Interval.QuadPart = -10000LL;
        KeDelayExecutionThread(0, 0, &Interval);
        v12 = 1;
        v13 = 2;
      }
      v14 = v12;
      while ( 1 )
      {
        if ( *(_BYTE *)(*(_QWORD *)(a1 + 8) + 441LL) )
        {
          Register_ReadSecureMmio(a1, (int)v5, 2, 1, &v28);
          LOBYTE(v15) = v28;
        }
        else
        {
          v15 = *v5;
        }
        if ( (v15 & 2) == 0 )
          break;
        if ( v12 == 100 )
        {
          LOBYTE(v10) = 1;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            v10,
            6,
            62,
            (__int64)&WPP_a32df80a94123ec82d8da458aa91e220_Traceguids,
            v14);
          Etw_StartDeviceFail(*(_QWORD *)(a1 + 8), v17, 3LL);
          return 3221225473LL;
        }
        Interval.QuadPart = -10000LL * v13;
        KeDelayExecutionThread(0, 0, &Interval);
        LOBYTE(v16) = 4;
        WPP_RECORDER_SF_DD(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          v16,
          6,
          63,
          (__int64)&WPP_a32df80a94123ec82d8da458aa91e220_Traceguids,
          v12++,
          v13);
        v14 += v13;
        if ( v13 != 16 )
          v13 *= 2;
      }
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v10,
        6,
        60,
        (__int64)&WPP_a32df80a94123ec82d8da458aa91e220_Traceguids,
        v14);
      if ( v14 > 0x32 )
      {
        LOBYTE(v18) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          v18,
          6,
          61,
          (__int64)&WPP_a32df80a94123ec82d8da458aa91e220_Traceguids,
          v14);
      }
      v19 = Register_WaitForControllerReady(a1);
      v21 = v19;
      if ( v19 >= 0 )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 288LL) & 0x10) != 0 )
        {
          Interval.QuadPart = -1000000LL;
          KeDelayExecutionThread(0, 0, &Interval);
        }
        v22 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 168LL);
        if ( v22 )
        {
          v23 = *(void (**)(void))(v22 + 32);
          if ( v23 )
            v23();
        }
        Register_RestoreRyzenFeatureBitsPostReset(a1);
      }
      else
      {
        LOBYTE(v20) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          v20,
          6,
          64,
          (__int64)&WPP_a32df80a94123ec82d8da458aa91e220_Traceguids,
          v19);
      }
      return v21;
    }
    else
    {
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        2u,
        6u,
        0x3Bu,
        (__int64)&WPP_a32df80a94123ec82d8da458aa91e220_Traceguids);
      return 3221225473LL;
    }
  }
  else
  {
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v7,
      6,
      58,
      (__int64)&WPP_a32df80a94123ec82d8da458aa91e220_Traceguids,
      v6);
    return v8;
  }
}
