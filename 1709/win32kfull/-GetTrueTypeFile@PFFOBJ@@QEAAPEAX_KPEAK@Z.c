/*
 * XREFs of ?GetTrueTypeFile@PFFOBJ@@QEAAPEAX_KPEAK@Z @ 0x1C029989C
 * Callers:
 *     ?pvFile@RFONTOBJ@@QEAAPEAXPEAK@Z @ 0x1C0283BA0 (-pvFile@RFONTOBJ@@QEAAPEAXPEAK@Z.c)
 *     ?pvFileUMPD@RFONTOBJ@@QEAAPEAXPEAKPEAPEAX@Z @ 0x1C0283C20 (-pvFileUMPD@RFONTOBJ@@QEAAPEAXPEAKPEAPEAX@Z.c)
 * Callees:
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1C00392BC (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C0039370 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PFFOBJ::GetTrueTypeFile(PFFOBJ *this, __int64 a2, unsigned int *a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v7)(__int64, unsigned int *); // rbx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-78h] BYREF

  v4 = 0LL;
  v7 = *(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)(*(_QWORD *)this + 88LL) + 3104LL);
  if ( gpepCSRSS )
  {
    ATTACHOBJ::ATTACHOBJ(&ApcState, (unsigned __int64)this, (__int64)a3, a4);
    *a3 = 0;
    if ( v7 )
      v4 = v7(a2, a3);
    ATTACHOBJ::~ATTACHOBJ(&ApcState);
  }
  return v4;
}
