/*
 * XREFs of ?EnqueueSetEvent@CD3DDeviceLevel1@@QEAAJPEAX@Z @ 0x180196590
 * Callers:
 *     ?Render@CHolographicInteropTarget@@UEAAJ_NPEA_N@Z @ 0x1801A6AB0 (-Render@CHolographicInteropTarget@@UEAAJ_NPEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180077818 (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::EnqueueSetEvent(CD3DDeviceLevel1 *this, void *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v9);
  v4 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 75))(
         *((_QWORD *)this + 75),
         &GUID_05008617_fbfd_4051_a790_144884b4f6a9,
         &v9);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xE9Bu);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(__int64, void *))(*(_QWORD *)v9 + 128LL))(v9, a2);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xE9Du);
  }
  v7 = CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext((__int64)this, v5, 0);
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v9);
  return v7;
}
