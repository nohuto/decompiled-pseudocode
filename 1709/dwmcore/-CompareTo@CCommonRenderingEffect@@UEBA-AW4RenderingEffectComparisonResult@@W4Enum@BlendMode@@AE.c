/*
 * XREFs of ?CompareTo@CCommonRenderingEffect@@UEBA?AW4RenderingEffectComparisonResult@@W4Enum@BlendMode@@AEBVCRenderingEffect@@0@Z @ 0x18001F320
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x18001BBE0 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     ?IsWhitePixelInTopLeft@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180028B60 (-IsWhitePixelInTopLeft@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?GetPixelFormatInfo@CDrawListBitmap@@QEBA?AUPixelFormatInfo@@XZ @ 0x1800488DC (-GetPixelFormatInfo@CDrawListBitmap@@QEBA-AUPixelFormatInfo@@XZ.c)
 *     ?IsWhitePixelInTopLeft@CAtlasImageSource@@UEBA_NXZ @ 0x18008EED0 (-IsWhitePixelInTopLeft@CAtlasImageSource@@UEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCommonRenderingEffect::CompareTo(__int64 a1, int a2, _QWORD *a3, int a4)
{
  __int64 v4; // rax
  int v9; // esi
  char v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rbx
  _BYTE *v13; // r14
  unsigned int v14; // edi
  char *v15; // rbp
  __int16 *v16; // r15
  CCompositionSurfaceBitmap *v17; // rcx
  CCompositionSurfaceBitmap *v18; // rcx
  CCompositionSurfaceBitmap *v20; // rax
  bool v21; // al
  bool (__fastcall *v22)(CCompositionSurfaceBitmap *__hidden); // rax
  char IsWhitePixelInTopLeft; // al
  bool (__fastcall *v24)(CCompositionSurfaceBitmap *__hidden); // rax
  char v25; // al
  __int16 v26; // [rsp+20h] [rbp-88h] BYREF
  __int64 v27; // [rsp+28h] [rbp-80h]
  _QWORD *v28; // [rsp+30h] [rbp-78h]
  __int64 v29; // [rsp+38h] [rbp-70h]
  _BYTE v30[16]; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v31[16]; // [rsp+50h] [rbp-58h] BYREF

  v4 = *a3;
  v29 = a1;
  if ( (*(unsigned int (__fastcall **)(_QWORD *))(v4 + 48))(a3) )
    return 0LL;
  v9 = 0;
  v10 = 0;
  v26 = 0;
  if ( (a2 == 22) != (a4 == 22) )
    return 0LL;
  v11 = a1 - (_QWORD)a3;
  v28 = (_QWORD *)(a1 + 16);
  v12 = a1 + 16;
  v27 = a1 - (_QWORD)a3;
  v13 = (char *)a3 + 65;
  v14 = 0;
  v15 = (char *)a3 - a1;
  v16 = &v26;
  do
  {
    v17 = *(CCompositionSurfaceBitmap **)v12;
    if ( !*(_QWORD *)v12 )
    {
      v18 = *(CCompositionSurfaceBitmap **)&v15[v12];
      if ( !v18 )
        goto LABEL_6;
      v22 = *(bool (__fastcall **)(CCompositionSurfaceBitmap *__hidden))(*(_QWORD *)v18 + 144LL);
      if ( v22 == CCompositionSurfaceBitmap::IsWhitePixelInTopLeft )
        IsWhitePixelInTopLeft = CCompositionSurfaceBitmap::IsWhitePixelInTopLeft(v18);
      else
        IsWhitePixelInTopLeft = ((__int64 (__fastcall *)(CCompositionSurfaceBitmap *, __int64, bool (__fastcall *)(CCompositionSurfaceBitmap *__hidden), bool (__fastcall *)(CAtlasImageSource *__hidden)))v22)(
                                  v18,
                                  v11,
                                  CCompositionSurfaceBitmap::IsWhitePixelInTopLeft,
                                  CAtlasImageSource::IsWhitePixelInTopLeft);
      if ( !IsWhitePixelInTopLeft || v14 != 1 && *(_DWORD *)(CDrawListBitmap::GetPixelFormatInfo(&v15[v12], v31) + 8) )
        return 0LL;
      *(_BYTE *)v16 = 1;
      goto LABEL_35;
    }
    v20 = *(CCompositionSurfaceBitmap **)&v15[v12];
    if ( !v20 )
    {
      v24 = *(bool (__fastcall **)(CCompositionSurfaceBitmap *__hidden))(*(_QWORD *)v17 + 144LL);
      if ( v24 == CCompositionSurfaceBitmap::IsWhitePixelInTopLeft )
      {
        v25 = CCompositionSurfaceBitmap::IsWhitePixelInTopLeft(v17);
      }
      else if ( v24 == CAtlasImageSource::IsWhitePixelInTopLeft )
      {
        v25 = CAtlasImageSource::IsWhitePixelInTopLeft(v17);
      }
      else
      {
        v25 = ((__int64 (__fastcall *)(CCompositionSurfaceBitmap *, __int64, bool (__fastcall *)(CCompositionSurfaceBitmap *__hidden), bool (__fastcall *)(CAtlasImageSource *__hidden)))v24)(
                v17,
                v11,
                CCompositionSurfaceBitmap::IsWhitePixelInTopLeft,
                CAtlasImageSource::IsWhitePixelInTopLeft);
      }
      if ( !v25 || v14 != 1 && *(_DWORD *)(CDrawListBitmap::GetPixelFormatInfo(v12, v30) + 8) )
        return 0LL;
      v10 = 1;
LABEL_35:
      v11 = v27;
      goto LABEL_6;
    }
    v21 = v17 != v20 || *(_BYTE *)(v12 + 16) != v15[v12 + 16];
    if ( v21 || v13[v11 - 1] != *(v13 - 1) || v13[v11] != *v13 )
      return 0LL;
    if ( v13[v11 + 1] != v13[1] )
      return 0LL;
LABEL_6:
    ++v14;
    v13 += 3;
    v12 += 24LL;
    v16 = (__int16 *)((char *)v16 + 1);
  }
  while ( v14 < 2 );
  if ( (_BYTE)v26 == HIBYTE(v26) )
  {
    if ( !(_BYTE)v26 || !HIBYTE(v26) )
    {
      LOBYTE(v9) = v10 != 0;
      return (unsigned int)(v9 + 1);
    }
    return 0LL;
  }
  if ( (*v28 == 0LL) == (*(_QWORD *)(v29 + 40) == 0LL) )
    return 0LL;
  if ( (_BYTE)v26 )
    return 3LL;
  else
    return 4LL;
}
