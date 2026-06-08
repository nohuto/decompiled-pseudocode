/*
 * XREFs of EvtDeviceD0Entry @ 0x1C0001CD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002C2C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002EE4 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004AA0 (_guard_dispatch_icall_nop.c)
 *     AcpiEval_PPC @ 0x1C001D7B8 (AcpiEval_PPC.c)
 *     ProcLibCapChange @ 0x1C001F970 (ProcLibCapChange.c)
 *     AcpiEval_TPC @ 0x1C0029080 (AcpiEval_TPC.c)
 */

__int64 __fastcall EvtDeviceD0Entry(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rax
  unsigned int v3; // ebx
  unsigned int v5; // esi
  int v6; // eax
  int v7; // edx
  int v8; // eax
  int v9; // eax
  int v10; // edx
  unsigned int v11; // [rsp+50h] [rbp+18h] BYREF

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0013048);
  v2 = *(_QWORD *)(v1 + 264);
  if ( (v2 & 0x80000000) == 0 )
  {
    v3 = 0;
    if ( *(_BYTE *)(v1 + 76) )
    {
      *(_BYTE *)(v1 + 76) = 0;
      v5 = 0;
      v11 = 0;
      if ( (v2 & 0x70000000) != 0 )
      {
        v6 = AcpiEval_PPC(v1, &v11);
        if ( v6 < 0 )
        {
          if ( v6 == -1073741772 )
          {
            LOBYTE(v7) = 4;
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              v7,
              2,
              18,
              (__int64)&WPP_741d0d3a9aa936a171bf32bced4a65e3_Traceguids);
          }
          else
          {
            LOBYTE(v7) = 3;
            WPP_RECORDER_SF_D(
              WPP_GLOBAL_Control->DeviceExtension,
              v7,
              3,
              19,
              (__int64)&WPP_741d0d3a9aa936a171bf32bced4a65e3_Traceguids,
              v6);
          }
        }
        else
        {
          v5 = v11;
        }
      }
      v8 = *(_DWORD *)(v1 + 264);
      v11 = 0;
      if ( (v8 & 0x3000000) != 0 )
      {
        v9 = AcpiEval_TPC(v1, &v11);
        if ( v9 >= 0 )
        {
          v3 = v11;
        }
        else if ( v9 == -1073741772 )
        {
          LOBYTE(v10) = 4;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v10,
            2,
            20,
            (__int64)&WPP_741d0d3a9aa936a171bf32bced4a65e3_Traceguids);
        }
        else
        {
          LOBYTE(v10) = 3;
          WPP_RECORDER_SF_D(
            WPP_GLOBAL_Control->DeviceExtension,
            v10,
            3,
            21,
            (__int64)&WPP_741d0d3a9aa936a171bf32bced4a65e3_Traceguids,
            v9);
        }
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        qword_1C0015D98,
        0LL);
      if ( v5 != *(_DWORD *)(v1 + 432) || v3 != *(_DWORD *)(v1 + 480) )
      {
        ProcLibCapChange(v1, v5, v3, 100LL);
        ((void (__fastcall *)(__int64))qword_1C0016140)(v1);
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
        WdfDriverGlobals,
        qword_1C0015D98);
    }
  }
  return 0LL;
}
