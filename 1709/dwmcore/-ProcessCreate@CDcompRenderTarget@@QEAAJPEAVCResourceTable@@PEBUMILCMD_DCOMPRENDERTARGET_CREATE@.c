/*
 * XREFs of ?ProcessCreate@CDcompRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGET_CREATE@@@Z @ 0x1801324D4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetAllowStereo@CHwndRenderTarget@@IEAAX_N@Z @ 0x1800C4B14 (-SetAllowStereo@CHwndRenderTarget@@IEAAX_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??2CHwndRenderTarget@@KAPEAX_K@Z @ 0x180132440 (--2CHwndRenderTarget@@KAPEAX_K@Z.c)
 *     ??0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1801358F4 (--0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 */

__int64 __fastcall CDcompRenderTarget::ProcessCreate(
        CDcompRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_DCOMPRENDERTARGET_CREATE *a3)
{
  unsigned int v3; // ebx
  CHwndRenderTarget *v6; // rax
  CHwndRenderTarget *v7; // rcx
  __int64 v8; // rdx
  int v9; // r8d

  v3 = 0;
  if ( *((_QWORD *)this + 7) )
    goto LABEL_8;
  v6 = (CHwndRenderTarget *)CHwndRenderTarget::operator new();
  if ( v6 )
    v7 = CHwndRenderTarget::CHwndRenderTarget(v6, *((struct CComposition **)this + 2));
  else
    v7 = 0LL;
  *((_QWORD *)this + 7) = v7;
  if ( v7 )
  {
    (*(void (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)v7 + 8LL))(v7);
LABEL_8:
    CHwndRenderTarget::SetAllowStereo(*((CHwndRenderTarget **)this + 7), (*((_DWORD *)a3 + 2) & 0x2000) != 0);
    v8 = *((_QWORD *)this + 7);
    v9 = *((_DWORD *)a3 + 9);
    *(_DWORD *)(v8 + 444) = *((_DWORD *)a3 + 8);
    *(_DWORD *)(v8 + 448) = v9;
    *(_BYTE *)(*((_QWORD *)this + 7) + 815LL) = *((_DWORD *)a3 + 10) != 0;
    *(_QWORD *)(*((_QWORD *)this + 7) + 472LL) = *((_QWORD *)a3 + 3);
    return v3;
  }
  v3 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x25u);
  return v3;
}
