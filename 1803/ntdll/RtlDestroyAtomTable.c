/*
 * XREFs of RtlDestroyAtomTable @ 0x1800E4710
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     sub_18004D594 @ 0x18004D594 (sub_18004D594.c)
 *     RtlDestroyHandleTable @ 0x1800837E0 (RtlDestroyHandleTable.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

NTSTATUS __cdecl RtlDestroyAtomTable(PVOID AtomTableHandle)
{
  unsigned int v3; // ebp
  _QWORD **i; // rdi
  _QWORD *v5; // rsi
  _QWORD *v6; // r8

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)AtomTableHandle + 1, 0xFFFFFFFF) == 1 )
  {
    if ( !sub_18004D594((__int64)AtomTableHandle) )
      return -1073741811;
    v3 = 0;
    for ( i = (_QWORD **)((char *)AtomTableHandle + 72); v3 < *((_DWORD *)AtomTableHandle + 16); ++v3 )
    {
      v5 = *i;
      *i++ = 0LL;
      while ( 1 )
      {
        v6 = v5;
        if ( !v5 )
          break;
        v5 = (_QWORD *)*v5;
        *v6 = 0LL;
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
      }
    }
    *(_DWORD *)AtomTableHandle = 0;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)AtomTableHandle + 1);
    RtlDestroyHandleTable((PRTL_HANDLE_TABLE)((char *)AtomTableHandle + 16));
    memset(AtomTableHandle, 0, 0x50uLL);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, AtomTableHandle);
  }
  return 0;
}
