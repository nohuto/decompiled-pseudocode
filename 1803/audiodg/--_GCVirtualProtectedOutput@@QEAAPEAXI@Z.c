/*
 * XREFs of ??_GCVirtualProtectedOutput@@QEAAPEAXI@Z @ 0x14003EB10
 * Callers:
 *     ?CreateVirtualProtectedOutput@CProtectedOutputController@@UEAAJPEAUIAudioProcessingObject@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x14003EC90 (-CreateVirtualProtectedOutput@CProtectedOutputController@@UEAAJPEAUIAudioProcessingObject@@PEAPE.c)
 *     ?Release@CVirtualProtectedOutput@@UEAAKXZ @ 0x14003F110 (-Release@CVirtualProtectedOutput@@UEAAKXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001C304 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CVirtualProtectedOutput *__fastcall CVirtualProtectedOutput::`scalar deleting destructor'(
        CVirtualProtectedOutput *this)
{
  *(_QWORD *)this = &CVirtualProtectedOutput::`vftable';
  operator delete(this);
  return this;
}
