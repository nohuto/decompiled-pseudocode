/*
 * XREFs of EvtDeviceD0Entry @ 0x1C00035B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002A20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002CD8 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004CB0 (_guard_dispatch_icall_nop.c)
 *     AcpiEval_PPC @ 0x1C0020A28 (AcpiEval_PPC.c)
 *     ProcLibCapChange @ 0x1C0022BF0 (ProcLibCapChange.c)
 *     AcpiEval_TPC @ 0x1C002C8D8 (AcpiEval_TPC.c)
 */

__int64 __fastcall EvtDeviceD0Entry(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rax
  unsigned int v3; // ebx
  unsigned int v5; // esi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  __int64 v9; // [rsp+28h] [rbp-10h]
  unsigned int v10; // [rsp+50h] [rbp+18h] BYREF

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0014048);
  v2 = *(_QWORD *)(v1 + 264);
  if ( (v2 & 0x80000000) == 0 )
  {
    v3 = 0;
    if ( *(_BYTE *)(v1 + 76) )
    {
      *(_BYTE *)(v1 + 76) = 0;
      v5 = 0;
      v10 = 0;
      if ( (v2 & 0x70000000) != 0 )
      {
        v6 = AcpiEval_PPC(v1, &v10);
        if ( v6 < 0 )
        {
          if ( v6 == -1073741772 )
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              4u,
              2u,
              0x12u,
              (__int64)&WPP_f3df084cddf03afbb9a1a78b81d3ca2a_Traceguids);
          else
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              3u,
              0x13u,
              (__int64)&WPP_f3df084cddf03afbb9a1a78b81d3ca2a_Traceguids,
              v6);
        }
        else
        {
          v5 = v10;
        }
      }
      v7 = *(_DWORD *)(v1 + 264);
      v10 = 0;
      if ( (v7 & 0x3000000) != 0 )
      {
        v8 = AcpiEval_TPC(v1, &v10);
        if ( v8 >= 0 )
        {
          v3 = v10;
        }
        else if ( v8 == -1073741772 )
        {
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            2u,
            0x14u,
            (__int64)&WPP_f3df084cddf03afbb9a1a78b81d3ca2a_Traceguids);
        }
        else
        {
          LODWORD(v9) = v8;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0x15u,
            (__int64)&WPP_f3df084cddf03afbb9a1a78b81d3ca2a_Traceguids,
            v9);
        }
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        qword_1C00195D8,
        0LL);
      if ( v5 != *(_DWORD *)(v1 + 432) || v3 != *(_DWORD *)(v1 + 480) )
      {
        ProcLibCapChange(v1, v5, v3, 100LL);
        ((void (__fastcall *)(__int64))qword_1C0019980)(v1);
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
        WdfDriverGlobals,
        qword_1C00195D8);
    }
  }
  return 0LL;
}
