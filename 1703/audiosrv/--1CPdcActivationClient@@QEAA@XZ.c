/*
 * XREFs of ??1CPdcActivationClient@@QEAA@XZ @ 0x1800ADED4
 * Callers:
 *     ??_GCPowerReferenceManager@@QEAAPEAXI@Z @ 0x1800805FC (--_GCPowerReferenceManager@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002C55C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     Pdcv2ActivationClientUnregister @ 0x1800D17C0 (Pdcv2ActivationClientUnregister.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CPdcActivationClient::~CPdcActivationClient(CPdcActivationClient *this)
{
  void *v2; // rcx
  int v3; // eax
  _QWORD *v4; // rcx

  v2 = *(void **)this;
  if ( v2 )
  {
    v3 = Pdcv2ActivationClientUnregister(v2) | 0x10000000;
    if ( v3 < 0 )
      AudSrvTraceLoggingErrorHelper("CPdcActivationClient::~CPdcActivationClient", 26, v3);
    *(_QWORD *)this = 0LL;
  }
  _Mtx_destroy_in_situ((CPdcActivationClient *)((char *)this + 32));
  v4 = (_QWORD *)*((_QWORD *)this + 1);
  if ( v4 )
  {
    std::_Deallocate(v4, (__int64)(*((_QWORD *)this + 3) - (_QWORD)v4) >> 3, 8uLL);
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
  }
}
