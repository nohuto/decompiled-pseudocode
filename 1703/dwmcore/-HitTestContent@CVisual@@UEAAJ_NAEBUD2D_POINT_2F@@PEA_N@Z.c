/*
 * XREFs of ?HitTestContent@CVisual@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x180013350
 * Callers:
 *     ?HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18001E560 (-HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::HitTestContent(CVisual *this, __int64 a2, const struct D2D_POINT_2F *a3, bool *a4)
{
  unsigned int v4; // ebx
  __int64 v6; // rcx
  int v8; // eax

  v4 = 0;
  *a4 = 0;
  v6 = *((_QWORD *)this + 30);
  if ( v6 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, char *, const struct D2D_POINT_2F *))(*(_QWORD *)v6 + 160LL))(
           v6,
           (char *)this + 128,
           a3);
    v4 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x11CFu);
  }
  return v4;
}
