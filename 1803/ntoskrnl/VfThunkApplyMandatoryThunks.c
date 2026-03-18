/*
 * XREFs of VfThunkApplyMandatoryThunks @ 0x140823D28
 * Callers:
 *     VfSuspectDriversLoadCallback @ 0x14082A9EC (VfSuspectDriversLoadCallback.c)
 * Callees:
 *     MmGetNextSession @ 0x140074C10 (MmGetNextSession.c)
 *     MmDetachSession @ 0x14008A5E0 (MmDetachSession.c)
 *     MmAttachSession @ 0x14008A660 (MmAttachSession.c)
 *     MmIsSessionAddress @ 0x140103610 (MmIsSessionAddress.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MmQuitNextSession @ 0x14052D250 (MmQuitNextSession.c)
 *     MmIsDriverLoadedCurrentSession @ 0x1406137F8 (MmIsDriverLoadedCurrentSession.c)
 *     ViThunkApplyMandatoryThunksCurrentSession @ 0x140823FB8 (ViThunkApplyMandatoryThunksCurrentSession.c)
 */

__int64 __fastcall VfThunkApplyMandatoryThunks(__int64 a1, unsigned int a2)
{
  int v4; // eax
  unsigned int v5; // edi
  _KPROCESS *i; // rcx
  _KPROCESS *NextSession; // rax
  _KPROCESS *v8; // rbx
  _BYTE v10[48]; // [rsp+20h] [rbp-48h] BYREF

  if ( !a2 )
    return ViThunkApplyMandatoryThunksCurrentSession(a1, a2);
  LOBYTE(v4) = MmIsSessionAddress(*(_QWORD *)(a1 + 48));
  if ( !v4 )
    return ViThunkApplyMandatoryThunksCurrentSession(a1, a2);
  v5 = 1;
  for ( i = 0LL; ; i = v8 )
  {
    NextSession = (_KPROCESS *)MmGetNextSession(i);
    v8 = NextSession;
    if ( !NextSession )
      break;
    if ( (int)MmAttachSession(NextSession, (__int64)v10) >= 0 )
    {
      v5 = 1;
      if ( MmIsDriverLoadedCurrentSession(*(_QWORD *)(a1 + 48)) )
        v5 = ViThunkApplyMandatoryThunksCurrentSession(a1, a2);
      MmDetachSession((__int64)v8, (__int64)v10);
      if ( !v5 )
      {
        MmQuitNextSession(v8);
        return v5;
      }
    }
  }
  return v5;
}
