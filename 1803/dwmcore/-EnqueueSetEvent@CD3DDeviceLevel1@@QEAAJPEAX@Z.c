/*
 * XREFs of ?EnqueueSetEvent@CD3DDeviceLevel1@@QEAAJPEAX@Z @ 0x18000D61C
 * Callers:
 *     ?EnqueueSetEvent@CVisualCapture@@IEAAJXZ @ 0x18000CD18 (-EnqueueSetEvent@CVisualCapture@@IEAAJXZ.c)
 *     ?Render@CHolographicInteropTarget@@UEAAJPEA_N@Z @ 0x1801FDE00 (-Render@CHolographicInteropTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180075194 (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::EnqueueSetEvent(CD3DDeviceLevel1 *this, void *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
  v4 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 76))(
         *((_QWORD *)this + 76),
         &GUID_05008617_fbfd_4051_a790_144884b4f6a9,
         &v9);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xF94u);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(__int64, void *))(*(_QWORD *)v9 + 128LL))(v9, a2);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xF96u);
  }
  v7 = CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext(this, v5, 0LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
  return v7;
}
