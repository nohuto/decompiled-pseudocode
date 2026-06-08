/*
 * XREFs of EvtDeviceD0Entry @ 0x1C00016E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001D9C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0003834 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004F10 (_guard_dispatch_icall_nop.c)
 *     AcpiEval_PPC @ 0x1C001E16C (AcpiEval_PPC.c)
 *     ProcLibCapChange @ 0x1C0020AD0 (ProcLibCapChange.c)
 *     AcpiEval_TPC @ 0x1C002DAB0 (AcpiEval_TPC.c)
 */

__int64 __fastcall EvtDeviceD0Entry(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rax
  unsigned int v3; // ebx
  unsigned int v4; // esi
  int v5; // eax
  int v6; // edx
  int v7; // eax
  int v9; // eax
  int v10; // edx
  unsigned int v11; // [rsp+50h] [rbp+18h] BYREF

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0015048);
  v2 = *(_QWORD *)(v1 + 264);
  if ( (v2 & 0x80000000) == 0 )
  {
    v3 = 0;
    if ( *(_BYTE *)(v1 + 76) )
    {
      *(_BYTE *)(v1 + 76) = 0;
      v4 = 0;
      v11 = 0;
      if ( (v2 & 0x70000000) != 0 )
      {
        v5 = AcpiEval_PPC(v1, &v11);
        if ( v5 < 0 )
        {
          if ( v5 == -1073741772 )
          {
            LOBYTE(v6) = 4;
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              v6,
              2,
              18,
              (__int64)&WPP_aa9d9c6c8741343c67d4469f91515e40_Traceguids);
          }
          else
          {
            LOBYTE(v6) = 3;
            WPP_RECORDER_SF_D(
              WPP_GLOBAL_Control->DeviceExtension,
              v6,
              3,
              19,
              (__int64)&WPP_aa9d9c6c8741343c67d4469f91515e40_Traceguids,
              v5);
          }
        }
        else
        {
          v4 = v11;
        }
      }
      v7 = *(_DWORD *)(v1 + 264);
      v11 = 0;
      if ( (v7 & 0x3000000) != 0 )
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
            (__int64)&WPP_aa9d9c6c8741343c67d4469f91515e40_Traceguids);
        }
        else
        {
          LOBYTE(v10) = 3;
          WPP_RECORDER_SF_D(
            WPP_GLOBAL_Control->DeviceExtension,
            v10,
            3,
            21,
            (__int64)&WPP_aa9d9c6c8741343c67d4469f91515e40_Traceguids,
            v9);
        }
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        qword_1C001A5D8,
        0LL);
      if ( v4 != *(_DWORD *)(v1 + 432) || v3 != *(_DWORD *)(v1 + 480) )
      {
        ProcLibCapChange(v1, v4, v3, 100LL);
        ((void (__fastcall *)(__int64))qword_1C001A980)(v1);
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
        WdfDriverGlobals,
        qword_1C001A5D8);
    }
  }
  return 0LL;
}
