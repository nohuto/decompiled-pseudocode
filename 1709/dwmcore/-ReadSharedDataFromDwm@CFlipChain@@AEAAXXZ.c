/*
 * XREFs of ?ReadSharedDataFromDwm@CFlipChain@@AEAAXXZ @ 0x180165B14
 * Callers:
 *     ??0CSyncSharedDataGuard@CFlipChain@@QEAA@PEAV1@@Z @ 0x18016494C (--0CSyncSharedDataGuard@CFlipChain@@QEAA@PEAV1@@Z.c)
 *     ?ProcessInitializeSharedDataObjects@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_INITIALIZESHAREDDATAOBJECTS@@@Z @ 0x180165874 (-ProcessInitializeSharedDataObjects@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_IN.c)
 *     ?ProcessResetSourceFrameCounters@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_RESETSOURCEFRAMECOUNTERS@@@Z @ 0x180165A3C (-ProcessResetSourceFrameCounters@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_RESET.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CFlipChain::ReadSharedDataFromDwm(CFlipChain *this)
{
  __int64 v2; // rcx
  signed int v3; // eax
  signed int v4; // eax
  _QWORD *v5; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 28);
  if ( v2 )
  {
    v5 = 0LL;
    v3 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD **))(*(_QWORD *)v2 + 8LL))(v2, 1LL, &v5);
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x32Bu);
    if ( *v5 )
      *((_QWORD *)this + 16) = *v5;
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 28) + 16LL))(*((_QWORD *)this + 28));
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x332u);
  }
}
