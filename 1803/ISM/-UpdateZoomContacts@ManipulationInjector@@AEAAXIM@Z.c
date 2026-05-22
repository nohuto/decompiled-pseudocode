/*
 * XREFs of ?UpdateZoomContacts@ManipulationInjector@@AEAAXIM@Z @ 0x1800AE264
 * Callers:
 *     ?InjectZoom@ManipulationInjector@@QEAAXMK@Z @ 0x1800AD1A8 (-InjectZoom@ManipulationInjector@@QEAAXMK@Z.c)
 * Callees:
 *     ?UpdateZoomPoints@ManipulationInjector@@AEAAXAEAUtagPOINT@@0M@Z @ 0x1800AE1F0 (-UpdateZoomPoints@ManipulationInjector@@AEAAXAEAUtagPOINT@@0M@Z.c)
 */

void __fastcall ManipulationInjector::UpdateZoomContacts(ManipulationInjector *this, unsigned int a2, float a3)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  ManipulationInjector *v5; // rcx
  _DWORD *v6; // r11
  float v7; // xmm4_4

  v3 = 152LL * (a2 + 1);
  v4 = 152LL * a2;
  *(_DWORD *)((char *)this + v3 + 124) = 131078;
  *(_DWORD *)((char *)this + v4 + 124) = 131078;
  if ( a3 != 0.0 )
  {
    ManipulationInjector::UpdateZoomPoints(
      (ManipulationInjector *)0x20006,
      (struct tagPOINT *)((char *)this + v4 + 144),
      (struct tagPOINT *)((char *)this + v3 + 144),
      a3);
    if ( *v6 == 3 )
      ManipulationInjector::UpdateZoomPoints(
        v5,
        (struct tagPOINT *)&v6[(unsigned __int64)v4 / 4 + 38],
        (struct tagPOINT *)&v6[(unsigned __int64)v3 / 4 + 38],
        v7);
  }
}
