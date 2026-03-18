/*
 * XREFs of ?ProcessCreate@CDcompRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGET_CREATE@@@Z @ 0x1800CA2C8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18006EBF8 (--0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??2CHwndRenderTarget@@KAPEAX_K@Z @ 0x1800CA368 (--2CHwndRenderTarget@@KAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDcompRenderTarget::ProcessCreate(
        struct CComposition **this,
        struct CResourceTable *a2,
        const struct MILCMD_DCOMPRENDERTARGET_CREATE *a3)
{
  unsigned int v3; // ebx
  CHwndRenderTarget *v6; // rax
  CHwndRenderTarget *v7; // rcx
  struct CComposition *v8; // rdx
  int v9; // r8d

  v3 = 0;
  if ( !this[7] )
  {
    v6 = (CHwndRenderTarget *)CHwndRenderTarget::operator new((unsigned __int64)this);
    if ( v6 )
      v7 = CHwndRenderTarget::CHwndRenderTarget(v6, this[2]);
    else
      v7 = 0LL;
    this[7] = v7;
    if ( !v7 )
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x24u);
      return v3;
    }
    (*(void (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  v8 = this[7];
  v9 = *((_DWORD *)a3 + 9);
  *((_DWORD *)v8 + 111) = *((_DWORD *)a3 + 8);
  *((_DWORD *)v8 + 112) = v9;
  *((_BYTE *)this[7] + 803) = *((_DWORD *)a3 + 10) != 0;
  *((_QWORD *)this[7] + 58) = *((_QWORD *)a3 + 3);
  return v3;
}
