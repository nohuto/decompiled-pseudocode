/*
 * XREFs of ?DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z @ 0x1C00327BC
 * Callers:
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C008F6E4 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ?MulDestroyFont@@YAXPEAU_FONTOBJ@@@Z @ 0x1C02817D0 (-MulDestroyFont@@YAXPEAU_FONTOBJ@@@Z.c)
 *     ?vDestroyFont@RFONTOBJ@@QEAAXH@Z @ 0x1C02871D4 (-vDestroyFont@RFONTOBJ@@QEAAXH@Z.c)
 * Callees:
 *     ??0ATTACHOBJ@@QEAA@PEAVPDEVOBJ@@@Z @ 0x1C0032F14 (--0ATTACHOBJ@@QEAA@PEAVPDEVOBJ@@@Z.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C0032F4C (--1ATTACHOBJ@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008F468 (--1RFONTOBJ@@QEAA@XZ.c)
 *     UnmapPrintKView @ 0x1C0107C78 (UnmapPrintKView.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PDEVOBJ::DestroyFont(PDEVOBJ *this, struct _FONTOBJ *a2)
{
  int v4; // ebx
  void (__fastcall *v5)(struct _FONTOBJ *); // rbx
  _QWORD v6[2]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v7[64]; // [rsp+30h] [rbp-58h] BYREF

  v6[0] = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v4 = *((_DWORD *)a2[1].pvProducer + 17);
  SEMOBJ::vUnlock((SEMOBJ *)v6);
  if ( v4 == 1 )
    UnmapPrintKView(*((_QWORD *)a2[1].pvProducer + 10));
  v5 = *(void (__fastcall **)(struct _FONTOBJ *))(*(_QWORD *)this + 3048LL);
  if ( gpepCSRSS )
  {
    ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)v7, this);
    v5(a2);
    ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v7);
  }
  v6[0] = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v6);
}
