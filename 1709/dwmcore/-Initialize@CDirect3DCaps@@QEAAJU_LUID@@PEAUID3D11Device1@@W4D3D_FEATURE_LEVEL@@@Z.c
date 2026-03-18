/*
 * XREFs of ?Initialize@CDirect3DCaps@@QEAAJU_LUID@@PEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@@Z @ 0x1800BE814
 * Callers:
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z @ 0x180020D0C (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDirect3DCaps::Initialize(CDirect3DCaps *this, struct _LUID a2, struct ID3D11Device1 *a3, int a4)
{
  __int64 v7; // rcx
  __int64 result; // rax
  struct ID3D11Device1Vtbl *lpVtbl; // rax
  HRESULT (__stdcall *CreateTexture2D)(ID3D11Device1 *, const D3D11_TEXTURE2D_DESC *, const D3D11_SUBRESOURCE_DATA *, ID3D11Texture2D **); // rax
  __int64 v11; // [rsp+30h] [rbp-50h] BYREF
  __int64 v12; // [rsp+38h] [rbp-48h] BYREF
  _DWORD v13[12]; // [rsp+40h] [rbp-40h] BYREF

  *(struct _LUID *)this = a2;
  if ( a4 >= 37120 )
  {
    *((_QWORD *)this + 5) = 0xFFFFLL;
    *((_DWORD *)this + 2) = 2;
    *((_DWORD *)this + 3) = 2;
    *((_DWORD *)this + 8) = 2048;
    *((_DWORD *)this + 9) = 2048;
    *((_DWORD *)this + 6) = 8;
    *((_DWORD *)this + 7) = 8;
  }
  if ( a4 >= 37632 )
  {
    *((_DWORD *)this + 8) = 4096;
    *((_DWORD *)this + 9) = 4096;
    *((_QWORD *)this + 5) = 0xFFFFFLL;
  }
  if ( a4 >= 40960 )
  {
    *((_QWORD *)this + 5) = 1431655765LL;
    *((_DWORD *)this + 2) = 4;
    *((_DWORD *)this + 3) = 4;
    *((_DWORD *)this + 8) = 0x2000;
    *((_DWORD *)this + 9) = 0x2000;
  }
  if ( a4 >= 45056 )
  {
    *((_DWORD *)this + 8) = 0x4000;
    *((_DWORD *)this + 9) = 0x4000;
  }
  if ( *((_DWORD *)this + 8) < 0x1000u )
  {
    lpVtbl = a3->lpVtbl;
    v11 = 0LL;
    v13[6] = 0;
    v13[7] = 0;
    CreateTexture2D = lpVtbl->CreateTexture2D;
    v13[10] = 0;
    v13[9] = 0;
    v13[8] = 8;
    v13[0] = 2100;
    v13[1] = 1;
    v13[2] = 1;
    v13[3] = 1;
    v13[4] = 61;
    v13[5] = 1;
    if ( ((int (__fastcall *)(struct ID3D11Device1 *, _DWORD *, _QWORD, __int64 *))CreateTexture2D)(a3, v13, 0LL, &v11) >= 0 )
    {
      *((_DWORD *)this + 8) = 4096;
      *((_DWORD *)this + 9) = 4096;
    }
    ReleaseInterfaceNoNULL<CManipulationManager>(v11);
  }
  if ( ((__int64 (__fastcall *)(struct ID3D11Device1 *, GUID *, __int64 *))a3->lpVtbl->QueryInterface)(
         a3,
         &GUID_f13ebcd1_672c_4f8b_a631_9539ca748d71,
         &v12) >= 0 )
  {
    v7 = v12;
    *((_DWORD *)this + 8) = 0x800000;
    *((_DWORD *)this + 9) = 0x800000;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  *((_DWORD *)this + 4) = 1;
  result = 0LL;
  *((_DWORD *)this + 5) = a4;
  *((_QWORD *)this + 6) = 65793LL;
  return result;
}
