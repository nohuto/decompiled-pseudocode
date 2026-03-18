/*
 * XREFs of ??1CCompositionSurfaceBitmap@@MEAA@XZ @ 0x180047A94
 * Callers:
 *     ??_GCCompositionSurfaceBitmap@@MEAAPEAXI@Z @ 0x180047320 (--_GCCompositionSurfaceBitmap@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180078D7C (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionSurfaceBitmap::~CCompositionSurfaceBitmap(CCompositionSurfaceBitmap *this)
{
  char *v2; // rsi
  unsigned int v3; // edi
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned int v6; // ecx
  __int64 v7; // r9
  __int64 v8; // rcx

  *(_QWORD *)this = &CCompositionSurfaceBitmap::`vftable'{for `CContent'};
  v2 = (char *)this + 72;
  v3 = 0;
  *((_QWORD *)this + 7) = &CCompositionSurfaceBitmap::`vftable'{for `ISwapChainContent'};
  *((_QWORD *)this + 8) = &CCompositionSurfaceBitmap::`vftable'{for `IImageSource'};
  *((_QWORD *)this + 9) = &CCompositionSurfaceBitmap::`vftable'{for `ICompositionSurfaceInfoListener'};
  *((_QWORD *)this + 10) = &CCompositionSurfaceBitmap::`vftable'{for `IDirtyRectSource'};
  if ( *((_BYTE *)this + 144) )
    --*(_DWORD *)(*((_QWORD *)this + 2) + 284LL);
  if ( *((_BYTE *)this + 145) )
    --*(_DWORD *)(*((_QWORD *)this + 2) + 280LL);
  v4 = *((_QWORD *)this + 12);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *((_QWORD *)this + 11);
  if ( v5 )
  {
    v6 = *(_DWORD *)(v5 + 384);
    v7 = *(_QWORD *)(v5 + 360);
    if ( v6 )
    {
      do
      {
        if ( v2 == *(char **)(v7 + 8LL * v3) )
          break;
        ++v3;
      }
      while ( v3 < v6 );
    }
    if ( v3 < v6 )
    {
      for ( ; v3 < v6 - 1; v6 = *(_DWORD *)(v5 + 384) )
      {
        v8 = v3++;
        *(_QWORD *)(v7 + 8 * v8) = *(_QWORD *)(v7 + 8LL * v3);
      }
      *(_DWORD *)(v5 + 384) = v6 - 1;
    }
    CMILCOMBase::InternalRelease(*((CMILCOMBase **)this + 11));
  }
  CResource::~CResource(this);
}
