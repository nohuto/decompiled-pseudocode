/*
 * XREFs of ?Render@CRenderTargetManager@@QEAAJPEA_N@Z @ 0x18006B810
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800666B0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?Render@CComposition@@IEAAJPEA_N@Z @ 0x1801316B4 (-Render@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z @ 0x18005BBA4 (-ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18006BEC0 (-IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x18006E340 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@@Z @ 0x180070CA0 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVIImageSource@@$0A@@@QEAAJPEFBQEAVIImageSource@@I@Z @ 0x180070E88 (-AddMultipleAndSet@-$DynArray@PEAVIImageSource@@$0A@@@QEAAJPEFBQEAVIImageSource@@I@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800B3414 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x1800C882C (-IsOOM@@YA_NJ@Z.c)
 *     ?ReportCompositionError@CDwmEventManager@DwmCoreAsimov@@QEAAXPEBG0J@Z @ 0x1800CE274 (-ReportCompositionError@CDwmEventManager@DwmCoreAsimov@@QEAAXPEBG0J@Z.c)
 *     ?GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x1800CE6DC (-GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?RenderingStatusFromHr@CComposition@@QEAA?AW4RENDERING_STATUS@1@J@Z @ 0x18013167C (-RenderingStatusFromHr@CComposition@@QEAA-AW4RENDERING_STATUS@1@J@Z.c)
 *     ?SetExcludeSubtree@CVisualGroup@@QEAAX_N@Z @ 0x180163498 (-SetExcludeSubtree@CVisualGroup@@QEAAX_N@Z.c)
 *     ?MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z @ 0x180185D20 (-MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z.c)
 */

__int64 __fastcall CRenderTargetManager::Render(CRenderTargetManager *this, bool *a2, __int64 a3)
{
  bool *v4; // r14
  __int64 v5; // rax
  int v6; // r13d
  unsigned int v7; // ebx
  void **v8; // r12
  unsigned int v9; // r15d
  unsigned int v10; // esi
  __int64 v11; // r14
  _QWORD *v12; // rbx
  __int64 (__fastcall *v13)(_QWORD *, __int64); // rax
  int v15; // eax
  int v16; // ebx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // esi
  __int64 v20; // rbx
  __int64 v21; // rsi
  CVisualGroup *v22; // rcx
  CHwndRenderTarget *v23; // rcx
  __int64 v24; // rdx
  __int64 (__fastcall *v25)(CHwndRenderTarget *__hidden, bool, bool *); // rax
  int v26; // eax
  int v27; // r14d
  CVisualGroup *v28; // rcx
  int v29; // eax
  unsigned int v31; // r15d
  unsigned int v32; // r14d
  __int64 *v33; // r9
  unsigned int v34; // eax
  __int64 v35; // xmm0_8
  __int64 v36; // rcx
  int v37; // eax
  unsigned int v38; // r15d
  unsigned int v39; // r14d
  __int64 v40; // rsi
  __int64 v41; // r8
  unsigned int v42; // eax
  __int64 *v43; // r9
  __int64 v44; // xmm0_8
  __int64 v45; // rcx
  int v46; // eax
  int v47; // eax
  const struct _TlgProvider_t *v48; // rcx
  DwmCoreAsimov::CDwmEventManager *Manager; // rax
  int v50; // eax
  const struct _TlgProvider_t *v51; // rcx
  DwmCoreAsimov::CDwmEventManager *v52; // rax
  void *v53[2]; // [rsp+38h] [rbp-19h] BYREF
  __int64 v54; // [rsp+48h] [rbp-9h]
  unsigned int v55; // [rsp+50h] [rbp-1h]
  LPVOID lpMem[2]; // [rsp+58h] [rbp+7h] BYREF
  __int64 v57; // [rsp+68h] [rbp+17h]
  __int64 v58; // [rsp+70h] [rbp+1Fh]
  __int64 v59; // [rsp+B8h] [rbp+67h] BYREF
  bool *v60; // [rsp+C0h] [rbp+6Fh]

  v60 = a2;
  v4 = a2;
  v5 = *((_QWORD *)this + 2);
  v6 = 0;
  *(_OWORD *)v53 = 0LL;
  v54 = 0LL;
  v7 = 0;
  v55 = 0;
  if ( *(int *)(v5 + 1224) <= 2 || *((_BYTE *)this + 149) )
  {
    v8 = (void **)((char *)this + 24);
LABEL_3:
    v9 = *((_DWORD *)this + 12);
    v57 = 0LL;
    v10 = 0;
    LODWORD(v58) = 0;
    *(_OWORD *)lpMem = 0LL;
    if ( v9 )
    {
      v11 = 0LL;
      while ( 1 )
      {
        v12 = *(_QWORD **)(v11 + *((_QWORD *)this + 3));
        v13 = *(__int64 (__fastcall **)(_QWORD *, __int64))(*v12 + 48LL);
        if ( (char *)v13 == (char *)CHwndRenderTarget::IsOfType
           ? CHwndRenderTarget::IsOfType(v12, 38LL)
           : (unsigned __int8)v13(v12, 38LL) )
        {
          if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*v12 + 176LL))(v12) )
          {
            v59 = v12[97];
            if ( v59 )
            {
              v15 = DynArray<IImageSource *,0>::AddMultipleAndSet(lpMem, &v59);
              v16 = v15;
              if ( v15 < 0 )
                break;
            }
          }
        }
        ++v10;
        v11 += 8LL;
        if ( v10 >= v9 )
          goto LABEL_12;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x175u);
    }
    else
    {
LABEL_12:
      v17 = COverlayContext::ComputeOverlayConfiguration(lpMem);
      v16 = v17;
      if ( v17 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x17Au);
    }
    if ( lpMem[0] != lpMem[1] && lpMem[0] )
      HeapFree(WPF::g_processHeap, 0, lpMem[0]);
    if ( v16 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1801E9F58, 2u, v16, 0x10Cu);
    v19 = v16;
    if ( v16 < 0 )
    {
      v47 = CComposition::RenderingStatusFromHr(v18);
      CComposition::ProcessRenderingStatus(*((_QWORD *)this + 2), v47);
      if ( v16 == -2147024882 || IsOOM(v16) )
      {
        Manager = DwmCoreAsimov::CDwmEventManager::GetManager(v48);
        DwmCoreAsimov::CDwmEventManager::ReportCompositionError(
          Manager,
          L"RenderTarget",
          L"Render: Encountered low memory condition",
          v16);
      }
      else if ( v16 == -2003304442 || v16 == -2003304307 )
      {
        v19 = 0;
        v6 = v16;
      }
      else
      {
        MilUnexpectedErrorWithAsimovEvent((int)v48, L"intermediate rendering error");
      }
    }
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801E9F58, 2u, v19, 0x11Au);
    }
    else
    {
      v20 = 0LL;
      if ( *((_DWORD *)v8 + 6) )
      {
        do
        {
          v21 = *((_QWORD *)*v8 + v20);
          LOBYTE(v59) = 0;
          v22 = *(CVisualGroup **)(v21 + 96);
          if ( v22 )
            CVisualGroup::SetExcludeSubtree(v22, 1);
          v23 = (CHwndRenderTarget *)(v21 + 64);
          v24 = *((unsigned __int8 *)this + 150);
          v25 = *(__int64 (__fastcall **)(CHwndRenderTarget *__hidden, bool, bool *))(*(_QWORD *)(v21 + 64) + 48LL);
          if ( v25 == CHwndRenderTarget::Render )
            v26 = CHwndRenderTarget::Render(v23, v24, (bool *)&v59);
          else
            v26 = v25(v23, v24, (bool *)&v59);
          v27 = v26;
          if ( v26 < 0 )
            MilInstrumentationCheckHR(0x14u, &dword_1801E9F58, 2u, v26, 0x123u);
          v28 = *(CVisualGroup **)(v21 + 96);
          if ( v28 )
            CVisualGroup::SetExcludeSubtree(v28, 0);
          v19 = v27;
          if ( v27 < 0 )
          {
            v50 = CComposition::RenderingStatusFromHr(v28);
            CComposition::ProcessRenderingStatus(*((_QWORD *)this + 2), v50);
            if ( v27 == -2147024882 || IsOOM(v27) )
            {
              v52 = DwmCoreAsimov::CDwmEventManager::GetManager(v51);
              DwmCoreAsimov::CDwmEventManager::ReportCompositionError(
                v52,
                L"RenderTarget",
                L"Render: Encountered low memory condition",
                v27);
            }
            else if ( v27 == -2003304442 || v27 == -2003304307 )
            {
              v19 = 0;
              v6 = v27;
            }
            else
            {
              MilUnexpectedErrorWithAsimovEvent((int)v51, L"intermediate rendering error");
            }
          }
          if ( v19 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, &dword_1801E9F58, 2u, v19, 0x134u);
            goto LABEL_36;
          }
          v20 = (unsigned int)(v20 + 1);
          *v60 |= v59;
        }
        while ( (unsigned int)v20 < *((_DWORD *)v8 + 6) );
        if ( v6 < 0 )
        {
          *((_DWORD *)this + 36) += 2;
          if ( *((_DWORD *)this + 36) > 0xAu )
            RaiseFailFastException(0LL, 0LL, 0);
        }
        else
        {
          v29 = *((_DWORD *)this + 36);
          if ( v29 )
            *((_DWORD *)this + 36) = v29 - 1;
        }
      }
    }
    goto LABEL_36;
  }
  v31 = 0;
  if ( !*((_DWORD *)this + 34) )
  {
LABEL_58:
    v38 = 0;
    if ( *((_DWORD *)this + 12) )
    {
      v39 = v59;
      do
      {
        v40 = 8LL * v38;
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v40 + *((_QWORD *)this + 3)) + 176LL))(*(_QWORD *)(v40 + *((_QWORD *)this + 3))) )
        {
          v42 = v7 + 1;
          v43 = (__int64 *)(v40 + *((_QWORD *)this + 3));
          if ( v7 + 1 >= v7 )
            v39 = v7 + 1;
          v19 = v42 < v7 ? 0x80070216 : 0;
          if ( v42 < v7 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xB5u);
          }
          else if ( v39 > HIDWORD(v54) )
          {
            v46 = DynArrayImpl<1>::AddMultipleAndSet(v53, 8LL, v41, v43);
            v19 = v46;
            if ( v46 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v46, 0xC0u);
            v7 = v55;
          }
          else
          {
            v44 = *v43;
            v45 = v7;
            v7 = v39;
            v55 = v39;
            *((_QWORD *)v53[0] + v45) = v44;
          }
          if ( v19 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, &dword_1801E9F58, 2u, v19, 0x103u);
            goto LABEL_36;
          }
        }
        ++v38;
      }
      while ( v38 < *((_DWORD *)this + 12) );
      v4 = v60;
    }
    v8 = v53;
    *v4 = *((_BYTE *)this + 148);
    *((_BYTE *)this + 148) = 0;
    goto LABEL_3;
  }
  v32 = v59;
  while ( 1 )
  {
    v33 = (__int64 *)(*((_QWORD *)this + 14) + 8LL * v31);
    v34 = v7 + 1;
    if ( v7 + 1 >= v7 )
      v32 = v7 + 1;
    v19 = v34 < v7 ? 0x80070216 : 0;
    if ( v34 < v7 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xB5u);
    }
    else if ( v32 > HIDWORD(v54) )
    {
      v37 = DynArrayImpl<1>::AddMultipleAndSet(v53, 8LL, a3, v33);
      v19 = v37;
      if ( v37 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v37, 0xC0u);
      v7 = v55;
    }
    else
    {
      v35 = *v33;
      v36 = v7;
      v7 = v32;
      v55 = v32;
      *((_QWORD *)v53[0] + v36) = v35;
    }
    if ( v19 < 0 )
      break;
    if ( ++v31 >= *((_DWORD *)this + 34) )
    {
      v4 = v60;
      goto LABEL_58;
    }
  }
  MilInstrumentationCheckHR(0x14u, &dword_1801E9F58, 2u, v19, 0xFCu);
LABEL_36:
  if ( !*((_DWORD *)this + 24) )
    *((_WORD *)this + 75) = 0;
  if ( v53[0] != v53[1] )
    WPF::ProcessHeapImpl::Free(v53[0]);
  return (unsigned int)v19;
}
