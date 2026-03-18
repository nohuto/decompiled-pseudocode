/*
 * XREFs of ?RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x1801582B0
 * Callers:
 *     ?ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@UEAAXXZ @ 0x180158200 (-ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18001F1FC (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?RemoveRenderTarget@CDesktopRenderTarget@@AEAAXPEAVCHwndRenderTarget@@@Z @ 0x180044BB8 (-RemoveRenderTarget@CDesktopRenderTarget@@AEAAXPEAVCHwndRenderTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x1800B69A4 (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     ?IsRenderTargetEquivalentTo@CDisplay@@QEBA_NPEBV1@@Z @ 0x1800B7414 (-IsRenderTargetEquivalentTo@CDisplay@@QEBA_NPEBV1@@Z.c)
 *     ?FindDDAHwndRenderTargetByDisplay@CDesktopRenderTarget@@AEAAPEAVCHwndRenderTarget@@PEBVCDisplay@@@Z @ 0x1801579F4 (-FindDDAHwndRenderTargetByDisplay@CDesktopRenderTarget@@AEAAPEAVCHwndRenderTarget@@PEBVCDisplay@.c)
 */

__int64 __fastcall CDesktopRenderTarget::RemoveInvalidRenderTargets(CDesktopRenderTarget *this)
{
  int CurrentDisplaySet; // eax
  unsigned int v3; // edi
  CDisplaySet *v4; // r15
  unsigned __int64 v5; // xmm1_8
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // r14
  __int64 v9; // rbp
  __int64 v10; // rsi
  __int64 v11; // r12
  const struct CDisplay *v12; // rdx
  struct CHwndRenderTarget *DDAHwndRenderTargetByDisplay; // rax
  CDisplaySet *v15[2]; // [rsp+30h] [rbp-38h] BYREF

  v15[0] = 0LL;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, v15);
  v3 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802ACDB8, 2u, CurrentDisplaySet, 0x116u);
  }
  else
  {
    v4 = v15[0];
    v5 = _mm_srli_si128(*(__m128i *)((char *)v15[0] + 24), 8).m128i_u64[0];
    v6 = HIDWORD(*((_QWORD *)v15[0] + 3));
    *((float *)this + 69) = (float)(int)*((_QWORD *)v15[0] + 3);
    *((float *)this + 70) = (float)(int)v6;
    *((float *)this + 71) = (float)(int)v5;
    v7 = *((_DWORD *)this + 50) - 1;
    v8 = v7;
    for ( *((float *)this + 72) = (float)SHIDWORD(v5); v8 >= 0; --v8 )
    {
      v9 = 0LL;
      v10 = *(_QWORD *)(*((_QWORD *)this + 22) + 8 * v8);
      if ( *((_DWORD *)v4 + 18) )
      {
        v11 = *((_QWORD *)v4 + 6);
        while ( !CDisplay::IsRenderTargetEquivalentTo(
                   *(CDisplay **)(v11 + 8 * v9),
                   *(const struct CDisplay **)(v10 + 168)) )
        {
          v9 = (unsigned int)(v9 + 1);
          if ( (unsigned int)v9 >= *((_DWORD *)v4 + 18) )
            goto LABEL_7;
        }
        v12 = *(const struct CDisplay **)(v10 + 168);
        *(_BYTE *)(v10 + 858) = 1;
        DDAHwndRenderTargetByDisplay = CDesktopRenderTarget::FindDDAHwndRenderTargetByDisplay(this, v12);
        if ( DDAHwndRenderTargetByDisplay )
          *((_BYTE *)DDAHwndRenderTargetByDisplay + 858) = 1;
      }
      else
      {
LABEL_7:
        CDesktopRenderTarget::RemoveRenderTarget(this, (struct CHwndRenderTarget *)v10);
      }
    }
  }
  ReleaseInterface<CDisplaySet const>(v15);
  return v3;
}
