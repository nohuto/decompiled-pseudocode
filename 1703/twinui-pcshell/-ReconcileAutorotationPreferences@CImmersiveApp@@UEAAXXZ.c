/*
 * XREFs of ?ReconcileAutorotationPreferences@CImmersiveApp@@UEAAXXZ @ 0x180052FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetGITSitePtr@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x180025750 (-_GetGITSitePtr@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 *     ?IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z @ 0x180050130 (-IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CImmersiveApp::ReconcileAutorotationPreferences(CImmersiveApp *this)
{
  __int64 v2; // rsi
  void *v3; // rcx
  struct IUnknown **GITSitePtr; // rbx
  void *v5; // rcx
  bool v6; // bl
  __int64 v7; // rcx
  void *v8; // rcx
  void *v9; // [rsp+50h] [rbp+20h] BYREF
  __int64 v10; // [rsp+58h] [rbp+28h] BYREF

  v2 = *CWRLObjectWithGITSite::_GetGITSitePtr((__int64)this - 48, &v9);
  v3 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  if ( v2 && (*((_DWORD *)this + 102) & 2) != 0 )
  {
    v9 = 0LL;
    GITSitePtr = (struct IUnknown **)CWRLObjectWithGITSite::_GetGITSitePtr((__int64)this - 48, &v10);
    v5 = v9;
    if ( v9 )
    {
      v9 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 16LL))(v5);
    }
    v6 = (int)IAMPrivate_QueryObject(
                *GITSitePtr,
                &GUID_f6bba08c_f8c6_470b_937a_5b2687c0ffee,
                &GUID_f6bba08c_f8c6_470b_937a_5b2687c0ffee,
                &v9) >= 0;
    v7 = v10;
    if ( v10 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    if ( v6 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v9 + 32LL))(v9);
    v8 = v9;
    if ( v9 )
    {
      v9 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
}
