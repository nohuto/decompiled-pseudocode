/*
 * XREFs of ?QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z @ 0x1C003DFF0
 * Callers:
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

struct _IFIMETRICS *__fastcall PDEVOBJ::QueryFont(
        struct PDEV **this,
        struct DHPDEV__ *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 *a5)
{
  __int64 v5; // rdi
  unsigned int v6; // r14d
  __int64 (__fastcall *v9)(struct DHPDEV__ *, __int64, _QWORD, unsigned __int64 *); // rbx
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-88h] BYREF
  __int64 v12; // [rsp+68h] [rbp-50h]
  int v13; // [rsp+70h] [rbp-48h]
  char v14; // [rsp+74h] [rbp-44h]

  v5 = 0LL;
  v6 = a4;
  v9 = (__int64 (__fastcall *)(struct DHPDEV__ *, __int64, _QWORD, unsigned __int64 *))*((_QWORD *)*this + 364);
  if ( gpepCSRSS )
  {
    v12 = 0LL;
    v13 = 0;
    v14 = 0;
    ATTACHOBJ::Initialize(&ApcState, this, a3, a4);
    v5 = v9(a2, a3, v6, a5);
    ATTACHOBJ::~ATTACHOBJ(&ApcState);
  }
  return (struct _IFIMETRICS *)v5;
}
