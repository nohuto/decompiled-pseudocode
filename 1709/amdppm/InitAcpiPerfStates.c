/*
 * XREFs of InitAcpiPerfStates @ 0x1C002997C
 * Callers:
 *     ProcLibDeviceStart @ 0x1C001EB90 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000127C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C000134C (WPP_RECORDER_SF_D.c)
 *     Display_PSS @ 0x1C0003530 (Display_PSS.c)
 *     Display_PCT_PTC @ 0x1C0003788 (Display_PCT_PTC.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C6F0 (_guard_dispatch_icall_nop.c)
 *     AcpiEval_PCT_PTC @ 0x1C001B3F8 (AcpiEval_PCT_PTC.c)
 *     AcpiEval_PSS @ 0x1C001B8B8 (AcpiEval_PSS.c)
 *     AcpiEval_XPSS @ 0x1C001BC28 (AcpiEval_XPSS.c)
 *     ValidateAcpi2PStates @ 0x1C002AD34 (ValidateAcpi2PStates.c)
 *     ValidateXPssPStates @ 0x1C002AE18 (ValidateXPssPStates.c)
 */

__int64 __fastcall InitAcpiPerfStates(__int64 a1)
{
  int v2; // esi
  int v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned int *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v14; // [rsp+28h] [rbp-30h]
  unsigned int v15; // [rsp+60h] [rbp+8h] BYREF

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208),
    0LL);
  v2 = 0;
  v3 = AcpiEval_PCT_PTC(a1, 1413697631, a1 + 392);
  v4 = v3;
  if ( v3 < 0 )
  {
    if ( v3 == -1073741772 )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        2u,
        0xAu,
        (__int64)&WPP_4fb804b79ee83e7d3d0dc001d18061c9_Traceguids);
    else
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0xBu,
        (__int64)&WPP_4fb804b79ee83e7d3d0dc001d18061c9_Traceguids,
        v3);
    v2 = v4;
  }
  if ( (*(_DWORD *)(a1 + 264) & 0x40000000) != 0 )
  {
    v5 = AcpiEval_XPSS(a1, (_QWORD *)(a1 + 424));
    v4 = v5;
    if ( v5 < 0 )
    {
      if ( v5 == -1073741772 )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          2u,
          0xCu,
          (__int64)&WPP_4fb804b79ee83e7d3d0dc001d18061c9_Traceguids);
      }
      else
      {
        LODWORD(v14) = v5;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0xDu,
          (__int64)&WPP_4fb804b79ee83e7d3d0dc001d18061c9_Traceguids,
          v14);
      }
      *(_QWORD *)(a1 + 264) &= ~0x40000000uLL;
    }
  }
  if ( (*(_DWORD *)(a1 + 264) & 0x30000000) != 0 )
  {
    v6 = AcpiEval_PSS(a1, (_QWORD *)(a1 + 416));
    v4 = v6;
    if ( v6 < 0 )
    {
      if ( v6 == -1073741772 )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          2u,
          0xEu,
          (__int64)&WPP_4fb804b79ee83e7d3d0dc001d18061c9_Traceguids);
      }
      else
      {
        LODWORD(v14) = v6;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0xFu,
          (__int64)&WPP_4fb804b79ee83e7d3d0dc001d18061c9_Traceguids,
          v14);
      }
      *(_QWORD *)(a1 + 264) &= 0xFFFFFFFFCFFFFFFFuLL;
      if ( (*(_QWORD *)(a1 + 264) & 0x40000000LL) != 0 )
        v4 = 0;
    }
  }
  if ( v2 >= 0 )
  {
    if ( v4 < 0 )
      v2 = v4;
    if ( v2 >= 0 )
    {
      if ( (*(_DWORD *)(a1 + 264) & 0x40000000) != 0 )
      {
        v7 = *(_QWORD *)(a1 + 424);
        v15 = 0;
        v4 = ValidateXPssPStates(a1 + 392, v7, &v15);
        if ( v4 < 0 )
        {
          _InterlockedOr((volatile signed __int32 *)(a1 + 1080), v15);
          *(_QWORD *)(a1 + 264) &= ~0x40000000uLL;
          LODWORD(v14) = v4;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0x10u,
            (__int64)&WPP_4fb804b79ee83e7d3d0dc001d18061c9_Traceguids,
            v14);
        }
      }
      if ( (*(_DWORD *)(a1 + 264) & 0x30000000) != 0 )
      {
        v8 = *(_QWORD *)(a1 + 416);
        v15 = 0;
        v4 = ValidateAcpi2PStates(a1 + 392, v8, &v15);
        if ( v4 < 0 )
        {
          _InterlockedOr((volatile signed __int32 *)(a1 + 1080), v15);
          *(_QWORD *)(a1 + 264) &= 0xFFFFFFFFCFFFFFFFuLL;
          LODWORD(v14) = v4;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0x11u,
            (__int64)&WPP_4fb804b79ee83e7d3d0dc001d18061c9_Traceguids,
            v14);
        }
      }
      v9 = *(_QWORD *)(a1 + 264);
      if ( (v9 & 0x40000000) != 0 )
      {
        v10 = *(unsigned int **)(a1 + 424);
      }
      else
      {
        if ( (v9 & 0x30000000) == 0 )
        {
          v2 = v4;
          goto LABEL_35;
        }
        v10 = *(unsigned int **)(a1 + 416);
      }
      Display_PCT_PTC(a1 + 392, "_PCT");
      Display_PSS(v10, v11, v12);
    }
  }
LABEL_35:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  return (unsigned int)v2;
}
