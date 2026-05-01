/*
 * XREFs of _lambda_3410a86568d10ea920f7ee8e3deba990_::operator() @ 0x180074F68
 * Callers:
 *     ??$LambdaEnumWindowsProc@V_lambda_3410a86568d10ea920f7ee8e3deba990_@@@EnumWindowsHelpers@@YAHPEAUHWND__@@_J@Z @ 0x180079350 (--$LambdaEnumWindowsProc@V_lambda_3410a86568d10ea920f7ee8e3deba990_@@@EnumWindowsHelpers@@YAHPEA.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsEqualByHwnd@@YA_NPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18007DDE8 (-IsEqualByHwnd@@YA_NPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_3410a86568d10ea920f7ee8e3deba990_::operator()(__int64 a1, HWND a2)
{
  unsigned __int64 v4; // r15
  int *i; // rax
  __int64 v6; // rbx
  struct IApplicationView *v7; // rbx
  int v8; // eax
  unsigned int v9; // r12d
  __int64 **v10; // rax
  __int64 *v11; // rsi
  __int64 v12; // rdi
  __int64 *v13; // rax
  int v14; // eax
  __int64 v15; // rdi
  int v16; // edi
  _QWORD v18[4]; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  unsigned int v20; // [rsp+90h] [rbp+40h] BYREF
  struct IApplicationView *v21; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v22; // [rsp+A8h] [rbp+58h] BYREF

  v18[1] = -2LL;
  v4 = 0LL;
  for ( i = *(int **)a1; ; i = *(int **)a1 )
  {
    if ( *i < 0 )
      return **(_DWORD **)a1 >= 0;
    v6 = *(_QWORD *)(a1 + 8);
    if ( v4 >= *(_QWORD *)(v6 + 536) )
      return **(_DWORD **)a1 >= 0;
    v7 = *(struct IApplicationView **)(*(_QWORD *)(v6 + 528) + 8 * v4);
    v18[2] = v7;
    if ( v7 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v7 + 8LL))(v7);
    if ( IsEqualByHwnd(a2, v7) )
      break;
LABEL_25:
    if ( v7 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v7 + 16LL))(v7);
    ++v4;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(***(_QWORD ***)(a1 + 16) + 24LL))(
         **(_QWORD **)(a1 + 16),
         &v20);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xAC,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v8);
LABEL_24:
    **(_DWORD **)a1 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *))(***(_QWORD ***)(a1 + 16) + 40LL))(
                        **(_QWORD **)(a1 + 16),
                        v7);
    goto LABEL_25;
  }
  v9 = 0;
  if ( !v20 )
    goto LABEL_24;
  while ( 1 )
  {
    v21 = 0LL;
    v10 = *(__int64 ***)(a1 + 16);
    v11 = *v10;
    v12 = **v10;
    v13 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v21);
    v14 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, GUID *, __int64 *))(v12 + 32))(
            v11,
            v9,
            &GUID_9ac0b5c8_1484_4c5b_9533_4134a0f97cea,
            v13);
    if ( v14 >= 0 )
      break;
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB1,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v14);
LABEL_20:
    v15 = (__int64)v21;
LABEL_21:
    if ( v15 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    if ( ++v9 >= v20 )
      goto LABEL_24;
  }
  v15 = (__int64)v21;
  if ( !v7 || !v21 )
    goto LABEL_21;
  if ( v7 == v21 )
    goto LABEL_29;
  v18[0] = 0LL;
  v22 = 0LL;
  if ( (**(int (__fastcall ***)(struct IApplicationView *, GUID *, _QWORD *))v7)(
         v7,
         &GUID_00000000_0000_0000_c000_000000000046,
         v18) < 0 )
    goto LABEL_20;
  v16 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v15)(
          v15,
          &GUID_00000000_0000_0000_c000_000000000046,
          &v22);
  if ( v16 >= 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v18[0] + 16LL))(v18[0]);
  if ( v16 < 0 || v18[0] != v22 )
    goto LABEL_20;
  v15 = (__int64)v21;
LABEL_29:
  if ( v15 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v7 + 16LL))(v7);
  return 1LL;
}
