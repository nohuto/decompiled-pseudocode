/*
 * XREFs of ?QueryTrueTypeTable@PDEVOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z @ 0x1C0032510
 * Callers:
 *     ?ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z @ 0x1C00E517C (-ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z.c)
 *     ?pjTable@RFONTOBJ@@QEAAPEAEKPEAK@Z @ 0x1C0286FA4 (-pjTable@RFONTOBJ@@QEAAPEAEKPEAK@Z.c)
 * Callees:
 *     ??0ATTACHOBJ@@QEAA@PEAVPDEVOBJ@@@Z @ 0x1C0032F14 (--0ATTACHOBJ@@QEAA@PEAVPDEVOBJ@@@Z.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C0032F4C (--1ATTACHOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PDEVOBJ::QueryTrueTypeTable(
        PDEVOBJ *this,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int8 *a7,
        unsigned __int8 **a8,
        unsigned int *a9)
{
  unsigned int v9; // esi
  __int64 (__fastcall *v13)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, unsigned __int8 *, unsigned __int8 **, unsigned int *); // rbx
  _BYTE v15[64]; // [rsp+50h] [rbp-98h] BYREF

  v9 = -1;
  v13 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, unsigned __int8 *, unsigned __int8 **, unsigned int *))(*(_QWORD *)this + 3088LL);
  if ( gpepCSRSS )
  {
    ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)v15, this);
    if ( a7 )
      *a7 = 0;
    if ( v13 )
      v9 = v13(a2, a3, a4, a5, a6, a7, a8, a9);
    ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v15);
  }
  return v9;
}
