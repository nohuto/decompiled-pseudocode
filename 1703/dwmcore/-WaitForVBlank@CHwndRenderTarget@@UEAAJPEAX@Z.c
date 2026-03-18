/*
 * XREFs of ?WaitForVBlank@CHwndRenderTarget@@UEAAJPEAX@Z @ 0x1800CD8A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsPrimary@CDisplay@@QEBA_NXZ @ 0x1800B80F0 (-IsPrimary@CDisplay@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::WaitForVBlank(CHwndRenderTarget *this, void *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  int v6; // eax

  v4 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this - 8) + 184LL))((char *)this - 64) )
  {
    if ( !*((_BYTE *)this + 725) && CDisplay::IsPrimary(*((CDisplay **)this + 6)) && (v5 = *((_QWORD *)this + 7)) != 0 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 288LL))(v5, a2);
      v4 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_1801F3570, 2u, v6, 0x701u);
    }
    else
    {
      v4 = -2147467263;
      MilInstrumentationCheckHR(0x14u, &dword_1801F3570, 2u, -2147467263, 0x705u);
    }
  }
  return v4;
}
