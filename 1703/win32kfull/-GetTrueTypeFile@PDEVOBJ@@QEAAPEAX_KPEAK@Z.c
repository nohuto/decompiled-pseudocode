/*
 * XREFs of ?GetTrueTypeFile@PDEVOBJ@@QEAAPEAX_KPEAK@Z @ 0x1C029D11C
 * Callers:
 *     ?pvFile@RFONTOBJ@@QEAAPEAXPEAK@Z @ 0x1C0287058 (-pvFile@RFONTOBJ@@QEAAPEAXPEAK@Z.c)
 *     ?pvFileUMPD@RFONTOBJ@@QEAAPEAXPEAKPEAPEAX@Z @ 0x1C02870E0 (-pvFileUMPD@RFONTOBJ@@QEAAPEAXPEAKPEAPEAX@Z.c)
 * Callees:
 *     ??0ATTACHOBJ@@QEAA@PEAVPDEVOBJ@@@Z @ 0x1C0032F14 (--0ATTACHOBJ@@QEAA@PEAVPDEVOBJ@@@Z.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C0032F4C (--1ATTACHOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PDEVOBJ::GetTrueTypeFile(PDEVOBJ *this, __int64 a2, unsigned int *a3)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v6)(__int64, unsigned int *); // rbx
  _BYTE v8[64]; // [rsp+20h] [rbp-68h] BYREF

  v3 = 0LL;
  v6 = *(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)this + 3104LL);
  if ( gpepCSRSS )
  {
    ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)v8, this);
    *a3 = 0;
    if ( v6 )
      v3 = v6(a2, a3);
    ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v8);
  }
  return v3;
}
