/*
 * XREFs of ?Close@CJumpViewExperienceManager@@UEAAJXZ @ 0x1801763D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CJumpViewExperienceManager::Close(CJumpViewExperienceManager *this)
{
  __int64 v2; // rbx
  __int64 v4; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 90) )
  {
    v2 = *((_QWORD *)this + 39);
    if ( v2 )
    {
      v4 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v4);
      if ( (*(int (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v2 + 24LL))(
             v2,
             &IID_IActiveZBandNotificationForMonitorService,
             &GUID_0f019ffe_0388_4dcf_a2e2_f059a60a5704,
             &v4) >= 0 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 32LL))(v4, *((unsigned int *)this + 90));
      *((_DWORD *)this + 90) = 0;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v4);
    }
  }
  if ( *((_DWORD *)this + 88) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 42) + 32LL))(*((_QWORD *)this + 42));
    *((_DWORD *)this + 88) = 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 42);
  }
  if ( *((_DWORD *)this + 89) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 43) + 32LL))(*((_QWORD *)this + 43));
    *((_DWORD *)this + 89) = 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 43);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 40);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 39);
  return 0LL;
}
