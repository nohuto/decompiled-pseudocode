/*
 * XREFs of ?AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z @ 0x18001B418
 * Callers:
 *     ?NotifyOnChangeCompleted@CVisualCapture@@MEAAXXZ @ 0x180078BC0 (-NotifyOnChangeCompleted@CVisualCapture@@MEAAXXZ.c)
 *     ?AddHwndRenderTarget@CComposition@@QEAAJPEAVCHwndRenderTarget@@@Z @ 0x1800B0528 (-AddHwndRenderTarget@CComposition@@QEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x180137474 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPC.c)
 *     ?ProcessCreate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MAGNIFIERRENDERTARGET_CREATE@@@Z @ 0x18013857C (-ProcessCreate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MAGNIFIERRENDERTARGET.c)
 *     ?ProcessCreate@CPlaneCaptureRenderTargetEngine@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PLANECAPTURERENDERTARGET_CREATE@@@Z @ 0x180139CDC (-ProcessCreate@CPlaneCaptureRenderTargetEngine@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PLANECAPTURE.c)
 *     ?EnsureInteropRenderTarget@CHolographicManager@@QEAAJXZ @ 0x1801C06E8 (-EnsureInteropRenderTarget@CHolographicManager@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InsertAt@?$DynArray@PEAVCRenderTarget@@$00@@QEAAJAEBQEAVCRenderTarget@@I@Z @ 0x18007BB3C (-InsertAt@-$DynArray@PEAVCRenderTarget@@$00@@QEAAJAEBQEAVCRenderTarget@@I@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x18007E7AC (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetManager::AddRenderTarget(CRenderTargetManager *this, struct CRenderTarget *a2)
{
  char v3; // r14
  struct CRenderTarget *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r8
  int v7; // eax
  int v8; // ebx
  __int64 v9; // rcx
  __int64 v11; // r8
  __int64 v12; // rcx
  unsigned int v13; // edx
  unsigned int v14; // eax
  int v15; // r9d
  __int64 v16; // rcx
  unsigned int v17; // edx
  unsigned int v18; // eax
  int v19; // eax
  int v20; // eax
  unsigned int v21; // [rsp+20h] [rbp-10h]
  struct CRenderTarget *v22; // [rsp+48h] [rbp+18h] BYREF

  v22 = a2;
  v3 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(struct CRenderTarget *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 70LL) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *, __int64))(*(_QWORD *)v22 + 48LL))(v22, 65LL) )
    {
      v7 = DynArray<CRenderTarget *,1>::InsertAt((char *)this + 24, &v22, 0LL);
      v8 = v7;
      if ( v7 >= 0 )
      {
        ++*((_DWORD *)this + 27);
        goto LABEL_9;
      }
      v21 = 641;
      goto LABEL_29;
    }
    if ( (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *, __int64))(*(_QWORD *)v22 + 48LL))(v22, 73LL) )
      ++*((_DWORD *)this + 26);
    v12 = *((unsigned int *)this + 12);
    v13 = (unsigned int)v22;
    v14 = v12 + 1;
    if ( (int)v12 + 1 >= (unsigned int)v12 )
      v13 = v12 + 1;
    v8 = v14 < (unsigned int)v12 ? 0x80070216 : 0;
    if ( v14 < (unsigned int)v12 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xB5u);
    }
    else if ( v13 > *((_DWORD *)this + 11) )
    {
      v20 = DynArrayImpl<1>::AddMultipleAndSet((char *)this + 24, 8LL, v11, &v22);
      v8 = v20;
      if ( v20 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v12) = v22;
      *((_DWORD *)this + 12) = v13;
    }
    if ( v8 >= 0 )
      goto LABEL_9;
    v21 = 652;
LABEL_46:
    v15 = v8;
    goto LABEL_47;
  }
  v4 = v22;
  if ( (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)v22 + 200LL))(v22) )
  {
    v16 = *((unsigned int *)this + 34);
    v17 = (unsigned int)v22;
    v18 = v16 + 1;
    if ( (int)v16 + 1 >= (unsigned int)v16 )
      v17 = v16 + 1;
    v8 = v18 < (unsigned int)v16 ? 0x80070216 : 0;
    if ( v18 < (unsigned int)v16 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xB5u);
    }
    else if ( v17 > *((_DWORD *)this + 33) )
    {
      v19 = DynArrayImpl<1>::AddMultipleAndSet((char *)this + 112, 8LL, v5, &v22);
      v8 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v16) = v22;
      *((_DWORD *)this + 34) = v17;
    }
    if ( v8 >= 0 )
      goto LABEL_8;
    v21 = 634;
    goto LABEL_46;
  }
  if ( (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)v4 + 224LL))(v4) )
    v6 = 0LL;
  else
    v6 = *((unsigned int *)this + 24);
  v7 = DynArray<CRenderTarget *,1>::InsertAt((char *)this + 24, &v22, v6);
  v8 = v7;
  if ( v7 < 0 )
  {
    v21 = 618;
LABEL_29:
    v15 = v7;
LABEL_47:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, v21);
    return (unsigned int)v8;
  }
  if ( (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)v22 + 192LL))(v22) )
  {
    if ( !*((_DWORD *)this + 25) )
      DwmGenerateMoveData(1LL);
    ++*((_DWORD *)this + 25);
  }
  ++*((_DWORD *)this + 24);
LABEL_8:
  v3 = 1;
LABEL_9:
  (*(void (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)v22 + 8LL))(v22);
  if ( v3 )
  {
    v9 = *(_QWORD *)(*((_QWORD *)this + 2) + 352LL);
    if ( v9 )
      *(_BYTE *)(v9 + 28) = 1;
  }
  return (unsigned int)v8;
}
