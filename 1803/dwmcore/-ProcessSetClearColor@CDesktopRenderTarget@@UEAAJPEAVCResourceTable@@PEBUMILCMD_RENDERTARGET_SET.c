/*
 * XREFs of ?ProcessSetClearColor@CDesktopRenderTarget@@UEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERTARGET_SETCLEARCOLOR@@@Z @ 0x180157FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopRenderTarget::ProcessSetClearColor(
        CDesktopRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_RENDERTARGET_SETCLEARCOLOR *a3)
{
  unsigned int v3; // esi
  __int64 v4; // rdi
  __int64 v8; // rcx
  int v9; // eax

  v3 = 0;
  v4 = 0LL;
  *(_OWORD *)((char *)this + 296) = *(_OWORD *)((char *)a3 + 8);
  *((_DWORD *)this + 77) = 1065353216;
  if ( *((_DWORD *)this + 50) )
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)(*((_QWORD *)this + 22) + 8 * v4);
      v9 = (*(__int64 (__fastcall **)(__int64, struct CResourceTable *, const struct MILCMD_RENDERTARGET_SETCLEARCOLOR *))(*(_QWORD *)v8 + 168LL))(
             v8,
             a2,
             a3);
      v3 = v9;
      if ( v9 < 0 )
        break;
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= *((_DWORD *)this + 50) )
        return v3;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x4F9u);
  }
  return v3;
}
