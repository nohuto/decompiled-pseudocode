/*
 * XREFs of MmDbgMarkPfnModifiedWorker @ 0x140164FB4
 * Callers:
 *     ExpDebuggerWorker @ 0x140789040 (ExpDebuggerWorker.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400CCB60 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiCaptureDirtyBitToPfn @ 0x140100BFC (MiCaptureDirtyBitToPfn.c)
 */

void MmDbgMarkPfnModifiedWorker()
{
  __int64 v0; // rsi
  signed __int64 *v1; // r14
  signed __int64 v2; // rbp
  __int64 v3; // rbp
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  struct _KEVENT *v6; // rcx

  v0 = 0LL;
  v1 = qword_14036CAD8;
  do
  {
    v2 = *v1;
    if ( (*v1 & 1) != 0 )
    {
      _InterlockedAnd64(&qword_14036CAD8[v0], 0LL);
      v3 = v2 - 1;
      v4 = (unsigned __int8)MiLockPageInline(v3);
      v5 = MiCaptureDirtyBitToPfn(v3);
      MiRemoveLockedPageChargeAndDecRef(v3);
      v6 = *(struct _KEVENT **)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v3 + 40) >> 40) & 0x3FFLL));
      _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v4);
      if ( v5 )
        MiReleasePageFileInfo(v6, v5, 0);
    }
    v0 = (unsigned int)(v0 + 1);
    ++v1;
  }
  while ( (unsigned int)v0 < 0x20 );
}
