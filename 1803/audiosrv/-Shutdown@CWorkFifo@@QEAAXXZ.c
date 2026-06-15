/*
 * XREFs of ?Shutdown@CWorkFifo@@QEAAXXZ @ 0x1800F4E0C
 * Callers:
 *     ??1CSpatialAudioResourceManager@Sarm@@UEAA@XZ @ 0x1800F1E70 (--1CSpatialAudioResourceManager@Sarm@@UEAA@XZ.c)
 *     ??1CWorkFifo@@QEAA@XZ @ 0x1800F1FC0 (--1CWorkFifo@@QEAA@XZ.c)
 *     ?Shutdown@CSpatialAudioResourceManager@Sarm@@UEAAXXZ @ 0x1800F4C00 (-Shutdown@CSpatialAudioResourceManager@Sarm@@UEAAXXZ.c)
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800AD178 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall CWorkFifo::Shutdown(CWorkFifo *this, void *a2)
{
  wil::details *v3; // rcx

  *((_BYTE *)this + 136) = 1;
  v3 = (wil::details *)*((_QWORD *)this + 28);
  if ( v3 )
    wil::details::SetEvent(v3, a2);
  CWorkFifo::ReleaseThreadpool(this);
}
