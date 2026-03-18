/*
 * XREFs of Register_ControllerReset @ 0x1C0018A80
 * Callers:
 *     Controller_InternalReset @ 0x1C00086D4 (Controller_InternalReset.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C000BB80 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C000C380 (Controller_WdfEvtDeviceD0Exit.c)
 *     Register_PrepareHardware @ 0x1C005ABEC (Register_PrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001C00 (WPP_RECORDER_SF_.c)
 *     Register_RestoreRyzenFeatureBitsPostReset @ 0x1C0002380 (Register_RestoreRyzenFeatureBitsPostReset.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     Controller_IsControllerAccessible @ 0x1C0008A48 (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000DAE4 (WPP_RECORDER_SF_dd.c)
 *     Register_SetClearSSICPortUnused @ 0x1C0019328 (Register_SetClearSSICPortUnused.c)
 *     Register_WaitForControllerReady @ 0x1C0019430 (Register_WaitForControllerReady.c)
 *     XilRegister_ReadUlong @ 0x1C0019708 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C00197EC (XilRegister_WriteUlong.c)
 *     Etw_StartDeviceFail @ 0x1C0036790 (Etw_StartDeviceFail.c)
 */

__int64 __fastcall Register_ControllerReset(__int64 a1, char a2)
{
  unsigned int v4; // edi
  __int64 v5; // r14
  int v6; // eax
  __int64 v7; // rcx
  unsigned __int16 v8; // r9
  int v9; // esi
  unsigned int v10; // ebp
  unsigned int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rcx
  void (*v14)(void); // rax
  __int64 v16; // [rsp+28h] [rbp-40h]
  __int64 v17; // [rsp+30h] [rbp-38h]
  union _LARGE_INTEGER Interval; // [rsp+70h] [rbp+8h] BYREF

  WPP_RECORDER_SF_(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
    4u,
    6u,
    0x39u,
    (__int64)&WPP_aa9a6dc92bdc315c6241291f5ec849eb_Traceguids);
  if ( Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8)) )
  {
    v5 = *(_QWORD *)(a1 + 32);
    v6 = Register_WaitForControllerReady(a1);
    v4 = v6;
    if ( v6 >= 0 )
    {
      if ( a2 || (XilRegister_ReadUlong(a1, v5 + 4) & 1) != 0 )
      {
        Register_SetClearSSICPortUnused(a1, 0LL);
        XilRegister_WriteUlong(a1, v5, 2LL);
        v9 = 0;
        v10 = 1;
        if ( (_mm_srli_si128(*(__m128i *)(*(_QWORD *)(a1 + 8) + 272LL), 8).m128i_u8[0] & 2) != 0 )
        {
          Interval.QuadPart = -10000LL;
          KeDelayExecutionThread(0, 0, &Interval);
          v9 = 1;
          v10 = 2;
        }
        v11 = v9;
        while ( (XilRegister_ReadUlong(a1, v5) & 2) != 0 )
        {
          if ( v9 == 100 )
          {
            LODWORD(v16) = v11;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
              1u,
              6u,
              0x3Eu,
              (__int64)&WPP_aa9a6dc92bdc315c6241291f5ec849eb_Traceguids,
              v16);
            Etw_StartDeviceFail(*(_QWORD *)(a1 + 8), v12, 3LL);
            return (unsigned int)-1073741823;
          }
          Interval.QuadPart = -10000LL * v10;
          KeDelayExecutionThread(0, 0, &Interval);
          LODWORD(v17) = v10;
          LODWORD(v16) = v9;
          WPP_RECORDER_SF_dd(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            4u,
            6u,
            0x3Fu,
            (__int64)&WPP_aa9a6dc92bdc315c6241291f5ec849eb_Traceguids,
            v16,
            v17);
          ++v9;
          v11 += v10;
          if ( v10 != 16 )
            v10 *= 2;
        }
        LODWORD(v16) = v11;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          4u,
          6u,
          0x3Cu,
          (__int64)&WPP_aa9a6dc92bdc315c6241291f5ec849eb_Traceguids,
          v16);
        if ( v11 > 0x32 )
        {
          LODWORD(v16) = v11;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            2u,
            6u,
            0x3Du,
            (__int64)&WPP_aa9a6dc92bdc315c6241291f5ec849eb_Traceguids,
            v16);
        }
        v6 = Register_WaitForControllerReady(a1);
        v7 = *(_QWORD *)(a1 + 8);
        v4 = v6;
        if ( v6 < 0 )
        {
          v8 = 64;
          goto LABEL_5;
        }
        if ( (*(_BYTE *)(v7 + 288) & 0x10) != 0 )
        {
          Interval.QuadPart = -1000000LL;
          KeDelayExecutionThread(0, 0, &Interval);
          v7 = *(_QWORD *)(a1 + 8);
        }
        v13 = *(_QWORD *)(v7 + 168);
        if ( v13 )
        {
          v14 = *(void (**)(void))(v13 + 32);
          if ( v14 )
            v14();
        }
        Register_RestoreRyzenFeatureBitsPostReset(a1);
      }
      else
      {
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          2u,
          6u,
          0x3Bu,
          (__int64)&WPP_aa9a6dc92bdc315c6241291f5ec849eb_Traceguids);
        return (unsigned int)-1073741823;
      }
    }
    else
    {
      v7 = *(_QWORD *)(a1 + 8);
      v8 = 58;
LABEL_5:
      LODWORD(v16) = v6;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v7 + 72),
        2u,
        6u,
        v8,
        (__int64)&WPP_aa9a6dc92bdc315c6241291f5ec849eb_Traceguids,
        v16);
    }
  }
  else
  {
    return 0;
  }
  return v4;
}
