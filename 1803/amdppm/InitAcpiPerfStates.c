/*
 * XREFs of InitAcpiPerfStates @ 0x1C002064C
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0026E8C (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00010B0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0001374 (WPP_RECORDER_SF_D.c)
 *     Display_PSS @ 0x1C0006910 (Display_PSS.c)
 *     Display_PCT_PTC @ 0x1C0006B68 (Display_PCT_PTC.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C910 (_guard_dispatch_icall_nop.c)
 *     AcpiEval_PCT_PTC @ 0x1C00236B0 (AcpiEval_PCT_PTC.c)
 *     AcpiEval_PSS @ 0x1C0023B9C (AcpiEval_PSS.c)
 *     AcpiEval_XPSS @ 0x1C0023F0C (AcpiEval_XPSS.c)
 *     ValidateAcpi2PStates @ 0x1C002E570 (ValidateAcpi2PStates.c)
 *     ValidateXPssPStates @ 0x1C002E654 (ValidateXPssPStates.c)
 */

__int64 __fastcall InitAcpiPerfStates(__int64 a1)
{
  int v2; // esi
  int v3; // eax
  int v4; // edi
  int v5; // r14d
  int v6; // eax
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned int *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v15; // [rsp+28h] [rbp-30h]
  unsigned int v16; // [rsp+60h] [rbp+8h] BYREF

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208),
    0LL);
  v2 = 0;
  v3 = AcpiEval_PCT_PTC(a1, 1413697631LL, a1 + 392);
  v4 = v3;
  if ( v3 < 0 )
  {
    if ( v3 == -1073741772 )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        2u,
        0xAu,
        (__int64)&WPP_a139920ec3ce3924d30861e7b2217bab_Traceguids);
    else
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0xBu,
        (__int64)&WPP_a139920ec3ce3924d30861e7b2217bab_Traceguids,
        v3);
    v2 = v4;
  }
  v5 = v2;
  if ( (*(_DWORD *)(a1 + 264) & 0x40000000) != 0 )
  {
    v6 = AcpiEval_XPSS(a1, a1 + 424);
    v4 = v6;
    if ( v6 < 0 )
    {
      if ( v6 == -1073741772 )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          2u,
          0xCu,
          (__int64)&WPP_a139920ec3ce3924d30861e7b2217bab_Traceguids);
      }
      else
      {
        LODWORD(v15) = v6;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0xDu,
          (__int64)&WPP_a139920ec3ce3924d30861e7b2217bab_Traceguids,
          v15);
      }
      *(_QWORD *)(a1 + 264) &= ~0x40000000uLL;
    }
  }
  if ( (*(_DWORD *)(a1 + 264) & 0x30000000) != 0 )
  {
    v7 = AcpiEval_PSS(a1, a1 + 416);
    v4 = v7;
    if ( v7 < 0 )
    {
      if ( v7 == -1073741772 )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          2u,
          0xEu,
          (__int64)&WPP_a139920ec3ce3924d30861e7b2217bab_Traceguids);
      }
      else
      {
        LODWORD(v15) = v7;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0xFu,
          (__int64)&WPP_a139920ec3ce3924d30861e7b2217bab_Traceguids,
          v15);
      }
      *(_QWORD *)(a1 + 264) &= 0xFFFFFFFFCFFFFFFFuLL;
      if ( (*(_QWORD *)(a1 + 264) & 0x40000000LL) != 0 )
        v4 = 0;
    }
  }
  if ( v2 >= 0 )
  {
    v2 = v4;
    if ( v4 >= 0 )
      v2 = v5;
    if ( v2 >= 0 )
    {
      if ( (*(_DWORD *)(a1 + 264) & 0x40000000) != 0 )
      {
        v8 = *(_QWORD *)(a1 + 424);
        v16 = 0;
        v4 = ValidateXPssPStates(a1 + 392, v8, &v16);
        if ( v4 < 0 )
        {
          _InterlockedOr((volatile signed __int32 *)(a1 + 1080), v16);
          *(_QWORD *)(a1 + 264) &= ~0x40000000uLL;
          LODWORD(v15) = v4;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0x10u,
            (__int64)&WPP_a139920ec3ce3924d30861e7b2217bab_Traceguids,
            v15);
        }
      }
      if ( (*(_DWORD *)(a1 + 264) & 0x30000000) != 0 )
      {
        v9 = *(_QWORD *)(a1 + 416);
        v16 = 0;
        v4 = ValidateAcpi2PStates(a1 + 392, v9, &v16);
        if ( v4 < 0 )
        {
          _InterlockedOr((volatile signed __int32 *)(a1 + 1080), v16);
          *(_QWORD *)(a1 + 264) &= 0xFFFFFFFFCFFFFFFFuLL;
          LODWORD(v15) = v4;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0x11u,
            (__int64)&WPP_a139920ec3ce3924d30861e7b2217bab_Traceguids,
            v15);
        }
      }
      v10 = *(_QWORD *)(a1 + 264);
      if ( (v10 & 0x40000000) != 0 )
      {
        v11 = *(unsigned int **)(a1 + 424);
      }
      else
      {
        if ( (v10 & 0x30000000) == 0 )
        {
          v2 = v4;
          goto LABEL_35;
        }
        v11 = *(unsigned int **)(a1 + 416);
      }
      Display_PCT_PTC(a1 + 392, "_PCT");
      Display_PSS(v11, v12, v13);
    }
  }
LABEL_35:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  return (unsigned int)v2;
}
