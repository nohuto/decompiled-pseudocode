/*
 * XREFs of InitAcpiCpc @ 0x1C0020C30
 * Callers:
 *     ProcLibDeviceStart @ 0x1C001EF5C (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001D9C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0003834 (WPP_RECORDER_SF_.c)
 *     ReadGenAddrMaybeHidden @ 0x1C0004408 (ReadGenAddrMaybeHidden.c)
 *     WriteGenAddrMaybeHidden @ 0x1C000456C (WriteGenAddrMaybeHidden.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004F10 (_guard_dispatch_icall_nop.c)
 *     CpcRegisterIsSupported @ 0x1C0008118 (CpcRegisterIsSupported.c)
 *     Display_CPC @ 0x1C000A338 (Display_CPC.c)
 *     AcpiEval_CPC @ 0x1C0021C00 (AcpiEval_CPC.c)
 *     ValidateAcpiCPC @ 0x1C002A828 (ValidateAcpiCPC.c)
 *     RegisterSubspaceForGenAddr @ 0x1C002D4FC (RegisterSubspaceForGenAddr.c)
 */

__int64 __fastcall InitAcpiCpc(__int64 a1)
{
  int v2; // eax
  int v3; // ebx
  unsigned __int16 v5; // r9
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // r9d
  char *v10; // r13
  unsigned int v11; // r12d
  char v12; // r15
  unsigned int v13; // ebp
  __int64 v14; // r14
  int v15; // eax
  unsigned __int16 v16; // r9
  __int64 v17; // rcx
  int v18; // eax
  _BYTE *v19; // rcx
  unsigned __int64 GenAddrMaybeHidden; // rax
  unsigned __int64 v21; // rcx
  int v22; // [rsp+28h] [rbp-30h]

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
      goto LABEL_4;
    }
    v5 = 11;
LABEL_7:
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      v5,
      (__int64)&WPP_bbe5d8c4bcba361b69193d125a2ae7a9_Traceguids,
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
  Display_CPC((_DWORD *)v6, v7, v8, v9);
  if ( dword_1C001A9EC == 1 )
    goto LABEL_4;
  v10 = (char *)&CpcRegisterTable;
  v11 = 15;
  if ( *(_DWORD *)(v6 + 4) != 1 )
  {
    v11 = 19;
    v10 = (char *)&Cpc2RegisterTable;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C001A5D8,
    0LL);
  v12 = 0;
  v13 = 0;
  v14 = 0LL;
  do
  {
    if ( *(_BYTE *)(v6 + *(unsigned int *)&v10[v14]) == 10 )
    {
      v15 = RegisterSubspaceForGenAddr(a1);
      v3 = v15;
      v12 = 1;
      if ( v15 < 0 )
      {
        v16 = 13;
LABEL_34:
        v22 = v15;
LABEL_36:
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          v16,
          (__int64)&WPP_bbe5d8c4bcba361b69193d125a2ae7a9_Traceguids,
          v22);
        goto LABEL_32;
      }
    }
    ++v13;
    v14 += 24LL;
  }
  while ( v13 < v11 );
  if ( !CpcRegisterIsSupported(v6 + 224) || *(_BYTE *)v17 == 126 && !*(_QWORD *)(v6 + 228) )
  {
    v18 = *(_DWORD *)(v6 + 28);
    *(_QWORD *)v17 = *(_QWORD *)(v6 + 20);
    *(_DWORD *)(v17 + 8) = v18;
  }
  if ( v12 )
  {
    v15 = (*(__int64 (__fastcall **)(_QWORD))(qword_1C001AAD8 + 88))(*(_QWORD *)(qword_1C001AAD8 + 56));
    v3 = v15;
    if ( v15 < 0 )
    {
      v16 = 14;
      goto LABEL_34;
    }
  }
  if ( CpcRegisterIsSupported(v6 + 176) )
    WriteGenAddrMaybeHidden(a1, v19, 1LL);
  if ( v12 )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(qword_1C001AAD8 + 104))(*(_QWORD *)(qword_1C001AAD8 + 56), 0LL);
    if ( v3 == -1073741435 )
      v3 = 0;
    if ( v3 < 0 )
    {
      v16 = 15;
      v22 = v3;
      goto LABEL_36;
    }
  }
  *(_QWORD *)(a1 + 360) = ReadGenAddrMaybeHidden(a1, (char *)(v6 + 8));
  *(_QWORD *)(a1 + 368) = ReadGenAddrMaybeHidden(a1, (char *)(v6 + 20));
  GenAddrMaybeHidden = ReadGenAddrMaybeHidden(a1, (char *)(v6 + 32));
  v21 = *(_QWORD *)(a1 + 368);
  *(_QWORD *)(a1 + 376) = GenAddrMaybeHidden;
  if ( GenAddrMaybeHidden > v21 )
    *(_QWORD *)(a1 + 376) = v21;
  *(_QWORD *)(a1 + 384) = ReadGenAddrMaybeHidden(a1, (char *)(v6 + 44));
LABEL_32:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C001A5D8);
LABEL_4:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  return (unsigned int)v3;
}
