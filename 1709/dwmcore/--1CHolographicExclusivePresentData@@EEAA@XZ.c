/*
 * XREFs of ??1CHolographicExclusivePresentData@@EEAA@XZ @ 0x1801C23C0
 * Callers:
 *     ??_GCHolographicExclusivePresentData@@EEAAPEAXI@Z @ 0x1801C2400 (--_GCHolographicExclusivePresentData@@EEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CHolographicExclusivePresentData::~CHolographicExclusivePresentData(
        CHolographicExclusivePresentData *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CHolographicExclusivePresentData::`vftable'{for `IHolographicExclusivePresentData'};
  *((_QWORD *)this + 1) = &CHolographicExclusivePresentData::`vftable'{for `CMILCOMBase'};
  v2 = (void *)*((_QWORD *)this + 4);
  if ( v2 )
    CloseHandle(v2);
  *((_QWORD *)this + 1) = &CMILCOMBase::`vftable';
}
