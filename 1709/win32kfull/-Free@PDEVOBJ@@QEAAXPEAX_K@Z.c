/*
 * XREFs of ?Free@PDEVOBJ@@QEAAXPEAX_K@Z @ 0x1C003DEC0
 * Callers:
 *     ?vDelete@PFEOBJ@@QEAAXXZ @ 0x1C003C0B0 (-vDelete@PFEOBJ@@QEAAXXZ.c)
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C003C1B0 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C003C284 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEAGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C00B45BC (-bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEAGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z.c)
 *     GreMakeFontDir @ 0x1C0293AF0 (GreMakeFontDir.c)
 *     ?bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C02941B0 (-bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@@Z.c)
 *     ?TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1C0299D30 (-TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z.c)
 * Callees:
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C0039370 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     ?Initialize@ATTACHOBJ@@QEAAXPEAVPDEVOBJ@@@Z @ 0x1C00393A4 (-Initialize@ATTACHOBJ@@QEAAXPEAVPDEVOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PDEVOBJ::Free(struct PDEV **this, void *a2, __int64 a3, __int64 a4)
{
  void (__fastcall *v6)(void *, __int64); // rbx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-68h] BYREF
  __int64 v8; // [rsp+58h] [rbp-30h]
  int v9; // [rsp+60h] [rbp-28h]
  char v10; // [rsp+64h] [rbp-24h]

  v6 = (void (__fastcall *)(void *, __int64))*((_QWORD *)*this + 380);
  if ( gpepCSRSS )
  {
    v8 = 0LL;
    v9 = 0;
    v10 = 0;
    ATTACHOBJ::Initialize(&ApcState, this, a3, a4);
    v6(a2, a3);
    ATTACHOBJ::~ATTACHOBJ(&ApcState);
  }
}
