/*
 * XREFs of ?RenderDebugFrameCounter@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180146300
 * Callers:
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x18006E340 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FBC0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyRenderedRect@CHwndRenderTarget@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180128F5C (-NotifyRenderedRect@CHwndRenderTarget@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x180143680 (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@.c)
 *     ?GetCPUTimePerFrame@CDebugFrameCounter@@QEAAIXZ @ 0x180143C70 (-GetCPUTimePerFrame@CDebugFrameCounter@@QEAAIXZ.c)
 *     ?GetFrameRate@CDebugFrameCounter@@QEAAIXZ @ 0x180143CE0 (-GetFrameRate@CDebugFrameCounter@@QEAAIXZ.c)
 *     Template_qx @ 0x1801465A0 (Template_qx.c)
 */

__int64 __fastcall CHwndRenderTarget::RenderDebugFrameCounter(
        CHwndRenderTarget *this,
        struct CDrawingContext *a2,
        double a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned int FrameRate; // esi
  unsigned int CPUTimePerFrame; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // r14d
  int v14; // eax
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm2_4
  float v18; // xmm3_4
  int v19; // eax
  __int128 v21; // [rsp+40h] [rbp-30h] BYREF
  __int128 v22; // [rsp+50h] [rbp-20h] BYREF

  v5 = 0;
  (*(void (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 15) + 272LL))(*((_QWORD *)this + 15), &v22);
  v7 = *((_QWORD *)this + 2);
  v8 = *(_QWORD *)(v7 + 536);
  if ( !v8 )
    goto LABEL_7;
  FrameRate = CDebugFrameCounter::GetFrameRate(*(CDebugFrameCounter **)(v7 + 536), v6, a3);
  CPUTimePerFrame = CDebugFrameCounter::GetCPUTimePerFrame((CDebugFrameCounter *)v8);
  v13 = CPUTimePerFrame;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_qx(v12, v11, FrameRate, CPUTimePerFrame);
  if ( v8 == -4656
    || (v14 = CDisplayDebugFrameCounter::Display(
                (CDisplayDebugFrameCounter *)(v8 + 4656),
                FrameRate,
                v13,
                a2,
                (__int64)this + 164,
                &v22,
                CCommonRegistryData::m_fDebugFrameCounterIsVertical != 0,
                &v21),
        v5 = v14,
        v14 >= 0) )
  {
LABEL_7:
    v15 = *(float *)&v21;
    if ( *(float *)&v22 > *(float *)&v21 )
    {
      LODWORD(v21) = v22;
      v15 = *(float *)&v22;
    }
    v16 = *((float *)&v21 + 1);
    if ( *((float *)&v22 + 1) > *((float *)&v21 + 1) )
    {
      DWORD1(v21) = DWORD1(v22);
      v16 = *((float *)&v22 + 1);
    }
    v17 = *((float *)&v21 + 2);
    if ( *((float *)&v21 + 2) > *((float *)&v22 + 2) )
    {
      v17 = *((float *)&v22 + 2);
      DWORD2(v21) = DWORD2(v22);
    }
    v18 = *((float *)&v21 + 3);
    if ( *((float *)&v21 + 3) > *((float *)&v22 + 3) )
    {
      v18 = *((float *)&v22 + 3);
      HIDWORD(v21) = HIDWORD(v22);
    }
    if ( v17 <= v15 || v18 <= v16 )
      v21 = 0uLL;
    if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v21) )
    {
      v19 = CHwndRenderTarget::NotifyRenderedRect((__int64)this, &v21, 1);
      v5 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xC0Bu);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xBFEu);
  }
  return v5;
}
