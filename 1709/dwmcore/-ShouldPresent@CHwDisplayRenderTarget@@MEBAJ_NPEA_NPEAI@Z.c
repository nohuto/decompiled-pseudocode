/*
 * XREFs of ?ShouldPresent@CHwDisplayRenderTarget@@MEBAJ_NPEA_NPEAI@Z @ 0x18002B960
 * Callers:
 *     ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x18002ED10 (-Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 *     ?ShouldPresent@CHwStereoFullScreenRenderTarget@@MEBAJ_NPEA_NPEAI@Z @ 0x1801B8380 (-ShouldPresent@CHwStereoFullScreenRenderTarget@@MEBAJ_NPEA_NPEAI@Z.c)
 * Callees:
 *     ?IsValid@CHwDisplayRenderTarget@@UEBA_NXZ @ 0x18002BBF0 (-IsValid@CHwDisplayRenderTarget@@UEBA_NXZ.c)
 *     ?IsInDirectFlip@CHwFullScreenRenderTarget@@MEBA_NXZ @ 0x18002F080 (-IsInDirectFlip@CHwFullScreenRenderTarget@@MEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::ShouldPresent(
        CHwDisplayRenderTarget *this,
        char a2,
        bool *a3,
        unsigned int *a4)
{
  __int64 v6; // rax
  int v9; // edi
  __int64 (*v10)(void); // rax
  char IsValid; // al
  bool (__fastcall *v12)(CHwFullScreenRenderTarget *__hidden); // rax
  bool v13; // al

  *a3 = 0;
  *a4 = 0;
  v6 = *((_QWORD *)this + 25);
  if ( v6 )
  {
    v9 = *(_DWORD *)(v6 + 888);
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D00, 2u, v9, 0x374u);
    }
    else
    {
      v10 = *(__int64 (**)(void))(*(_QWORD *)this + 32LL);
      if ( (char *)v10 == (char *)CHwDisplayRenderTarget::IsValid )
        IsValid = CHwDisplayRenderTarget::IsValid(this);
      else
        IsValid = v10();
      if ( !IsValid )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D00, 2u, -2003304442, 0x37Eu);
        return 0LL;
      }
    }
  }
  else
  {
    v9 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D00, 2u, -2003304307, 0x378u);
  }
  if ( v9 >= 0 )
  {
    v12 = *(bool (__fastcall **)(CHwFullScreenRenderTarget *__hidden))(*(_QWORD *)this + 272LL);
    if ( v12 == CHwFullScreenRenderTarget::IsInDirectFlip )
      v13 = CHwFullScreenRenderTarget::IsInDirectFlip(this);
    else
      v13 = v12(this);
    if ( v13 )
    {
      *a4 = (*(__int64 (__fastcall **)(CHwDisplayRenderTarget *))(*(_QWORD *)this + 288LL))(this);
    }
    else if ( !**((_DWORD **)this + 41) && !*((_BYTE *)this + 208) )
    {
      if ( (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this + 24) + 320LL))((char *)this + 192)
        || (*(unsigned __int8 (__fastcall **)(CHwDisplayRenderTarget *))(*(_QWORD *)this + 280LL))(this) )
      {
        *a3 = 1;
        if ( !a2 )
          *a4 |= 2u;
      }
      return 0LL;
    }
    *a3 = 1;
  }
  return 0LL;
}
