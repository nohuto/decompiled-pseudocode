/*
 * XREFs of ?SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z @ 0x1C0037E38
 * Callers:
 *     ?Discard@CFlipToken@@UEAAXXZ @ 0x1C0037F50 (-Discard@CFlipToken@@UEAAXXZ.c)
 *     ?InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@DirectComposition@@PEA_N@Z @ 0x1C0038050 (-InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@DirectComposition@@PEA_N@Z.c)
 *     ?SignalFlipImmediate@CFlipToken@@UEAAXXZ @ 0x1C0038180 (-SignalFlipImmediate@CFlipToken@@UEAAXXZ.c)
 * Callees:
 *     ?SignalGpuFenceInternal@CTokenManager@@IEAAJU_LUID@@PEAX_K@Z @ 0x1C0036178 (-SignalGpuFenceInternal@CTokenManager@@IEAAJU_LUID@@PEAX_K@Z.c)
 *     ?GetAdapterLuidAndGpuSync@CompositionSurfaceObject@@QEBAJ_KPEAU_LUID@@PEAPEAX@Z @ 0x1C00384A4 (-GetAdapterLuidAndGpuSync@CompositionSurfaceObject@@QEBAJ_KPEAU_LUID@@PEAPEAX@Z.c)
 *     ?ImmediateSignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0@Z @ 0x1C0038534 (-ImmediateSignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0@Z.c)
 *     ?SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z @ 0x1C0038580 (-SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z.c)
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
