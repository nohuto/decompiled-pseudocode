/*
 * XREFs of GetStagingTexture @ 0x1801C6490
 * Callers:
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x1801C6138 (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C5B90 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180158FE8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall GetStagingTexture(__int64 a1, __int64 *a2)
{
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // edi
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // [rsp+30h] [rbp-50h] BYREF
  __int64 v11; // [rsp+38h] [rbp-48h] BYREF
  __int64 v12; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v13[28]; // [rsp+48h] [rbp-38h] BYREF
  int v14; // [rsp+64h] [rbp-1Ch]
  int v15; // [rsp+68h] [rbp-18h]
  int v16; // [rsp+6Ch] [rbp-14h]
  int v17; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a1 + 80LL))(a1, v13);
  if ( v14 == 3 )
  {
    *a2 = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    return 0LL;
  }
  else
  {
    v5 = *(_QWORD *)a1;
    v11 = 0LL;
    (*(void (__fastcall **)(__int64, __int64 *))(v5 + 24))(a1, &v11);
    v12 = 0LL;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 320LL))(v11, &v12);
    v15 = 0;
    v17 = 0;
    v10 = 0LL;
    v14 = 3;
    v16 = 0x20000;
    v6 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD, __int64 *))(*(_QWORD *)v11 + 40LL))(v11, v13, 0LL, &v10);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, const GUID *, __int64, const char *))(*(_QWORD *)v10 + 40LL))(
             v10,
             &WKPDID_D3DDebugObjectName,
             25LL,
             "DWM Temp Readback (debug)");
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x77,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
          (const char *)(unsigned int)v8);
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v12 + 376LL))(v12, v10, a1);
      v9 = v10;
      v10 = 0LL;
      v7 = 0;
      *a2 = v9;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x73,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
        (const char *)(unsigned int)v6);
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v10);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v12);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v11);
    return v7;
  }
}
