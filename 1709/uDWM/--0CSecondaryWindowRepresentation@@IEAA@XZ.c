/*
 * XREFs of ??0CSecondaryWindowRepresentation@@IEAA@XZ @ 0x18000F2D4
 * Callers:
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x18000DBE8 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 * Callees:
 *     <none>
 */

CSecondaryWindowRepresentation *__fastcall CSecondaryWindowRepresentation::CSecondaryWindowRepresentation(
        CSecondaryWindowRepresentation *this)
{
  CSecondaryWindowRepresentation *result; // rax

  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &CSecondaryWindowRepresentation::`vftable'{for `CBaseObject'};
  *((_QWORD *)this + 2) = &CSecondaryWindowRepresentation::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 38) = 0;
  *((_QWORD *)this + 62) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 61) = 0x3FF0000000000000LL;
  result = this;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_BYTE *)this + 160) = 0;
  *((_QWORD *)this + 68) = 0LL;
  *((_DWORD *)this + 30) = 100;
  *((_DWORD *)this + 126) = 1065353216;
  return result;
}
