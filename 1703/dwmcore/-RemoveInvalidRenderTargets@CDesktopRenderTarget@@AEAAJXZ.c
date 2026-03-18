/*
 * XREFs of ?RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180147994
 * Callers:
 *     ?ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@UEAAXXZ @ 0x1801478E0 (-ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RemoveRenderTarget@CDesktopRenderTarget@@AEAAXPEAVCHwndRenderTarget@@@Z @ 0x18006A5F8 (-RemoveRenderTarget@CDesktopRenderTarget@@AEAAXPEAVCHwndRenderTarget@@@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18007F234 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x1800B7154 (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     ?IsRenderTargetEquivalentTo@CDisplay@@QEBA_NPEBV1@@Z @ 0x1800B8148 (-IsRenderTargetEquivalentTo@CDisplay@@QEBA_NPEBV1@@Z.c)
 *     ?FindDDAHwndRenderTargetByDisplay@CDesktopRenderTarget@@AEAAPEAVCHwndRenderTarget@@PEBVCDisplay@@@Z @ 0x18014729C (-FindDDAHwndRenderTargetByDisplay@CDesktopRenderTarget@@AEAAPEAVCHwndRenderTarget@@PEBVCDisplay@.c)
 */

__int64 __fastcall CDesktopRenderTarget::RemoveInvalidRenderTargets(CDesktopRenderTarget *this)
{
  int CurrentDisplaySet; // eax
  unsigned int v3; // edi
  CDisplaySet *v4; // rbp
  unsigned __int64 v5; // xmm1_8
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rsi
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r10
  const struct CDisplay *v12; // rdx
  int v13; // r9d
  struct CHwndRenderTarget *DDAHwndRenderTargetByDisplay; // rax
  CDisplaySet *v16[3]; // [rsp+30h] [rbp-18h] BYREF

  v16[0] = 0LL;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, v16);
  v3 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801FC660, 2u, CurrentDisplaySet, 0x16Du);
  }
  else
  {
    v4 = v16[0];
    v5 = _mm_srli_si128(*(__m128i *)((char *)v16[0] + 24), 8).m128i_u64[0];
    v6 = HIDWORD(*((_QWORD *)v16[0] + 3));
    *((float *)this + 79) = (float)(int)*((_QWORD *)v16[0] + 3);
    *((float *)this + 80) = (float)(int)v6;
    *((float *)this + 81) = (float)(int)v5;
    v7 = *((_DWORD *)this + 36) - 1;
    v8 = v7;
    for ( *((float *)this + 82) = (float)SHIDWORD(v5); v8 >= 0; --v8 )
    {
      v9 = 0LL;
      v10 = *(_QWORD *)(*((_QWORD *)this + 15) + 8 * v8);
      if ( *((_DWORD *)v4 + 18) )
      {
        v11 = *((_QWORD *)v4 + 6);
        while ( !CDisplay::IsRenderTargetEquivalentTo(
                   *(CDisplay **)(v11 + 8 * v9),
                   *(const struct CDisplay **)(v10 + 112)) )
        {
          v9 = (unsigned int)(v13 + 1);
          if ( (unsigned int)v9 >= *((_DWORD *)v4 + 18) )
            goto LABEL_7;
        }
        *(_BYTE *)(v10 + 802) = 1;
        DDAHwndRenderTargetByDisplay = CDesktopRenderTarget::FindDDAHwndRenderTargetByDisplay(this, v12);
        if ( DDAHwndRenderTargetByDisplay )
          *((_BYTE *)DDAHwndRenderTargetByDisplay + 802) = 1;
      }
      else
      {
LABEL_7:
        CDesktopRenderTarget::RemoveRenderTarget(this, (struct CHwndRenderTarget *)v10);
      }
    }
  }
  ReleaseInterface<CDisplaySet const>(v16);
  return v3;
}
