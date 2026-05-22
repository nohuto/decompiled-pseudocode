/*
 * XREFs of ?CheckOverlapAndEvent@ManipulationInjector@@AEAA_NXZ @ 0x1800C0FA4
 * Callers:
 *     ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x1800C0FF0 (-InjectPan@ManipulationInjector@@QEAAXMMK@Z.c)
 *     ?InjectZoom@ManipulationInjector@@QEAAXMK@Z @ 0x1800C1440 (-InjectZoom@ManipulationInjector@@QEAAXMK@Z.c)
 * Callees:
 *     ?CheckOverlap@ManipulationInjector@@AEAA_NI@Z @ 0x1800C1780 (-CheckOverlap@ManipulationInjector@@AEAA_NI@Z.c)
 */

bool __fastcall ManipulationInjector::CheckOverlapAndEvent(ManipulationInjector *this)
{
  bool v2; // di
  void *v3; // rcx

  v2 = ManipulationInjector::CheckOverlap(this, 0);
  if ( v2 )
  {
    v3 = (void *)*((_QWORD *)this + 98);
    if ( v3 )
    {
      if ( !*((_BYTE *)this + 12) )
        *((_BYTE *)this + 12) = WaitForSingleObject(v3, 0) == 0;
    }
  }
  return v2;
}
