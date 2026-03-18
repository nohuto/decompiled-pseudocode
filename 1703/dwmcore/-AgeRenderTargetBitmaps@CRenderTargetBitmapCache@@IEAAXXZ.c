/*
 * XREFs of ?AgeRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ @ 0x1800C1068
 * Callers:
 *     ?AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_K_N@Z @ 0x18003A360 (-AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_K_N@Z.c)
 * Callees:
 *     ?Release@CScratchRenderTargetBitmap@@UEAAKXZ @ 0x1800061E0 (-Release@CScratchRenderTargetBitmap@@UEAAKXZ.c)
 *     ?RemoveAt@?$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z @ 0x180006704 (-RemoveAt@-$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z.c)
 */

void __fastcall CRenderTargetBitmapCache::AgeRenderTargetBitmaps(CRenderTargetBitmapCache *this)
{
  __int64 v2; // rax
  signed int v3; // ebx
  __int64 v4; // rbp
  signed int v5; // ebx
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rcx

  v2 = (__int64)this + 552;
  if ( !this )
    v2 = 1104LL;
  v3 = *((_DWORD *)this + 6) - 1;
  v4 = *(_QWORD *)v2;
  if ( v3 >= 0 )
  {
    v6 = 8LL * v3;
    do
    {
      v7 = *(_QWORD *)(v6 + *(_QWORD *)this);
      if ( (unsigned __int64)(v4 - *(_QWORD *)(v7 + 248)) >= 0x20 )
      {
        *(_BYTE *)(v7 + 256) = 0;
        CScratchRenderTargetBitmap::Release((CScratchRenderTargetBitmap *)v7);
        DynArray<CScratchRenderTargetBitmap *,0>::RemoveAt((__int64 *)this, v3);
      }
      v6 -= 8LL;
      --v3;
    }
    while ( v3 >= 0 );
  }
  v5 = *((_DWORD *)this + 6) - 1;
  if ( v5 >= 0 )
  {
    v8 = 8LL * v5;
    do
    {
      if ( *((_DWORD *)this + 6) <= 0x20u )
        break;
      v9 = *(_QWORD *)(v8 + *(_QWORD *)this);
      if ( v4 != *(_QWORD *)(v9 + 248) )
      {
        *(_BYTE *)(v9 + 256) = 0;
        CScratchRenderTargetBitmap::Release((CScratchRenderTargetBitmap *)v9);
        DynArray<CScratchRenderTargetBitmap *,0>::RemoveAt((__int64 *)this, v5);
      }
      v8 -= 8LL;
      --v5;
    }
    while ( v5 >= 0 );
  }
}
