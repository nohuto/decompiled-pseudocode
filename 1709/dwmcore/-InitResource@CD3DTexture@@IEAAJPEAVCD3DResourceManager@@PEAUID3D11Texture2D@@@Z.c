/*
 * XREFs of ?InitResource@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@@Z @ 0x180082094
 * Callers:
 *     ?Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z @ 0x180082270 (-Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z.c)
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18000BC20 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DTexture::InitResource(
        CD3DTexture *this,
        struct CD3DResourceManager *a2,
        struct ID3D11Texture2D *a3)
{
  unsigned int v3; // esi
  int v7; // ebp
  unsigned int v8; // r15d
  int v9; // ecx
  struct CD3DResourceManager *v10; // rax
  struct CD3DResourceManager **v11; // rdx
  unsigned int v12; // eax
  _DWORD v14[12]; // [rsp+30h] [rbp-68h] BYREF

  v3 = 0;
  v7 = 0;
  v8 = 0;
  if ( *((_DWORD *)this + 46) )
  {
    while ( 1 )
    {
      ((void (__fastcall *)(struct ID3D11Texture2D *, _DWORD *))a3->lpVtbl->GetDesc)(a3, v14);
      v9 = GetPixelFormatSize(v14[4]) >> 3;
      if ( !v9 )
        break;
      ++v8;
      v7 += v9 * v14[0] * v14[1];
      if ( v8 >= *((_DWORD *)this + 46) )
        goto LABEL_4;
    }
    v3 = -2003292288;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88982F80, 0xA6u);
  }
  else
  {
LABEL_4:
    *((_DWORD *)this + 16) = v7;
    *((_BYTE *)this + 69) = 1;
    v10 = (CD3DTexture *)((char *)this + 32);
    v11 = (struct CD3DResourceManager **)*((_QWORD *)a2 + 5);
    if ( *v11 != (struct CD3DResourceManager *)((char *)a2 + 32) )
      __fastfail(3u);
    *(_QWORD *)v10 = (char *)a2 + 32;
    *((_QWORD *)this + 5) = v11;
    *v11 = v10;
    *((_QWORD *)a2 + 5) = v10;
    if ( *((_BYTE *)this + 68) )
      ++*((_DWORD *)a2 + 18);
    v12 = *((_DWORD *)this + 16) + *((_DWORD *)a2 + 12);
    *((_DWORD *)a2 + 12) = v12;
    if ( *((_DWORD *)a2 + 13) < v12 )
      *((_DWORD *)a2 + 13) = v12;
    *((_QWORD *)this + 2) = a2;
    *((_QWORD *)this + 15) = a3;
    ((void (__fastcall *)(struct ID3D11Texture2D *))a3->lpVtbl->AddRef)(a3);
  }
  return v3;
}
