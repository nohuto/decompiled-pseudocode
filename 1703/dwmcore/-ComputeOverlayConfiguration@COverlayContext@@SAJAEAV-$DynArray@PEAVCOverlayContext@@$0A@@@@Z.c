/*
 * XREFs of ?ComputeOverlayConfiguration@COverlayContext@@SAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@@Z @ 0x180070CA0
 * Callers:
 *     ?Render@CRenderTargetManager@@QEAAJPEA_N@Z @ 0x18006B810 (-Render@CRenderTargetManager@@QEAAJPEA_N@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVIImageSource@@$0A@@@QEAAJPEFBQEAVIImageSource@@I@Z @ 0x180070E88 (-AddMultipleAndSet@-$DynArray@PEAVIImageSource@@$0A@@@QEAAJPEFBQEAVIImageSource@@I@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180071020 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@@Z @ 0x1800712CC (-ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$.c)
 *     ?Reset@COverlayContext@@IEAAXXZ @ 0x180071BB8 (-Reset@COverlayContext@@IEAAXXZ.c)
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAtOrderNotPreserved@?$DynArray@PEAV?$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z @ 0x18013312C (-RemoveAtOrderNotPreserved@-$DynArray@PEAV-$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z.c)
 *     ?IsRevokable@COverlayContext@@AEAA_NPEAUOverlayPlaneInfo@1@@Z @ 0x180151974 (-IsRevokable@COverlayContext@@AEAA_NPEAUOverlayPlaneInfo@1@@Z.c)
 */

__int64 __fastcall COverlayContext::ComputeOverlayConfiguration(__int64 a1)
{
  int v1; // ebx
  int v3; // edi
  void *v4; // rbx
  int v5; // eax
  int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // edi
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // r13
  unsigned int v12; // r15d
  __int64 v13; // r14
  unsigned int i; // ebx
  void *lpMem; // [rsp+38h] [rbp-49h] BYREF
  _BYTE *v17; // [rsp+40h] [rbp-41h]
  int v18; // [rsp+48h] [rbp-39h]
  __int64 v19; // [rsp+4Ch] [rbp-35h]
  _BYTE v20[32]; // [rsp+58h] [rbp-29h] BYREF
  void *v21; // [rsp+78h] [rbp-9h] BYREF
  _BYTE *v22; // [rsp+80h] [rbp-1h]
  int v23; // [rsp+88h] [rbp+7h]
  __int64 v24; // [rsp+8Ch] [rbp+Bh]
  _BYTE v25[24]; // [rsp+98h] [rbp+17h] BYREF
  void *Src; // [rsp+E8h] [rbp+67h] BYREF

  v1 = *(_DWORD *)(a1 + 24);
  lpMem = v20;
  v18 = 4;
  v17 = v20;
  v21 = v25;
  v22 = v25;
  Src = *(void **)a1;
  v19 = 4LL;
  v23 = 4;
  v24 = 4LL;
  v3 = DynArrayImpl<0>::Grow((unsigned int)&lpMem, 8, v1, 0, (__int64)&Src);
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xCEu);
  }
  else
  {
    memcpy_0((char *)lpMem + (unsigned int)(8 * HIDWORD(v19)), Src, (unsigned int)(8 * v1));
    HIDWORD(v19) += v1;
    if ( HIDWORD(v19) )
    {
      while ( 1 )
      {
        v4 = *(void **)(*(_QWORD *)lpMem + 64LL);
        Src = v4;
        v5 = DynArray<IImageSource *,0>::AddMultipleAndSet(&v21, lpMem);
        v3 = v5;
        if ( v5 < 0 )
          break;
        v6 = HIDWORD(v19);
        if ( HIDWORD(v19) )
        {
          if ( HIDWORD(v19) != 1 )
          {
            *(_QWORD *)lpMem = *((_QWORD *)lpMem + (unsigned int)(HIDWORD(v19) - 1));
            v6 = HIDWORD(v19);
          }
          v7 = v6 - 1;
          HIDWORD(v19) = v7;
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x216u);
          v7 = HIDWORD(v19);
        }
        v8 = 0;
        while ( v8 < v7 )
        {
          if ( *(_QWORD *)(*((_QWORD *)lpMem + v8) + 64LL) == __PAIR64__(HIDWORD(Src), (unsigned int)v4) )
          {
            DynArray<IImageSource *,0>::AddMultipleAndSet(&v21, (char *)lpMem + 8 * v8);
            DynArray<CWeakReference<CVisual> *,0>::RemoveAtOrderNotPreserved(&lpMem, v8);
            v7 = HIDWORD(v19);
          }
          else
          {
            ++v8;
          }
        }
        v9 = COverlayContext::ComputeOverlayConfigurationForAdapter(&v21);
        v3 = v9;
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xF9u);
          goto LABEL_15;
        }
        HIDWORD(v24) = 0;
        DynArrayImpl<0>::ShrinkToSize(&v21, 8LL);
        if ( !HIDWORD(v19) )
          goto LABEL_11;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xDCu);
    }
    else
    {
LABEL_11:
      if ( *(_DWORD *)(a1 + 24) )
      {
        v10 = 0;
        v11 = *(_QWORD *)(**(_QWORD **)a1 + 1112LL);
        do
        {
          v12 = 0;
          v13 = *(_QWORD *)(*(_QWORD *)a1 + 8LL * v10);
          if ( *(_DWORD *)(v13 + 264) )
          {
            while ( !COverlayContext::IsRevokable(
                       (COverlayContext *)v13,
                       (struct COverlayContext::OverlayPlaneInfo *)(*(_QWORD *)(v13 + 240) + 240LL * v12)) )
            {
              if ( ++v12 >= *(_DWORD *)(v13 + 264) )
                goto LABEL_14;
            }
            (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v11 + 560) + 112LL))(
              *(_QWORD *)(v11 + 560),
              CCommonRegistryData::m_dwOverlayDisqualifyInterval);
          }
LABEL_14:
          ++v10;
        }
        while ( v10 < *(_DWORD *)(a1 + 24) );
      }
    }
  }
LABEL_15:
  if ( v3 < 0 )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 24); ++i )
      COverlayContext::Reset(*(COverlayContext **)(*(_QWORD *)a1 + 8LL * i));
  }
  if ( v21 != v22 )
  {
    WPF::ProcessHeapImpl::Free(v21);
    v21 = 0LL;
  }
  if ( lpMem != v17 )
    WPF::ProcessHeapImpl::Free(lpMem);
  return (unsigned int)v3;
}
