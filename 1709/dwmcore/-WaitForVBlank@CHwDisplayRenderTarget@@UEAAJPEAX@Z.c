/*
 * XREFs of ?WaitForVBlank@CHwDisplayRenderTarget@@UEAAJPEAX@Z @ 0x1801AE6C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ @ 0x18002B910 (-ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::WaitForVBlank(CHwDisplayRenderTarget *this, void *a2)
{
  signed int v4; // eax
  unsigned int v5; // ebx
  signed int v6; // eax

  v4 = CHwDisplayRenderTarget::ValidateDeviceAndSwapChain((CHwDisplayRenderTarget *)((char *)this - 192));
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_18021BE18, 1u, v4, 0x26Bu);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, void *))(**((_QWORD **)this + 5) + 48LL))(*((_QWORD *)this + 5), a2);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_18021BE18, 1u, v6, 0x26Du);
  }
  return v5;
}
