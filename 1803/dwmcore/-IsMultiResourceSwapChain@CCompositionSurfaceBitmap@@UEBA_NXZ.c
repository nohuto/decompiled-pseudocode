/*
 * XREFs of ?IsMultiResourceSwapChain@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180187100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CCompositionSurfaceBitmap::IsMultiResourceSwapChain(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rax
  char v2; // dl
  unsigned int v3; // r10d
  unsigned int v4; // r8d
  unsigned int v5; // r9d
  __int64 v6; // rbx
  unsigned int v7; // r11d
  int v8; // eax

  v1 = *((_QWORD *)this + 4);
  v2 = 0;
  if ( v1 )
  {
    v3 = *(_DWORD *)(v1 + 104);
    v4 = 0;
    v5 = 0;
    if ( v3 )
    {
      v6 = *(_QWORD *)(v1 + 80);
      while ( 1 )
      {
        v7 = v4;
        v8 = *(_DWORD *)(*(_QWORD *)(v6 + 8LL * v5) + 296LL);
        if ( !v8 && v4 + 1 > 1 )
          break;
        ++v5;
        ++v4;
        if ( v8 )
          v4 = v7;
        if ( v5 >= v3 )
        {
          if ( v4 <= 1 )
            return v2;
          return 1;
        }
      }
      return 1;
    }
  }
  return v2;
}
