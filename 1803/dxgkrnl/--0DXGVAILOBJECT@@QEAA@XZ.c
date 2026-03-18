/*
 * XREFs of ??0DXGVAILOBJECT@@QEAA@XZ @ 0x1C01E5960
 * Callers:
 *     ?ObjectInit@DXGVAILOBJECT@@SAJPEAUDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z @ 0x1C01E6C10 (-ObjectInit@DXGVAILOBJECT@@SAJPEAUDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z.c)
 * Callees:
 *     <none>
 */

DXGVAILOBJECT *__fastcall DXGVAILOBJECT::DXGVAILOBJECT(DXGVAILOBJECT *this)
{
  *((_QWORD *)this + 3) = &DXGVAIL::`vftable';
  *((_DWORD *)this + 15) = -1;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 16) = 32;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_BYTE *)this + 104) = 0;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)this + 9);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)this + 9);
  return this;
}
