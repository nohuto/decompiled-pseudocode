/*
 * XREFs of InitAcpiCpc @ 0x1C001BC50
 * Callers:
 *     ProcLibDeviceStart @ 0x1C001DF9C (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002C2C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002EE4 (WPP_RECORDER_SF_D.c)
 *     ReadGenAddrMaybeHidden @ 0x1C00041A4 (ReadGenAddrMaybeHidden.c)
 *     WriteGenAddrMaybeHidden @ 0x1C00042FC (WriteGenAddrMaybeHidden.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004AA0 (_guard_dispatch_icall_nop.c)
 *     CpcRegisterIsSupported @ 0x1C0007A94 (CpcRegisterIsSupported.c)
 *     Display_CPC @ 0x1C0009B58 (Display_CPC.c)
 *     AcpiEval_CPC @ 0x1C001D37C (AcpiEval_CPC.c)
 *     ValidateAcpiCPC @ 0x1C0025E54 (ValidateAcpiCPC.c)
 *     RegisterSubspaceForGenAddr @ 0x1C0028AE8 (RegisterSubspaceForGenAddr.c)
 */

__int64 __fastcall InitAcpiCpc(__int64 a1)
{
  int v2; // eax
  int v3; // ebx
  unsigned __int16 v5; // r9
  __int64 v6; // rdi
  char *v7; // r13
  unsigned int v8; // r12d
  char v9; // r15
  unsigned int v10; // ebp
  __int64 v11; // r14
  int v12; // eax
  unsigned __int16 v13; // r9
  __int64 v14; // rcx
  int v15; // eax
  _BYTE *v16; // rcx
  unsigned __int64 GenAddrMaybeHidden; // rax
  int v18; // [rsp+28h] [rbp-30h]

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208),
    0LL);
  v2 = AcpiEval_CPC(a1, a1 + 560);
  v3 = v2;
  if ( v2 < 0 )
  {
    if ( v2 == -1073741772 )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        2u,
        0xAu,
        (__int64)&WPP_a2dfc645caf238834847e62e9c672750_Traceguids);
      goto LABEL_4;
    }
    v5 = 11;
LABEL_7:
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      v5,
      (__int64)&WPP_a2dfc645caf238834847e62e9c672750_Traceguids,
      v2);
    goto LABEL_4;
  }
  v6 = *(_QWORD *)(a1 + 560);
  v2 = ValidateAcpiCPC(v6);
  v3 = v2;
  if ( v2 < 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1080), 0x40000u);
    v5 = 12;
    goto LABEL_7;
  }
  Display_CPC((_DWORD *)v6);
  if ( dword_1C00161AC == 1 )
    goto LABEL_4;
  v7 = (char *)&CpcRegisterTable;
  v8 = 15;
  if ( *(_DWORD *)(v6 + 4) != 1 )
  {
    v8 = 19;
    v7 = (char *)&Cpc2RegisterTable;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C0015D98,
    0LL);
  v9 = 0;
  v10 = 0;
  v11 = 0LL;
  do
  {
    if ( *(_BYTE *)(v6 + *(unsigned int *)&v7[v11]) == 10 )
    {
      v12 = RegisterSubspaceForGenAddr(a1);
      v3 = v12;
      v9 = 1;
      if ( v12 < 0 )
      {
        v13 = 13;
LABEL_34:
        v18 = v12;
LABEL_36:
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          v13,
          (__int64)&WPP_a2dfc645caf238834847e62e9c672750_Traceguids,
          v18);
        goto LABEL_32;
      }
    }
    ++v10;
    v11 += 24LL;
  }
  while ( v10 < v8 );
  if ( !(unsigned __int8)CpcRegisterIsSupported(v6 + 224) || *(_BYTE *)v14 == 126 && !*(_QWORD *)(v6 + 228) )
  {
    v15 = *(_DWORD *)(v6 + 28);
    *(_QWORD *)v14 = *(_QWORD *)(v6 + 20);
    *(_DWORD *)(v14 + 8) = v15;
  }
  if ( v9 )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD))(qword_1C0016298 + 88))(*(_QWORD *)(qword_1C0016298 + 56));
    v3 = v12;
    if ( v12 < 0 )
    {
      v13 = 14;
      goto LABEL_34;
    }
  }
  if ( (unsigned __int8)CpcRegisterIsSupported(v6 + 176) )
    WriteGenAddrMaybeHidden(a1, v16, 1LL);
  if ( v9 )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(qword_1C0016298 + 104))(*(_QWORD *)(qword_1C0016298 + 56), 0LL);
    if ( v3 == -1073741435 )
      v3 = 0;
    if ( v3 < 0 )
    {
      v13 = 15;
      v18 = v3;
      goto LABEL_36;
    }
  }
  *(_QWORD *)(a1 + 360) = ReadGenAddrMaybeHidden(a1, (char *)(v6 + 8));
  *(_QWORD *)(a1 + 368) = ReadGenAddrMaybeHidden(a1, (char *)(v6 + 20));
  GenAddrMaybeHidden = ReadGenAddrMaybeHidden(a1, (char *)(v6 + 32));
  if ( GenAddrMaybeHidden > *(_QWORD *)(a1 + 368) )
    GenAddrMaybeHidden = *(_QWORD *)(a1 + 368);
  *(_QWORD *)(a1 + 376) = GenAddrMaybeHidden;
  *(_QWORD *)(a1 + 384) = ReadGenAddrMaybeHidden(a1, (char *)(v6 + 44));
LABEL_32:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C0015D98);
LABEL_4:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  return (unsigned int)v3;
}
