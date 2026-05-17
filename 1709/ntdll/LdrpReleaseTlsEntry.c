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

__int64 __fastcall LdrpReleaseTlsEntry(void *a1, unsigned __int64 *a2, unsigned __int64 *a3, __int64 a4)
{
  __int64 *TlsEntry; // rax
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  _QWORD *v9; // rcx

  if ( !a2 )
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpTlsLock, 0LL, a3, a4);
  TlsEntry = (__int64 *)LdrpFindTlsEntry(a1);
  v7 = (unsigned __int64)TlsEntry;
  if ( TlsEntry )
  {
    v8 = *TlsEntry;
    if ( *(_QWORD *)(v8 + 8) != v7 || (v9 = *(_QWORD **)(v7 + 8), *v9 != v7) )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    _bittestandreset((signed __int32 *)Src, *(_DWORD *)(v7 + 64));
  }
  if ( !a2 )
    RtlReleaseSRWLockExclusive(&LdrpTlsLock);
  if ( !v7 )
    return 3221226021LL;
  if ( a2 )
    *a2 = v7;
  else
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
  return 0LL;
}
