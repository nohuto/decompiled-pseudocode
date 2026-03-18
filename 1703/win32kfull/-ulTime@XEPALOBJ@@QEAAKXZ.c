/*
 * XREFs of ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C0096770
 * Callers:
 *     NtGdiBitBltInternal @ 0x1C006FAB0 (NtGdiBitBltInternal.c)
 *     GreDrawStream @ 0x1C0086090 (GreDrawStream.c)
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x1C0086D84 (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0086EE0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     NtGdiAlphaBlend @ 0x1C0087620 (NtGdiAlphaBlend.c)
 *     ?vInit256Rainbow@XEPALOBJ@@QEAAXXZ @ 0x1C009653C (-vInit256Rainbow@XEPALOBJ@@QEAAXXZ.c)
 *     GreRealizePalette @ 0x1C0108418 (GreRealizePalette.c)
 *     ?bGenColorXlate555@XEPALOBJ@@QEAAHXZ @ 0x1C012BCC0 (-bGenColorXlate555@XEPALOBJ@@QEAAHXZ.c)
 *     ?pGetRGBXlate@XEPALOBJ@@QEAAPEAEXZ @ 0x1C012BD3C (-pGetRGBXlate@XEPALOBJ@@QEAAPEAEXZ.c)
 *     ?ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z @ 0x1C0298FA4 (-ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XEPALOBJ::ulTime(XEPALOBJ *this)
{
  __int64 v1; // rax
  __int64 v2; // rcx

  v1 = *(_QWORD *)this;
  v2 = *(_QWORD *)(*(_QWORD *)this + 128LL);
  if ( v2 == v1 )
    return *(unsigned int *)(v1 + 32);
  else
    return *(unsigned int *)(v2 + 32);
}
