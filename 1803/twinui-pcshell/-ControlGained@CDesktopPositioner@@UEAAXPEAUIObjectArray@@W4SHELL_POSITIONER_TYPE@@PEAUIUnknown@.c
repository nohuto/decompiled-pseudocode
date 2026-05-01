/*
 * XREFs of ?ControlGained@CDesktopPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1802BEF00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_ControlGainedHelper@CDesktopPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIAppLayout@@@Z @ 0x1802C0ADC (-_ControlGainedHelper@CDesktopPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PE.c)
 *     ?DesktopOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1802C2328 (-DesktopOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CDesktopPositioner::ControlGained(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int (__fastcall ***a4)(_QWORD, GUID *, __int64 *))
{
  __int64 v8; // rbx
  int v9; // eax
  const struct _GUID *v10; // rcx
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  __int64 v13; // rdx
  int v14; // eax
  wil::details::in1diag3 *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rbx
  unsigned int i; // ebx
  void *v20; // [rsp+30h] [rbp-30h] BYREF
  __int64 v21; // [rsp+38h] [rbp-28h] BYREF
  __int64 v22; // [rsp+40h] [rbp-20h] BYREF
  __int64 v23; // [rsp+48h] [rbp-18h] BYREF
  __int64 v24[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  unsigned int v26; // [rsp+88h] [rbp+28h] BYREF
  CWinRTApplicationView *v27; // [rsp+98h] [rbp+38h] BYREF

  v24[1] = -2LL;
  v24[0] = 0LL;
  v23 = 0LL;
  if ( a4 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
    if ( (**a4)(a4, &GUID_0480d776_b053_4a1f_945d_fac2debae8e6, &v23) >= 0 )
    {
      v22 = 0LL;
      v8 = v23;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
      v9 = (*(__int64 (__fastcall **)(__int64, __int64 *, CWinRTApplicationView **))(*(_QWORD *)v8 + 24LL))(
             v8,
             &v22,
             &v27);
      if ( v9 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          632LL,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v9);
LABEL_18:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
        goto LABEL_19;
      }
      if ( (_DWORD)v27 )
        goto LABEL_18;
      v20 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
      v11 = DesktopOperation_CreateInstance(v10, &v20);
      v12 = retaddr;
      if ( v11 < 0 )
      {
        v13 = 636LL;
LABEL_10:
        wil::details::in1diag3::_Log_Hr(
          v12,
          v13,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v11);
LABEL_17:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
        goto LABEL_18;
      }
      (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)v20 + 24LL))(v20, v22);
      v11 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v20 + 40LL))(v20);
      v12 = retaddr;
      if ( v11 < 0 )
      {
        v13 = 639LL;
        goto LABEL_10;
      }
      v21 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
      v14 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))v20)(
              v20,
              &GUID_c28f3b94_b47f_4211_8f2c_88d0b2d975bb,
              &v21);
      v15 = retaddr;
      if ( v14 >= 0 )
      {
        v17 = v21;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v24);
        v14 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v17 + 48LL))(v17, v24);
        v15 = retaddr;
        if ( v14 >= 0 )
        {
LABEL_16:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
          goto LABEL_17;
        }
        v16 = 644LL;
      }
      else
      {
        v16 = 642LL;
      }
      wil::details::in1diag3::_Log_Hr(
        v15,
        v16,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v14);
      goto LABEL_16;
    }
  }
LABEL_19:
  (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 24LL))(a2, &v26);
  for ( i = 0; i < v26; ++i )
  {
    v27 = 0LL;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v27);
    (*(void (__fastcall **)(__int64, _QWORD, GUID *, CWinRTApplicationView **))(*(_QWORD *)a2 + 32LL))(
      a2,
      i,
      &GUID_871f602a_2b58_42b4_8c4b_6c43d642c06f,
      &v27);
    CDesktopPositioner::_ControlGainedHelper(a1 - 128, v27, a3, v24[0]);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v27);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v24);
}
