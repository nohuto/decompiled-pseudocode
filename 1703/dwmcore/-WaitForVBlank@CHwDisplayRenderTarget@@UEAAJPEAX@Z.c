/*
 * XREFs of ?WaitForVBlank@CHwDisplayRenderTarget@@UEAAJPEAX@Z @ 0x1800CDD70
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ @ 0x180039EAC (-ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::WaitForVBlank(CHwDisplayRenderTarget *this, void *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax

  v4 = CHwDisplayRenderTarget::ValidateDeviceAndSwapChain((CHwDisplayRenderTarget *)((char *)this - 176));
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801D55C8, 1u, v4, 0x39Au);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, void *))(**((_QWORD **)this + 5) + 48LL))(*((_QWORD *)this + 5), a2);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1801D55C8, 1u, v6, 0x39Cu);
  }
  return v5;
}
