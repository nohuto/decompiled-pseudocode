/*
 * XREFs of ?Init@CSwapChainBase@@MEAAJPEAVCD3DResourceManager@@@Z @ 0x18003F380
 * Callers:
 *     ?Init@CDWMSwapChain@@MEAAJPEAVCD3DResourceManager@@@Z @ 0x18003F170 (-Init@CDWMSwapChain@@MEAAJPEAVCD3DResourceManager@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?SetupDepthBuffer@CSwapChainBase@@IEAAJXZ @ 0x18003F25C (-SetupDepthBuffer@CSwapChainBase@@IEAAJXZ.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18004C100 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?Use@CD3DResourceManager@@QEAAXAEBVCD3DResource@@@Z @ 0x18004D2D4 (-Use@CD3DResourceManager@@QEAAXAEBVCD3DResource@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x1800C54B8 (-CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x1800CE0F0 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSwapChainBase::Init(CSwapChainBase *this, struct CD3DResourceManager *a2)
{
  bool v4; // zf
  char *v5; // rax
  char *v6; // rcx
  char **v7; // rdx
  unsigned int v8; // eax
  unsigned int v9; // r14d
  unsigned int v10; // r15d
  int v11; // eax
  int v12; // ebx
  __int64 v13; // rcx
  unsigned int v14; // eax
  int v16; // eax
  char *v17; // rax
  char *v18; // rcx
  char **v19; // rdx
  unsigned int v20; // [rsp+20h] [rbp-10h]
  unsigned int v21; // [rsp+70h] [rbp+40h] BYREF
  CMILPoolResource *v22; // [rsp+78h] [rbp+48h] BYREF
  struct ID3D11Texture2D *v23; // [rsp+80h] [rbp+50h] BYREF

  v23 = 0LL;
  v22 = 0LL;
  *((_DWORD *)this + 18) = 0;
  v4 = *((_BYTE *)this + 68) == 0;
  *((_BYTE *)this + 77) = 1;
  if ( v4 )
  {
    v5 = (char *)this + 32;
    v6 = (char *)a2 + 32;
    v7 = (char **)*((_QWORD *)a2 + 5);
    if ( *v7 != v6 )
      __fastfail(3u);
    *(_QWORD *)v5 = v6;
    *((_QWORD *)v5 + 1) = v7;
    *v7 = v5;
    *((_QWORD *)v6 + 1) = v5;
  }
  else
  {
    v17 = (char *)a2 + 80;
    v18 = (char *)this + 32;
    v19 = (char **)*((_QWORD *)a2 + 11);
    if ( *v19 != v17 )
      __fastfail(3u);
    *((_QWORD *)v18 + 1) = v19;
    *(_QWORD *)v18 = v17;
    *v19 = v18;
    *((_QWORD *)v17 + 1) = v18;
    CD3DResourceManager::Use(a2, this);
  }
  if ( *((_BYTE *)this + 76) )
    ++*((_DWORD *)a2 + 30);
  *((_DWORD *)a2 + 24) += *((_DWORD *)this + 18);
  v8 = *((_DWORD *)a2 + 24);
  if ( *((_DWORD *)a2 + 25) < v8 )
    *((_DWORD *)a2 + 25) = v8;
  v9 = 0;
  *((_QWORD *)this + 2) = a2;
  if ( *((_DWORD *)this + 42) )
  {
    v10 = v21;
    while ( 1 )
    {
      v11 = (*(__int64 (__fastcall **)(CSwapChainBase *, _QWORD, unsigned int *, struct ID3D11Texture2D **))(*(_QWORD *)this + 256LL))(
              this,
              v9,
              &v21,
              &v23);
      v12 = v11;
      if ( v11 < 0 )
        break;
      v11 = CD3DSurface::CreateViewOfTexture(a2, v23, &v21, 0, &v22);
      v12 = v11;
      if ( v11 < 0 )
      {
        v20 = 101;
        goto LABEL_34;
      }
      v13 = *((unsigned int *)this + 72);
      v14 = v13 + 1;
      if ( (int)v13 + 1 >= (unsigned int)v13 )
        v10 = v13 + 1;
      v12 = v14 < (unsigned int)v13 ? 0x80070216 : 0;
      if ( v14 < (unsigned int)v13 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xB5u);
      }
      else if ( v10 > *((_DWORD *)this + 71) )
      {
        v16 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 264, 8LL, 1LL, &v22);
        v12 = v16;
        if ( v16 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 33) + 8 * v13) = v22;
        *((_DWORD *)this + 72) = v10;
      }
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x68u);
        goto LABEL_20;
      }
      v22 = 0LL;
      ReleaseInterface<IBitmapLock>(&v23);
      if ( ++v9 >= *((_DWORD *)this + 42) )
        goto LABEL_19;
    }
    v20 = 95;
  }
  else
  {
LABEL_19:
    v11 = CSwapChainBase::SetupDepthBuffer(this);
    v12 = v11;
    if ( v11 >= 0 )
      goto LABEL_20;
    v20 = 110;
  }
LABEL_34:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v20);
LABEL_20:
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v23);
  if ( v22 )
    CMILPoolResource::Release(v22);
  return (unsigned int)v12;
}
