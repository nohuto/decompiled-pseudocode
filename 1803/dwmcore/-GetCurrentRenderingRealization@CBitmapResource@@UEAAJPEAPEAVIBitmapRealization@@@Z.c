/*
 * XREFs of ?GetCurrentRenderingRealization@CBitmapResource@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800B53E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CD2DBitmapCacheSourceRealization@@SAJPEAVID2DBitmapCacheSource@@PEAPEAVCBitmapRealization@@@Z @ 0x1800B8334 (-Create@CD2DBitmapCacheSourceRealization@@SAJPEAVID2DBitmapCacheSource@@PEAPEAVCBitmapRealizatio.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapResource::GetCurrentRenderingRealization(
        CBitmapResource *this,
        struct IBitmapRealization **a2)
{
  __int64 *v4; // r14
  unsigned int v5; // ebx
  void (__fastcall ***v6)(_QWORD, GUID *, struct IBitmapRealization **); // rcx
  struct ID2DBitmapCacheSource *v8; // rax
  struct ID2DBitmapCacheSource *v9; // rdi
  __int64 v10; // rcx
  int v11; // ebx
  int v12; // eax
  struct ID2DBitmapCacheSource *v13; // [rsp+60h] [rbp+30h] BYREF
  struct ID2DBitmapCacheSource *v14; // [rsp+70h] [rbp+40h] BYREF

  if ( !*((_QWORD *)this + 9) )
  {
    v5 = -2003292404;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292404, 0x36u);
    return v5;
  }
  v4 = (__int64 *)((char *)this + 80);
  v5 = 0;
  v6 = (void (__fastcall ***)(_QWORD, GUID *, struct IBitmapRealization **))*((_QWORD *)this + 10);
  if ( !v6 )
  {
    v13 = 0LL;
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v13);
    if ( (***((int (__fastcall ****)(_QWORD, GUID *, struct ID2DBitmapCacheSource **))this + 9))(
           *((_QWORD *)this + 9),
           &GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3,
           &v13) >= 0 )
      goto LABEL_15;
    v8 = (struct ID2DBitmapCacheSource *)HeapAlloc(WPF::g_processHeap, 0, 0x28uLL);
    v9 = v8;
    if ( v8 )
    {
      v10 = *((_QWORD *)this + 9);
      v11 = DisplayId::None;
      *((_DWORD *)v8 + 2) = 0;
      *(_QWORD *)v8 = &CBitmapSourceD2DCacheAdapter::`vftable'{for `CMILCOMBase'};
      *((_QWORD *)v8 + 2) = &CBitmapSourceD2DCacheAdapter::`vftable'{for `ID2DBitmapCacheSource'};
      *((_QWORD *)v8 + 3) = v10;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      *((_DWORD *)v9 + 8) = v11;
      *((_BYTE *)v9 + 36) = 0;
    }
    else
    {
      v9 = 0LL;
    }
    if ( v9 )
      v9 = (struct ID2DBitmapCacheSource *)((char *)v9 + 16);
    if ( v9 )
      (*(void (__fastcall **)(struct ID2DBitmapCacheSource *))(*(_QWORD *)v9 + 8LL))(v9);
    v14 = v13;
    v13 = v9;
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v14);
    if ( v13 )
    {
LABEL_15:
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v4);
      v12 = CD2DBitmapCacheSourceRealization::Create(v13, (struct CBitmapRealization **)v4);
      v5 = v12;
      if ( v12 >= 0 )
      {
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v13);
        v6 = (void (__fastcall ***)(_QWORD, GUID *, struct IBitmapRealization **))*v4;
        goto LABEL_3;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x43u);
    }
    else
    {
      v5 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x40u);
    }
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v13);
    return v5;
  }
LABEL_3:
  (**v6)(v6, &GUID_db178a3c_d733_4570_9513_5392d717955f, a2);
  return v5;
}
