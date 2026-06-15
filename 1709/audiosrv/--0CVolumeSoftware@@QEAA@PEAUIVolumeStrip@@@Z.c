/*
 * XREFs of ??0CVolumeSoftware@@QEAA@PEAUIVolumeStrip@@@Z @ 0x18006BE40
 * Callers:
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x18006D86C (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18001B028 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ??0CVolumeControlBase@@QEAA@PEAUIVolumeStrip@@@Z @ 0x180067D20 (--0CVolumeControlBase@@QEAA@PEAUIVolumeStrip@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
CVolumeSoftware *__fastcall CVolumeSoftware::CVolumeSoftware(CVolumeSoftware *this, struct IVolumeStrip *a2)
{
  CVolumeControlBase::CVolumeControlBase(this, a2);
  *(_QWORD *)this = &CVolumeSoftware::`vftable';
  *((_QWORD *)this + 30) = 0LL;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 248));
  *((_DWORD *)this + 72) = 1;
  *((_BYTE *)this + 292) = 0;
  *((_QWORD *)this + 37) = 0LL;
  return this;
}
