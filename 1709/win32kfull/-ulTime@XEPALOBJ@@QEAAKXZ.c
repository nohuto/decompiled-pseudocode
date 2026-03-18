/*
 * XREFs of ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C009BD3C
 * Callers:
 *     GreDrawStream @ 0x1C000E420 (GreDrawStream.c)
 *     NtGdiBitBltInternal @ 0x1C001EE10 (NtGdiBitBltInternal.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0022CE0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x1C0022FE4 (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     NtGdiAlphaBlend @ 0x1C0023600 (NtGdiAlphaBlend.c)
 *     ?vInit256Rainbow@XEPALOBJ@@QEAAXXZ @ 0x1C009BA8C (-vInit256Rainbow@XEPALOBJ@@QEAAXXZ.c)
 *     GreRealizePalette @ 0x1C010EC68 (GreRealizePalette.c)
 *     ?bGenColorXlate555@XEPALOBJ@@QEAAHXZ @ 0x1C012928C (-bGenColorXlate555@XEPALOBJ@@QEAAHXZ.c)
 *     ?pGetRGBXlate@XEPALOBJ@@QEAAPEAEXZ @ 0x1C0129308 (-pGetRGBXlate@XEPALOBJ@@QEAAPEAEXZ.c)
 *     ?ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z @ 0x1C0295644 (-ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z.c)
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
