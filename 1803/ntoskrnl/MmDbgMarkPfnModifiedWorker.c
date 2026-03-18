/*
 * XREFs of MmDbgMarkPfnModifiedWorker @ 0x1401830BC
 * Callers:
 *     ExpDebuggerWorker @ 0x140803030 (ExpDebuggerWorker.c)
 * Callees:
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030AF8 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiCaptureDirtyBitToPfn @ 0x140124940 (MiCaptureDirtyBitToPfn.c)
 */

void MmDbgMarkPfnModifiedWorker()
{
  __int64 v0; // rsi
  signed __int64 *v1; // r14
  signed __int64 v2; // rbp
  ULONG_PTR v3; // rbp
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _KEVENT *v9; // rcx

  v0 = 0LL;
  v1 = qword_1403CBF98;
  do
  {
    v2 = *v1;
    if ( (*v1 & 1) != 0 )
    {
      _InterlockedAnd64(&qword_1403CBF98[v0], 0LL);
      v3 = v2 - 1;
      v4 = (unsigned __int8)MiLockPageInline(v3);
      v5 = MiCaptureDirtyBitToPfn(v3);
      MiRemoveLockedPageChargeAndDecRef(v3, v6, v7, v8);
      v9 = *(struct _KEVENT **)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v3 + 40) >> 40) & 0x3FFLL));
      _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v4);
      if ( v5 )
        MiReleasePageFileInfo(v9, v5, 0);
    }
    v0 = (unsigned int)(v0 + 1);
    ++v1;
  }
  while ( (unsigned int)v0 < 0x20 );
}
