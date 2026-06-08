/*
 * XREFs of InitAcpiPerfStates @ 0x1C001C13C
 * Callers:
 *     ProcLibDeviceStart @ 0x1C001DF9C (ProcLibDeviceStart.c)
 * Callees:
 *     Display_PSS @ 0x1C00029DC (Display_PSS.c)
 *     Display_PCT_PTC @ 0x1C0002A58 (Display_PCT_PTC.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002C2C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002EE4 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004AA0 (_guard_dispatch_icall_nop.c)
 *     ValidateAcpi2PStates @ 0x1C001C6C4 (ValidateAcpi2PStates.c)
 *     AcpiEval_PSS @ 0x1C001CC90 (AcpiEval_PSS.c)
 *     AcpiEval_PCT_PTC @ 0x1C001D890 (AcpiEval_PCT_PTC.c)
 *     ValidateXPssPStates @ 0x1C0027148 (ValidateXPssPStates.c)
 *     AcpiEval_XPSS @ 0x1C002919C (AcpiEval_XPSS.c)
 */

__int64 __fastcall InitAcpiPerfStates(__int64 a1)
{
  int v2; // esi
  int v3; // eax
  int v4; // edi
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned int *v8; // rdi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // [rsp+28h] [rbp-30h]
  unsigned int v13; // [rsp+60h] [rbp+8h] BYREF

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
        (__int64)&WPP_2c713a617c4c3eb023611b8c89b96b90_Traceguids);
    else
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0xBu,
        (__int64)&WPP_2c713a617c4c3eb023611b8c89b96b90_Traceguids,
        v3);
    v2 = v4;
  }
  if ( (*(_DWORD *)(a1 + 264) & 0x40000000) != 0 )
  {
    v10 = AcpiEval_XPSS(a1, a1 + 424);
    v4 = v10;
    if ( v10 < 0 )
    {
      if ( v10 == -1073741772 )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          2u,
          0xCu,
          (__int64)&WPP_2c713a617c4c3eb023611b8c89b96b90_Traceguids);
      }
      else
      {
        LODWORD(v12) = v10;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0xDu,
          (__int64)&WPP_2c713a617c4c3eb023611b8c89b96b90_Traceguids,
          v12);
      }
      *(_QWORD *)(a1 + 264) &= ~0x40000000uLL;
    }
  }
  if ( (*(_DWORD *)(a1 + 264) & 0x30000000) != 0 )
  {
    v5 = AcpiEval_PSS(a1, a1 + 416);
    v4 = v5;
    if ( v5 < 0 )
    {
      if ( v5 == -1073741772 )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          2u,
          0xEu,
          (__int64)&WPP_2c713a617c4c3eb023611b8c89b96b90_Traceguids);
      }
      else
      {
        LODWORD(v12) = v5;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0xFu,
          (__int64)&WPP_2c713a617c4c3eb023611b8c89b96b90_Traceguids,
          v12);
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
        v11 = *(_QWORD *)(a1 + 424);
        v13 = 0;
        v4 = ValidateXPssPStates(a1 + 392, v11, &v13);
        if ( v4 < 0 )
        {
          _InterlockedOr((volatile signed __int32 *)(a1 + 1080), v13);
          *(_QWORD *)(a1 + 264) &= ~0x40000000uLL;
          LODWORD(v12) = v4;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0x10u,
            (__int64)&WPP_2c713a617c4c3eb023611b8c89b96b90_Traceguids,
            v12);
        }
      }
      if ( (*(_DWORD *)(a1 + 264) & 0x30000000) != 0 )
      {
        v6 = *(_QWORD *)(a1 + 416);
        v13 = 0;
        v4 = ValidateAcpi2PStates(a1 + 392, v6, &v13);
        if ( v4 < 0 )
        {
          _InterlockedOr((volatile signed __int32 *)(a1 + 1080), v13);
          *(_QWORD *)(a1 + 264) &= 0xFFFFFFFFCFFFFFFFuLL;
          LODWORD(v12) = v4;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0x11u,
            (__int64)&WPP_2c713a617c4c3eb023611b8c89b96b90_Traceguids,
            v12);
        }
      }
      v7 = *(_QWORD *)(a1 + 264);
      if ( (v7 & 0x40000000) != 0 )
      {
        v8 = *(unsigned int **)(a1 + 424);
      }
      else
      {
        if ( (v7 & 0x30000000) == 0 )
        {
          v2 = v4;
          goto LABEL_17;
        }
        v8 = *(unsigned int **)(a1 + 416);
      }
      Display_PCT_PTC(a1 + 392, "_PCT");
      Display_PSS(v8);
    }
  }
LABEL_17:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  return (unsigned int)v2;
}
