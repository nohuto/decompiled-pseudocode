/*
 * XREFs of ?EnsureStrokeStyleForBounds@CSpriteVectorShape@@AEAAJXZ @ 0x1801A4A4C
 * Callers:
 *     ?ComputeBounds@CSpriteVectorShape@@QEAAXXZ @ 0x1801A468C (-ComputeBounds@CSpriteVectorShape@@QEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180088FE0 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSpriteVectorShape::EnsureStrokeStyleForBounds(CSpriteVectorShape *this)
{
  unsigned int v1; // ebx
  __int64 *v2; // rdi
  int v3; // eax
  float v4; // xmm0_4
  bool v5; // zf
  int D2DFactoryNoRef; // eax
  int v7; // eax
  struct CD2DFactory *v9; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v10[8]; // [rsp+38h] [rbp-30h] BYREF

  v1 = 0;
  v2 = (__int64 *)((char *)this + 112);
  if ( !*((_QWORD *)this + 14) )
  {
    v3 = *((_DWORD *)this + 43);
    v4 = fmaxf(1.0, *((float *)this + 47));
    v10[5] = 0;
    v10[0] = v3;
    v10[1] = *((_DWORD *)this + 44);
    v10[2] = *((_DWORD *)this + 42);
    v10[3] = *((_DWORD *)this + 45);
    v5 = *((_BYTE *)this + 196) == 0;
    *(float *)&v10[4] = v4;
    v10[6] = 0;
    v10[7] = !v5;
    D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(this, &v9);
    v1 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D2DFactoryNoRef, 0x1C1u);
    }
    else
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v2);
      v7 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _QWORD, _QWORD, __int64 *))(**((_QWORD **)v9 + 3) + 144LL))(
             *((_QWORD *)v9 + 3),
             v10,
             0LL,
             0LL,
             v2);
      v1 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x1C6u);
    }
  }
  return v1;
}
