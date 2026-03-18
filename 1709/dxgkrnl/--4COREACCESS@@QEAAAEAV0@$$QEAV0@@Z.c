/*
 * XREFs of ??4COREACCESS@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C002C50C
 * Callers:
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z @ 0x1C01D4A80 (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z.c)
 *     ?Release@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAXXZ @ 0x1C01D63EC (-Release@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001E90 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall COREACCESS::operator=(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 16) )
  {
    if ( *(_BYTE *)(a1 + 24) )
      COREACCESS::Release((COREACCESS *)a1);
    DXGADAPTER::ReleaseReferenceNoTracking(*(DXGADAPTER **)(a1 + 16));
  }
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_BYTE *)(a1 + 24) = *(_BYTE *)(a2 + 24);
  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v4 + 24));
    *(_QWORD *)(a1 + 8) = -1LL;
  }
  result = a1;
  *(_BYTE *)(a2 + 24) = 0;
  return result;
}
