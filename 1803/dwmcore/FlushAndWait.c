/*
 * XREFs of FlushAndWait @ 0x1801C6298
 * Callers:
 *     ?DebugInspectSurface@@YAJPEAUID3D12CommandQueue@@PEAUID3D12Resource@@W4D3D12_RESOURCE_STATES@@@Z @ 0x1801C5C50 (-DebugInspectSurface@@YAJPEAUID3D12CommandQueue@@PEAUID3D12Resource@@W4D3D12_RESOURCE_STATES@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800BC600 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C5B90 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800C97B8 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180142BE4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801430F8 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18021E83C (-reset@-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall FlushAndWait(__int64 a1)
{
  int v2; // eax
  int LastError; // edi
  __int64 v4; // rbx
  int v5; // eax
  __int64 v6; // rdx
  HANDLE v7; // rbx
  wil::details *Event; // rdi
  const char *v9; // r9
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // eax
  void *v13; // rdx
  DWORD v14; // eax
  const char *v15; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v18; // [rsp+50h] [rbp+20h] BYREF
  __int64 v19; // [rsp+58h] [rbp+28h] BYREF
  HANDLE hHandle; // [rsp+60h] [rbp+30h] BYREF

  v19 = 0LL;
  wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>::reset(&v19);
  v2 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)a1 + 56LL))(
         a1,
         &GUID_189819f1_1db6_4b57_be54_1821339b85f7,
         &v19);
  LastError = v2;
  if ( v2 >= 0 )
  {
    v18 = 0LL;
    v4 = v19;
    wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>::reset(&v18);
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, GUID *, __int64 *))(*(_QWORD *)v4 + 288LL))(
           v4,
           0LL,
           0LL,
           &GUID_0a753dcf_c4d8_4b91_adf6_be5a60d95a76,
           &v18);
    LastError = v5;
    if ( v5 < 0 )
    {
      v6 = 232LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
        (const char *)(unsigned int)v5);
LABEL_23:
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v18);
      goto LABEL_24;
    }
    v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 112LL))(a1, v18, 1LL);
    LastError = v5;
    if ( v5 < 0 )
    {
      v6 = 233LL;
      goto LABEL_7;
    }
    v7 = 0LL;
    hHandle = 0LL;
    Event = (wil::details *)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
    if ( Event )
    {
      GetLastError();
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
        (wil::details **)&hHandle,
        Event);
      v7 = hHandle;
      LastError = 0;
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x1621,
                    (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
                    v9);
    }
    if ( LastError >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64, __int64, HANDLE))(*(_QWORD *)v18 + 72LL))(v18, 1LL, v7);
      LastError = v12;
      if ( v12 >= 0 )
      {
        v14 = WaitForSingleObjectEx(v7, 0xFFFFFFFF, 0);
        if ( v14 == 258 )
        {
          LastError = wil::details::in1diag3::Return_GetLastError(
                        retaddr,
                        (void *)0xEF,
                        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
                        v15);
        }
        else
        {
          if ( v14 )
          {
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              (void *)0x967,
              (__int64)"internal\\sdk\\inc\\wil/resource.h",
              v15);
            __debugbreak();
          }
          LastError = 0;
        }
        goto LABEL_21;
      }
      v10 = (unsigned int)v12;
      v11 = 238LL;
    }
    else
    {
      v10 = (unsigned int)LastError;
      v11 = 237LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
      (const char *)v10);
LABEL_21:
    if ( v7 )
      wil::details::CloseHandle((wil::details *)v7, v13);
    goto LABEL_23;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE5,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
    (const char *)(unsigned int)v2);
LABEL_24:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v19);
  return (unsigned int)LastError;
}
