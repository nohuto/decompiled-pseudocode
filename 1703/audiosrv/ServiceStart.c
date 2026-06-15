/*
 * XREFs of ServiceStart @ 0x180034DA8
 * Callers:
 *     AudioSrvStartupThread @ 0x180034D20 (AudioSrvStartupThread.c)
 * Callees:
 *     ?MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z @ 0x180035064 (-MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z.c)
 *     ?ServiceStart@CAudioSrv@@UEAAXXZ @ 0x1800357F0 (-ServiceStart@CAudioSrv@@UEAAXXZ.c)
 *     ??0CAudioSrv@@QEAA@XZ @ 0x180035E24 (--0CAudioSrv@@QEAA@XZ.c)
 *     ReportStatusToSCMgr @ 0x1800370BC (ReportStatusToSCMgr.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049318 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_S @ 0x18004B710 (WPP_SF_S.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180082650 (WPP_SF_.c)
 */

__int64 __fastcall ServiceStart(struct SERVICE_STATUS_HANDLE__ *a1, int a2, _QWORD *a3, __int64 a4)
{
  CVolumeStrip *v6; // rcx
  CAudioSrv *v7; // rax
  unsigned int v8; // edx
  const unsigned __int16 **v9; // r8
  unsigned int v10; // eax
  __int64 v11; // r9
  unsigned int v12; // ebx
  void (*v13)(void); // rax
  CVolumeStrip *v14; // rcx

  v6 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 27LL, &WPP_cbb33a57e23e3669b5894dbe7143f5ce_Traceguids, *a3);
    v6 = WPP_GLOBAL_Control;
  }
  if ( !a2 )
  {
    if ( v6 != (CVolumeStrip *)&WPP_GLOBAL_Control && (*((_BYTE *)v6 + 28) & 0x10) != 0 && *((_BYTE *)v6 + 25) >= 4u )
      WPP_SF_(*((_QWORD *)v6 + 2), 28LL, &WPP_cbb33a57e23e3669b5894dbe7143f5ce_Traceguids);
    ReportStatusToSCMgr(1LL, 2147500037LL, 0LL, a4);
  }
  v7 = (CAudioSrv *)operator new(0xD0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
    v7 = CAudioSrv::CAudioSrv(v7);
  g_AudioService = v7;
  if ( v7 )
  {
    v10 = MyServiceInitialization(a1, v8, v9);
    v12 = v10;
    if ( v10 )
    {
      v14 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CVolumeStrip *)&WPP_GLOBAL_Control )
        return v12;
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
      {
LABEL_17:
        if ( v14 != (CVolumeStrip *)&WPP_GLOBAL_Control
          && (*((_BYTE *)v14 + 28) & 0x10) != 0
          && *((_BYTE *)v14 + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)v14 + 2), 31LL, &WPP_cbb33a57e23e3669b5894dbe7143f5ce_Traceguids);
        }
        return v12;
      }
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 30LL, &WPP_cbb33a57e23e3669b5894dbe7143f5ce_Traceguids, v10);
    }
    else
    {
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 29LL, &WPP_cbb33a57e23e3669b5894dbe7143f5ce_Traceguids);
      }
      ReportStatusToSCMgr(4LL, 0LL, 0LL, v11);
      v13 = *(void (**)(void))(*(_QWORD *)g_AudioService + 96LL);
      if ( (char *)v13 == (char *)CAudioSrv::ServiceStart )
        CAudioSrv::ServiceStart(g_AudioService);
      else
        v13();
    }
    v14 = WPP_GLOBAL_Control;
    goto LABEL_17;
  }
  return 14LL;
}
