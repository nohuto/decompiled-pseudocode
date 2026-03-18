/*
 * XREFs of ulIndexToRGB @ 0x1C0093630
 * Callers:
 *     GreGetNearestColor @ 0x1C00634D0 (GreGetNearestColor.c)
 *     ulColorRefToRGB @ 0x1C00A27A0 (ulColorRefToRGB.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C003E250 (EngAcquireSemaphore.c)
 *     ?ulIndexToRGB@XEPALOBJ@@QEAAKK@Z @ 0x1C0041140 (-ulIndexToRGB@XEPALOBJ@@QEAAKK@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0042C5C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall ulIndexToRGB(struct _ERESOURCE *a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // esi
  char v4; // di
  __int64 v7; // rcx
  unsigned int v8; // edx
  _BYTE *v9; // rcx
  unsigned int v10; // eax
  PERESOURCE v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = a1;
  v3 = 0;
  v4 = a3;
  if ( a1 )
    return XEPALOBJ::ulIndexToRGB((XEPALOBJ *)&v11, a3);
  if ( a3 < 0xA )
    return *((unsigned int *)&logDefaultPal + a3 + 1);
  if ( a3 > 0xF5 )
    return *((unsigned int *)&logDefaultPal + a3 - 235);
  v11 = ghsemPalette;
  EngAcquireSemaphore((HSEMAPHORE)ghsemPalette);
  v7 = *(_QWORD *)(a2 + 72);
  if ( v7 )
  {
    v8 = *(_DWORD *)(a2 + 28);
    v9 = (_BYTE *)(v7 + 4);
    v10 = 0;
    if ( v8 )
    {
      while ( *v9 != v4 )
      {
        ++v10;
        ++v9;
        if ( v10 >= v8 )
          goto LABEL_13;
      }
      v3 = *(_DWORD *)(*(_QWORD *)(a2 + 120) + 4LL * v10);
    }
  }
LABEL_13:
  SEMOBJ::vUnlock(&v11);
  return v3;
}
