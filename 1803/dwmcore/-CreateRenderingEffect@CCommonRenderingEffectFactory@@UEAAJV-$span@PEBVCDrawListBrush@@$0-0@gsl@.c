/*
 * XREFs of ?CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x180070640
 * Callers:
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x18008CFF0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800213D4 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0SamplerMode@@QEAA@XZ @ 0x18007314C (--0SamplerMode@@QEAA@XZ.c)
 *     ??0CDrawListBitmap@@QEAA@XZ @ 0x180077350 (--0CDrawListBitmap@@QEAA@XZ.c)
 *     ??0CDrawListBitmap@@QEAA@AEBV0@@Z @ 0x180077360 (--0CDrawListBitmap@@QEAA@AEBV0@@Z.c)
 *     ?InternalRelease@?$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x180089E20 (-InternalRelease@-$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@VIImageSource@@@WRL@Microsoft@@IEBAXXZ @ 0x180089E50 (-InternalAddRef@-$ComPtr@VIImageSource@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCommonRenderingEffect@@@Z @ 0x18008B9AC (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCommonRenderingEffect@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCommonRenderingEffectFactory::CreateRenderingEffect(
        struct CCommonRenderingEffect *a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v3; // edi
  _QWORD *v4; // r12
  char v5; // r14
  __int64 v6; // r15
  __int64 v7; // rbx
  struct CObjectCache *ObjectCache; // rax
  char *v9; // rsi
  int v10; // edx
  __int16 *v11; // rax
  char v12; // bl
  CDrawListBitmap *v13; // rax
  __int16 *v14; // rax
  CDrawListBitmap *v15; // r13
  char v16; // r14
  __int64 *v17; // r15
  __int64 v18; // rbx
  CDrawListBitmap *v19; // r12
  __int64 v20; // rbx
  SamplerMode *v21; // r12
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rbx
  CDrawListBitmap *v26; // r15
  __int64 v27; // rbx
  __int64 v28; // rbx
  __int16 *v29; // rcx
  char v30; // al
  __int16 *v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int16 v35; // [rsp+30h] [rbp-69h] BYREF
  char v36; // [rsp+32h] [rbp-67h]
  __int16 v37; // [rsp+33h] [rbp-66h] BYREF
  char v38; // [rsp+35h] [rbp-64h]
  __int64 v39; // [rsp+38h] [rbp-61h] BYREF
  __int64 v40; // [rsp+40h] [rbp-59h] BYREF
  CDrawListBitmap *v41; // [rsp+48h] [rbp-51h]
  __int16 *v42; // [rsp+50h] [rbp-49h]
  __int16 *v43; // [rsp+58h] [rbp-41h]
  __int128 v44; // [rsp+60h] [rbp-39h] BYREF
  __int64 v45; // [rsp+70h] [rbp-29h]
  __int128 v46; // [rsp+78h] [rbp-21h] BYREF
  __int64 v47; // [rsp+88h] [rbp-11h]
  __int64 v48; // [rsp+90h] [rbp-9h] BYREF
  __int64 v49; // [rsp+98h] [rbp-1h]
  char v50[8]; // [rsp+A8h] [rbp+Fh] BYREF
  __int64 v51[8]; // [rsp+B0h] [rbp+17h] BYREF
  int v52; // [rsp+108h] [rbp+6Fh] BYREF
  _QWORD *v53; // [rsp+110h] [rbp+77h]
  __int16 v54; // [rsp+118h] [rbp+7Fh] BYREF
  char v55; // [rsp+11Ah] [rbp+81h]

  v53 = a3;
  v3 = 0;
  v4 = a3;
  v52 = 0;
  v5 = 0;
  if ( *(__int64 *)a2 <= 0 )
    v6 = 0LL;
  else
    v6 = **(_QWORD **)(a2 + 8);
  if ( *(__int64 *)a2 > 1 )
    v7 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL);
  else
    v7 = 0LL;
  ObjectCache = CThreadContext::GetObjectCache(a1);
  v9 = 0LL;
  v10 = *((_DWORD *)ObjectCache + 1);
  if ( v10 )
  {
    v9 = (char *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v9;
    *((_DWORD *)ObjectCache + 1) = v10 - 1;
  }
  if ( v9 || (v9 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x48uLL)) != 0LL )
  {
    if ( v7 )
    {
      v35 = *(_WORD *)(v7 + 96);
      v36 = *(_BYTE *)(v7 + 98);
      v11 = &v35;
    }
    else
    {
      LOWORD(v52) = 257;
      v11 = (__int16 *)&v52;
      BYTE2(v52) = 1;
    }
    v43 = v11;
    if ( v7 )
    {
      v13 = CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)v50, (const struct CDrawListBitmap *)(v7 + 56));
      v12 = 1;
    }
    else
    {
      v12 = 2;
      v47 = 0LL;
      v13 = (CDrawListBitmap *)&v46;
      v46 = 0LL;
    }
    v41 = v13;
    if ( v6 )
    {
      v37 = *(_WORD *)(v6 + 96);
      v38 = *(_BYTE *)(v6 + 98);
      v14 = &v37;
    }
    else
    {
      v54 = 257;
      v14 = &v54;
      v55 = 1;
    }
    v42 = v14;
    if ( v6 )
    {
      v15 = CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)&v48, (const struct CDrawListBitmap *)(v6 + 56));
      v16 = 4;
    }
    else
    {
      v15 = (CDrawListBitmap *)&v44;
      v44 = 0LL;
      v45 = 0LL;
      v16 = 8;
    }
    v5 = v12 | v16;
    *(_QWORD *)v9 = &CMILRefCountBase::`vftable';
    v17 = (__int64 *)(v9 + 16);
    *((_DWORD *)v9 + 2) = 0;
    *(_QWORD *)v9 = &CCommonRenderingEffect::`vftable';
    v18 = 2LL;
    v19 = (CDrawListBitmap *)(v9 + 16);
    do
    {
      CDrawListBitmap::CDrawListBitmap(v19);
      v19 = (CDrawListBitmap *)((char *)v19 + 24);
      --v18;
    }
    while ( v18 );
    v20 = 2LL;
    v21 = (SamplerMode *)(v9 + 64);
    do
    {
      SamplerMode::SamplerMode(v21);
      v21 = (SamplerMode *)((char *)v21 + 3);
      --v20;
    }
    while ( v20 );
    v22 = *v17;
    v23 = *(_QWORD *)v15;
    if ( *v17 != *(_QWORD *)v15 )
    {
      if ( v23 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v23 + 8LL))(*(_QWORD *)v15);
        v22 = *v17;
      }
      *v17 = v23;
      if ( v22 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
    v24 = *((_QWORD *)v9 + 3);
    v25 = *((_QWORD *)v15 + 1);
    if ( v24 != v25 )
    {
      if ( v25 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v25 + 8LL))(*((_QWORD *)v15 + 1));
        v24 = *((_QWORD *)v9 + 3);
      }
      *((_QWORD *)v9 + 3) = v25;
      if ( v24 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    }
    v9[32] = *((_BYTE *)v15 + 16);
    v26 = v41;
    v27 = *(_QWORD *)v41;
    if ( *((_QWORD *)v9 + 5) != *(_QWORD *)v41 )
    {
      v39 = *(_QWORD *)v41;
      Microsoft::WRL::ComPtr<IImageSource>::InternalAddRef(&v39);
      v39 = *((_QWORD *)v9 + 5);
      *((_QWORD *)v9 + 5) = v27;
      Microsoft::WRL::ComPtr<IImageSource>::InternalRelease(&v39);
    }
    v28 = *((_QWORD *)v26 + 1);
    if ( *((_QWORD *)v9 + 6) != v28 )
    {
      v40 = *((_QWORD *)v26 + 1);
      Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v40);
      v40 = *((_QWORD *)v9 + 6);
      *((_QWORD *)v9 + 6) = v28;
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v40);
    }
    v29 = v42;
    v4 = v53;
    v9[56] = *((_BYTE *)v26 + 16);
    *((_WORD *)v9 + 32) = *v29;
    v30 = *((_BYTE *)v29 + 2);
    v31 = v43;
    v9[66] = v30;
    *(_WORD *)(v9 + 67) = *v31;
    v9[69] = *((_BYTE *)v31 + 2);
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
    _InterlockedIncrement((volatile signed __int32 *)v9 + 2);
  if ( (v5 & 8) != 0 )
  {
    v5 &= ~8u;
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v44 + 1);
    Microsoft::WRL::ComPtr<IImageSource>::InternalRelease(&v44);
  }
  if ( (v5 & 4) != 0 )
  {
    v32 = v49;
    v5 &= ~4u;
    if ( v49 )
    {
      v49 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
    }
    v33 = v48;
    if ( v48 )
    {
      v48 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
    }
  }
  if ( (v5 & 2) != 0 )
  {
    v5 &= ~2u;
    if ( *((_QWORD *)&v46 + 1) )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v46 + 1) + 16LL))(*((_QWORD *)&v46 + 1));
    if ( (_QWORD)v46 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v46 + 16LL))(v46);
  }
  if ( (v5 & 1) != 0 )
  {
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v51);
    Microsoft::WRL::ComPtr<IImageSource>::InternalRelease(v50);
  }
  if ( v9 )
  {
    *v4 = v9;
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x33u);
  }
  return v3;
}
