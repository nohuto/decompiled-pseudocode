/*
 * XREFs of ?Close@CTaskContinuityActivitiesExperienceManager@@UEAAJXZ @ 0x180160BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTaskContinuityActivitiesExperienceManager::Close(CTaskContinuityActivitiesExperienceManager *this)
{
  __int64 v2; // rdi
  __int64 v4; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 64) )
  {
    v2 = *((_QWORD *)this + 33);
    if ( v2 )
    {
      v4 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v4);
      if ( (*(int (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v2 + 24LL))(
             v2,
             &IID_IActiveZBandNotificationForMonitorService,
             &GUID_0f019ffe_0388_4dcf_a2e2_f059a60a5704,
             &v4) >= 0 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 32LL))(v4, *((unsigned int *)this + 64));
      *((_DWORD *)this + 64) = 0;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v4);
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)this + 6);
  return 0LL;
}
