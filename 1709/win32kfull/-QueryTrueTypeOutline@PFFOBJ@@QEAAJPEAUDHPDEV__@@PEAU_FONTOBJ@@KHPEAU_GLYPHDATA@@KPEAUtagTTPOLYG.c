/*
 * XREFs of ?QueryTrueTypeOutline@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KHPEAU_GLYPHDATA@@KPEAUtagTTPOLYGONHEADER@@@Z @ 0x1C0131520
 * Callers:
 *     GreGetGlyphOutlineInternal @ 0x1C00B26C0 (GreGetGlyphOutlineInternal.c)
 * Callees:
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1C00392BC (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C0039370 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PFFOBJ::QueryTrueTypeOutline(
        PFFOBJ *this,
        struct DHPDEV__ *a2,
        struct _FONTOBJ *a3,
        __int64 a4,
        unsigned int a5,
        struct _GLYPHDATA *a6,
        unsigned int a7,
        struct tagTTPOLYGONHEADER *a8)
{
  unsigned int v8; // edi
  unsigned int v9; // ebp
  __int64 (__fastcall *v11)(_QWORD, struct _FONTOBJ *, _QWORD, _QWORD, struct _GLYPHDATA *, unsigned int, struct tagTTPOLYGONHEADER *); // rbx
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-88h] BYREF

  v8 = -1;
  v9 = a4;
  v11 = *(__int64 (__fastcall **)(_QWORD, struct _FONTOBJ *, _QWORD, _QWORD, struct _GLYPHDATA *, unsigned int, struct tagTTPOLYGONHEADER *))(*(_QWORD *)(*(_QWORD *)this + 88LL) + 3096LL);
  if ( gpepCSRSS )
  {
    ATTACHOBJ::ATTACHOBJ(&ApcState, (unsigned __int64)this, (__int64)a3, a4);
    v8 = v11(0LL, a3, v9, a5, a6, a7, a8);
    ATTACHOBJ::~ATTACHOBJ(&ApcState);
  }
  return v8;
}
