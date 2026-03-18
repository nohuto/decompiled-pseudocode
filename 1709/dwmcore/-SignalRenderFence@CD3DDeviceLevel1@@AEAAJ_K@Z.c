/*
 * XREFs of ?SignalRenderFence@CD3DDeviceLevel1@@AEAAJ_K@Z @ 0x18011B3F8
 * Callers:
 *     ?AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_K_N@Z @ 0x18002BF40 (-AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_K_N@Z.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180020318 (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::SignalRenderFence(CD3DDeviceLevel1 *this, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx
  signed int v5; // eax
  unsigned int v6; // ebx
  _QWORD v8[5]; // [rsp+30h] [rbp-28h] BYREF

  v2 = *((_QWORD *)this + 78);
  v4 = *((_QWORD *)this + 76);
  v8[0] = 0LL;
  v8[1] = v2;
  v8[2] = a2;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)v4 + 32LL))(v4, v8, 1LL);
  v6 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0xE20u);
  return CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext((__int64)this, v6, 0);
}
