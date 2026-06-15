/*
 * XREFs of ServiceStart @ 0x1800AD388
 * Callers:
 *     AudioSrvStartupThread @ 0x1800ABA60 (AudioSrvStartupThread.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800331F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??0CAudioSrv@@QEAA@XZ @ 0x180060B60 (--0CAudioSrv@@QEAA@XZ.c)
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 *     WPP_SF_S @ 0x180064B48 (WPP_SF_S.c)
 *     ReportStatusToSCMgr @ 0x1800ABDC8 (ReportStatusToSCMgr.c)
 *     ?MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z @ 0x1800AC7CC (-MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z.c)
 */

__int64 __fastcall ServiceStart(struct SERVICE_STATUS_HANDLE__ *a1, int a2, const wchar_t **a3)
{
  CAudioDGProcess *v5; // rcx
  CAudioSrv *v6; // rax
  DWORD v7; // edx
  const unsigned __int16 **v8; // r8
  unsigned int v10; // eax
  unsigned int v11; // ebx
  CAudioDGProcess *v12; // rcx

  v5 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Bu, (__int64)&WPP_cbb33a57e23e3669b5894dbe7143f5ce_Traceguids, *a3);
    v5 = WPP_GLOBAL_Control;
  }
  if ( !a2 )
  {
    if ( v5 != (CAudioDGProcess *)&WPP_GLOBAL_Control && (*((_BYTE *)v5 + 28) & 0x10) != 0 && *((_BYTE *)v5 + 25) >= 4u )
      WPP_SF_(*((_QWORD *)v5 + 2), 0x1Cu, (__int64)&WPP_cbb33a57e23e3669b5894dbe7143f5ce_Traceguids);
    ReportStatusToSCMgr(1u, 0x80004005, 0);
  }
  v6 = (CAudioSrv *)operator new(0xD0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
    v6 = CAudioSrv::CAudioSrv(v6);
  g_AudioService = v6;
  if ( !v6 )
    return 14LL;
  v10 = MyServiceInitialization(a1, v7, v8);
  v11 = v10;
  if ( !v10 )
  {
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Du, (__int64)&WPP_cbb33a57e23e3669b5894dbe7143f5ce_Traceguids);
    }
    ReportStatusToSCMgr(4u, 0, 0);
    (*(void (__fastcall **)(struct IAudioService *))(*(_QWORD *)g_AudioService + 96LL))(g_AudioService);
    goto LABEL_25;
  }
  v12 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
LABEL_26:
      if ( v12 != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_BYTE *)v12 + 28) & 0x10) != 0
        && *((_BYTE *)v12 + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)v12 + 2), 0x1Fu, (__int64)&WPP_cbb33a57e23e3669b5894dbe7143f5ce_Traceguids);
      }
      return v11;
    }
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Eu, (__int64)&WPP_cbb33a57e23e3669b5894dbe7143f5ce_Traceguids, v10);
LABEL_25:
    v12 = WPP_GLOBAL_Control;
    goto LABEL_26;
  }
  return v11;
}
