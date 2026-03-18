/*
 * XREFs of ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C005A6A0
 * Callers:
 *     ?vDelete@EBRUSHOBJ@@QEAAXXZ @ 0x1C002ED00 (-vDelete@EBRUSHOBJ@@QEAAXXZ.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C002ED50 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     bDeleteBrush @ 0x1C0058800 (bDeleteBrush.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C0059040 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     GreSetSolidBrushLight @ 0x1C0077340 (GreSetSolidBrushLight.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     EngFreeUserMem @ 0x1C007DCC0 (EngFreeUserMem.c)
 */

void __fastcall RBRUSH::vFreeOrCacheRBrush(_DWORD *a1, int a2)
{
  __int64 v2; // rbx
  int v3; // esi
  struct RBRUSH **v4; // rdi

  v2 = (__int64)a1;
  if ( a1 < MmSystemRangeStart )
  {
    EngFreeUserMem(a1);
  }
  else
  {
    v3 = 0;
    if ( a2 )
    {
      v4 = &gpCachedEngbrush;
    }
    else
    {
      v3 = a1[2];
      v4 = &gpCachedDbrush;
      if ( v3 && (int)IsMulDestroyBrushInternalSupported() >= 0 )
        MulDestroyBrushInternal(v2 + 16);
    }
    if ( *v4 || v3 == 1 || (v2 = _InterlockedExchange64((volatile __int64 *)v4, v2)) != 0 )
      Win32FreePool(v2);
  }
}
