/*
 * XREFs of ?GetBuffer@CDWMSwapChain@@UEAAJIPEAIPEAPEAUID3D11Texture2D@@@Z @ 0x1801B05C0
 * Callers:
 *     ?GetAdvancedDirectFlipRestoreBuffer@CDWMSwapChain@@UEAAJ_NPEAPEAUID3D11Texture2D@@@Z @ 0x1801B04D0 (-GetAdvancedDirectFlipRestoreBuffer@CDWMSwapChain@@UEAAJ_NPEAPEAUID3D11Texture2D@@@Z.c)
 *     ?PresentInternal@CDWMSwapChainDDA@@MEAAJPEBVCRegion@@IIPEAURenderTargetPresentParameters@@@Z @ 0x1801B2310 (-PresentInternal@CDWMSwapChainDDA@@MEAAJPEBVCRegion@@IIPEAURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMSwapChain::GetBuffer(
        CDWMSwapChain *this,
        __int64 a2,
        unsigned int *a3,
        struct ID3D11Texture2D **a4)
{
  unsigned int v6; // edi
  signed int v7; // eax
  unsigned int v8; // ebx
  signed int v9; // eax
  signed int v10; // eax
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0LL;
  v6 = a2;
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, GUID *, struct ID3D11Texture2D **))(**((_QWORD **)this + 52) + 72LL))(
         *((_QWORD *)this + 52),
         a2,
         &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
         a4);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0xB4u);
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, GUID *, __int64 *))(**((_QWORD **)this + 52) + 72LL))(
           *((_QWORD *)this + 52),
           v6,
           &GUID_035f3ab4_482e_4e50_b41f_8a7f8bd8960b,
           &v12);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0xB8u);
    }
    else
    {
      v10 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v12 + 72LL))(v12, a3);
      v8 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0xBAu);
    }
  }
  ReleaseInterfaceNoNULL<CManipulationManager>(v12);
  return v8;
}
