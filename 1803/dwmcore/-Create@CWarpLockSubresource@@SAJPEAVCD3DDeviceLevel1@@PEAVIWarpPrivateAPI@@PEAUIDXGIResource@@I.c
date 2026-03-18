/*
 * XREFs of ?Create@CWarpLockSubresource@@SAJPEAVCD3DDeviceLevel1@@PEAVIWarpPrivateAPI@@PEAUIDXGIResource@@IPEAPEAV1@@Z @ 0x180018DF0
 * Callers:
 *     ?TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z @ 0x1800188EC (-TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z.c)
 *     ?Create@CWarpLockSubresource@@SAJPEAVCD3DVidMemOnlyTexture@@PEAPEAV1@@Z @ 0x1801EDFB0 (-Create@CWarpLockSubresource@@SAJPEAVCD3DVidMemOnlyTexture@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Lock@CWarpLockSubresource@@IEAAJXZ @ 0x180018EEC (-Lock@CWarpLockSubresource@@IEAAJXZ.c)
 *     ??0CWarpLockSubresource@@IEAA@PEAVCD3DDeviceLevel1@@PEAVIWarpPrivateAPI@@@Z @ 0x18001903C (--0CWarpLockSubresource@@IEAA@PEAVCD3DDeviceLevel1@@PEAVIWarpPrivateAPI@@@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18001DA50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWarpLockSubresource::Create(
        struct CD3DDeviceLevel1 *a1,
        struct IWarpPrivateAPI *a2,
        struct IDXGIResource *a3,
        int a4,
        struct CWarpLockSubresource **a5)
{
  CWarpLockSubresource *v9; // rax
  CWarpLockSubresource *v10; // rbx
  int v11; // eax
  int v12; // edi
  __int64 result; // rax

  v9 = (CWarpLockSubresource *)HeapAlloc(WPF::g_processHeap, 0, 0x40uLL);
  if ( v9 )
    v10 = CWarpLockSubresource::CWarpLockSubresource(v9, a1, a2);
  else
    v10 = 0LL;
  if ( v10 )
  {
    CMILCOMBase::InternalAddRef(v10);
    *((_QWORD *)v10 + 4) = a3;
    if ( a3 )
      ((void (__fastcall *)(struct IDXGIResource *))a3->lpVtbl->AddRef)(a3);
    *((_DWORD *)v10 + 10) = a4;
    v11 = CWarpLockSubresource::Lock(v10);
    v12 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x78u);
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x45u);
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x44u);
  }
  result = (unsigned int)v12;
  *a5 = v10;
  return result;
}
