/*
 * XREFs of RtlDeregisterWaitEx @ 0x180012A70
 * Callers:
 *     RtlDeregisterWait @ 0x1800144C0 (RtlDeregisterWait.c)
 * Callees:
 *     TpSetWaitEx @ 0x18000F630 (TpSetWaitEx.c)
 *     RtlpTpResumeImpersonation @ 0x180011788 (RtlpTpResumeImpersonation.c)
 *     RtlpTpRevertCapture @ 0x18001197C (RtlpTpRevertCapture.c)
 *     TpReleaseWait @ 0x180011BA0 (TpReleaseWait.c)
 *     TpWaitOutstandingCallbackCount @ 0x180012BB8 (TpWaitOutstandingCallbackCount.c)
 *     TpWaitForWait @ 0x180012C80 (TpWaitForWait.c)
 *     RtlpTpWaitRundown @ 0x180012E38 (RtlpTpWaitRundown.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall RtlDeregisterWaitEx(__int64 a1, __int64 a2)
{
  _PEB_LDR_DATA *Ldr; // r8
  int v5; // edi
  int v6; // ecx
  HANDLE v8; // [rsp+28h] [rbp-30h] BYREF
  struct _TEB *v9; // [rsp+30h] [rbp-28h]
  int v10; // [rsp+70h] [rbp+18h]
  int v11; // [rsp+78h] [rbp+20h]

  v8 = 0LL;
  Ldr = NtCurrentPeb()->Ldr;
  if ( Ldr->ShutdownInProgress )
    return 0LL;
  if ( !a1 )
    return 3221225711LL;
  v5 = RtlpTpRevertCapture(&v8, 0, (__int64)Ldr);
  if ( v5 >= 0 )
  {
    RtlAcquireSRWLockExclusive(a1 + 16);
    *(_DWORD *)(a1 + 8) |= 8u;
    TpSetWaitEx(*(_QWORD *)(a1 + 48), 0LL, 0LL, 0LL);
    RtlReleaseSRWLockExclusive(a1 + 16);
    v6 = 1;
    _InterlockedOr((volatile signed __int32 *)(a1 + 24), 1u);
    if ( (*(_BYTE *)(a1 + 8) & 4) == 0
      || (v9 = NtCurrentTeb(), *(_DWORD *)(a1 + 88) != LODWORD(v9->ClientId.UniqueThread)) )
    {
      v6 = 0;
    }
    v11 = v6;
    if ( a2 == -1 )
    {
      if ( !v6 )
        TpWaitForWait(*(_QWORD *)(a1 + 48), 0LL);
    }
    else if ( a2 )
    {
      *(_QWORD *)(a1 + 80) = a2;
    }
    v10 = TpWaitOutstandingCallbackCount(*(_QWORD *)(a1 + 48));
    TpReleaseWait(*(_QWORD *)(a1 + 48));
    _m_prefetchw((const void *)(a1 + 24));
    if ( (_InterlockedAnd((volatile signed __int32 *)(a1 + 24), 0xFFFFFFFE) & 2) != 0 )
    {
      RtlpTpWaitRundown(a1);
      v10 = 0;
    }
    if ( v10 )
      v5 = v11 == 0 ? 0x103 : 0;
    else
      v5 = 0;
  }
  RtlpTpResumeImpersonation(v8);
  return (unsigned int)v5;
}
