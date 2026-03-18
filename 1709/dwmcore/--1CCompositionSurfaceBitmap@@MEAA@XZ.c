/*
 * XREFs of ??1CCompositionSurfaceBitmap@@MEAA@XZ @ 0x1800299AC
 * Callers:
 *     ??_GCCompositionSurfaceBitmap@@MEAAPEAXI@Z @ 0x180028350 (--_GCCompositionSurfaceBitmap@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCBitmapRealization@@@@YAXPEAVCBitmapRealization@@@Z @ 0x180076A28 (--$ReleaseInterfaceNoNULL@VCBitmapRealization@@@@YAXPEAVCBitmapRealization@@@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180090224 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 */

void __fastcall CCompositionSurfaceBitmap::~CCompositionSurfaceBitmap(CCompositionSurfaceBitmap *this)
{
  unsigned int v1; // edi
  char *v2; // rsi
  __int64 v4; // r8
  unsigned int v5; // ecx
  __int64 v6; // r9
  __int64 v7; // rcx

  v1 = 0;
  v2 = (char *)this + 72;
  *(_QWORD *)this = &CCompositionSurfaceBitmap::`vftable'{for `CContent'};
  *((_QWORD *)this + 7) = &CCompositionSurfaceBitmap::`vftable'{for `ISwapChainContent'};
  *((_QWORD *)this + 8) = &CCompositionSurfaceBitmap::`vftable'{for `IImageSource'};
  *((_QWORD *)this + 9) = &CCompositionSurfaceBitmap::`vftable'{for `ICompositionSurfaceInfoListener'};
  *((_QWORD *)this + 10) = &CCompositionSurfaceBitmap::`vftable'{for `IDirtyRectSource'};
  if ( *((_BYTE *)this + 144) )
    --*(_DWORD *)(*((_QWORD *)this + 2) + 260LL);
  if ( *((_BYTE *)this + 145) )
    --*(_DWORD *)(*((_QWORD *)this + 2) + 256LL);
  ReleaseInterfaceNoNULL<CBitmapRealization>(*((_QWORD *)this + 12));
  v4 = *((_QWORD *)this + 11);
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 368);
    v6 = *(_QWORD *)(v4 + 344);
    if ( v5 )
    {
      do
      {
        if ( v2 == *(char **)(v6 + 8LL * v1) )
          break;
        ++v1;
      }
      while ( v1 < v5 );
    }
    if ( v1 < v5 )
    {
      if ( v1 < v5 - 1 )
      {
        do
        {
          v7 = v1++;
          *(_QWORD *)(v6 + 8 * v7) = *(_QWORD *)(v6 + 8LL * v1);
        }
        while ( v1 < *(_DWORD *)(v4 + 368) - 1 );
      }
      --*(_DWORD *)(v4 + 368);
    }
    CMILCOMBase::InternalRelease(*((CMILCOMBase **)this + 11));
  }
  CResource::~CResource(this);
}
