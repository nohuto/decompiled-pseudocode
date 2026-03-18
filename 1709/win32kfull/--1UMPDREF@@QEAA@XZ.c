/*
 * XREFs of ??1UMPDREF@@QEAA@XZ @ 0x1C01A0D28
 * Callers:
 *     NtGdiSetPUMPDOBJ @ 0x1C00B8AE0 (NtGdiSetPUMPDOBJ.c)
 * Callees:
 *     ?bCleanupWorker@UMPDOBJ@@QEAAHXZ @ 0x1C00B9FFC (-bCleanupWorker@UMPDOBJ@@QEAAHXZ.c)
 */

void __fastcall UMPDREF::~UMPDREF(UMPDOBJ **this)
{
  UMPDOBJ *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8

  v2 = *this;
  if ( v2 )
  {
    DEC_SHARE_REF_CNT(v2);
    if ( (unsigned int)UMPDOBJ::bCleanupWorker(*this) )
      Win32FreePool(*this, v3, v4);
  }
}
