/*
 * XREFs of ?AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z @ 0x18005F25C
 * Callers:
 *     ?NotifyOnChangeCompleted@CVisualCapture@@MEAAXXZ @ 0x18000CC10 (-NotifyOnChangeCompleted@CVisualCapture@@MEAAXXZ.c)
 *     ?AddRenderTarget@CComposition@@QEAAJPEAVCRenderTarget@@@Z @ 0x180033E00 (-AddRenderTarget@CComposition@@QEAAJPEAVCRenderTarget@@@Z.c)
 *     ?EnsureInteropRenderTarget@CHolographicManager@@QEAAJXZ @ 0x1801F88C4 (-EnsureInteropRenderTarget@CHolographicManager@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsPrimaryMonitor@CHwndRenderTarget@@QEBA_NXZ @ 0x180062F10 (-IsPrimaryMonitor@CHwndRenderTarget@@QEBA_NXZ.c)
 *     ?InsertAt@?$DynArray@PEAVCRenderTarget@@$00@@QEAAJAEBQEAVCRenderTarget@@I@Z @ 0x1800CBEA4 (-InsertAt@-$DynArray@PEAVCRenderTarget@@$00@@QEAAJAEBQEAVCRenderTarget@@I@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800CD2B8 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetManager::AddRenderTarget(CRenderTargetManager *this, struct CRenderTarget *a2)
{
  char v3; // si
  __int64 v4; // r8
  unsigned int v5; // eax
  unsigned int v6; // edx
  int v7; // ebx
  CHwndRenderTarget *v9; // rsi
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  int v14; // r9d
  int v15; // eax
  unsigned int v16; // [rsp+20h] [rbp-18h]
  CHwndRenderTarget *v17; // [rsp+48h] [rbp+10h] BYREF

  v17 = a2;
  v3 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 76LL) )
  {
    v9 = v17;
    if ( CHwndRenderTarget::IsPrimaryMonitor(v17) )
      v10 = 0LL;
    else
      v10 = *((unsigned int *)this + 24);
    v11 = DynArray<CRenderTarget *,1>::InsertAt((char *)this + 24, &v17, v10);
    v7 = v11;
    if ( v11 >= 0 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)v9 + 216LL))(v9) )
      {
        v13 = *((_DWORD *)this + 25);
        if ( !v13 )
        {
          DwmGenerateMoveData(1LL);
          v13 = *((_DWORD *)this + 25);
        }
        *((_DWORD *)this + 25) = v13 + 1;
      }
      ++*((_DWORD *)this + 24);
      v3 = 1;
      goto LABEL_9;
    }
    v16 = 527;
    goto LABEL_24;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(CHwndRenderTarget *, __int64))(*(_QWORD *)v17 + 48LL))(v17, 70LL) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(CHwndRenderTarget *, __int64))(*(_QWORD *)v17 + 48LL))(v17, 79LL) )
      ++*((_DWORD *)this + 26);
    v5 = *((_DWORD *)this + 12);
    v6 = v5 + 1;
    v7 = v5 + 1 < v5 ? 0x80070216 : 0;
    if ( v5 + 1 < v5 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xB5u);
    }
    else if ( v6 > *((_DWORD *)this + 11) )
    {
      v15 = DynArrayImpl<1>::AddMultipleAndSet((char *)this + 24, 8LL, v4, &v17);
      v7 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 3) + 8LL * v5) = v17;
      *((_DWORD *)this + 12) = v6;
    }
    if ( v7 >= 0 )
      goto LABEL_9;
    v16 = 555;
    v14 = v7;
LABEL_32:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, v16);
    return (unsigned int)v7;
  }
  v11 = DynArray<CRenderTarget *,1>::InsertAt((char *)this + 24, &v17, 0LL);
  v7 = v11;
  if ( v11 < 0 )
  {
    v16 = 544;
LABEL_24:
    v14 = v11;
    goto LABEL_32;
  }
  ++*((_DWORD *)this + 27);
LABEL_9:
  (*(void (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)v17 + 8LL))(v17);
  if ( v3 )
  {
    v12 = *(_QWORD *)(*((_QWORD *)this + 2) + 376LL);
    if ( v12 )
      *(_BYTE *)(v12 + 20) = 1;
  }
  return (unsigned int)v7;
}
