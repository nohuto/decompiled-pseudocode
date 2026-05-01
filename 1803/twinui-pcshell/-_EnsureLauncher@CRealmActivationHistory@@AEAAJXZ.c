/*
 * XREFs of ?_EnsureLauncher@CRealmActivationHistory@@AEAAJXZ @ 0x180128974
 * Callers:
 *     ?SetActiveApp@CRealmActivationHistory@@UEAAJW4IAM_APPLICATION_REALM@@@Z @ 0x180090200 (-SetActiveApp@CRealmActivationHistory@@UEAAJW4IAM_APPLICATION_REALM@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180030CE0 (-GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CRealmActivationHistory::_EnsureLauncher(CRealmActivationHistory *this)
{
  unsigned int Service; // ebx
  __int64 *v2; // rsi
  RTL_SRWLOCK *v3; // rdi
  __int64 (__fastcall *v4)(RTL_SRWLOCK *, struct _GUID *, void **); // rax
  IUnknown *punk; // [rsp+48h] [rbp+10h] BYREF

  Service = 0;
  v2 = (__int64 *)((char *)this + 408);
  if ( !*((_QWORD *)this + 51) )
  {
    v3 = (RTL_SRWLOCK *)((char *)this + 32);
    punk = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)&punk);
    v4 = (__int64 (__fastcall *)(RTL_SRWLOCK *, struct _GUID *, void **))*((_QWORD *)v3->Ptr + 4);
    if ( v4 == CWRLObjectWithGITSite::GetSite )
      CWRLObjectWithGITSite::GetSite(v3, &GUID_00000000_0000_0000_c000_000000000046, (void **)&punk);
    else
      v4(v3, &GUID_00000000_0000_0000_c000_000000000046, (void **)&punk);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v2);
    Service = IUnknown_QueryService(
                punk,
                (const GUID *const)&SID_ImmersiveLauncher,
                &GUID_d8d60399_a0f1_f987_5551_321fd1b49864,
                (void **)v2);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)&punk);
  }
  return Service;
}
