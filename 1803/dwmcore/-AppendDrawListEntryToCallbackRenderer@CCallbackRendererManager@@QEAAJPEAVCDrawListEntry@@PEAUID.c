/*
 * XREFs of ?AppendDrawListEntryToCallbackRenderer@CCallbackRendererManager@@QEAAJPEAVCDrawListEntry@@PEAUID2D1PrivateCompositorRenderer@@@Z @ 0x18013F90C
 * Callers:
 *     ?AppendWARPDrawListEntry@CD2DContext@@QEAAJPEAVCWARPDrawListEntry@@@Z @ 0x1801E1870 (-AppendWARPDrawListEntry@CD2DContext@@QEAAJPEAVCWARPDrawListEntry@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCallbackRendererManager::AppendDrawListEntryToCallbackRenderer(
        CCallbackRendererManager *this,
        struct CDrawListEntry *a2,
        struct ID2D1PrivateCompositorRenderer *a3)
{
  unsigned int v3; // eax
  __int64 v4; // rdx
  int v5; // ebx
  int v6; // eax
  struct CDrawListEntry *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v3 = *((_DWORD *)this + 6);
  v4 = v3 + 1;
  v5 = (unsigned int)v4 < v3 ? 0x80070216 : 0;
  if ( (unsigned int)v4 < v3 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xB5u);
  }
  else if ( (unsigned int)v4 > *((_DWORD *)this + 5) )
  {
    v6 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this, 8u, 1, &v8);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)this + 8LL * v3) = v8;
    *((_DWORD *)this + 6) = v4;
  }
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x67u);
  }
  else
  {
    (**(void (__fastcall ***)(struct CDrawListEntry *, __int64, struct ID2D1PrivateCompositorRenderer *))v8)(v8, v4, a3);
    ++*((_DWORD *)v8 + 10);
  }
  return (unsigned int)v5;
}
