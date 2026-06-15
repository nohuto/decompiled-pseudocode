/*
 * XREFs of ??_ECVolumeGainStage@@UEAAPEAXI@Z @ 0x18000FCD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180035504 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CVolumeGainStage *__fastcall CVolumeGainStage::`vector deleting destructor'(CVolumeGainStage *this, char a2)
{
  *(_QWORD *)this = &CRefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
