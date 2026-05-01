/*
 * XREFs of ?SynchronizeWindowTitleAndButtons@CFrameApplicationPresentation@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x180013CD0
 * Callers:
 *     ?_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ @ 0x1800484F8 (-_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ.c)
 *     ?OnTitleUpdated@CImmersiveApp@@UEAAXPEAUHWND__@@@Z @ 0x18004C600 (-OnTitleUpdated@CImmersiveApp@@UEAAXPEAUHWND__@@@Z.c)
 *     ?RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@_K@Z @ 0x18004DCF0 (-RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DAT.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_e97912004d4e96f3bec37740b2aa1798___ @ 0x180010C00 (Windows--Internal--ComTaskPool--QueueTask__lambda_e97912004d4e96f3bec37740b2aa1798___.c)
 *     ?InternalRelease@?$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180016678 (-InternalRelease@-$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CFrameApplicationPresentation::SynchronizeWindowTitleAndButtons(
        CFrameApplicationPresentation *this,
        struct IImmersiveApplication *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // esi
  CFrameApplicationPresentation *v8; // [rsp+28h] [rbp-50h] BYREF
  struct IImmersiveApplication *v9; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v10[3]; // [rsp+38h] [rbp-40h] BYREF
  struct IImmersiveApplication *v11; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  CFrameApplicationPresentation *v13; // [rsp+80h] [rbp+8h] BYREF
  struct IImmersiveApplication *v14; // [rsp+88h] [rbp+10h]
  CFrameApplicationPresentation **v15; // [rsp+90h] [rbp+18h]

  v14 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)a2 + 8LL))(a2);
  v8 = this;
  v9 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)a2 + 8LL))(a2);
  v15 = &v8;
  if ( *((_DWORD *)this + 14) == 2 )
  {
    v6 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6E4,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL,
      -2);
  }
  else
  {
    v13 = this;
    (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 8LL))(this);
    v10[0] = this;
    (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 8LL))(this);
    v10[1] = this;
    v10[2] = v8;
    v5 = (__int64)v9;
    v11 = v9;
    if ( v9 )
      (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)v9 + 8LL))(v9);
    v6 = Windows::Internal::ComTaskPool::QueueTask__lambda_e97912004d4e96f3bec37740b2aa1798___(
           v5,
           v4,
           *((_DWORD *)this + 12),
           v10);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
    Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::InternalRelease(v10);
    if ( v6 >= 0 )
      ++*((_DWORD *)this + 51);
    Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::InternalRelease(&v13);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
  if ( a2 )
    (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)a2 + 16LL))(a2);
  return (unsigned int)v6;
}
