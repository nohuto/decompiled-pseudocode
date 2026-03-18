/*
 * XREFs of ??1UMPDREF@@QEAA@XZ @ 0x1C0195AB4
 * Callers:
 *     NtGdiSetPUMPDOBJ @ 0x1C0096A60 (NtGdiSetPUMPDOBJ.c)
 * Callees:
 *     ?bCleanupWorker@UMPDOBJ@@QEAAHXZ @ 0x1C0097C4C (-bCleanupWorker@UMPDOBJ@@QEAAHXZ.c)
 */

void __fastcall UMPDREF::~UMPDREF(UMPDOBJ **this)
{
  UMPDOBJ *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    DEC_SHARE_REF_CNT(v2);
    if ( (unsigned int)UMPDOBJ::bCleanupWorker(*this) )
      Win32FreePool(*this);
  }
}
