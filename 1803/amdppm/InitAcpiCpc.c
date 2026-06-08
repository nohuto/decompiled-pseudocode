/*
 * XREFs of InitAcpiCpc @ 0x1C0021E94
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0026E8C (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00010B0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0001374 (WPP_RECORDER_SF_D.c)
 *     ReadGenAddrMaybeHidden @ 0x1C0003678 (ReadGenAddrMaybeHidden.c)
 *     WriteGenAddrMaybeHidden @ 0x1C00036A8 (WriteGenAddrMaybeHidden.c)
 *     CpcRegisterIsSupported @ 0x1C0004594 (CpcRegisterIsSupported.c)
 *     Display_CPC @ 0x1C000763C (Display_CPC.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C910 (_guard_dispatch_icall_nop.c)
 *     RegisterSubspaceForGenAddr @ 0x1C0021388 (RegisterSubspaceForGenAddr.c)
 *     AcpiEval_CPC @ 0x1C0024C8C (AcpiEval_CPC.c)
 *     ValidateAcpiCPC @ 0x1C002EDD0 (ValidateAcpiCPC.c)
 */

__int64 __fastcall InitAcpiCpc(__int64 a1)
{
  int v2; // eax
  int v3; // ebx
  unsigned __int16 v4; // r9
  __int64 v5; // rsi
  char *v6; // r13
  unsigned int v7; // r12d
  char v8; // r15
  unsigned int v9; // ebp
  __int64 v10; // r14
  _BYTE *v11; // rdx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  unsigned __int16 v15; // r9
  _BYTE *v16; // rcx
  unsigned __int64 GenAddrMaybeHidden; // rax
  unsigned __int64 v18; // rcx
  int v20; // [rsp+28h] [rbp-30h]

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
        (__int64)&WPP_bbe5d8c4bcba361b69193d125a2ae7a9_Traceguids);
      goto LABEL_36;
    }
    v4 = 11;
LABEL_5:
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      v4,
      (__int64)&WPP_bbe5d8c4bcba361b69193d125a2ae7a9_Traceguids,
      v2);
    goto LABEL_36;
  }
  v5 = *(_QWORD *)(a1 + 560);
  v2 = ValidateAcpiCPC(v5);
  v3 = v2;
  if ( v2 < 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1080), 0x40000u);
    v4 = 12;
    goto LABEL_5;
  }
  Display_CPC((_DWORD *)v5);
  if ( dword_1C001182C != 1 )
  {
    v6 = (char *)&CpcRegisterTable;
    v7 = 15;
    if ( *(_DWORD *)(v5 + 4) != 1 )
    {
      v7 = 19;
      v6 = (char *)&Cpc2RegisterTable;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C0011418,
      0LL);
    v8 = 0;
    v9 = 0;
    v10 = 0LL;
    do
    {
      v11 = (_BYTE *)(v5 + *(unsigned int *)&v6[v10]);
      if ( *v11 == 10 )
      {
        v12 = RegisterSubspaceForGenAddr(a1, (__int64)v11);
        v3 = v12;
        v8 = 1;
        if ( v12 < 0 )
        {
          v15 = 13;
LABEL_23:
          v20 = v12;
LABEL_24:
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            v15,
            (__int64)&WPP_bbe5d8c4bcba361b69193d125a2ae7a9_Traceguids,
            v20);
          goto LABEL_35;
        }
      }
      ++v9;
      v10 += 24LL;
    }
    while ( v9 < v7 );
    if ( !CpcRegisterIsSupported(v5 + 224) || *(_BYTE *)v13 == 126 && !*(_QWORD *)(v5 + 228) )
    {
      v14 = *(_DWORD *)(v5 + 28);
      *(_QWORD *)v13 = *(_QWORD *)(v5 + 20);
      *(_DWORD *)(v13 + 8) = v14;
    }
    if ( v8 )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD))(qword_1C0011918 + 88))(*(_QWORD *)(qword_1C0011918 + 56));
      v3 = v12;
      if ( v12 < 0 )
      {
        v15 = 14;
        goto LABEL_23;
      }
    }
    if ( CpcRegisterIsSupported(v5 + 176) )
      WriteGenAddrMaybeHidden(a1, v16, 1uLL);
    if ( v8 )
    {
      v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(qword_1C0011918 + 104))(*(_QWORD *)(qword_1C0011918 + 56), 0LL);
      if ( v3 == -1073741435 )
        v3 = 0;
      if ( v3 < 0 )
      {
        v15 = 15;
        v20 = v3;
        goto LABEL_24;
      }
    }
    *(_QWORD *)(a1 + 360) = ReadGenAddrMaybeHidden(a1, v5 + 8);
    *(_QWORD *)(a1 + 368) = ReadGenAddrMaybeHidden(a1, v5 + 20);
    GenAddrMaybeHidden = ReadGenAddrMaybeHidden(a1, v5 + 32);
    v18 = *(_QWORD *)(a1 + 368);
    *(_QWORD *)(a1 + 376) = GenAddrMaybeHidden;
    if ( GenAddrMaybeHidden > v18 )
      *(_QWORD *)(a1 + 376) = v18;
    *(_QWORD *)(a1 + 384) = ReadGenAddrMaybeHidden(a1, v5 + 44);
LABEL_35:
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C0011418);
  }
LABEL_36:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  return (unsigned int)v3;
}
