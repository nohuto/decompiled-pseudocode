/*
 * XREFs of ?bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1C0282BBC
 * Callers:
 *     ?GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C0032348 (-GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z @ 0x1C0034CC8 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z.c)
 * Callees:
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C0007E00 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C0008138 (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall RFONTOBJ::bInitSystemTT(RFONTOBJ *this, struct XDCOBJ *a2)
{
  __int64 v2; // rax
  unsigned int v3; // esi
  int v6; // ebx
  struct PFE *v7; // r8
  __int64 v8; // r8
  __int64 v9; // rdx
  _BYTE v11[40]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_QWORD *)this;
  v3 = 0;
  v12 = 0LL;
  v6 = *(_DWORD *)(v2 + 852);
  memset(v11, 0, 0x20uLL);
  RFONTOBJ::ComputeEUDCLogfont(this, (struct _EUDCLOGFONT *)v11, a2);
  v7 = *(struct PFE **)((char *)&gappfeSystemDBCS + (v6 != 0 ? 8 : 0));
  if ( !v7 )
    v7 = gappfeSystemDBCS;
  RFONTOBJ::vInit((RFONTOBJ *)&v12, a2, v7, (struct _EUDCLOGFONT *)v11);
  if ( v12 )
    *(_QWORD *)(*(_QWORD *)this + 728LL) = v12;
  v9 = *(_QWORD *)(*(_QWORD *)this + 728LL);
  LOBYTE(v3) = v9 != 0;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v12, v9, v8);
  return v3;
}
