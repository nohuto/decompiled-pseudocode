/*
 * XREFs of ?s_MangleName@LightweightPropertySet@@CAXPEBGPEAG_K@Z @ 0x1801E2268
 * Callers:
 *     ?SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z @ 0x1800FA8D8 (-SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z.c)
 *     ?GetPropertyDirectlyFromWindow@LightweightPropertySet@@SAKPEAUHWND__@@PEBG@Z @ 0x1801E21C4 (-GetPropertyDirectlyFromWindow@LightweightPropertySet@@SAKPEAUHWND__@@PEBG@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall LightweightPropertySet::s_MangleName(const unsigned __int16 *a1, unsigned __int16 *a2)
{
  _o_wcscpy_s(a2, 256LL, L"LightweightProperty_");
  _o_wcscat_s(a2, 256LL, a1);
}
