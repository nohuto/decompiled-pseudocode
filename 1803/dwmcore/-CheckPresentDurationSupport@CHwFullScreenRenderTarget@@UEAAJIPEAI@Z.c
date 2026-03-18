/*
 * XREFs of ?CheckPresentDurationSupport@CHwFullScreenRenderTarget@@UEAAJIPEAI@Z @ 0x1801F1D50
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::CheckPresentDurationSupport(
        CHwFullScreenRenderTarget *this,
        unsigned int a2,
        unsigned int *a3)
{
  unsigned int v6; // ebx
  int v7; // eax

  v6 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this - 27) + 32LL))((char *)this - 216) )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned int *))(**((_QWORD **)this + 4) + 216LL))(
           *((_QWORD *)this + 4),
           a2,
           a3);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x1D8u);
  }
  return v6;
}
