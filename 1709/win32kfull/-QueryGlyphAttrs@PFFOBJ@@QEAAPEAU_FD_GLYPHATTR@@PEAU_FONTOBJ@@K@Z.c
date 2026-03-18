/*
 * XREFs of ?QueryGlyphAttrs@PFFOBJ@@QEAAPEAU_FD_GLYPHATTR@@PEAU_FONTOBJ@@K@Z @ 0x1C0299960
 * Callers:
 *     FONTOBJ_pQueryGlyphAttrs @ 0x1C026FD60 (FONTOBJ_pQueryGlyphAttrs.c)
 * Callees:
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1C00392BC (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C0039370 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

struct _FD_GLYPHATTR *__fastcall PFFOBJ::QueryGlyphAttrs(PFFOBJ *this, struct _FONTOBJ *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  __int64 (__fastcall *v6)(struct _FONTOBJ *, _QWORD); // rbx
  __int64 v7; // rbx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-78h] BYREF

  v4 = a3;
  v6 = *(__int64 (__fastcall **)(struct _FONTOBJ *, _QWORD))(*(_QWORD *)(*(_QWORD *)this + 88LL) + 3392LL);
  if ( gpepCSRSS )
  {
    ATTACHOBJ::ATTACHOBJ(&ApcState, (unsigned __int64)this, a3, a4);
    if ( v6 )
    {
      v7 = v6(a2, v4);
      ATTACHOBJ::~ATTACHOBJ(&ApcState);
      return (struct _FD_GLYPHATTR *)v7;
    }
    ATTACHOBJ::~ATTACHOBJ(&ApcState);
  }
  return 0LL;
}
