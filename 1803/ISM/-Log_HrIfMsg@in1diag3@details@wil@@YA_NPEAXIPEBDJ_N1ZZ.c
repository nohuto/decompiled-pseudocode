/*
 * XREFs of ?Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x18005AC54
 * Callers:
 *     ??0MPCThrottleableInputHelper@@QEAA@IPEBG@Z @ 0x18005AAA8 (--0MPCThrottleableInputHelper@@QEAA@IPEBG@Z.c)
 *     ?CreateMPCTarget@MPCInputRouter@@AEAAJPEAUIInputTarget@@_KPEAPEAUIMPCInputTarget@@@Z @ 0x180085C34 (-CreateMPCTarget@MPCInputRouter@@AEAAJPEAUIInputTarget@@_KPEAPEAUIMPCInputTarget@@@Z.c)
 * Callees:
 *     ?ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x18000D5B0 (-ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z.c)
 */

char wil::details::in1diag3::Log_HrIfMsg(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4,
        char a5,
        unsigned __int16 *a6,
        const char *a7,
        ...)
{
  __int64 v8; // [rsp+20h] [rbp-38h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  if ( a5 )
    wil::details::ReportFailure_HrMsg(
      (__int64)this,
      (unsigned int)a2,
      a3,
      a4,
      v8,
      retaddr,
      2,
      (unsigned int)a4,
      a6,
      (va_list)&a7);
  return a5;
}
