/*
 * XREFs of ??_GVIDMM_PROCESS@@QEAAPEAXI@Z @ 0x1C00203BC
 * Callers:
 *     VidMmCreateProcess @ 0x1C0012EE0 (VidMmCreateProcess.c)
 * Callees:
 *     ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1C0052650 (--1VIDMM_PROCESS@@QEAA@XZ.c)
 */

VIDMM_PROCESS *__fastcall VIDMM_PROCESS::`scalar deleting destructor'(VIDMM_PROCESS *P)
{
  VIDMM_PROCESS::~VIDMM_PROCESS(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
