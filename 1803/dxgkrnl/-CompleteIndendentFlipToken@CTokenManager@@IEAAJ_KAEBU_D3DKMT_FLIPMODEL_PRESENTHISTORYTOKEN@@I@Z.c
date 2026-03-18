/*
 * XREFs of ?CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x1C0017740
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C000FF30 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 * Callees:
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C000A6A0 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z @ 0x1C000D554 (-SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?RemoveIndependentFlipSkipTokenFromList@CTokenManager@@IEAAXU_LUID@@IPEAPEAVCToken@@@Z @ 0x1C0017690 (-RemoveIndependentFlipSkipTokenFromList@CTokenManager@@IEAAXU_LUID@@IPEAPEAVCToken@@@Z.c)
 *     ?UpdateStatsAndCustomPresentDuration@CompositionSurfaceObject@@QEAAX_KAEBUDXGI_FRAME_STATISTICS@@IW4BufferFlipMode@@@Z @ 0x1C0017C9C (-UpdateStatsAndCustomPresentDuration@CompositionSurfaceObject@@QEAAX_KAEBUDXGI_FRAME_STATISTICS@.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     DxgkGetPresentStats @ 0x1C0108C30 (DxgkGetPresentStats.c)
 */

__int64 __fastcall CTokenManager::CompleteIndendentFlipToken(
        CTokenManager *this,
        __int64 a2,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a3,
        unsigned int a4)
{
  void *hCompSurf; // r13
  __int64 v9; // r8
  int v10; // r12d
  UINT PresentCount; // ecx
  UINT v12; // r8d
  LUID compSurfLuid; // rdx
  struct CToken *v14; // rsi
  int v15; // eax
  unsigned int v16; // r14d
  __int64 v17; // rdi
  __int64 v18; // rcx
  void (__fastcall *v19)(_QWORD, _QWORD, struct CToken *, __int64); // rbx
  unsigned int v20; // eax
  struct CToken *v22; // [rsp+30h] [rbp-39h] BYREF
  PVOID Object; // [rsp+38h] [rbp-31h] BYREF
  _DWORD v24[4]; // [rsp+40h] [rbp-29h] BYREF
  __int64 v25; // [rsp+50h] [rbp-19h]
  __int64 v26; // [rsp+58h] [rbp-11h]
  _QWORD v27[5]; // [rsp+60h] [rbp-9h] BYREF

  hCompSurf = (void *)a3->hCompSurf;
  memset(v27, 0, sizeof(v27));
  DxgkGetPresentStats(a4);
  v10 = CompositionSurfaceObject::ResolveHandle(hCompSurf, 2u, v9, (struct CompositionSurfaceObject **)&Object);
  if ( v10 >= 0 )
  {
    PresentCount = a3->PresentCount;
    v24[2] = v27[2];
    v24[0] = PresentCount;
    v25 = v27[3];
    v26 = v27[3];
    v24[1] = HIDWORD(v27[0]);
    CompositionSurfaceObject::UpdateStatsAndCustomPresentDuration(Object, a2, v24, LODWORD(v27[4]));
    v12 = a3->PresentCount;
    compSurfLuid = a3->compSurfLuid;
    v22 = 0LL;
    CTokenManager::RemoveIndependentFlipSkipTokenFromList(this, compSurfLuid, v12, &v22);
    v14 = v22;
    if ( v22 )
    {
      v15 = (*(__int64 (__fastcall **)(struct CToken *, _QWORD))(*(_QWORD *)v22 + 128LL))(v22, LODWORD(v27[2]));
      v16 = v15 + 1;
      if ( v15 != -1 )
      {
        CompositionSurfaceObject::SetSyncRefreshCount((CompositionSurfaceObject *)Object, v16);
        v17 = *((_QWORD *)v14 + 5);
        v22 = *(struct CToken **)(*((_QWORD *)v14 + 4) + 16LL);
        v19 = *(void (__fastcall **)(_QWORD, _QWORD, struct CToken *, __int64))(*((_QWORD *)DXGGLOBAL::GetGlobal(v18)
                                                                                + 219)
                                                                              + 72LL);
        v20 = (*(__int64 (__fastcall **)(struct CToken *))(*(_QWORD *)v14 + 112LL))(v14);
        v19(v16, v20, v22, v17);
      }
      (**(void (__fastcall ***)(struct CToken *, __int64))v14)(v14, 1LL);
    }
    ObfDereferenceObject(Object);
    ObCloseHandle(hCompSurf, 1);
  }
  return (unsigned int)v10;
}
