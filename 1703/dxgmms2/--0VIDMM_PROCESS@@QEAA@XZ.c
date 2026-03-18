/*
 * XREFs of ??0VIDMM_PROCESS@@QEAA@XZ @ 0x1C004D9E4
 * Callers:
 *     VidMmCreateProcess @ 0x1C0001D80 (VidMmCreateProcess.c)
 * Callees:
 *     memset @ 0x1C0015FC0 (memset.c)
 */

VIDMM_PROCESS *__fastcall VIDMM_PROCESS::VIDMM_PROCESS(VIDMM_PROCESS *this)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *(_QWORD *)((char *)this + 52) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 12) |= 1u;
  memset((char *)this + 88, 0, 0x48uLL);
  return this;
}
