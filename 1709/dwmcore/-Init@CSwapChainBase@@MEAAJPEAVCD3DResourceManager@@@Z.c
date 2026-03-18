/*
 * XREFs of ?Init@CSwapChainBase@@MEAAJPEAVCD3DResourceManager@@@Z @ 0x1801B2AB0
 * Callers:
 *     ?Init@CDWMSwapChain@@MEAAJPEAVCD3DResourceManager@@@Z @ 0x1801B06A0 (-Init@CDWMSwapChain@@MEAAJPEAVCD3DResourceManager@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x18000B600 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x180082404 (-CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1.c)
 *     ??$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z @ 0x1800824B8 (--$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?SetupDepthBuffer@CSwapChainBase@@IEAAJXZ @ 0x1801B31CC (-SetupDepthBuffer@CSwapChainBase@@IEAAJXZ.c)
 */

__int64 __fastcall CSwapChainBase::Init(CSwapChainBase *this, struct CD3DResourceManager *a2)
{
  char *v2; // rax
  char *v5; // rcx
  char **v6; // rdx
  unsigned int v7; // eax
  unsigned int v8; // r14d
  unsigned int v9; // r15d
  unsigned int v10; // r12d
  signed int v11; // eax
  signed int v12; // ebx
  __int64 v13; // rcx
  unsigned int v14; // eax
  signed int v15; // eax
  unsigned int v17; // [rsp+20h] [rbp-10h]
  unsigned int v18; // [rsp+70h] [rbp+40h] BYREF
  struct CD3DSurface *v19; // [rsp+78h] [rbp+48h] BYREF
  struct ID3D11Texture2D *v20; // [rsp+80h] [rbp+50h] BYREF

  *((_DWORD *)this + 16) = 0;
  v2 = (char *)this + 32;
  v20 = 0LL;
  v19 = 0LL;
  *((_BYTE *)this + 69) = 1;
  v5 = (char *)a2 + 32;
  v6 = (char **)*((_QWORD *)a2 + 5);
  if ( *v6 != v5 )
    __fastfail(3u);
  *(_QWORD *)v2 = v5;
  *((_QWORD *)v2 + 1) = v6;
  *v6 = v2;
  *((_QWORD *)v5 + 1) = v2;
  if ( *((_BYTE *)this + 68) )
    ++*((_DWORD *)a2 + 18);
  *((_DWORD *)a2 + 12) += *((_DWORD *)this + 16);
  v7 = *((_DWORD *)a2 + 12);
  if ( *((_DWORD *)a2 + 13) < v7 )
    *((_DWORD *)a2 + 13) = v7;
  v8 = 0;
  *((_QWORD *)this + 2) = a2;
  if ( *((_DWORD *)this + 40) )
  {
    v9 = v18;
    while ( 1 )
    {
      v10 = v9;
      v11 = (*(__int64 (__fastcall **)(CSwapChainBase *, _QWORD, unsigned int *, struct ID3D11Texture2D **))(*(_QWORD *)this + 264LL))(
              this,
              v8,
              &v18,
              &v20);
      v12 = v11;
      if ( v11 < 0 )
        break;
      v11 = CD3DSurface::CreateViewOfTexture(a2, v20, (char *)&v18, 0, &v19);
      v12 = v11;
      if ( v11 < 0 )
      {
        v17 = 72;
        goto LABEL_23;
      }
      v13 = *((unsigned int *)this + 100);
      v14 = v13 + 1;
      v9 = v13 + 1;
      if ( (int)v13 + 1 < (unsigned int)v13 )
        v9 = v10;
      v12 = v14 < (unsigned int)v13 ? 0x80070216 : 0;
      if ( v14 < (unsigned int)v13 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0xB5u);
      }
      else if ( v9 > *((_DWORD *)this + 99) )
      {
        v15 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 376, 8u, 1, &v19);
        v12 = v15;
        if ( v15 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v15, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 47) + 8 * v13) = v19;
        *((_DWORD *)this + 100) = v9;
      }
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x4Bu);
        goto LABEL_24;
      }
      v19 = 0LL;
      ReleaseInterface<IBitmapLock>((__int64 *)&v20);
      if ( ++v8 >= *((_DWORD *)this + 40) )
        goto LABEL_21;
    }
    v17 = 66;
    goto LABEL_23;
  }
LABEL_21:
  v11 = CSwapChainBase::SetupDepthBuffer(this);
  v12 = v11;
  if ( v11 < 0 )
  {
    v17 = 81;
LABEL_23:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, v17);
  }
LABEL_24:
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v20);
  ReleaseInterfaceNoNULL<CD3DSurface>((__int64)v19);
  return (unsigned int)v12;
}
