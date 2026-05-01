/*
 * XREFs of _lambda_3410a86568d10ea920f7ee8e3deba990_::operator() @ 0x180072354
 * Callers:
 *     ??$LambdaEnumWindowsProc@V_lambda_3410a86568d10ea920f7ee8e3deba990_@@@EnumWindowsHelpers@@YAHPEAUHWND__@@_J@Z @ 0x180076430 (--$LambdaEnumWindowsProc@V_lambda_3410a86568d10ea920f7ee8e3deba990_@@@EnumWindowsHelpers@@YAHPEA.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsEqualByHwnd@@YA_NPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18007B124 (-IsEqualByHwnd@@YA_NPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_3410a86568d10ea920f7ee8e3deba990_::operator()(__int64 a1, HWND a2)
{
  unsigned __int64 v4; // r15
  bool i; // sf
  __int64 v6; // rbx
  struct IApplicationView *v7; // rbx
  int v8; // eax
  unsigned int v9; // r14d
  int v10; // eax
  struct IApplicationView *v11; // rdi
  int v12; // edi
  _QWORD v14[4]; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  unsigned int v16; // [rsp+90h] [rbp+40h] BYREF
  struct IApplicationView *v17; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+58h] BYREF

  v14[1] = -2LL;
  v4 = 0LL;
  for ( i = **(int **)a1 < 0; ; i = **(int **)a1 < 0 )
  {
    if ( i )
      return **(_DWORD **)a1 >= 0;
    v6 = *(_QWORD *)(a1 + 8);
    if ( v4 >= *(_QWORD *)(v6 + 480) )
      return **(_DWORD **)a1 >= 0;
    v7 = *(struct IApplicationView **)(*(_QWORD *)(v6 + 472) + 8 * v4);
    v14[2] = v7;
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
         &v16);
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
  if ( !v16 )
    goto LABEL_24;
  while ( 1 )
  {
    v17 = 0LL;
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, GUID *, struct IApplicationView **))(***(_QWORD ***)(a1 + 16) + 32LL))(
            **(_QWORD **)(a1 + 16),
            v9,
            &GUID_9ac0b5c8_1484_4c5b_9533_4134a0f97cea,
            &v17);
    if ( v10 >= 0 )
      break;
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB1,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v10);
LABEL_20:
    v11 = v17;
LABEL_21:
    if ( v11 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v11 + 16LL))(v11);
    }
    if ( ++v9 >= v16 )
      goto LABEL_24;
  }
  v11 = v17;
  if ( !v7 || !v17 )
    goto LABEL_21;
  if ( v7 == v17 )
    goto LABEL_29;
  v14[0] = 0LL;
  v18 = 0LL;
  if ( (**(int (__fastcall ***)(struct IApplicationView *, GUID *, _QWORD *))v7)(
         v7,
         &GUID_00000000_0000_0000_c000_000000000046,
         v14) < 0 )
    goto LABEL_20;
  v12 = (**(__int64 (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))v11)(
          v11,
          &GUID_00000000_0000_0000_c000_000000000046,
          &v18);
  if ( v12 >= 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v14[0] + 16LL))(v14[0]);
  if ( v12 < 0 || v14[0] != v18 )
    goto LABEL_20;
  v11 = v17;
LABEL_29:
  if ( v11 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v7 + 16LL))(v7);
  return 1LL;
}
