/*
 * XREFs of VfThunkApplyThunks @ 0x140774350
 * Callers:
 *     VfSuspectDriversLoadCallback @ 0x14077B740 (VfSuspectDriversLoadCallback.c)
 * Callees:
 *     MmGetNextSession @ 0x140071180 (MmGetNextSession.c)
 *     MmDetachSession @ 0x140073870 (MmDetachSession.c)
 *     MmAttachSession @ 0x1400738F0 (MmAttachSession.c)
 *     MmIsSessionAddress @ 0x140112130 (MmIsSessionAddress.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MmQuitNextSession @ 0x14045EE60 (MmQuitNextSession.c)
 *     MmIsDriverLoadedCurrentSession @ 0x1404B0F04 (MmIsDriverLoadedCurrentSession.c)
 *     ViThunkApplyThunksCurrentSession @ 0x140774594 (ViThunkApplyThunksCurrentSession.c)
 */

__int64 __fastcall VfThunkApplyThunks(__int64 a1, unsigned int a2)
{
  unsigned int v4; // edi
  void *i; // rcx
  ULONG_PTR NextSession; // rax
  void *v7; // rbx
  _BYTE v9[48]; // [rsp+20h] [rbp-48h] BYREF

  if ( !a2 || !MmIsSessionAddress(*(_QWORD *)(a1 + 48)) )
    return ViThunkApplyThunksCurrentSession(a1, a2);
  v4 = 1;
  for ( i = 0LL; ; i = v7 )
  {
    NextSession = MmGetNextSession(i);
    v7 = (void *)NextSession;
    if ( !NextSession )
      break;
    if ( (int)MmAttachSession(NextSession) >= 0 )
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
