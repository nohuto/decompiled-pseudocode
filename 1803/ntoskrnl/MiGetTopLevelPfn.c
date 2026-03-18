/*
 * XREFs of MiGetTopLevelPfn @ 0x1400D5C50
 * Callers:
 *     MiGetPagePrivilege @ 0x1400303C0 (MiGetPagePrivilege.c)
 *     MiRestoreTransitionPte @ 0x140053D40 (MiRestoreTransitionPte.c)
 *     MiAttachToOwningSession @ 0x1400C6954 (MiAttachToOwningSession.c)
 *     MiLockStealUserVm @ 0x1400D5854 (MiLockStealUserVm.c)
 *     MiStoreCheckCandidatePage @ 0x1400D64CC (MiStoreCheckCandidatePage.c)
 *     MiIdentifyPfn @ 0x1401056D0 (MiIdentifyPfn.c)
 *     MiCapturePfnVm @ 0x140124730 (MiCapturePfnVm.c)
 *     MiRecheckCombineVm @ 0x140143918 (MiRecheckCombineVm.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall MiGetTopLevelPfn(__int64 BugCheckParameter2)
{
  unsigned int v2; // edi
  __int64 v3; // r8
  ULONG_PTR v4; // r14
  int v5; // ebp
  __int64 v6; // rsi
  __int64 *v7; // rcx
  __int64 v8; // rax
  int v10; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v11[4]; // [rsp+38h] [rbp-50h] BYREF

  memset(v11, 0, sizeof(v11));
  v2 = 0;
  v3 = *(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFLL;
  v4 = BugCheckParameter2;
  v5 = 0;
  if ( v3 != (BugCheckParameter2 + 0x58000000000LL) / 48 )
  {
    do
    {
      if ( v3 == 0xFFFFFFFFFLL )
        break;
      v6 = v3;
      BugCheckParameter2 = 48 * v3 - 0x58000000000LL;
      if ( (unsigned int)++v5 > 4 )
        KeBugCheckEx(0x1Au, 0x9696uLL, v4, 0LL, 0LL);
      v10 = 0;
      v11[v5 - 1] = BugCheckParameter2;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v10);
        while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
      }
      v3 = *(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFLL;
    }
    while ( v3 != v6 );
  }
  v7 = v11;
  do
  {
    v8 = *v7;
    if ( !*v7 )
      break;
    if ( v8 != BugCheckParameter2 )
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ++v2;
    ++v7;
  }
  while ( v2 < 4 );
  return BugCheckParameter2;
}
