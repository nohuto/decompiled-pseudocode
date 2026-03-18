/*
 * XREFs of ?interpolatePixel_6x5@@YAEEEEEE@Z @ 0x1C00D8330
 * Callers:
 *     ?ulClearTypeFilter_6x5@@YAKPEAU_GLYPHBITS@@PEAU_GLYPHDATA@@PEAVRFONT@@@Z @ 0x1C00D7D84 (-ulClearTypeFilter_6x5@@YAKPEAU_GLYPHBITS@@PEAU_GLYPHDATA@@PEAVRFONT@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall interpolatePixel_6x5(
        unsigned __int8 a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        unsigned __int8 a5)
{
  __int64 v5; // rbx
  __int64 v6; // r8

  v5 = a3;
  v6 = 7LL
     * *((unsigned __int8 *)&g_xTimes6DividedBy216RoundUp
       + 4
       * (unsigned int)(*((_DWORD *)&g_xTimes04 + LOBYTE(off_1C0324100[a5]))
                      + *((_DWORD *)&g_xTimes09 + LOBYTE(off_1C0324100[a2]))
                      + *((_DWORD *)&g_xTimes09 + LOBYTE(off_1C0324100[a4]))
                      + *((_DWORD *)&g_xTimes04 + LOBYTE(off_1C0324100[a1]))
                      + *((_DWORD *)&g_xTimes10 + LOBYTE(off_1C0324100[a3]))))
     + *((unsigned __int8 *)&g_xTimes6DividedBy216RoundUp
       + 4
       * (unsigned int)(*((_DWORD *)&g_xTimes04 + BYTE1(off_1C0324100[a1]))
                      + *((_DWORD *)&g_xTimes09 + BYTE1(off_1C0324100[a2]))
                      + *((_DWORD *)&g_xTimes10 + BYTE1(off_1C0324100[a3]))
                      + *((_DWORD *)&g_xTimes09 + BYTE1(off_1C0324100[a4]))
                      + *((_DWORD *)&g_xTimes04 + BYTE1(off_1C0324100[a5]))));
  return gajStorage1[7 * v6
                   + *((unsigned __int8 *)&g_xTimes6DividedBy216RoundUp
                     + 4
                     * (unsigned int)(*((_DWORD *)&g_xTimes04 + BYTE2(off_1C0324100[a1]))
                                    + *((_DWORD *)&g_xTimes09 + BYTE2(off_1C0324100[a2]))
                                    + *((_DWORD *)&g_xTimes10 + BYTE2(off_1C0324100[v5]))
                                    + *((_DWORD *)&g_xTimes09 + BYTE2(off_1C0324100[a4]))
                                    + *((_DWORD *)&g_xTimes04 + BYTE2(off_1C0324100[a5]))))];
}
