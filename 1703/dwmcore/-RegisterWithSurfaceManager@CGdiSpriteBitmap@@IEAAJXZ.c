/*
 * XREFs of ?RegisterWithSurfaceManager@CGdiSpriteBitmap@@IEAAJXZ @ 0x18005584C
 * Callers:
 *     ?CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z @ 0x180055624 (-CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CGdiSpriteBitmap::RegisterWithSurfaceManager(CGdiSpriteBitmap *this)
{
  __int64 *v1; // r8
  __int64 v2; // rdx
  __int64 **v3; // rax

  if ( (*((_BYTE *)this + 148) & 4) == 0 )
  {
    v1 = (__int64 *)((char *)this + 184);
    v2 = *(_QWORD *)(*((_QWORD *)this + 4) + 40LL) + 176LL;
    v3 = *(__int64 ***)(*(_QWORD *)(*((_QWORD *)this + 4) + 40LL) + 184LL);
    if ( *v3 != (__int64 *)v2 )
      __fastfail(3u);
    *v1 = v2;
    *((_QWORD *)this + 24) = v3;
    *v3 = v1;
    *(_QWORD *)(v2 + 8) = v1;
    *((_BYTE *)this + 148) |= 4u;
  }
  return 0LL;
}
