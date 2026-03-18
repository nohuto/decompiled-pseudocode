/*
 * XREFs of ?CreateFlipExToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N@Z @ 0x1C0035810
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C00358DC (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 * Callees:
 *     ?AddTokenToQueue@CTokenManager@@IEAAJPEAVCToken@@@Z @ 0x1C00356E0 (-AddTokenToQueue@CTokenManager@@IEAAJPEAVCToken@@@Z.c)
 *     ?StartCompositionEarly@CompositionSurfaceObject@@QEAA_N_K@Z @ 0x1C00385E8 (-StartCompositionEarly@CompositionSurfaceObject@@QEAA_N_K@Z.c)
 *     ?GetAnalogExclusive@CompositionSurfaceObject@@QEAA_NXZ @ 0x1C0038660 (-GetAnalogExclusive@CompositionSurfaceObject@@QEAA_NXZ.c)
 *     ?NotifyPresent@CSynchronizationManager@DirectComposition@@SAX_K_N@Z @ 0x1C005B1B4 (-NotifyPresent@CSynchronizationManager@DirectComposition@@SAX_K_N@Z.c)
 *     ?CreateFromCompletedFlipToken@CToken@@SAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C007BC90 (-CreateFromCompletedFlipToken@CToken@@SAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTokenManager::CreateFlipExToken(
        CTokenManager *this,
        unsigned __int64 a2,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a3,
        bool *a4)
{
  int v8; // edi
  struct CToken *v9; // rbx
  CompositionSurfaceObject *v10; // rbx
  UINT64 CompositionSyncKey; // rcx
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // rax
  void *v16; // rcx
  struct CToken *PreviousState; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0;
  v8 = CToken::CreateFromCompletedFlipToken(a2, a3, &PreviousState);
  if ( v8 < 0 )
    return (unsigned int)v8;
  v9 = PreviousState;
  if ( (*(unsigned __int8 (__fastcall **)(struct CToken *))(*(_QWORD *)PreviousState + 136LL))(PreviousState)
    && !(*(unsigned __int8 (__fastcall **)(struct CToken *))(*(_QWORD *)v9 + 144LL))(v9) )
  {
    v13 = (_QWORD *)((char *)this + 232);
    *a4 = 1;
    v14 = *((_QWORD *)this + 29);
    v15 = (_QWORD *)((char *)v9 + 8);
    if ( *(CTokenManager **)(v14 + 8) != (CTokenManager *)((char *)this + 232) )
      __fastfail(3u);
    *v15 = v14;
    *((_QWORD *)v9 + 2) = v13;
    *(_QWORD *)(v14 + 8) = v15;
    *v13 = v15;
LABEL_15:
    if ( v8 < 0 )
      return (unsigned int)v8;
    goto LABEL_4;
  }
  v8 = CTokenManager::AddTokenToQueue(this, (struct CompositionSurfaceObject **)v9);
  if ( v8 < 0 )
  {
    (**(void (__fastcall ***)(struct CToken *, __int64))v9)(v9, 1LL);
    goto LABEL_15;
  }
LABEL_4:
  v10 = (CompositionSurfaceObject *)*((_QWORD *)v9 + 4);
  if ( v10 )
  {
    if ( CompositionSurfaceObject::StartCompositionEarly(v10, a2) )
    {
      LODWORD(PreviousState) = 0;
      ZwSetEvent(*((HANDLE *)this + 6), (PLONG)&PreviousState);
    }
    if ( CompositionSurfaceObject::GetAnalogExclusive(v10) )
    {
      LODWORD(PreviousState) = 0;
      v16 = (void *)*((_QWORD *)this + 7);
      if ( v16 )
        ZwSetEvent(v16, (PLONG)&PreviousState);
    }
  }
  CompositionSyncKey = a3->CompositionSyncKey;
  if ( CompositionSyncKey && !a3->RemainingTokens )
    DirectComposition::CSynchronizationManager::NotifyPresent(CompositionSyncKey, 1);
  return (unsigned int)v8;
}
