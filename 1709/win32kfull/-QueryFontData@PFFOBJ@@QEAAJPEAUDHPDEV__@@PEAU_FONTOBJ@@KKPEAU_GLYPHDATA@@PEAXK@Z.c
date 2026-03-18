/*
 * XREFs of ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0038A38
 * Callers:
 *     ?bInitCache@RFONTOBJ@@QEAAHK@Z @ 0x1C003260C (-bInitCache@RFONTOBJ@@QEAAHK@Z.c)
 *     ?bGetDEVICEMETRICS@RFONTOBJ@@QEAAHPEAU_FD_DEVICEMETRICS@@@Z @ 0x1C0032E00 (-bGetDEVICEMETRICS@RFONTOBJ@@QEAAHPEAU_FD_DEVICEMETRICS@@@Z.c)
 *     GreGetGlyphOutlineInternal @ 0x1C00B26C0 (GreGetGlyphOutlineInternal.c)
 *     xInsertMetricsRFONTOBJ @ 0x1C00F9028 (xInsertMetricsRFONTOBJ.c)
 *     ?bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C0135568 (-bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C02AD9F0 (-bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 *     ?bInsertPathLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@@Z @ 0x1C02ADB08 (-bInsertPathLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@@Z.c)
 * Callees:
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1C00392BC (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C0039370 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PFFOBJ::QueryFontData(
        PFFOBJ *this,
        struct DHPDEV__ *a2,
        struct _FONTOBJ *a3,
        unsigned int a4,
        unsigned int a5,
        struct _GLYPHDATA *a6,
        void *a7,
        unsigned int a8)
{
  unsigned int v8; // edi
  __int64 (__fastcall *v12)(struct DHPDEV__ *, struct _FONTOBJ *, _QWORD, _QWORD, struct _GLYPHDATA *, void *, unsigned int); // rbx
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-98h] BYREF

  v8 = -1;
  v12 = *(__int64 (__fastcall **)(struct DHPDEV__ *, struct _FONTOBJ *, _QWORD, _QWORD, struct _GLYPHDATA *, void *, unsigned int))(*(_QWORD *)(*(_QWORD *)this + 88LL) + 2928LL);
  if ( gpepCSRSS )
  {
    ATTACHOBJ::ATTACHOBJ(&ApcState, this);
    v8 = v12(a2, a3, a4, a5, a6, a7, a8);
    ATTACHOBJ::~ATTACHOBJ(&ApcState);
  }
  return v8;
}
