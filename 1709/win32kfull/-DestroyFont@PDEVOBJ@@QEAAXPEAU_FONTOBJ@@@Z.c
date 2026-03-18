/*
 * XREFs of ?DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z @ 0x1C003D8F0
 * Callers:
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C0035608 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ?MulDestroyFont@@YAXPEAU_FONTOBJ@@@Z @ 0x1C027E350 (-MulDestroyFont@@YAXPEAU_FONTOBJ@@@Z.c)
 *     ?vDestroyFont@RFONTOBJ@@QEAAXH@Z @ 0x1C0283D08 (-vDestroyFont@RFONTOBJ@@QEAAXH@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C0039370 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     ?Initialize@ATTACHOBJ@@QEAAXPEAVPDEVOBJ@@@Z @ 0x1C00393A4 (-Initialize@ATTACHOBJ@@QEAAXPEAVPDEVOBJ@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     UnmapPrintKView @ 0x1C01121E8 (UnmapPrintKView.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PDEVOBJ::DestroyFont(struct PDEV **this, struct _FONTOBJ *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  void (__fastcall *v8)(struct _FONTOBJ *); // rbx
  _QWORD v9[2]; // [rsp+20h] [rbp-78h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-68h] BYREF
  __int64 v11; // [rsp+68h] [rbp-30h]
  int v12; // [rsp+70h] [rbp-28h]
  char v13; // [rsp+74h] [rbp-24h]

  v9[0] = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v4 = *((_DWORD *)a2[1].pvProducer + 17);
  SEMOBJ::vUnlock((SEMOBJ *)v9);
  if ( v4 == 1 )
    UnmapPrintKView(*((_QWORD *)a2[1].pvProducer + 10));
  v8 = (void (__fastcall *)(struct _FONTOBJ *))*((_QWORD *)*this + 381);
  if ( gpepCSRSS )
  {
    v11 = 0LL;
    v12 = 0;
    v13 = 0;
    ATTACHOBJ::Initialize(&ApcState, this, v6, v7);
    v8(a2);
    ATTACHOBJ::~ATTACHOBJ(&ApcState);
  }
  v9[0] = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v9, v5, v6);
}
