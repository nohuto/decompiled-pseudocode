/*
 * XREFs of ?Create@WGIRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x1800768D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Release@EdgyInputTarget@@UEAAKXZ @ 0x1800031D0 (-Release@EdgyInputTarget@@UEAAKXZ.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18005D838 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??0WGIRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z @ 0x18007653C (--0WGIRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z.c)
 *     ?SetInputFocusProcess@WGIRawInputProvider@@AEAAJKK@Z @ 0x180077280 (-SetInputFocusProcess@WGIRawInputProvider@@AEAAJKK@Z.c)
 *     ?StartRawGameControllerWatcher@WGIRawInputProvider@@AEAAJXZ @ 0x1800773B0 (-StartRawGameControllerWatcher@WGIRawInputProvider@@AEAAJXZ.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WGIRawInputProvider::Create(
        struct IRawInputClient *a1,
        __int64 a2,
        struct IRawInputProvider **a3,
        const char *a4)
{
  WGIRawInputProvider *v6; // rbx
  signed int started; // edi
  WGIRawInputProvider *v8; // rax
  WGIRawInputProvider *v9; // rax
  _QWORD *v10; // rdi
  __int64 v11; // rcx
  HANDLE FileW; // rdi
  HANDLE v13; // rcx
  EdgyInputTarget *v14; // rcx
  struct IRawInputProvider *v15; // rax
  signed int LastError; // eax
  unsigned __int64 v18; // rcx
  WGIRawInputProvider *v19; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  DWORD CurrentProcessId; // [rsp+78h] [rbp+20h] BYREF

  if ( WGIRawInputProvider::s_spInstance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x38,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
      a4);
    goto LABEL_41;
  }
  v6 = 0LL;
  if ( !a3 )
  {
    started = -2147467261;
    goto LABEL_37;
  }
  *a3 = 0LL;
  if ( !a1 )
  {
    started = -2147024809;
    goto LABEL_37;
  }
  v8 = (WGIRawInputProvider *)malloc(0xB0uLL);
  v6 = v8;
  if ( v8 )
    memset_0(v8, 0, 0xB0uLL);
  if ( !v6 || (v9 = WGIRawInputProvider::WGIRawInputProvider(v6, a1), v6 = v9, (v19 = v9) == 0LL) )
  {
    started = -2147024882;
    goto LABEL_37;
  }
  v10 = (_QWORD *)((char *)v9 + 40);
  v11 = *((_QWORD *)v9 + 5);
  if ( v11 )
  {
    *v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  started = CoreUICreate(v10);
  if ( started >= 0 )
  {
    if ( ((1LL << gdwDeviceFamily) & 0x1820) == 0 )
      goto LABEL_27;
    FileW = CreateFileW(L"\\\\.\\XboxGIP_Admin", 0xC0000000, 3u, 0LL, 3u, 0xA0000000, 0LL);
    v13 = (HANDLE)*((_QWORD *)v6 + 7);
    if ( FileW == v13 )
    {
LABEL_19:
      if ( *((_QWORD *)v6 + 7) == -1LL )
      {
        started = (int)GetLastError() > 0 ? (unsigned __int16)GetLastError() | 0x80070000 : GetLastError();
        if ( started < 0 )
        {
          if ( IsDebuggerPresent() )
            __debugbreak();
          RaiseFailFastException(0LL, 0LL, 0);
          goto LABEL_29;
        }
      }
LABEL_27:
      started = WGIRawInputProvider::SetInputFocusProcess(v6, 0, 0);
      if ( started >= 0 )
      {
        CurrentProcessId = GetCurrentProcessId();
        RtlPublishWnfStateData(WNF_SHEL_GAMECONTROLLER_LISTENER_INFO, 0LL, &CurrentProcessId, 4LL, 0LL);
        started = WGIRawInputProvider::StartRawGameControllerWatcher(v6);
      }
      goto LABEL_29;
    }
    if ( v13 == (HANDLE)-1LL )
    {
LABEL_18:
      *((_QWORD *)v6 + 7) = FileW;
      goto LABEL_19;
    }
    if ( CloseHandle(v13) )
    {
      *((_QWORD *)v6 + 7) = -1LL;
      goto LABEL_18;
    }
LABEL_41:
    LastError = GetLastError();
    v18 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v18 = (unsigned int)LastError;
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)v18);
    JUMPOUT(0x180076B2ELL);
  }
LABEL_29:
  if ( started >= 0 )
  {
    v14 = WGIRawInputProvider::s_spInstance;
    if ( WGIRawInputProvider::s_spInstance != v6 )
    {
      if ( v6 )
      {
        _InterlockedIncrement((volatile signed __int32 *)v6 + 6);
        v6 = v19;
        v14 = WGIRawInputProvider::s_spInstance;
      }
      WGIRawInputProvider::s_spInstance = v6;
      if ( v14 )
        EdgyInputTarget::Release(v14);
    }
    v15 = v6;
    v6 = 0LL;
    *a3 = v15;
  }
LABEL_37:
  if ( v6 )
    EdgyInputTarget::Release(v6);
  return (unsigned int)started;
}
