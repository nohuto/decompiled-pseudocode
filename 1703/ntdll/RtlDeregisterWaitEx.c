/*
 * XREFs of RtlDeregisterWaitEx @ 0x180012890
 * Callers:
 *     RtlDeregisterWait @ 0x180089AE0 (RtlDeregisterWait.c)
 * Callees:
 *     sub_180010228 @ 0x180010228 (sub_180010228.c)
 *     sub_180012840 @ 0x180012840 (sub_180012840.c)
 *     TpWaitForWait @ 0x180012BD0 (TpWaitForWait.c)
 *     sub_180012CB0 @ 0x180012CB0 (sub_180012CB0.c)
 *     sub_180012FFC @ 0x180012FFC (sub_180012FFC.c)
 *     TpReleaseWait @ 0x1800135B0 (TpReleaseWait.c)
 *     TpSetWaitEx @ 0x180017300 (TpSetWaitEx.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall RtlDeregisterWaitEx(__int64 a1, __int64 a2)
{
  int v4; // edi
  int v5; // ecx
  __int64 v7; // [rsp+28h] [rbp-30h] BYREF
  struct _TEB *v8; // [rsp+30h] [rbp-28h]
  int v9; // [rsp+70h] [rbp+18h]
  int v10; // [rsp+78h] [rbp+20h]

  v7 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 0LL;
  if ( !a1 )
    return 3221225711LL;
  v4 = sub_180012CB0(&v7, 0LL);
  if ( v4 >= 0 )
  {
    RtlAcquireSRWLockExclusive(a1 + 16);
    *(_DWORD *)(a1 + 8) |= 8u;
    TpSetWaitEx(*(_QWORD *)(a1 + 48), 0LL, 0LL, 0LL);
    RtlReleaseSRWLockExclusive(a1 + 16);
    v5 = 1;
    _InterlockedOr((volatile signed __int32 *)(a1 + 24), 1u);
    if ( (*(_BYTE *)(a1 + 8) & 4) == 0
      || (v8 = NtCurrentTeb(), *(_DWORD *)(a1 + 88) != LODWORD(v8->ClientId.UniqueThread)) )
    {
      v5 = 0;
    }
    v10 = v5;
    if ( a2 == -1 )
    {
      if ( !v5 )
        TpWaitForWait(*(_QWORD *)(a1 + 48), 0LL);
    }
    else if ( a2 )
    {
      *(_QWORD *)(a1 + 80) = a2;
    }
    v9 = sub_180012840(*(_QWORD *)(a1 + 48));
    TpReleaseWait(*(_QWORD *)(a1 + 48));
    _m_prefetchw((const void *)(a1 + 24));
    if ( (_InterlockedAnd((volatile signed __int32 *)(a1 + 24), 0xFFFFFFFE) & 2) != 0 )
    {
      sub_180010228((_QWORD *)a1);
      v9 = 0;
    }
    if ( v9 )
      v4 = v10 == 0 ? 0x103 : 0;
    else
      v4 = 0;
  }
  sub_180012FFC(v7);
  return (unsigned int)v4;
}
