/*
 * XREFs of ?Render@CDwm3DRECallbackRenderer@@UEAAJXZ @ 0x18017BA70
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180021CF0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C5B90 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@VCD3DDeviceLevel1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180156CA8 (-reset@-$com_ptr_t@VCD3DDeviceLevel1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetDefaultD3DDevice@CD3DDeviceManager@@QEAAJPEAPEAVCD3DDeviceLevel1@@@Z @ 0x1801DE2C4 (-GetDefaultD3DDevice@CD3DDeviceManager@@QEAAJPEAPEAVCD3DDeviceLevel1@@@Z.c)
 */

__int64 __fastcall CDwm3DRECallbackRenderer::Render(CDwm3DRECallbackRenderer *this)
{
  int DefaultD3DDevice; // eax
  struct CD3DDeviceLevel1 *v3; // rbx
  unsigned int v4; // edi
  __int64 v5; // rdi
  __int64 i; // rax
  __int64 v8; // [rsp+30h] [rbp-40h] BYREF
  int v9; // [rsp+38h] [rbp-38h] BYREF
  struct CD3DDeviceLevel1 *v10[2]; // [rsp+40h] [rbp-30h] BYREF
  _DWORD v11[4]; // [rsp+50h] [rbp-20h] BYREF

  v10[0] = 0LL;
  v8 = 0LL;
  wil::com_ptr_t<CD3DDeviceLevel1,wil::err_returncode_policy>::reset((__int64 *)v10);
  DefaultD3DDevice = CD3DDeviceManager::GetDefaultD3DDevice((CD3DDeviceManager *)&g_D3DDeviceManager, v10);
  v3 = v10[0];
  v4 = DefaultD3DDevice;
  if ( DefaultD3DDevice < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DefaultD3DDevice, 0x42u);
  }
  else
  {
    v5 = *((_QWORD *)v10[0] + 81);
    v8 = 0LL;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 320LL))(v5, &v8);
    v9 = 1;
    (*(void (__fastcall **)(__int64, int *, _DWORD *))(*(_QWORD *)v8 + 768LL))(v8, &v9, v11);
    if ( v11[2] > v11[0] && v11[3] > v11[1] )
    {
      for ( i = 0LL; i < 4; ++i )
        *(float *)((char *)v10 + i * 4) = (float)(int)v11[i];
      (*(void (__fastcall **)(_QWORD, _QWORD, char *, struct CD3DDeviceLevel1 **, _BYTE))(**((_QWORD **)this + 3) + 56LL))(
        *((_QWORD *)this + 3),
        *((_QWORD *)this + 4),
        (char *)this + 40,
        v10,
        *((_BYTE *)this + 104));
    }
    v4 = 0;
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v8);
  if ( v3 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v3 + 472));
  return v4;
}
