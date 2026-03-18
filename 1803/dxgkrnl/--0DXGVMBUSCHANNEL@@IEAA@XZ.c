/*
 * XREFs of ??0DXGVMBUSCHANNEL@@IEAA@XZ @ 0x1C01E4738
 * Callers:
 *     ?Create@DXGVMBUSCHANNEL@@SAJPEAXAEBU_GUID@@1EPEAPEAV1@@Z @ 0x1C01E4D60 (-Create@DXGVMBUSCHANNEL@@SAJPEAXAEBU_GUID@@1EPEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

DXGVMBUSCHANNEL *__fastcall DXGVMBUSCHANNEL::DXGVMBUSCHANNEL(DXGVMBUSCHANNEL *this)
{
  *(_QWORD *)this = &DXGVMBUSCHANNEL::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_WORD *)this + 12) = 0;
  *((_DWORD *)this + 2) = 1;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = 82;
  *((_DWORD *)this + 22) = 32;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 31) = 82;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 30) = 0;
  *((_DWORD *)this + 32) = 1;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 5) = (char *)this + 32;
  *((_QWORD *)this + 4) = (char *)this + 32;
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)this + 6);
  return this;
}
