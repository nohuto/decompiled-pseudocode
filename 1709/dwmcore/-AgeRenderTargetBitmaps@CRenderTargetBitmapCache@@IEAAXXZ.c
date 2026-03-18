/*
 * XREFs of ?AgeRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ @ 0x18011DDB0
 * Callers:
 *     ?AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_K_N@Z @ 0x18002BF40 (-AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_K_N@Z.c)
 * Callees:
 *     ?Release@CScratchRenderTargetBitmap@@UEAAKXZ @ 0x18008D360 (-Release@CScratchRenderTargetBitmap@@UEAAKXZ.c)
 *     ?RemoveAt@?$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z @ 0x1800BA920 (-RemoveAt@-$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z.c)
 */

void __fastcall CRenderTargetBitmapCache::AgeRenderTargetBitmaps(CRenderTargetBitmapCache *this)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rbp
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rsi

  v2 = (__int64)this + 488;
  if ( !this )
    v2 = 1024LL;
  LODWORD(v3) = *((_DWORD *)this + 6);
  v4 = *(_QWORD *)v2;
  while ( (_DWORD)v3 )
  {
    v3 = (unsigned int)(v3 - 1);
    v5 = *(_QWORD *)(*(_QWORD *)this + 8 * v3);
    if ( (unsigned __int64)(v4 - *(_QWORD *)(v5 + 264)) >= 0x20 )
    {
      DynArray<CScratchRenderTargetBitmap *,0>::RemoveAt((__int64 *)this, v3);
      *(_BYTE *)(v5 + 272) = 0;
      CScratchRenderTargetBitmap::Release((CScratchRenderTargetBitmap *)v5);
    }
  }
  LODWORD(v6) = *((_DWORD *)this + 6);
  while ( (_DWORD)v6 && *((_DWORD *)this + 6) > 0x20u )
  {
    v6 = (unsigned int)(v6 - 1);
    v7 = *(_QWORD *)(*(_QWORD *)this + 8 * v6);
    if ( v4 != *(_QWORD *)(v7 + 264) )
    {
      DynArray<CScratchRenderTargetBitmap *,0>::RemoveAt((__int64 *)this, v6);
      *(_BYTE *)(v7 + 272) = 0;
      CScratchRenderTargetBitmap::Release((CScratchRenderTargetBitmap *)v7);
    }
  }
}
