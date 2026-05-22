/*
 * XREFs of ?OnCameraAccessToggle@ButtonProcessor@@AEAAXXZ @ 0x180091DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009880 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18005D838 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18007AC28 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18009112C (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall ButtonProcessor::OnCameraAccessToggle(ButtonProcessor *this)
{
  DWORD CurrentProcessId; // eax
  void *v2; // rdx
  __int64 v3; // r8
  const char *v4; // r9
  HRESULT v5; // eax
  HSTRING v6; // rbx
  __int64 v7; // rcx
  int ActivationFactory; // eax
  wil::details::in1diag3 *v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rdi
  int v12; // eax
  wil::details::in1diag3 *v13; // rcx
  int v14; // eax
  wil::details::in1diag3 *v15; // rcx
  int v16; // eax
  wil::details::in1diag3 *v17; // rcx
  int v18; // ecx
  __int64 v19; // rbx
  __int64 v20; // rcx
  int v21; // eax
  wil::details::in1diag3 *v22; // rcx
  int v23; // eax
  wil::details::in1diag3 *v24; // rcx
  int v25; // eax
  wil::details::in1diag3 *v26; // rcx
  int v27; // eax
  const char *v28; // r9
  wil::details::in1diag3 *v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  int v33; // [rsp+30h] [rbp-68h] BYREF
  __int64 v34; // [rsp+38h] [rbp-60h] BYREF
  __int64 v35; // [rsp+40h] [rbp-58h] BYREF
  DWORD pSessionId; // [rsp+48h] [rbp-50h] BYREF
  __int64 v37; // [rsp+50h] [rbp-48h] BYREF
  BOOL v38; // [rsp+58h] [rbp-40h] BYREF
  __int64 v39; // [rsp+60h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp-30h] BYREF
  HSTRING string; // [rsp+80h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v39 = -2LL;
  try
  {
    v37 = 0LL;
    v35 = 0LL;
    v33 = 1;
    pSessionId = 0;
    CurrentProcessId = GetCurrentProcessId();
    if ( ProcessIdToSessionId(CurrentProcessId, &pSessionId) )
    {
      string = 0LL;
      v5 = WindowsCreateStringReference(
             L"Windows.Internal.CapabilityAccess.Management.CapabilityConsentManager",
             0x45u,
             &hstringHeader,
             &string);
      if ( v5 >= 0 )
      {
        v6 = string;
        v7 = v37;
        if ( v37 )
        {
          v37 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
        }
        ActivationFactory = RoGetActivationFactory(v6, &GUID_ef1a89c8_29b1_4ab0_94a7_851b33527a2e, &v37);
        v9 = retaddr;
        if ( ActivationFactory >= 0 )
        {
          v10 = v37;
          v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                  (__int64)&hstringHeader,
                  (const WCHAR **)&off_1800F4040);
          v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v10 + 48LL))(
                  v10,
                  *(_QWORD *)(v11 + 24),
                  &v35);
          v13 = retaddr;
          if ( v12 >= 0 )
          {
            v34 = 0LL;
            v14 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v35 + 48LL))(v35, &v34);
            v15 = retaddr;
            if ( v14 >= 0 )
            {
              v16 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v34 + 80LL))(v34, &v33);
              v17 = retaddr;
              if ( v16 >= 0 )
              {
                v18 = v33;
                if ( v33 != 1 )
                  goto LABEL_17;
                v19 = v35;
                v20 = v34;
                if ( v34 )
                {
                  v34 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
                }
                v21 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v19 + 80LL))(
                        v19,
                        pSessionId,
                        &v34);
                v22 = retaddr;
                if ( v21 >= 0 )
                {
                  v23 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v34 + 80LL))(v34, &v33);
                  v24 = retaddr;
                  if ( v23 >= 0 )
                  {
                    v33 = (v33 == 1) + 1;
                    v25 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v35 + 144LL))(v35, pSessionId);
                    v26 = retaddr;
                    if ( v25 >= 0 )
                    {
                      v18 = v33;
LABEL_17:
                      v38 = v18 == 1;
                      v27 = RtlPublishWnfStateData(WNF_KSV_CAMERAPRIVACY, 0LL, &v38, 4LL, 0LL) | 0x10000000;
                      v29 = retaddr;
                      if ( v27 >= 0 )
                      {
                        v30 = v34;
                        if ( v34 )
                        {
                          v34 = 0LL;
                          (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
                        }
                        v31 = v35;
                        if ( v35 )
                        {
                          v35 = 0LL;
                          (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
                        }
                        v32 = v37;
                        if ( v37 )
                        {
                          v37 = 0LL;
                          (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
                        }
                        return;
                      }
LABEL_33:
                      wil::details::in1diag3::_Throw_Hr(
                        v29,
                        (void *)0x15A8,
                        (__int64)"internal\\sdk\\inc\\wil\\resource.h",
                        (const char *)(unsigned int)v27);
                      JUMPOUT(0x1800921A6LL);
                    }
LABEL_32:
                    wil::details::in1diag3::_Throw_Hr(
                      v26,
                      (void *)0x1FD,
                      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\button\\lib\\buttonprocessor.cpp",
                      (const char *)(unsigned int)v25);
                    goto LABEL_33;
                  }
LABEL_31:
                  wil::details::in1diag3::_Throw_Hr(
                    v24,
                    (void *)0x1F2,
                    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\button\\lib\\buttonprocessor.cpp",
                    (const char *)(unsigned int)v23);
                  goto LABEL_32;
                }
LABEL_30:
                wil::details::in1diag3::_Throw_Hr(
                  v22,
                  (void *)0x1F1,
                  (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\button\\lib\\buttonprocessor.cpp",
                  (const char *)(unsigned int)v21);
                goto LABEL_31;
              }
LABEL_29:
              wil::details::in1diag3::_Throw_Hr(
                v17,
                (void *)0x1EE,
                (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\button\\lib\\buttonprocessor.cpp",
                (const char *)(unsigned int)v16);
              goto LABEL_30;
            }
LABEL_28:
            wil::details::in1diag3::_Throw_Hr(
              v15,
              (void *)0x1ED,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\button\\lib\\buttonprocessor.cpp",
              (const char *)(unsigned int)v14);
            goto LABEL_29;
          }
LABEL_27:
          wil::details::in1diag3::_Throw_Hr(
            v13,
            (void *)0x1E7,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\button\\lib\\buttonprocessor.cpp",
            (const char *)(unsigned int)v12);
          goto LABEL_28;
        }
LABEL_26:
        wil::details::in1diag3::_Throw_Hr(
          v9,
          (void *)0x1E3,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\button\\lib\\buttonprocessor.cpp",
          (const char *)(unsigned int)ActivationFactory);
        goto LABEL_27;
      }
    }
    else
    {
      wil::details::in1diag3::_Throw_GetLastError(retaddr, v2, v3, v4);
    }
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
    goto LABEL_26;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x205,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\button\\lib\\buttonprocessor.cpp",
      v28);
  }
}
