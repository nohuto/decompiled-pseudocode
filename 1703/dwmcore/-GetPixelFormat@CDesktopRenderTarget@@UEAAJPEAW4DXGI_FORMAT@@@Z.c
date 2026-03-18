/*
 * XREFs of ?GetPixelFormat@CDesktopRenderTarget@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x180069F40
 * Callers:
 *     ?GetPixelFormat@CDesktopRenderTarget@@WDA@EAAJPEAW4DXGI_FORMAT@@@Z @ 0x1800D55C0 (-GetPixelFormat@CDesktopRenderTarget@@WDA@EAAJPEAW4DXGI_FORMAT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopRenderTarget::GetPixelFormat(CDesktopRenderTarget *this, enum DXGI_FORMAT *a2)
{
  __int64 v2; // rbx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  *a2 = DXGI_FORMAT_B8G8R8A8_UNORM;
  if ( *((_DWORD *)this + 20) )
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)(*((_QWORD *)this + 7) + 8 * v2);
      v6 = *(_DWORD *)(v5 + 444);
      v7 = *(_QWORD *)(v5 + 120);
      v9 = v6;
      if ( v7 )
      {
        (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v7 + 24LL))(v7, &v9);
        v6 = v9;
      }
      if ( v6 != 87 )
        break;
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= *((_DWORD *)this + 20) )
        return 0LL;
    }
    *a2 = DXGI_FORMAT_R16G16B16A16_FLOAT;
  }
  return 0LL;
}
