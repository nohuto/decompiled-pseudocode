/*
 * XREFs of ?WaitForVBlank@CHwndRenderTarget@@UEAAJPEAX@Z @ 0x1800D78C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsPrimaryMonitor@CHwndRenderTarget@@QEBA_NXZ @ 0x180062F10 (-IsPrimaryMonitor@CHwndRenderTarget@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::WaitForVBlank(CDisplay **this, void *a2)
{
  CDisplay *v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx

  if ( CHwndRenderTarget::IsPrimaryMonitor(this - 8) && (v4 = this[14]) != 0LL )
  {
    v5 = (*(__int64 (__fastcall **)(CDisplay *, void *))(*(_QWORD *)v4 + 344LL))(v4, a2);
    v6 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, v5, 0x614u);
  }
  else
  {
    v6 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, -2003304307, 0x618u);
  }
  return v6;
}
