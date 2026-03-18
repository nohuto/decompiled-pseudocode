/*
 * XREFs of ?GetNewContentBounds@CComposeTop@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18017D610
 * Callers:
 *     ?PostRender@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180015C90 (-PostRender@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposeTop::GetNewContentBounds(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rcx
  signed int v4; // eax
  unsigned int v5; // ebx

  a2[3] = 0;
  v3 = *(_QWORD *)(a1 + 8);
  a2[2] = 0;
  a2[1] = 0;
  *a2 = 0;
  v4 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64))(*(_QWORD *)v3 + 32LL))(v3, a2, a1 + 16);
  v5 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x5Eu);
  return v5;
}
