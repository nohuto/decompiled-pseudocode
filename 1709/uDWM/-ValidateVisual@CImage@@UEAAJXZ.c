/*
 * XREFs of ?ValidateVisual@CImage@@UEAAJXZ @ 0x1800136A0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateBitmap@CImage@@QEAAJXZ @ 0x1800135C4 (-UpdateBitmap@CImage@@QEAAJXZ.c)
 *     ?UpdateRenderData@CRenderDataVisual@@UEAAJXZ @ 0x1800152B0 (-UpdateRenderData@CRenderDataVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180018C40 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?UpdateViewPort@CImage@@QEAAJXZ @ 0x180071A80 (-UpdateViewPort@CImage@@QEAAJXZ.c)
 */

__int64 __fastcall CImage::ValidateVisual(struct CResource **this)
{
  int v2; // eax
  int v3; // edi
  __int64 (__fastcall *v4)(CRenderDataVisual *__hidden); // rax
  int v5; // eax
  int updated; // eax
  int v8; // r9d
  unsigned int v9; // [rsp+20h] [rbp-18h]

  if ( ((_DWORD)this[10] & 0x1000) != 0 )
  {
    updated = CImage::UpdateBitmap(this);
    v3 = updated;
    if ( updated < 0 )
    {
      v9 = 87;
LABEL_16:
      v8 = updated;
LABEL_23:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, v9);
      return (unsigned int)v3;
    }
    *((_DWORD *)this + 20) &= ~0x1000u;
  }
  if ( ((_DWORD)this[10] & 0x2000) == 0 )
    goto LABEL_3;
  updated = CImage::UpdateViewPort((CImage *)this);
  v3 = updated;
  if ( updated < 0 )
  {
    v9 = 93;
    goto LABEL_16;
  }
  *((_DWORD *)this + 20) &= ~0x2000u;
LABEL_3:
  v2 = CVisual::ValidateVisual((CVisual *)this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x94u);
  }
  else if ( ((_BYTE)this[10] & 4) != 0 )
  {
    v4 = (__int64 (__fastcall *)(CRenderDataVisual *__hidden))*((_QWORD *)*this + 22);
    if ( v4 == CRenderDataVisual::UpdateRenderData )
      v5 = CRenderDataVisual::UpdateRenderData((CRenderDataVisual *)this);
    else
      v5 = v4((CRenderDataVisual *)this);
    v3 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x98u);
    else
      *((_DWORD *)this + 20) &= ~4u;
  }
  if ( v3 < 0 )
  {
    v9 = 97;
    v8 = v3;
    goto LABEL_23;
  }
  return (unsigned int)v3;
}
