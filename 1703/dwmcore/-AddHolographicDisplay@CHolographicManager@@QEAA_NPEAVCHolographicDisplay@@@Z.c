/*
 * XREFs of ?AddHolographicDisplay@CHolographicManager@@QEAA_NPEAVCHolographicDisplay@@@Z @ 0x1801A5C20
 * Callers:
 *     ?OnChanged@CHolographicDisplay@@AEAAXXZ @ 0x1801A46F8 (-OnChanged@CHolographicDisplay@@AEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18007F234 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x1800B7154 (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     ?GetDesc@CHolographicDisplay@@UEAAJPEAUHOLOGRAPHIC_DISPLAY_DESC@@@Z @ 0x1801A4620 (-GetDesc@CHolographicDisplay@@UEAAJPEAUHOLOGRAPHIC_DISPLAY_DESC@@@Z.c)
 *     ?EnsureHolographicClient@CHolographicManager@@AEAAJPEA_N@Z @ 0x1801A5F0C (-EnsureHolographicClient@CHolographicManager@@AEAAJPEA_N@Z.c)
 *     ?InitializeClient@CHolographicManager@@AEAAXXZ @ 0x1801A61F4 (-InitializeClient@CHolographicManager@@AEAAXXZ.c)
 *     ?ReleaseClient@CHolographicManager@@AEAAXXZ @ 0x1801A62F0 (-ReleaseClient@CHolographicManager@@AEAAXXZ.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1801A8C3C (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

bool __fastcall CHolographicManager::AddHolographicDisplay(CHolographicInteropTaskQueue **this, RTL_SRWLOCK *a2)
{
  unsigned __int64 v2; // rbp
  bool v5; // di
  CDisplayManager *v6; // rcx
  int CurrentDisplaySet; // eax
  __int64 v9; // [rsp+40h] [rbp-68h] BYREF
  bool v10; // [rsp+B8h] [rbp+10h] BYREF
  struct CDisplaySet *v11; // [rsp+C0h] [rbp+18h] BYREF

  v11 = 0LL;
  v2 = (unsigned __int64)&a2[7];
  v5 = 0;
  v10 = 0;
  CHolographicDisplay::GetDesc(a2 + 7, (struct HOLOGRAPHIC_DISPLAY_DESC *)&v9);
  if ( (int)CHolographicManager::EnsureHolographicClient((CHolographicManager *)this, &v10) >= 0 )
  {
    v5 = CHolographicInteropTaskQueue::PostMessageW(
           this[5],
           6u,
           (struct IUnknown *)(v2 & -(__int64)(a2 != 0LL)),
           0LL,
           0LL,
           0LL,
           0LL);
    if ( v10 )
    {
      CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(v6, &v11);
      if ( CurrentDisplaySet < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, CurrentDisplaySet, 0x14Eu);
      }
      else
      {
        *((_DWORD *)this + 14) = DisplayId::Hmd;
        if ( v5 )
          CHolographicManager::InitializeClient((CHolographicManager *)this);
        else
          CHolographicManager::ReleaseClient((CHolographicManager *)this);
      }
    }
  }
  ReleaseInterface<CDisplaySet const>(&v11);
  return v5;
}
