/*
 * XREFs of ?CreateFlipToken@CToken@@CAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C007BD30
 * Callers:
 *     ?CreateFromCompletedFlipToken@CToken@@SAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C007BC90 (-CreateFromCompletedFlipToken@CToken@@SAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@.c)
 *     ?NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C01519F0 (-NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?ImmediateSignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0@Z @ 0x1C0038534 (-ImmediateSignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0@Z.c)
 *     ?SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z @ 0x1C0038580 (-SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z.c)
 *     ?CreateCompleted@CFlipToken@@SAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C007BD8C (-CreateCompleted@CFlipToken@@SAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHIS.c)
 */

__int64 __fastcall CToken::CreateFlipToken(
        unsigned __int64 a1,
        struct CompositionSurfaceObject *this,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a3,
        struct CToken **a4)
{
  int v8; // ebp
  struct CFlipToken *v10; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  v8 = CFlipToken::CreateCompleted(a1, this, a3, &v10);
  if ( v8 < 0 )
  {
    CompositionSurfaceObject::ImmediateSignalGpuFence(this, a1, a3->FenceValue);
    if ( a3->PresentLimitSemaphoreId )
      CompositionSurfaceObject::SignalPresentLimitSemaphore(this, a1);
  }
  else
  {
    *a4 = v10;
  }
  return (unsigned int)v8;
}
