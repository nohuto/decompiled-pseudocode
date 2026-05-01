/*
 * XREFs of ??$make_unique_nothrow@VCCortanaWNFService@Cortana@TwinUI@@$$V@wil@@YA?AV?$unique_ptr@VCCortanaWNFService@Cortana@TwinUI@@U?$default_delete@VCCortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@XZ @ 0x1800C8D74
 * Callers:
 *     ?_GetDesktopExperiencePositioner@CortanaPositionerSelector@Cortana@TwinUI@@AEAAJPEAPEAUIShellExperiencePositioner@Experience@Shell@Internal@Windows@@@Z @ 0x1800C0CBC (-_GetDesktopExperiencePositioner@CortanaPositionerSelector@Cortana@TwinUI@@AEAAJPEAPEAUIShellExp.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180194A2C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall wil::make_unique_nothrow<TwinUI::Cortana::CCortanaWNFService,>(_QWORD *a1)
{
  _QWORD *v2; // rbx
  _QWORD *v4; // [rsp+40h] [rbp+8h]

  v2 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    *v2 = &TwinUI::Cortana::CCortanaWNFService::`vftable';
    v2[1] = 0LL;
    v2[2] = 0LL;
    v2[3] = 0LL;
    v2[4] = 0LL;
    v2[5] = 0LL;
    v2[6] = 0LL;
    v2[7] = 0LL;
    v4 = operator new(0x38uLL);
    *v4 = 0LL;
    v4[1] = 0LL;
    *((_BYTE *)v4 + 16) = 0;
    v4[5] = 0LL;
    v4[6] = 7LL;
    *((_WORD *)v4 + 12) = 0;
    v2[8] = v4;
  }
  else
  {
    v2 = 0LL;
  }
  *a1 = v2;
  return a1;
}
