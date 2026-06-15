/*
 * XREFs of ??0CPdcActivationClient@@QEAA@XZ @ 0x18009C87C
 * Callers:
 *     ??0CPowerReferenceManager@@QEAA@XZ @ 0x180060D88 (--0CPowerReferenceManager@@QEAA@XZ.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     Pdcv2ActivationClientRegister @ 0x1800DE140 (Pdcv2ActivationClientRegister.c)
 */

// Hidden C++ exception states: #wind=2
CPdcActivationClient *__fastcall CPdcActivationClient::CPdcActivationClient(CPdcActivationClient *this)
{
  __int64 v2; // rcx
  int v3; // eax
  int v5; // [rsp+28h] [rbp-20h] BYREF
  void *v6; // [rsp+30h] [rbp-18h]
  CPdcActivationClient *v7; // [rsp+38h] [rbp-10h]

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  _Mtx_init_in_situ((CPdcActivationClient *)((char *)this + 32), 2);
  v5 = 1;
  v6 = &CPdcActivationClient::PdcTimerActivatorCallback;
  v7 = this;
  v3 = Pdcv2ActivationClientRegister(v2, &v5, this) | 0x10000000;
  if ( v3 < 0 )
    AudSrvTraceLoggingErrorHelper("CPdcActivationClient::CPdcActivationClient", 18, v3);
  return this;
}
