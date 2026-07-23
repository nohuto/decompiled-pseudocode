/*
 * XREFs of LdrpReleaseTlsEntry @ 0x18008129C
 * Callers:
 *     LdrpHandleTlsData @ 0x18001C3A8 (LdrpHandleTlsData.c)
 *     LdrpDereferenceModule @ 0x180029804 (LdrpDereferenceModule.c)
 *     LdrpLoadDependentModule @ 0x18002F160 (LdrpLoadDependentModule.c)
 * Callees:
 *     LdrpFindTlsEntry @ 0x18003143C (LdrpFindTlsEntry.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall LdrpReleaseTlsEntry(void *a1, _QWORD *a2)
{
  _UNKNOWN **TlsEntry; // rax
  _UNKNOWN **v5; // rbx
  _UNKNOWN ***v6; // rax
  _QWORD *v7; // rcx

  if ( !a2 )
    RtlAcquireSRWLockExclusive(&LdrpTlsLock);
  TlsEntry = LdrpFindTlsEntry(a1);
  v5 = TlsEntry;
  if ( TlsEntry )
  {
    v6 = (_UNKNOWN ***)*TlsEntry;
    if ( v6[1] != v5 || (v7 = v5[1], (_UNKNOWN **)*v7 != v5) )
      __fastfail(3u);
    *v7 = v6;
    v6[1] = (_UNKNOWN **)v7;
    _bittestandreset((signed __int32 *)LdrpTlsBitmap.Buffer, *((_DWORD *)v5 + 16));
  }
  if ( !a2 )
    RtlReleaseSRWLockExclusive(&LdrpTlsLock);
  if ( !v5 )
    return 3221226021LL;
  if ( a2 )
    *a2 = v5;
  else
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  return 0LL;
}
