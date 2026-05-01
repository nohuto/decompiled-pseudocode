/*
 * XREFs of ??$make_unique_nothrow@VDesktopSingleViewShellExperiencePersonality@@AEAPEAVCSingleViewShellExperience@@@wil@@YA?AV?$unique_ptr@VDesktopSingleViewShellExperiencePersonality@@U?$default_delete@VDesktopSingleViewShellExperiencePersonality@@@wistd@@@wistd@@AEAPEAVCSingleViewShellExperience@@@Z @ 0x18018E60C
 * Callers:
 *     ?CreatePersonality@SingleViewShellExperienceEventHandler@@UEAAJPEAVCSingleViewShellExperience@@PEAV?$unique_ptr@VSingleViewShellExperiencePersonality@@U?$default_delete@VSingleViewShellExperiencePersonality@@@wistd@@@wistd@@@Z @ 0x18018E3C0 (-CreatePersonality@SingleViewShellExperienceEventHandler@@UEAAJPEAVCSingleViewShellExperience@@P.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall wil::make_unique_nothrow<DesktopSingleViewShellExperiencePersonality,CSingleViewShellExperience * &>(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rdx

  v4 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = *a2;
    *v4 = &DesktopSingleViewShellExperiencePersonality::`vftable';
    v4[1] = v5;
    v4[2] = 0LL;
    v4[3] = 0LL;
    *((_DWORD *)v4 + 8) = 0;
  }
  else
  {
    v4 = 0LL;
  }
  *a1 = v4;
  return a1;
}
