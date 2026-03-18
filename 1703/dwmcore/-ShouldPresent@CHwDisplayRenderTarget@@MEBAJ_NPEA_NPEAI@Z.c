/*
 * XREFs of ?ShouldPresent@CHwDisplayRenderTarget@@MEBAJ_NPEA_NPEAI@Z @ 0x18003A090
 * Callers:
 *     ?Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x18003A700 (-Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 *     ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x180070180 (-Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 *     ?ShouldPresent@CHwStereoFullScreenRenderTarget@@MEBAJ_NPEA_NPEAI@Z @ 0x1801A07C0 (-ShouldPresent@CHwStereoFullScreenRenderTarget@@MEBAJ_NPEA_NPEAI@Z.c)
 * Callees:
 *     ?IsValid@CHwDisplayRenderTarget@@UEBA_NXZ @ 0x180039C30 (-IsValid@CHwDisplayRenderTarget@@UEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsInDirectFlip@CHwFullScreenRenderTarget@@MEBA_NXZ @ 0x1800705C0 (-IsInDirectFlip@CHwFullScreenRenderTarget@@MEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
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
  HRGN v14; // rcx
  tagRECT rc; // [rsp+30h] [rbp-48h] BYREF

  *a3 = 0;
  *a4 = 0;
  v6 = *((_QWORD *)this + 23);
  if ( v6 )
  {
    v9 = *(_DWORD *)(v6 + 872);
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801E9F58, 2u, v9, 0x516u);
    }
    else
    {
      v10 = *(__int64 (**)(void))(*(_QWORD *)this + 48LL);
      if ( (char *)v10 == (char *)CHwDisplayRenderTarget::IsValid )
        IsValid = CHwDisplayRenderTarget::IsValid(this);
      else
        IsValid = v10();
      if ( !IsValid )
      {
        MilInstrumentationCheckHR(0x14u, &dword_1801E9F58, 2u, -2003304442, 0x522u);
        return 0LL;
      }
    }
  }
  else
  {
    v9 = -2003304307;
    MilInstrumentationCheckHR(0x14u, &dword_1801E9F58, 2u, -2003304307, 0x51Au);
  }
  if ( v9 >= 0 )
  {
    v12 = *(bool (__fastcall **)(CHwFullScreenRenderTarget *__hidden))(*(_QWORD *)this + 256LL);
    if ( v12 == CHwFullScreenRenderTarget::IsInDirectFlip )
      v13 = CHwFullScreenRenderTarget::IsInDirectFlip(this);
    else
      v13 = v12(this);
    if ( v13 )
    {
      *a4 = (*(__int64 (__fastcall **)(CHwDisplayRenderTarget *))(*(_QWORD *)this + 272LL))(this);
    }
    else
    {
      v14 = (HRGN)*((_QWORD *)this + 39);
      if ( (!v14 || GetRgnBox(v14, &rc) == 1) && !*((_BYTE *)this + 192) )
      {
        if ( (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this + 22) + 312LL))((char *)this + 176)
          || (*(unsigned __int8 (__fastcall **)(CHwDisplayRenderTarget *))(*(_QWORD *)this + 264LL))(this) )
        {
          *a3 = 1;
          if ( !a2 )
            *a4 |= 2u;
        }
        return 0LL;
      }
    }
    *a3 = 1;
  }
  return 0LL;
}
