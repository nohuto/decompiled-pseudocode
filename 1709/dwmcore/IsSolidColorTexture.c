/*
 * XREFs of IsSolidColorTexture @ 0x18018EA74
 * Callers:
 *     ?DebugInspectMappedTexture@@YAXAEBUD3D11_TEXTURE2D_DESC@@AEBUD3D11_MAPPED_SUBRESOURCE@@@Z @ 0x18018E69C (-DebugInspectMappedTexture@@YAXAEBUD3D11_TEXTURE2D_DESC@@AEBUD3D11_MAPPED_SUBRESOURCE@@@Z.c)
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18000BC20 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800C5D80 (memcmp_0.c)
 *     memcpy_0 @ 0x1800C5D86 (memcpy_0.c)
 */

char __fastcall IsSolidColorTexture(unsigned int *a1, __int64 a2)
{
  unsigned __int8 PixelFormatSize; // al
  const void **v5; // rdx
  unsigned __int8 v7; // bl
  unsigned int v8; // r15d
  int v9; // edi
  unsigned int v10; // ebp
  int v11; // esi
  __int64 v12; // rcx
  __int64 v13; // [rsp+20h] [rbp-58h]
  _BYTE Buf1[16]; // [rsp+28h] [rbp-50h] BYREF

  PixelFormatSize = GetPixelFormatSize(a1[4]);
  if ( (PixelFormatSize & 7) != 0 )
    return 0;
  v7 = PixelFormatSize >> 3;
  memcpy_0(Buf1, *v5, PixelFormatSize >> 3);
  v8 = a1[1];
  v9 = 0;
  if ( v8 )
  {
    v10 = *a1;
    while ( 1 )
    {
      v11 = 0;
      if ( v10 )
        break;
LABEL_9:
      if ( ++v9 >= v8 )
        return 1;
    }
    v12 = (unsigned int)(v9 * *(_DWORD *)(a2 + 8));
    v13 = v12;
    while ( !memcmp_0(Buf1, (const void *)(*(_QWORD *)a2 + v12 + v11 * (unsigned int)v7), v7) )
    {
      v12 = v13;
      if ( ++v11 >= v10 )
        goto LABEL_9;
    }
    return 0;
  }
  return 1;
}
