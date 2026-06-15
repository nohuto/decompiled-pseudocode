/*
 * XREFs of ServiceStart @ 0x18005A5FC
 * Callers:
 *     ?AudioSrvStartupThread@@YAKPEAX@Z @ 0x18005A520 (-AudioSrvStartupThread@@YAKPEAX@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     ReportStatusToSCMgr @ 0x18005A598 (ReportStatusToSCMgr.c)
 *     ?MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z @ 0x18005B9F0 (-MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z.c)
 *     ?ServiceStart@CAudioSrv@@UEAAXXZ @ 0x18005C440 (-ServiceStart@CAudioSrv@@UEAAXXZ.c)
 *     ??0CAudioSrv@@QEAA@XZ @ 0x18005CA58 (--0CAudioSrv@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ServiceStart(struct SERVICE_STATUS_HANDLE__ *a1, int a2)
{
  CAudioSrv *v3; // rax
  unsigned int v4; // edx
  const unsigned __int16 **v5; // r8
  CAudioSrv *v6; // rbx
  const GUID *v7; // r8
  const GUID *v8; // r9
  void (*v9)(void); // rax
  unsigned int v11; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  unsigned int *v13; // [rsp+58h] [rbp-20h]
  int v14; // [rsp+60h] [rbp-18h]
  int v15; // [rsp+64h] [rbp-14h]

  if ( !a2 )
    ReportStatusToSCMgr(1, -2147467259, 0);
  v3 = (CAudioSrv *)operator new(0x178uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v3;
  if ( v3 )
  {
    memset_0(v3, 0, 0x178uLL);
    v3 = CAudioSrv::CAudioSrv(v6);
  }
  g_AudioService = v3;
  if ( !v3 )
    return 14LL;
  v11 = MyServiceInitialization(a1, v4, v5);
  if ( !v11 )
  {
    ReportStatusToSCMgr(4, 0, 0);
    v9 = *(void (**)(void))(*(_QWORD *)g_AudioService + 96LL);
    if ( (char *)v9 == (char *)CAudioSrv::ServiceStart )
      CAudioSrv::ServiceStart(g_AudioService);
    else
      v9();
  }
  if ( (unsigned int)dword_1801884D0 > 4 )
  {
    v15 = 0;
    v13 = &v11;
    v14 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1801884D0, &unk_180147489, v7, v8, 3u, &pData);
  }
  return v11;
}
