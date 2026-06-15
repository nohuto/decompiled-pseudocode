/*
 * XREFs of ??$make_unique@VCPowerReferenceManager@@$$V@std@@YA?AV?$unique_ptr@VCPowerReferenceManager@@U?$default_delete@VCPowerReferenceManager@@@std@@@0@XZ @ 0x180036418
 * Callers:
 *     ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x180035B70 (-Initialize@CAudioSrv@@UEAAJJ@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025D60 (--2@YAPEAX_K@Z.c)
 *     ?PublishSebEvent@CSebNotifier@@AEAAXE@Z @ 0x180026DA4 (-PublishSebEvent@CSebNotifier@@AEAAXE@Z.c)
 *     Pdcv2ActivationClientRegister @ 0x180034EBC (Pdcv2ActivationClientRegister.c)
 *     memset @ 0x180049B8A (memset.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall std::make_unique<CPowerReferenceManager,>(_QWORD *a1)
{
  char *v2; // rax
  char *v3; // rdi
  int v4; // ecx
  int v5; // eax
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF
  char *v8; // [rsp+40h] [rbp-18h]

  v2 = (char *)operator new(0xD8uLL);
  v3 = v2;
  if ( v2 )
  {
    memset(v2, 0, 0xD8uLL);
    *(_QWORD *)v3 = 0LL;
    *((_QWORD *)v3 + 1) = 0LL;
    *((_QWORD *)v3 + 2) = 0LL;
    *((_QWORD *)v3 + 3) = 0LL;
    _Mtx_init_in_situ((_Mtx_t)(v3 + 32), 2);
    LODWORD(v7) = 1;
    *((_QWORD *)&v7 + 1) = &CPdcActivationClient::PdcTimerActivatorCallback;
    v8 = v3;
    v5 = Pdcv2ActivationClientRegister(v4, &v7, v3) | 0x10000000;
    if ( v5 < 0 )
      AudSrvTraceLoggingErrorHelper("CPdcActivationClient::CPdcActivationClient", 0x12u, v5);
    *((_DWORD *)v3 + 28) = 0;
    _Mtx_init_in_situ((_Mtx_t)(v3 + 120), 2);
    v3[200] = -1;
    *((_QWORD *)v3 + 26) = CreateThreadpoolTimer(
                             (PTP_TIMER_CALLBACK)lambda_03b97fe06f3466f47fbded311dc3ec81_::_lambda_invoker_cdecl_,
                             v3 + 112,
                             0LL);
    CSebNotifier::PublishSebEvent((CSebNotifier *)(v3 + 112), 0);
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3;
  return a1;
}
