/*
 * XREFs of MiPfIssueCoalesceCandidates @ 0x14013DC80
 * Callers:
 *     MiPfCoalesceAndIssueIOs @ 0x14002EF8C (MiPfCoalesceAndIssueIOs.c)
 * Callees:
 *     MiIssueHardFaultIo @ 0x140097C48 (MiIssueHardFaultIo.c)
 *     MiPfIssueCoalescedSupport @ 0x140213D20 (MiPfIssueCoalescedSupport.c)
 */

__int64 __fastcall MiPfIssueCoalesceCandidates(__int64 **a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rdi
  __int64 v6; // rax
  __int64 **v7; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rcx
  __int64 *v11; // rdi
  __int64 v12; // rax
  __int64 **v13; // rax

  v3 = *a1;
  if ( (__int64 **)**a1 == a1 )
  {
    v6 = *v3;
    if ( (__int64 **)v3[1] != a1 || *(__int64 **)(v6 + 8) != v3 )
      __fastfail(3u);
    *a1 = (__int64 *)v6;
    *(_QWORD *)(v6 + 8) = a1;
    MiIssueHardFaultIo((__int64)v3, 0LL, 0LL);
    v7 = *(__int64 ***)(a3 + 8);
    if ( *v7 != (__int64 *)a3 )
      __fastfail(3u);
    *v3 = a3;
    v3[1] = (__int64)v7;
    *v7 = v3;
    *(_QWORD *)(a3 + 8) = v3;
    return 0LL;
  }
  v9 = (_QWORD *)MiPfIssueCoalescedSupport();
  if ( v9 )
  {
    v10 = *(_QWORD **)(a3 + 8);
    if ( *v10 != a3 )
      __fastfail(3u);
    *v9 = a3;
    v9[1] = v10;
    *v10 = v9;
    *(_QWORD *)(a3 + 8) = v9;
    return 0LL;
  }
  while ( 1 )
  {
    v11 = *a1;
    if ( *a1 == (__int64 *)a1 )
      break;
    v12 = *v11;
    if ( (__int64 **)v11[1] != a1 || *(__int64 **)(v12 + 8) != v11 )
      __fastfail(3u);
    *a1 = (__int64 *)v12;
    *(_QWORD *)(v12 + 8) = a1;
    MiIssueHardFaultIo((__int64)v11, 0LL, 0LL);
    v13 = *(__int64 ***)(a3 + 8);
    if ( *v13 != (__int64 *)a3 )
      __fastfail(3u);
    *v11 = a3;
    v11[1] = (__int64)v13;
    *v13 = v11;
    *(_QWORD *)(a3 + 8) = v11;
  }
  return 3221225626LL;
}
