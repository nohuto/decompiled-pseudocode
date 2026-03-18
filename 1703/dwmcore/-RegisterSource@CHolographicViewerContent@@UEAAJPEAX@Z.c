/*
 * XREFs of ?RegisterSource@CHolographicViewerContent@@UEAAJPEAX@Z @ 0x1801A57E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?OpenIndirectSwapchain@CD3DDeviceLevel1@@QEAAJPEAX0W4DXGI_INTERNAL_INDIRECT_SWAP_CHAIN_FLAG@@KPEAPEAUIDXGIIndirectSwapChain@@@Z @ 0x180197264 (-OpenIndirectSwapchain@CD3DDeviceLevel1@@QEAAJPEAX0W4DXGI_INTERNAL_INDIRECT_SWAP_CHAIN_FLAG@@KPE.c)
 *     ?UnregisterSourceLocked@CHolographicViewerContent@@AEAAJXZ @ 0x1801A592C (-UnregisterSourceLocked@CHolographicViewerContent@@AEAAJXZ.c)
 */

__int64 __fastcall CHolographicViewerContent::RegisterSource(CHolographicViewerContent *this, void *a2)
{
  unsigned int v2; // edi
  RTL_SRWLOCK *v5; // rbx
  int v6; // eax
  __int64 v7; // r8
  int v8; // eax
  const GUID *v9; // r8
  const GUID *v10; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF

  v2 = 0;
  if ( a2 )
  {
    v5 = (RTL_SRWLOCK *)((char *)this + 80);
    AcquireSRWLockExclusive((PSRWLOCK)this + 10);
    if ( a2 != *((void **)this + 2) )
    {
      v6 = CHolographicViewerContent::UnregisterSourceLocked((CHolographicViewerContent *)((char *)this - 56));
      v2 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x1BAu);
      }
      else
      {
        Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)this + 3);
        v8 = CD3DDeviceLevel1::OpenIndirectSwapchain(
               *((_QWORD *)this + 1),
               (__int64)a2,
               v7,
               8,
               0x80000000,
               (_QWORD *)this + 3);
        v2 = v8;
        if ( v8 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x1C0u);
        }
        else
        {
          *((_QWORD *)this + 2) = a2;
          if ( dword_18023D7F0 > 5u )
            TlgWrite((TraceLoggingHProvider)&dword_18023D7F0, &unk_1801F9B67, v9, v10, 2u, &pData);
        }
      }
    }
    ReleaseSRWLockExclusive(v5);
  }
  else
  {
    return (unsigned int)-2147024890;
  }
  return v2;
}
