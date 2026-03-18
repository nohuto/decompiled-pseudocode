/*
 * XREFs of ?ShouldPresent@CHwDisplayRenderTarget@@MEBAJ_NPEA_NPEAI@Z @ 0x180046530
 * Callers:
 *     ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z @ 0x18007BBA0 (-Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z.c)
 *     ?ShouldPresent@CHwStereoFullScreenRenderTarget@@MEBAJ_NPEA_NPEAI@Z @ 0x1801F1800 (-ShouldPresent@CHwStereoFullScreenRenderTarget@@MEBAJ_NPEA_NPEAI@Z.c)
 * Callees:
 *     ?IsValid@CHwDisplayRenderTarget@@UEBA_NXZ @ 0x180046690 (-IsValid@CHwDisplayRenderTarget@@UEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsInDirectFlip@CHwFullScreenRenderTarget@@MEBA_NXZ @ 0x18007C600 (-IsInDirectFlip@CHwFullScreenRenderTarget@@MEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
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
  int v14; // edi
  char v16; // al

  *a3 = 0;
  *a4 = 0;
  v6 = *((_QWORD *)this + 28);
  if ( v6 )
  {
    v9 = *(_DWORD *)(v6 + 888);
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240F48, 2u, v9, 0x36Au);
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
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240F48, 2u, -2003304442, 0x374u);
        return 0LL;
      }
    }
  }
  else
  {
    v9 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240F48, 2u, -2003304307, 0x36Eu);
  }
  if ( v9 >= 0 )
  {
    v12 = *(bool (__fastcall **)(CHwFullScreenRenderTarget *__hidden))(*(_QWORD *)this + 312LL);
    if ( v12 == CHwFullScreenRenderTarget::IsInDirectFlip )
      v13 = CHwFullScreenRenderTarget::IsInDirectFlip(this);
    else
      v13 = v12(this);
    if ( v13 )
    {
      *a4 = (*(__int64 (__fastcall **)(CHwDisplayRenderTarget *))(*(_QWORD *)this + 328LL))(this);
      *a3 = 1;
    }
    else
    {
      v14 = **((_DWORD **)this + 43);
      if ( v14
        || a2
        || (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this + 27) + 368LL))((char *)this + 216)
        || (v16 = (*(__int64 (__fastcall **)(CHwDisplayRenderTarget *))(*(_QWORD *)this + 320LL))(this)) != 0 )
      {
        *a3 = 1;
        if ( !v14 && !a2 )
          *a4 |= 2u;
      }
    }
  }
  return 0LL;
}
