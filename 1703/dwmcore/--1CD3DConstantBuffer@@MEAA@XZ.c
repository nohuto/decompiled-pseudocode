/*
 * XREFs of ??1CD3DConstantBuffer@@MEAA@XZ @ 0x1800216E0
 * Callers:
 *     ??_ECD3DConstantBuffer@@MEAAPEAXI@Z @ 0x180021730 (--_ECD3DConstantBuffer@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DConstantBuffer::~CD3DConstantBuffer(CD3DConstantBuffer *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CD3DPixelShader::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)this + 3) = &CDWMOffScreenSwapChain::`vftable'{for `IDeviceResource'};
  v2 = *((_QWORD *)this + 16);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 16) = 0LL;
  }
  CD3DResource::~CD3DResource(this);
}
