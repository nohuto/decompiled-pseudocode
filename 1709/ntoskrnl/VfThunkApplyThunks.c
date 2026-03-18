/*
 * XREFs of VfThunkApplyThunks @ 0x1407B610C
 * Callers:
 *     VfSuspectDriversLoadCallback @ 0x1407BD64C (VfSuspectDriversLoadCallback.c)
 * Callees:
 *     MmIsSessionAddress @ 0x140083FA0 (MmIsSessionAddress.c)
 *     MmGetNextSession @ 0x1400B15D0 (MmGetNextSession.c)
 *     MmDetachSession @ 0x1400B4910 (MmDetachSession.c)
 *     MmAttachSession @ 0x1400B4990 (MmAttachSession.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MmQuitNextSession @ 0x14059E950 (MmQuitNextSession.c)
 *     MmIsDriverLoadedCurrentSession @ 0x1406ED4C8 (MmIsDriverLoadedCurrentSession.c)
 *     ViThunkApplyThunksCurrentSession @ 0x1407B6350 (ViThunkApplyThunksCurrentSession.c)
 */

__int64 __fastcall VfThunkApplyThunks(__int64 a1, unsigned int a2)
{
  unsigned int v4; // edi
  _KPROCESS *i; // rcx
  _KPROCESS *NextSession; // rax
  _KPROCESS *v7; // rbx
  _BYTE v9[48]; // [rsp+20h] [rbp-48h] BYREF

  if ( !a2 || !MmIsSessionAddress(*(_QWORD *)(a1 + 48)) )
    return ViThunkApplyThunksCurrentSession(a1, a2);
  v4 = 1;
  for ( i = 0LL; ; i = v7 )
  {
    NextSession = (_KPROCESS *)MmGetNextSession(i);
    v7 = NextSession;
    if ( !NextSession )
      break;
    if ( (int)MmAttachSession(NextSession, (__int64)v9) >= 0 )
    {
      v4 = 1;
      if ( MmIsDriverLoadedCurrentSession(*(_QWORD *)(a1 + 48)) )
        v4 = ViThunkApplyThunksCurrentSession(a1, a2);
      MmDetachSession((__int64)v7, (__int64)v9);
      if ( !v4 )
      {
        MmQuitNextSession(v7);
        return v4;
      }
    }
  }
  return v4;
}
