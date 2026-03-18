/*
 * XREFs of ?AppendDrawListEntryToCallbackRenderer@CCallbackRendererManager@@QEAAJPEAVCDrawListEntry@@PEAUID2D1PrivateCompositorRenderer@@@Z @ 0x1801338D4
 * Callers:
 *     ?AppendWARPDrawListEntry@CD2DContext@@QEAAJPEAVCWARPDrawListEntry@@@Z @ 0x180197CD8 (-AppendWARPDrawListEntry@CD2DContext@@QEAAJPEAVCWARPDrawListEntry@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCallbackRendererManager::AppendDrawListEntryToCallbackRenderer(
        CCallbackRendererManager *this,
        struct CDrawListEntry *a2,
        struct ID2D1PrivateCompositorRenderer *a3)
{
  unsigned int v3; // edx
  __int64 v5; // rcx
  unsigned int v6; // eax
  int v7; // ebx
  int v8; // eax
  struct CDrawListEntry *v10; // [rsp+48h] [rbp+10h] BYREF
  struct ID2D1PrivateCompositorRenderer *v11; // [rsp+50h] [rbp+18h]

  v11 = a3;
  v10 = a2;
  v3 = (unsigned int)a3;
  v5 = *((unsigned int *)this + 6);
  v6 = v5 + 1;
  if ( (int)v5 + 1 >= (unsigned int)v5 )
    v3 = v5 + 1;
  v7 = v6 < (unsigned int)v5 ? 0x80070216 : 0;
  if ( v6 < (unsigned int)v5 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xB5u);
  }
  else if ( v3 > *((_DWORD *)this + 5) )
  {
    v8 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this, 8u, 1, &v10);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)this + 8 * v5) = v10;
    *((_DWORD *)this + 6) = v3;
  }
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x5Fu);
  }
  else
  {
    (**(void (__fastcall ***)(struct CDrawListEntry *))v10)(v10);
    ++*((_DWORD *)v10 + 10);
  }
  return (unsigned int)v7;
}
