/*
 * XREFs of ?ValidateHardwareAdapters@CAnalogCompositorManager@@AEAAJXZ @ 0x1800747D8
 * Callers:
 *     ?EnsureHolographicDisplay@CAnalogCompositorManager@@AEAAJXZ @ 0x18001036C (-EnsureHolographicDisplay@CAnalogCompositorManager@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800720D0 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180073810 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CAnalogCompositorManager::ValidateHardwareAdapters(CAnalogCompositorManager *this)
{
  HRESULT DXGIFactory1; // eax
  unsigned int v4; // ebx
  unsigned int v5; // esi
  void *v6; // rbx
  bool v7; // cl
  int v8; // r8d
  int v9; // edx
  int v10; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v11; // [rsp+28h] [rbp-D8h] BYREF
  void *ppFactory[2]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v13[256]; // [rsp+40h] [rbp-C0h] BYREF
  int v14; // [rsp+140h] [rbp+40h]
  int v15; // [rsp+144h] [rbp+44h]
  int v16; // [rsp+168h] [rbp+68h]
  int v17; // [rsp+16Ch] [rbp+6Ch]
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v10 = 0;
  if ( (*(int (__fastcall **)(_QWORD, const wchar_t *, int *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                + 7)
                                                             + 8LL))(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7),
         L"AllowWarp",
         &v10) >= 0
    && v10 )
  {
    *((_WORD *)this + 82) = 257;
    return 0LL;
  }
  else
  {
    *((_WORD *)this + 82) = 0;
    ppFactory[0] = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)ppFactory);
    DXGIFactory1 = CreateDXGIFactory1(&GUID_50c83a1c_e072_4c48_87b0_3630fa36a6d0, ppFactory);
    v4 = DXGIFactory1;
    if ( DXGIFactory1 >= 0 )
    {
      v5 = 0;
      v11 = 0LL;
      while ( 1 )
      {
        v6 = ppFactory[0];
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
        if ( (*(unsigned int (__fastcall **)(void *, _QWORD, __int64 *))(*(_QWORD *)v6 + 56LL))(v6, v5, &v11) == -2005270526 )
          break;
        (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v11 + 64LL))(v11, v13);
        v7 = v14 == 5140 && (unsigned int)(v15 - 140) <= 1;
        v8 = v16;
        v9 = v17;
        if ( *((_DWORD *)this + 36) == v16 && *((_DWORD *)this + 37) == v17 )
          *((_BYTE *)this + 164) = !v7;
        if ( *((_DWORD *)this + 38) == v8 && *((_DWORD *)this + 39) == v9 )
          *((_BYTE *)this + 165) = !v7;
        ++v5;
      }
      if ( *((_BYTE *)this + 165) && *((_BYTE *)this + 164) )
        v4 = 0;
      else
        v4 = -2003304307;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xF4,
        (__int64)"windows\\dwm\\udwm\\analogcompositormanager.cpp",
        (const char *)(unsigned int)DXGIFactory1);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)ppFactory);
    return v4;
  }
}
