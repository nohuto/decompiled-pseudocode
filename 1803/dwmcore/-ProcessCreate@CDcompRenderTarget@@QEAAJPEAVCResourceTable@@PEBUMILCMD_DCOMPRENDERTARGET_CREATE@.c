/*
 * XREFs of ?ProcessCreate@CDcompRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGET_CREATE@@@Z @ 0x1800C8F88
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x180062CAC (--0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??2CHwndRenderTarget@@KAPEAX_K@Z @ 0x1800C90C8 (--2CHwndRenderTarget@@KAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDcompRenderTarget::ProcessCreate(
        CDcompRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_DCOMPRENDERTARGET_CREATE *a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  CHwndRenderTarget *v7; // rax
  CHwndRenderTarget *v8; // rcx
  char v9; // cl
  int v10; // ecx

  v3 = *((_QWORD *)this + 7);
  v4 = 0;
  if ( !v3 )
  {
    v7 = (CHwndRenderTarget *)CHwndRenderTarget::operator new((unsigned __int64)this);
    if ( v7 )
      v8 = CHwndRenderTarget::CHwndRenderTarget(v7, *((struct CComposition **)this + 2));
    else
      v8 = 0LL;
    *((_QWORD *)this + 7) = v8;
    if ( !v8 )
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x25u);
      return v4;
    }
    (*(void (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)v8 + 8LL))(v8);
    v3 = *((_QWORD *)this + 7);
  }
  v9 = (*((_DWORD *)a3 + 2) & 0x2000) != 0;
  if ( *(_BYTE *)(v3 + 860) != v9 )
  {
    *(_BYTE *)(v3 + 860) = v9;
    *(_BYTE *)(v3 + 161) = 1;
    v3 = *((_QWORD *)this + 7);
  }
  v10 = *((_DWORD *)a3 + 8);
  *(_DWORD *)(v3 + 104) = *((_DWORD *)a3 + 9);
  *(_DWORD *)(v3 + 96) = v10;
  *(_BYTE *)(*((_QWORD *)this + 7) + 859LL) = *((_DWORD *)a3 + 10) != 0;
  *(_QWORD *)(*((_QWORD *)this + 7) + 520LL) = *((_QWORD *)a3 + 3);
  return v4;
}
