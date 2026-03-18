/*
 * XREFs of ?SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z @ 0x1C0005E48
 * Callers:
 *     ?Discard@CFlipToken@@UEAAXXZ @ 0x1C0005F60 (-Discard@CFlipToken@@UEAAXXZ.c)
 *     ?InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@DirectComposition@@PEA_N@Z @ 0x1C0006050 (-InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@DirectComposition@@PEA_N@Z.c)
 *     ?SignalFlipImmediate@CFlipToken@@UEAAXXZ @ 0x1C0006180 (-SignalFlipImmediate@CFlipToken@@UEAAXXZ.c)
 *     ?Initialize@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N11W4TokenState@CTokenBase@@@Z @ 0x1C00061A8 (-Initialize@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N11W4TokenState@CTokenB.c)
 * Callees:
 *     ?SignalGpuFenceInternal@CTokenManager@@IEAAJU_LUID@@PEAX_K@Z @ 0x1C0005BBC (-SignalGpuFenceInternal@CTokenManager@@IEAAJU_LUID@@PEAX_K@Z.c)
 *     ?GetAdapterLuidAndGpuSync@CompositionSurfaceObject@@QEBAJ_KPEAU_LUID@@PEAPEAX@Z @ 0x1C00064AC (-GetAdapterLuidAndGpuSync@CompositionSurfaceObject@@QEBAJ_KPEAU_LUID@@PEAPEAX@Z.c)
 *     ?ImmediateSignalGpuFence@CompositionSurfaceObject@@QEAAX_K0@Z @ 0x1C0006520 (-ImmediateSignalGpuFence@CompositionSurfaceObject@@QEAAX_K0@Z.c)
 *     ?SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z @ 0x1C000656C (-SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z.c)
 */

void __fastcall CFlipToken::SignalGpuFenceAndPresentLimitSemaphore(CFlipToken *this, char a2)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdi
  CTokenManager *v5; // rcx
  unsigned __int64 v6; // rdx
  CompositionSurfaceObject *v7; // rcx
  void *v8; // [rsp+30h] [rbp+8h] BYREF
  struct _LUID v9; // [rsp+40h] [rbp+18h] BYREF

  if ( !*((_BYTE *)this + 48) )
  {
    v3 = *((_QWORD *)this + 13);
    if ( v3 > 1 )
    {
      v4 = v3 - 1;
      if ( a2
        || CompositionSurfaceObject::GetAdapterLuidAndGpuSync(
             *((CompositionSurfaceObject **)this + 4),
             *((_QWORD *)this + 5),
             &v9,
             &v8) < 0
        || !g_pTokenManager
        || (int)CTokenManager::SignalGpuFenceInternal(v5, v9, v8, v4) < 0 )
      {
        CompositionSurfaceObject::ImmediateSignalGpuFence(
          *((CompositionSurfaceObject **)this + 4),
          *((_QWORD *)this + 5),
          v4);
      }
    }
  }
  *((_QWORD *)this + 13) = 0LL;
  if ( !*((_BYTE *)this + 89) )
  {
    v6 = *((_QWORD *)this + 5);
    v7 = (CompositionSurfaceObject *)*((_QWORD *)this + 4);
    *((_BYTE *)this + 89) = 1;
    CompositionSurfaceObject::SignalPresentLimitSemaphore(v7, v6);
  }
}
