/*
 * XREFs of ?GetCurrentRenderingRealization@CBitmapResource@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x18008D770
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CD2DBitmapCacheSourceRealization@@SAJPEAVID2DBitmapCacheSource@@PEAPEAVCBitmapRealization@@@Z @ 0x180086D24 (-Create@CD2DBitmapCacheSourceRealization@@SAJPEAVID2DBitmapCacheSource@@PEAPEAVCBitmapRealizatio.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapResource::GetCurrentRenderingRealization(
        CBitmapResource *this,
        struct IBitmapRealization **a2)
{
  unsigned int v2; // ebx
  __int64 *v5; // r14
  struct ID2DBitmapCacheSource *v7; // rax
  struct ID2DBitmapCacheSource *v8; // rdi
  __int64 v9; // rcx
  int v10; // ebx
  signed int v11; // eax
  struct ID2DBitmapCacheSource *v12; // [rsp+60h] [rbp+30h] BYREF
  struct ID2DBitmapCacheSource *v13; // [rsp+70h] [rbp+40h] BYREF

  v2 = 0;
  if ( !*((_QWORD *)this + 9) )
  {
    v2 = -2003292404;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88982F0C, 0x36u);
    return v2;
  }
  v5 = (__int64 *)((char *)this + 80);
  if ( !*((_QWORD *)this + 10) )
  {
    v12 = 0LL;
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v12);
    if ( (***((int (__fastcall ****)(_QWORD, GUID *, struct ID2DBitmapCacheSource **))this + 9))(
           *((_QWORD *)this + 9),
           &GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3,
           &v12) >= 0 )
      goto LABEL_15;
    v7 = (struct ID2DBitmapCacheSource *)HeapAlloc(WPF::g_processHeap, 0, 0x28uLL);
    v8 = v7;
    if ( v7 )
    {
      v9 = *((_QWORD *)this + 9);
      v10 = DisplayId::None;
      *((_DWORD *)v7 + 2) = 0;
      *(_QWORD *)v7 = &CBitmapSourceD2DCacheAdapter::`vftable'{for `CMILCOMBase'};
      *((_QWORD *)v7 + 2) = &CBitmapSourceD2DCacheAdapter::`vftable'{for `ID2DBitmapCacheSource'};
      *((_QWORD *)v7 + 3) = v9;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      *((_DWORD *)v8 + 8) = v10;
      *((_BYTE *)v8 + 36) = 0;
    }
    else
    {
      v8 = 0LL;
    }
    if ( v8 )
      v8 = (struct ID2DBitmapCacheSource *)((char *)v8 + 16);
    if ( v8 )
      (*(void (__fastcall **)(struct ID2DBitmapCacheSource *))(*(_QWORD *)v8 + 8LL))(v8);
    v13 = v12;
    v12 = v8;
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v13);
    if ( v12 )
    {
LABEL_15:
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v5);
      v11 = CD2DBitmapCacheSourceRealization::Create(v12, (struct CBitmapRealization **)v5);
      v2 = v11;
      if ( v11 >= 0 )
      {
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v12);
        goto LABEL_3;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x43u);
    }
    else
    {
      v2 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x40u);
    }
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v12);
    return v2;
  }
LABEL_3:
  (**(void (__fastcall ***)(__int64, GUID *, struct IBitmapRealization **))*v5)(
    *v5,
    &GUID_db178a3c_d733_4570_9513_5392d717955f,
    a2);
  return v2;
}
