/*
 * XREFs of SepReferenceLogonSessionSilo @ 0x14045CEFC
 * Callers:
 *     SepReferenceLogonSession @ 0x14045CEC8 (SepReferenceLogonSession.c)
 *     NtQueryInformationToken @ 0x1404A40D0 (NtQueryInformationToken.c)
 *     SeInitServerSilo @ 0x1407280A8 (SeInitServerSilo.c)
 *     SepSetServerSiloToken @ 0x140728934 (SepSetServerSiloToken.c)
 *     SeGetLinkedToken @ 0x14072E300 (SeGetLinkedToken.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 */

__int64 __fastcall SepReferenceLogonSessionSilo(_DWORD *a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // r9
  __int64 v7; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v9; // rdi
  __int64 result; // rax

  v4 = *a1 & 0xF;
  v7 = SepLogonSessions + 8 * v4;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = &SepRmDbLock + (v4 & 3);
  ExAcquireResourceExclusiveLite(v9, 1u);
  do
  {
    v7 = *(_QWORD *)v7;
    if ( !v7 )
    {
      ExReleaseResourceLite(v9);
      KeLeaveCriticalRegion();
      return 3221225567LL;
    }
  }
  while ( *(_QWORD *)(v7 + 160) != a2 || *a1 != *(_DWORD *)(v7 + 8) || a1[1] != *(_DWORD *)(v7 + 12) );
  _m_prefetchw((const void *)(v7 + 32));
  if ( (_InterlockedOr((volatile signed __int32 *)(v7 + 32), 8u) & 8) != 0
    && _InterlockedIncrement64((volatile signed __int64 *)(v7 + 24)) <= 1 )
  {
    __fastfail(0xEu);
  }
  ExReleaseResourceLite(v9);
  KeLeaveCriticalRegion();
  result = 0LL;
  *a3 = v7;
  return result;
}
