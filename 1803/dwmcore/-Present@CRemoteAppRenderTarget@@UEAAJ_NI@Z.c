/*
 * XREFs of ?Present@CRemoteAppRenderTarget@@UEAAJ_NI@Z @ 0x18015CA10
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::Present(CRemoteAppRenderTarget *this)
{
  unsigned int v1; // edi
  int v3; // eax

  v1 = 0;
  if ( *((_BYTE *)this + 241) )
  {
    if ( *((_BYTE *)this + 240) )
    {
      v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 14) + 192LL))(*((_QWORD *)this + 14), 0LL);
      v1 = v3;
      if ( v3 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xBEu);
    }
  }
  *((_BYTE *)this + 241) = 0;
  return v1;
}
