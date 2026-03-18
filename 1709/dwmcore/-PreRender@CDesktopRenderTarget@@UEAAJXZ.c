/*
 * XREFs of ?PreRender@CDesktopRenderTarget@@UEAAJXZ @ 0x180015D90
 * Callers:
 *     ?PreRender@CDesktopRenderTarget@@WDA@EAAJXZ @ 0x1800C5F00 (-PreRender@CDesktopRenderTarget@@WDA@EAAJXZ.c)
 * Callees:
 *     ?NotifyTreeDirtyRegion@CDesktopRenderTarget@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x180015500 (-NotifyTreeDirtyRegion@CDesktopRenderTarget@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z.c)
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180015570 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180017080 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?NotifyTreeDirtyRegion@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x1800172B0 (-NotifyTreeDirtyRegion@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z.c)
 *     ?PreComputeWorker@CVisualTree@@IEAAJPEAVCDirtyRegion@@@Z @ 0x180030CC0 (-PreComputeWorker@CVisualTree@@IEAAJPEAVCDirtyRegion@@@Z.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180031B0C (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x180033070 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x18003458C (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0x @ 0x180126C58 (McTemplateU0x.c)
 *     McTemplateU0xq @ 0x180138D78 (McTemplateU0xq.c)
 */

__int64 __fastcall CDesktopRenderTarget::PreRender(CDesktopRenderTarget *this)
{
  unsigned __int64 v1; // rdi
  int v3; // esi
  __int64 v4; // rbp
  _DWORD *v5; // rax
  _DWORD *v6; // r15
  __int64 v7; // rsi
  _QWORD **v8; // r14
  __int128 v9; // xmm6
  __int64 v10; // rbx
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rcx
  _DWORD *v14; // rax
  int v15; // eax
  int i; // ebx
  CHwndRenderTarget *v17; // rcx
  void (__fastcall *v18)(CDesktopRenderTarget *, const struct CVisualTree *, const struct CDirtyRegion *); // rax
  unsigned int (__fastcall *v19)(CDirtyRegion *__hidden); // rax
  unsigned __int64 v20; // rcx
  HANDLE CurrentThread; // rax
  BOOL v22; // eax
  int v23; // eax
  HANDLE v24; // rax
  BOOL ThreadCycleTime; // eax
  unsigned int v27; // ebx
  int v28; // eax
  _QWORD *v29; // rax
  bool v30; // [rsp+30h] [rbp-68h]
  unsigned __int64 CycleTime; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 v32[2]; // [rsp+40h] [rbp-58h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]

  v1 = 0LL;
  v3 = 0;
  if ( *((_DWORD *)this + 20) )
  {
    if ( *(int *)(*((_QWORD *)this - 6) + 1160LL) >= 2 && (v27 = 0, *((_DWORD *)this + 56)) )
    {
      while ( 1 )
      {
        v28 = CVisualTree::PreCompute(*(CVisualTree **)(*((_QWORD *)this + 25) + 8LL * v27));
        v3 = v28;
        if ( v28 < 0 )
          break;
        if ( ++v27 >= *((_DWORD *)this + 56) )
          goto LABEL_3;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0x861u);
    }
    else
    {
LABEL_3:
      v4 = *((_QWORD *)this + 2);
      if ( v4 )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
          McTemplateU0xq(
            this,
            &EVTDESC_MILEVENT_MEDIA_UCE_PRECOMPUTEEVENT_Start,
            *((_QWORD *)this + 2),
            *(unsigned __int8 *)(v4 + 32));
        v5 = HeapAlloc(WPF::g_processHeap, 0, 0xAA8uLL);
        v6 = v5;
        if ( !v5 )
          ModuleFailFastForHRESULT(2147942414LL, retaddr);
        v7 = 8LL;
        *(_QWORD *)v5 = &CMILRefCountBase::`vftable';
        v5[2] = 0;
        *(_QWORD *)v5 = &CDirtyRegion::`vftable';
        `vector constructor iterator'(
          (CInputSinkStruct::InputQueueInfo *)(v5 + 6),
          0x10uLL,
          8uLL,
          (void *(*)(void *))COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
        `vector constructor iterator'(
          (CInputSinkStruct::InputQueueInfo *)(v6 + 38),
          0x10uLL,
          8uLL,
          (void *(*)(void *))COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
        `vector constructor iterator'(
          (CInputSinkStruct::InputQueueInfo *)(v6 + 206),
          0x10uLL,
          8uLL,
          (void *(*)(void *))COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
        v6[238] = 0;
        `vector constructor iterator'(
          (CInputSinkStruct::InputQueueInfo *)(v6 + 239),
          0x10uLL,
          8uLL,
          (void *(*)(void *))COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
        v8 = (_QWORD **)(v6 + 280);
        *((_QWORD *)v6 + 142) = v6 + 280;
        *((_QWORD *)v6 + 143) = v6 + 280;
        *((_QWORD *)v6 + 141) = v6 + 284;
        *((_QWORD *)v6 + 140) = v6 + 284;
        v6[672] = 0;
        *((_BYTE *)v6 + 2720) = 0;
        *((_QWORD *)v6 + 35) = v6 + 70;
        *((_QWORD *)v6 + 36) = v6 + 70;
        *((_QWORD *)v6 + 38) = v6 + 74;
        *((_QWORD *)v6 + 37) = v6 + 74;
        *((_QWORD *)v6 + 40) = v6 + 78;
        *((_QWORD *)v6 + 39) = v6 + 78;
        *((_QWORD *)v6 + 42) = v6 + 82;
        *((_QWORD *)v6 + 41) = v6 + 82;
        *((_QWORD *)v6 + 44) = v6 + 86;
        *((_QWORD *)v6 + 43) = v6 + 86;
        *((_QWORD *)v6 + 46) = v6 + 90;
        *((_QWORD *)v6 + 45) = v6 + 90;
        *((_QWORD *)v6 + 48) = v6 + 94;
        *((_QWORD *)v6 + 47) = v6 + 94;
        *((_QWORD *)v6 + 50) = v6 + 98;
        *((_QWORD *)v6 + 49) = v6 + 98;
        (**(void (__fastcall ***)(_DWORD *))v6)(v6);
        if ( this == (CDesktopRenderTarget *)-252LL )
        {
          *(_OWORD *)v32 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
          v9 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        }
        else
        {
          v9 = *(_OWORD *)((char *)this + 252);
        }
        v30 = !g_bUseDirtyRegion;
        v10 = *(_QWORD *)(*(_QWORD *)(v4 + 16) + 360LL);
        memset_0(v6 + 6, 0, 0x80uLL);
        memset_0(v6 + 134, 0, 0x120uLL);
        *((_QWORD *)v6 + 2) = v10;
        v6[679] = 1065353216;
        *((_WORD *)v6 + 1362) = 0;
        v6[674] = 0;
        v6[279] = 0;
        *((_BYTE *)v6 + 2723) = 0;
        *((_BYTE *)v6 + 2722) = v30;
        *(_OWORD *)(v6 + 675) = v9;
        *((_QWORD *)v6 + 35) = v6 + 70;
        *((_QWORD *)v6 + 36) = v6 + 70;
        *((_QWORD *)v6 + 38) = v6 + 74;
        *((_QWORD *)v6 + 37) = v6 + 74;
        *((_QWORD *)v6 + 40) = v6 + 78;
        *((_QWORD *)v6 + 39) = v6 + 78;
        *((_QWORD *)v6 + 42) = v6 + 82;
        *((_QWORD *)v6 + 41) = v6 + 82;
        *((_QWORD *)v6 + 44) = v6 + 86;
        *((_QWORD *)v6 + 43) = v6 + 86;
        *((_QWORD *)v6 + 46) = v6 + 90;
        *((_QWORD *)v6 + 45) = v6 + 90;
        *((_QWORD *)v6 + 48) = v6 + 94;
        *((_QWORD *)v6 + 47) = v6 + 94;
        *((_QWORD *)v6 + 50) = v6 + 98;
        *((_QWORD *)v6 + 49) = v6 + 98;
        v11 = (_QWORD *)*((_QWORD *)v6 + 141);
        if ( (_QWORD **)*v11 != v8 || (v12 = (_QWORD *)v11[1], (_QWORD *)*v12 != v11) )
          __fastfail(3u);
        *((_QWORD *)v6 + 141) = v12;
        *v12 = v8;
        while ( 1 )
        {
          v13 = *v8;
          if ( *v8 == v8 )
            break;
          if ( (_QWORD **)v13[1] != v8 || (v29 = (_QWORD *)*v13, *(_QWORD **)(*v13 + 8LL) != v13) )
            __fastfail(3u);
          *v8 = v29;
          v29[1] = v8;
          WPF::ProcessHeapImpl::Free(v13);
        }
        *((_QWORD *)v6 + 141) = v6 + 280;
        *v8 = v8;
        *((_QWORD *)v6 + 142) = v6 + 280;
        *((_QWORD *)v6 + 143) = v6 + 280;
        *((_QWORD *)v6 + 141) = v6 + 284;
        *((_QWORD *)v6 + 140) = v6 + 284;
        v14 = v6 + 40;
        v6[672] = 0;
        do
        {
          *(_QWORD *)v14 = 0LL;
          *((_QWORD *)v14 - 1) = 0LL;
          *((_BYTE *)v14 + 260) = 1;
          *(_QWORD *)(v14 + 63) = 0LL;
          v14[62] = 0;
          *((_QWORD *)v14 - 16) = 0LL;
          *((_QWORD *)v14 - 17) = 0LL;
          v14 += 4;
          --v7;
        }
        while ( v7 );
        v15 = CVisualTree::PreComputeWorker((CVisualTree *)v4, (struct CDirtyRegion *)v6);
        v3 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xBAu);
        }
        else
        {
          for ( i = *(_DWORD *)(v4 + 1104); i > 0; --i )
          {
            v17 = *(CHwndRenderTarget **)(*(_QWORD *)(v4 + 1080) + 8LL * (unsigned int)(i - 1));
            v18 = *(void (__fastcall **)(CDesktopRenderTarget *, const struct CVisualTree *, const struct CDirtyRegion *))(*(_QWORD *)v17 + 24LL);
            if ( v18 == CHwndRenderTarget::NotifyTreeDirtyRegion )
            {
              CHwndRenderTarget::NotifyTreeDirtyRegion(
                v17,
                (const struct CVisualTree *)v4,
                (const struct CDirtyRegion *)v6);
            }
            else if ( v18 == CDesktopRenderTarget::NotifyTreeDirtyRegion )
            {
              CDesktopRenderTarget::NotifyTreeDirtyRegion(
                v17,
                (const struct CVisualTree *)v4,
                (const struct CDirtyRegion *)v6);
            }
            else
            {
              v18(v17, (const struct CVisualTree *)v4, (const struct CDirtyRegion *)v6);
            }
          }
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            McTemplateU0x(
              &Microsoft_Windows_Dwm_Core_Provider_Context,
              &EVTDESC_MILEVENT_MEDIA_UCE_PRECOMPUTEEVENT_Stop,
              v4);
        }
        v19 = *(unsigned int (__fastcall **)(CDirtyRegion *__hidden))(*(_QWORD *)v6 + 8LL);
        if ( v19 == CDirtyRegion::Release )
          CDirtyRegion::Release((CDirtyRegion *)v6);
        else
          v19((CDirtyRegion *)v6);
        if ( v3 >= 0 )
          goto LABEL_27;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x870u);
      }
    }
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D00, 2u, v3, 0x6F2u);
    return (unsigned int)v3;
  }
LABEL_27:
  if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this - 6) + 72LL) + 148LL) )
    CDirtyRegion::SetFullDirty(*((CDirtyRegion **)this + 46));
  v20 = 0LL;
  CycleTime = 0LL;
  if ( ::CycleTime )
  {
    CurrentThread = GetCurrentThread();
    v22 = QueryThreadCycleTime(CurrentThread, &CycleTime);
    v20 = CycleTime;
    if ( v22 )
      qword_18026ED78 += CycleTime - ::CycleTime;
  }
  ::CycleTime = v20;
  v23 = CDesktopRenderTarget::CalculateOcclusion((CDesktopRenderTarget *)((char *)this + 48), 1u);
  v3 = v23;
  if ( v23 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D00, 2u, v23, 0x6FBu);
  }
  else
  {
    v32[0] = 0LL;
    if ( ::CycleTime )
    {
      v24 = GetCurrentThread();
      ThreadCycleTime = QueryThreadCycleTime(v24, v32);
      v1 = v32[0];
      if ( ThreadCycleTime )
        qword_18026ED88 += v32[0] - ::CycleTime;
    }
    ::CycleTime = v1;
  }
  return (unsigned int)v3;
}
