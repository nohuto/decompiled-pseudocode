/*
 * XREFs of ?Render@CRenderTargetManager@@QEAAJPEA_N@Z @ 0x18001B620
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180012360 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x180019700 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180019AA0 (-IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x180068110 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@AEAV-.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCOverlayContext@@$0A@@@QEAAJPEFBQEAVCOverlayContext@@I@Z @ 0x180068440 (-AddMultipleAndSet@-$DynArray@PEAVCOverlayContext@@$0A@@@QEAAJPEFBQEAVCOverlayContext@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x18007E7AC (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?AddMultipleAndSet@?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@QEAAJPEFBUReservedPlaneInfo@COverlayContext@@I@Z @ 0x18013083C (-AddMultipleAndSet@-$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@QEAAJPEFBUReservedPlaneI.c)
 *     ?GetReservedPlaneInfo@CPlaneCaptureRenderTargetEngine@@QEAAJPEAUReservedPlaneInfo@COverlayContext@@@Z @ 0x180139AF4 (-GetReservedPlaneInfo@CPlaneCaptureRenderTargetEngine@@QEAAJPEAUReservedPlaneInfo@COverlayContex.c)
 *     ?SetExcludeSubtree@CVisualGroup@@QEAAX_N@Z @ 0x18017873C (-SetExcludeSubtree@CVisualGroup@@QEAAX_N@Z.c)
 */

__int64 __fastcall CRenderTargetManager::Render(CRenderTargetManager *this, bool *a2, __int64 a3)
{
  unsigned int v3; // ebx
  CRenderTargetManager *v4; // rsi
  bool v5; // cc
  unsigned int v6; // r14d
  void **v7; // r13
  unsigned int v8; // r12d
  unsigned int v9; // r14d
  __int64 v10; // r15
  CPlaneCaptureRenderTargetEngine *v11; // rdi
  bool (__fastcall *v12)(__int64, int); // rax
  bool v13; // al
  int v14; // eax
  int v15; // edi
  int v16; // eax
  bool *v17; // rsi
  __int64 v18; // r15
  CVisualGroup *v19; // rcx
  CHwndRenderTarget *v20; // rcx
  __int64 (__fastcall *v21)(CHwndRenderTarget *, bool *); // rax
  int v22; // eax
  int v23; // r14d
  CVisualGroup *v24; // rcx
  unsigned int v26; // r15d
  unsigned int v27; // r12d
  __int64 *v28; // r9
  unsigned int v29; // eax
  __int64 v30; // xmm0_8
  __int64 v31; // rcx
  int v32; // eax
  unsigned int v33; // r15d
  unsigned int v34; // r12d
  __int64 v35; // rdi
  __int64 v36; // r8
  unsigned int v37; // eax
  __int64 *v38; // r9
  __int64 v39; // xmm0_8
  __int64 v40; // rcx
  int v41; // eax
  int v42; // eax
  bool v43[8]; // [rsp+30h] [rbp-D0h] BYREF
  bool *v44; // [rsp+38h] [rbp-C8h]
  void *v45[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v46; // [rsp+50h] [rbp-B0h]
  unsigned int v47; // [rsp+58h] [rbp-A8h]
  __int64 v48; // [rsp+60h] [rbp-A0h] BYREF
  CRenderTargetManager *v49; // [rsp+68h] [rbp-98h]
  void *v50[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v51; // [rsp+80h] [rbp-80h]
  int v52; // [rsp+88h] [rbp-78h]
  LPVOID lpMem[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v54; // [rsp+A0h] [rbp-60h]
  int v55; // [rsp+A8h] [rbp-58h]
  _BYTE v56[144]; // [rsp+B0h] [rbp-50h] BYREF

  v3 = 0;
  v4 = this;
  v5 = *(_DWORD *)(*((_QWORD *)this + 2) + 1160LL) <= 2;
  v6 = 0;
  v44 = a2;
  v49 = this;
  *(_OWORD *)v45 = 0LL;
  v46 = 0LL;
  v47 = 0;
  if ( v5 || *((_BYTE *)this + 146) )
  {
    v7 = (void **)((char *)this + 24);
    goto LABEL_3;
  }
  v26 = 0;
  if ( !*((_DWORD *)this + 34) )
  {
LABEL_59:
    v33 = 0;
    if ( *((_DWORD *)v4 + 12) )
    {
      v34 = (unsigned int)v44;
      while ( 1 )
      {
        v35 = 8LL * v33;
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v35 + *((_QWORD *)v4 + 3)) + 192LL))(*(_QWORD *)(v35 + *((_QWORD *)v4 + 3))) )
        {
          v37 = v6 + 1;
          v38 = (__int64 *)(v35 + *((_QWORD *)v4 + 3));
          if ( v6 + 1 >= v6 )
            v34 = v6 + 1;
          v15 = v37 < v6 ? 0x80070216 : 0;
          if ( v37 < v6 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xB5u);
          }
          else if ( v34 > HIDWORD(v46) )
          {
            v41 = DynArrayImpl<1>::AddMultipleAndSet(v45, 8LL, v36, v38);
            v15 = v41;
            if ( v41 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v41, 0xC0u);
            v6 = v47;
          }
          else
          {
            v39 = *v38;
            v40 = v6;
            v6 = v34;
            v47 = v34;
            *((_QWORD *)v45[0] + v40) = v39;
          }
          if ( v15 < 0 )
            break;
        }
        if ( ++v33 >= *((_DWORD *)v4 + 12) )
          goto LABEL_75;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D00, 2u, v15, 0xDCu);
      goto LABEL_36;
    }
LABEL_75:
    v7 = v45;
    *v44 = *((_BYTE *)v4 + 145);
    *((_BYTE *)v4 + 145) = 0;
LABEL_3:
    v8 = *((_DWORD *)v4 + 12);
    v54 = 0LL;
    v9 = 0;
    v55 = 0;
    v51 = 0LL;
    v52 = 0;
    *(_OWORD *)lpMem = 0LL;
    *(_OWORD *)v50 = 0LL;
    if ( v8 )
    {
      v10 = 0LL;
      do
      {
        v11 = *(CPlaneCaptureRenderTargetEngine **)(v10 + *((_QWORD *)v4 + 3));
        v12 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v11 + 48LL);
        if ( v12 == CHwndRenderTarget::IsOfType )
          v13 = CHwndRenderTarget::IsOfType((__int64)v11, 70);
        else
          v13 = v12((__int64)v11, 70);
        if ( !v13
          || (*(unsigned __int8 (__fastcall **)(CPlaneCaptureRenderTargetEngine *))(*(_QWORD *)v11 + 192LL))(v11) )
        {
          if ( (*(unsigned __int8 (__fastcall **)(CPlaneCaptureRenderTargetEngine *, __int64))(*(_QWORD *)v11 + 48LL))(
                 v11,
                 95LL) )
          {
            if ( CPlaneCaptureRenderTargetEngine::GetReservedPlaneInfo(
                   v11,
                   (struct COverlayContext::ReservedPlaneInfo *)v56) >= 0 )
            {
              v42 = DynArray<COverlayContext::ReservedPlaneInfo,0>::AddMultipleAndSet(v50, v56);
              v15 = v42;
              if ( v42 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v42, 0x13Eu);
                goto LABEL_14;
              }
            }
          }
        }
        else
        {
          v48 = *((_QWORD *)v11 + 99);
          if ( v48 )
          {
            v14 = DynArray<COverlayContext *,0>::AddMultipleAndSet(lpMem, &v48);
            v15 = v14;
            if ( v14 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x133u);
              goto LABEL_14;
            }
          }
        }
        ++v9;
        v10 += 8LL;
      }
      while ( v9 < v8 );
    }
    v16 = COverlayContext::ComputeOverlayConfiguration(lpMem, v50);
    v15 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x144u);
LABEL_14:
    if ( v50[0] != v50[1] )
      WPF::ProcessHeapImpl::Free(v50[0]);
    if ( lpMem[0] != lpMem[1] && lpMem[0] )
      HeapFree(WPF::g_processHeap, 0, lpMem[0]);
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D00, 2u, v15, 0xE5u);
    }
    else if ( *((_DWORD *)v7 + 6) )
    {
      v17 = v44;
      do
      {
        v18 = *((_QWORD *)*v7 + v3);
        v43[0] = 0;
        v19 = *(CVisualGroup **)(v18 + 96);
        if ( v19 )
          CVisualGroup::SetExcludeSubtree(v19, 1);
        v20 = (CHwndRenderTarget *)(v18 + 64);
        v21 = *(__int64 (__fastcall **)(CHwndRenderTarget *, bool *))(*(_QWORD *)(v18 + 64) + 56LL);
        if ( v21 == CHwndRenderTarget::Render )
          v22 = CHwndRenderTarget::Render(v20, v43);
        else
          v22 = v21(v20, v43);
        v23 = v22;
        if ( v22 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D00, 2u, v22, 0xEFu);
        v24 = *(CVisualGroup **)(v18 + 96);
        if ( v24 )
          CVisualGroup::SetExcludeSubtree(v24, 0);
        if ( v23 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D00, 2u, v23, 0xF8u);
        else
          *v17 |= v43[0];
        if ( !v15 || v15 >= 0 && v23 < 0 )
          v15 = v23;
        ++v3;
      }
      while ( v3 < *((_DWORD *)v7 + 6) );
      v4 = v49;
    }
    goto LABEL_36;
  }
  v27 = (unsigned int)v44;
  while ( 1 )
  {
    v28 = (__int64 *)(*((_QWORD *)v4 + 14) + 8LL * v26);
    v29 = v6 + 1;
    if ( v6 + 1 >= v6 )
      v27 = v6 + 1;
    v15 = v29 < v6 ? 0x80070216 : 0;
    if ( v29 < v6 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xB5u);
    }
    else if ( v27 > HIDWORD(v46) )
    {
      v32 = DynArrayImpl<1>::AddMultipleAndSet(v45, 8LL, a3, v28);
      v15 = v32;
      if ( v32 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v32, 0xC0u);
      v6 = v47;
    }
    else
    {
      v30 = *v28;
      v31 = v6;
      v6 = v27;
      v47 = v27;
      *((_QWORD *)v45[0] + v31) = v30;
    }
    if ( v15 < 0 )
      break;
    if ( ++v26 >= *((_DWORD *)v4 + 34) )
      goto LABEL_59;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D00, 2u, v15, 0xD5u);
LABEL_36:
  if ( !*((_DWORD *)v4 + 24) )
    *(_WORD *)((char *)v4 + 147) = 0;
  if ( v45[0] != v45[1] )
    WPF::ProcessHeapImpl::Free(v45[0]);
  return (unsigned int)v15;
}
