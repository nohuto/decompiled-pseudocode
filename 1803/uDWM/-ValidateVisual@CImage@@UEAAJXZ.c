/*
 * XREFs of ?ValidateVisual@CImage@@UEAAJXZ @ 0x18000D690
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateBitmap@CImage@@QEAAJXZ @ 0x18000D5B4 (-UpdateBitmap@CImage@@QEAAJXZ.c)
 *     ?UpdateRenderData@CRenderDataVisual@@UEAAJXZ @ 0x180017FB0 (-UpdateRenderData@CRenderDataVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180026760 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?UpdateViewPort@CImage@@QEAAJXZ @ 0x180078350 (-UpdateViewPort@CImage@@QEAAJXZ.c)
 */

__int64 __fastcall CImage::ValidateVisual(CImage *this)
{
  int v1; // eax
  int v3; // eax
  int v4; // edi
  __int64 (__fastcall *v5)(CRenderDataVisual *__hidden); // rax
  int v6; // eax
  int updated; // eax
  int v9; // r9d
  unsigned int v10; // [rsp+20h] [rbp-18h]

  v1 = *((_DWORD *)this + 20);
  if ( (v1 & 0x1000) != 0 )
  {
    updated = CImage::UpdateBitmap(this);
    v4 = updated;
    if ( updated < 0 )
    {
      v10 = 87;
LABEL_16:
      v9 = updated;
LABEL_23:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, v10);
      return (unsigned int)v4;
    }
    *((_DWORD *)this + 20) &= ~0x1000u;
    v1 = *((_DWORD *)this + 20);
  }
  if ( (v1 & 0x2000) == 0 )
    goto LABEL_3;
  updated = CImage::UpdateViewPort(this);
  v4 = updated;
  if ( updated < 0 )
  {
    v10 = 93;
    goto LABEL_16;
  }
  *((_DWORD *)this + 20) &= ~0x2000u;
LABEL_3:
  v3 = CVisual::ValidateVisual(this);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x94u);
  }
  else if ( (*((_BYTE *)this + 80) & 4) != 0 )
  {
    v5 = *(__int64 (__fastcall **)(CRenderDataVisual *__hidden))(*(_QWORD *)this + 176LL);
    if ( v5 == CRenderDataVisual::UpdateRenderData )
      v6 = CRenderDataVisual::UpdateRenderData(this);
    else
      v6 = v5(this);
    v4 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x98u);
    else
      *((_DWORD *)this + 20) &= ~4u;
  }
  if ( v4 < 0 )
  {
    v10 = 97;
    v9 = v4;
    goto LABEL_23;
  }
  return (unsigned int)v4;
}
