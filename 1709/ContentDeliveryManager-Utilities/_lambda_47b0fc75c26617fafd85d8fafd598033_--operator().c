/*
 * XREFs of _lambda_47b0fc75c26617fafd85d8fafd598033_::operator() @ 0x18000EF00
 * Callers:
 *     Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_47b0fc75c26617fafd85d8fafd598033____Windows::Internal::CNoResult_::Run @ 0x18001C2B0 (Windows--Internal--COperationLambda0_Windows--Internal--CCallAsyncLambda__lambda_47b0fc75c26617f.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E8C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_47b0fc75c26617fafd85d8fafd598033_::operator()(__int64 a1, void *a2)
{
  const WCHAR *StringRawBuffer; // rax
  LPBC v4; // rcx
  HRESULT ThreadFlags; // ebx
  IBindCtx *v6; // rbx
  const WCHAR *v7; // rax
  HRESULT v8; // eax
  LPVOID v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  void *v13; // rcx
  LPBC v14; // rcx
  void *v16; // [rsp+40h] [rbp-28h] BYREF
  int v17[2]; // [rsp+48h] [rbp-20h] BYREF
  __int64 v18; // [rsp+50h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+20h]
  LPBC ppbc; // [rsp+90h] [rbp+28h] BYREF
  void *ppv; // [rsp+98h] [rbp+30h] BYREF
  LPVOID v22; // [rsp+A0h] [rbp+38h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+40h] BYREF

  ppv = a2;
  v18 = -2LL;
  ppbc = 0LL;
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)a1, 0LL);
  if ( !*PathFindExtensionW(StringRawBuffer) )
  {
    v4 = ppbc;
    if ( ppbc )
    {
      ppbc = 0LL;
      ((void (__fastcall *)(LPBC))v4->lpVtbl->Release)(v4);
    }
    ppbc = 0LL;
    ThreadFlags = CreateBindCtx(0, &ppbc);
    if ( ThreadFlags < 0 )
      goto LABEL_10;
    ppv = 0LL;
    ThreadFlags = PSCreateMemoryPropertyStore(&GUID_55272a00_42cb_11ce_8135_00aa004bb851, &ppv);
    if ( ThreadFlags < 0 )
      goto LABEL_9;
    ThreadFlags = PSPropertyBag_WriteStr((IPropertyBag *)ppv, L"ExplicitProgid", L"jpegFile");
    if ( ThreadFlags >= 0 )
      ThreadFlags = ((__int64 (__fastcall *)(LPBC, const wchar_t *, void *))ppbc->lpVtbl->RegisterObjectParam)(
                      ppbc,
                      L"SHBindCtxPropertyBag",
                      ppv);
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppv + 16LL))(ppv);
    if ( ThreadFlags < 0 )
    {
LABEL_9:
      ((void (__fastcall *)(LPBC))ppbc->lpVtbl->Release)(ppbc);
      ppbc = 0LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x228,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)ThreadFlags);
      goto LABEL_29;
    }
  }
  v16 = 0LL;
  v6 = ppbc;
  v7 = WindowsGetStringRawBuffer(*(HSTRING *)a1, 0LL);
  v8 = SHCreateItemFromParsingName(v7, v6, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, &v16);
  ThreadFlags = v8;
  if ( v8 >= 0 )
  {
    v23 = 0LL;
    ThreadFlags = GetThreadFlags(1LL, &ppv);
    if ( ThreadFlags < 0 )
      goto LABEL_24;
    v22 = 0LL;
    ThreadFlags = CoCreateInstance(
                    &GUID_50ef4544_ac9f_4a8e_b21b_8a26180db13f,
                    0LL,
                    1u,
                    &GUID_f676c15d_596a_4ce2_8234_33996f445db1,
                    &v22);
    if ( ThreadFlags >= 0 )
      ThreadFlags = (**(__int64 (__fastcall ***)(LPVOID, GUID *, __int64 *))v22)(
                      v22,
                      &GUID_f676c15d_596a_4ce2_8234_33996f445db1,
                      &v23);
    v9 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v9 + 16LL))(v9);
    }
    if ( ThreadFlags < 0 )
    {
LABEL_24:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x22F,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)ThreadFlags);
    }
    else
    {
      *(_QWORD *)v17 = 0LL;
      v10 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD, __int64, int *, _QWORD, _QWORD))(*(_QWORD *)v23 + 24LL))(
              v23,
              v16,
              *(unsigned int *)(a1 + 16),
              64LL,
              v17,
              0LL,
              0LL);
      ThreadFlags = v10;
      if ( v10 >= 0 )
        ThreadFlags = 0;
      else
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x232,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)(unsigned int)v10);
      v11 = *(_QWORD *)v17;
      if ( *(_QWORD *)v17 )
      {
        *(_QWORD *)v17 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
    }
    v12 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x22C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v8);
  }
  v13 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v13 + 16LL))(v13);
  }
LABEL_29:
  v14 = ppbc;
  if ( ppbc )
  {
    ppbc = 0LL;
    ((void (__fastcall *)(LPBC))v14->lpVtbl->Release)(v14);
  }
  return (unsigned int)ThreadFlags;
}
