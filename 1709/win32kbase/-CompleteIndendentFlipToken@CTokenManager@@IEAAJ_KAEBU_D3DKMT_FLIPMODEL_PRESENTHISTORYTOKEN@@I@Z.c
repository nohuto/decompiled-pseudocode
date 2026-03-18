/*
 * XREFs of ?CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x1C0153714
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C00358DC (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 * Callees:
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00252F4 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z @ 0x1C00386B4 (-SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     EtwTraceTokenIndependentFlipSkipCompleteEvent @ 0x1C00E1290 (EtwTraceTokenIndependentFlipSkipCompleteEvent.c)
 *     NtGdiDdDDIGetPresentStatsInternal @ 0x1C00F3E90 (NtGdiDdDDIGetPresentStatsInternal.c)
 *     ?RemoveIndependentFlipSkipTokenFromList@CTokenManager@@IEAAXU_LUID@@IPEAPEAVCToken@@@Z @ 0x1C0153A84 (-RemoveIndependentFlipSkipTokenFromList@CTokenManager@@IEAAXU_LUID@@IPEAPEAVCToken@@@Z.c)
 *     ?UpdateStatsAndCustomPresentDuration@CompositionSurfaceObject@@QEAAX_KAEBUDXGI_FRAME_STATISTICS@@IW4BufferFlipMode@@@Z @ 0x1C0153B34 (-UpdateStatsAndCustomPresentDuration@CompositionSurfaceObject@@QEAAX_KAEBUDXGI_FRAME_STATISTICS@.c)
 */

__int64 __fastcall CTokenManager::CompleteIndendentFlipToken(
        CTokenManager *this,
        __int64 a2,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a3)
{
  void *hCompSurf; // r12
  __int64 v7; // r8
  int v8; // r15d
  UINT PresentCount; // ecx
  UINT v10; // r8d
  LUID compSurfLuid; // rdx
  struct CToken *v12; // rdi
  int v13; // eax
  int v14; // esi
  __int64 v15; // rbx
  char v16; // al
  struct CToken *v18; // [rsp+30h] [rbp-39h] BYREF
  PVOID Object; // [rsp+38h] [rbp-31h] BYREF
  _DWORD v20[4]; // [rsp+40h] [rbp-29h] BYREF
  __int64 v21; // [rsp+50h] [rbp-19h]
  __int64 v22; // [rsp+58h] [rbp-11h]
  _QWORD v23[5]; // [rsp+60h] [rbp-9h] BYREF

  hCompSurf = (void *)a3->hCompSurf;
  memset(v23, 0, sizeof(v23));
  NtGdiDdDDIGetPresentStatsInternal();
  v8 = CompositionSurfaceObject::ResolveHandle(hCompSurf, 2LL, v7, (struct CompositionSurfaceObject **)&Object);
  if ( v8 >= 0 )
  {
    PresentCount = a3->PresentCount;
    v20[2] = v23[2];
    v20[0] = PresentCount;
    v21 = v23[3];
    v22 = v23[3];
    v20[1] = HIDWORD(v23[0]);
    CompositionSurfaceObject::UpdateStatsAndCustomPresentDuration(Object, a2, v20, LODWORD(v23[4]));
    v10 = a3->PresentCount;
    compSurfLuid = a3->compSurfLuid;
    v18 = 0LL;
    CTokenManager::RemoveIndependentFlipSkipTokenFromList(this, compSurfLuid, v10, &v18);
    v12 = v18;
    if ( v18 )
    {
      v13 = (*(__int64 (__fastcall **)(struct CToken *, _QWORD))(*(_QWORD *)v18 + 128LL))(v18, LODWORD(v23[2]));
      v14 = v13 + 1;
      if ( v13 != -1 )
      {
        CompositionSurfaceObject::SetSyncRefreshCount((CompositionSurfaceObject *)Object, v14);
        v15 = *((_QWORD *)v12 + 5);
        v18 = *(struct CToken **)(*((_QWORD *)v12 + 4) + 16LL);
        v16 = (*(__int64 (__fastcall **)(struct CToken *))(*(_QWORD *)v12 + 112LL))(v12);
        EtwTraceTokenIndependentFlipSkipCompleteEvent(v14, v16, (int)v18, v15);
      }
      (**(void (__fastcall ***)(struct CToken *, __int64))v12)(v12, 1LL);
    }
    ObfDereferenceObject(Object);
    ObCloseHandle(hCompSurf, 1);
  }
  return (unsigned int)v8;
}
