/*
 * XREFs of ?bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1C028606C
 * Callers:
 *     ?GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C008C5D4 (-GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z @ 0x1C008EDA0 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z.c)
 * Callees:
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C000312C (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C0003464 (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008F468 (--1RFONTOBJ@@QEAA@XZ.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall RFONTOBJ::bInitSystemTT(RFONTOBJ *this, struct XDCOBJ *a2)
{
  __int64 v2; // rax
  unsigned int v3; // esi
  int v6; // ebx
  struct PFE *v7; // r8
  _BYTE v9[40]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_QWORD *)this;
  v3 = 0;
  v10 = 0LL;
  v6 = *(_DWORD *)(v2 + 852);
  memset(v9, 0, 0x20uLL);
  RFONTOBJ::ComputeEUDCLogfont(this, (struct _EUDCLOGFONT *)v9, a2);
  v7 = *(struct PFE **)((char *)&gappfeSystemDBCS + (v6 != 0 ? 8 : 0));
  if ( !v7 )
    v7 = gappfeSystemDBCS;
  RFONTOBJ::vInit((RFONTOBJ *)&v10, a2, v7, (struct _EUDCLOGFONT *)v9);
  if ( v10 )
    *(_QWORD *)(*(_QWORD *)this + 728LL) = v10;
  LOBYTE(v3) = *(_QWORD *)(*(_QWORD *)this + 728LL) != 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v10);
  return v3;
}
