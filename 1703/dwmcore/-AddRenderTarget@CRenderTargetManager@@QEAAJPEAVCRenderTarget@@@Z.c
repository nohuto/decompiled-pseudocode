/*
 * XREFs of ?AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z @ 0x18006B4C8
 * Callers:
 *     ?NotifyOnChangeCompleted@CVisualCapture@@MEAAXXZ @ 0x180026FD0 (-NotifyOnChangeCompleted@CVisualCapture@@MEAAXXZ.c)
 *     ?AddHwndRenderTarget@CComposition@@QEAAJPEAVCHwndRenderTarget@@@Z @ 0x180064C24 (-AddHwndRenderTarget@CComposition@@QEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x1801293EC (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPC.c)
 *     ?MetaBitmapRenderTarget_Create@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET_CREATE@@@Z @ 0x180130E94 (-MetaBitmapRenderTarget_Create@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUM.c)
 *     ?EnsureInteropRenderTarget@CHolographicManager@@QEAAJXZ @ 0x1801A601C (-EnsureInteropRenderTarget@CHolographicManager@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InsertAt@?$DynArray@PEAVCRenderTarget@@$00@@QEAAJAEBQEAVCRenderTarget@@I@Z @ 0x1800B19B4 (-InsertAt@-$DynArray@PEAVCRenderTarget@@$00@@QEAAJAEBQEAVCRenderTarget@@I@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800B3414 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetManager::AddRenderTarget(CRenderTargetManager *this, struct CRenderTarget *a2)
{
  __int64 v3; // r8
  __int64 v4; // rcx
  unsigned int v5; // edx
  unsigned int v6; // eax
  int v7; // ebx
  __int64 v8; // rcx
  struct CRenderTarget *v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r8
  int v13; // eax
  int v14; // r9d
  __int64 v15; // rcx
  unsigned int v16; // edx
  unsigned int v17; // eax
  int v18; // eax
  int v19; // eax
  unsigned int v20; // [rsp+20h] [rbp-10h]
  struct CRenderTarget *v21; // [rsp+48h] [rbp+18h] BYREF

  v21 = a2;
  if ( (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 38LL) )
  {
    v10 = v21;
    if ( (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)v21 + 184LL))(v21) )
    {
      v15 = *((unsigned int *)this + 34);
      v16 = (unsigned int)v21;
      v17 = v15 + 1;
      if ( (int)v15 + 1 >= (unsigned int)v15 )
        v16 = v15 + 1;
      v7 = v17 < (unsigned int)v15 ? 0x80070216 : 0;
      if ( v17 < (unsigned int)v15 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xB5u);
      }
      else if ( v16 > *((_DWORD *)this + 33) )
      {
        v18 = DynArrayImpl<1>::AddMultipleAndSet((char *)this + 112, 8LL, v11, &v21);
        v7 = v18;
        if ( v18 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v15) = v21;
        *((_DWORD *)this + 34) = v16;
      }
      if ( v7 >= 0 )
        goto LABEL_11;
      v20 = 768;
LABEL_44:
      v14 = v7;
      goto LABEL_45;
    }
    if ( (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)v10 + 208LL))(v10) )
      v12 = 0LL;
    else
      v12 = *((unsigned int *)this + 24);
    v13 = DynArray<CRenderTarget *,1>::InsertAt((char *)this + 24, &v21, v12);
    v7 = v13;
    if ( v13 >= 0 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)v21 + 176LL))(v21) )
      {
        if ( !*((_DWORD *)this + 25) )
          DwmGenerateMoveData(1LL);
        ++*((_DWORD *)this + 25);
      }
      ++*((_DWORD *)this + 24);
      goto LABEL_11;
    }
    v20 = 752;
LABEL_26:
    v14 = v13;
LABEL_45:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, v20);
    return (unsigned int)v7;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(struct CRenderTarget *, __int64))(*(_QWORD *)v21 + 48LL))(v21, 48LL) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *, __int64))(*(_QWORD *)v21 + 48LL))(v21, 59LL) )
      ++*((_DWORD *)this + 26);
    v4 = *((unsigned int *)this + 12);
    v5 = (unsigned int)v21;
    v6 = v4 + 1;
    if ( (int)v4 + 1 >= (unsigned int)v4 )
      v5 = v4 + 1;
    v7 = v6 < (unsigned int)v4 ? 0x80070216 : 0;
    if ( v6 < (unsigned int)v4 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xB5u);
    }
    else if ( v5 > *((_DWORD *)this + 11) )
    {
      v19 = DynArrayImpl<1>::AddMultipleAndSet((char *)this + 24, 8LL, v3, &v21);
      v7 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v4) = v21;
      *((_DWORD *)this + 12) = v5;
    }
    if ( v7 >= 0 )
      goto LABEL_11;
    v20 = 786;
    goto LABEL_44;
  }
  v13 = DynArray<CRenderTarget *,1>::InsertAt((char *)this + 24, &v21, 0LL);
  v7 = v13;
  if ( v13 < 0 )
  {
    v20 = 773;
    goto LABEL_26;
  }
  ++*((_DWORD *)this + 27);
LABEL_11:
  (*(void (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)v21 + 8LL))(v21);
  v8 = *(_QWORD *)(*((_QWORD *)this + 2) + 392LL);
  if ( v8 )
    *(_BYTE *)(v8 + 28) = 1;
  return (unsigned int)v7;
}
