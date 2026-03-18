/*
 * XREFs of MiPfIssueCoalesceCandidates @ 0x14021BC24
 * Callers:
 *     MiPfCoalesceAndIssueIOs @ 0x140129B30 (MiPfCoalesceAndIssueIOs.c)
 * Callees:
 *     MiIssueHardFaultIo @ 0x140116084 (MiIssueHardFaultIo.c)
 *     MiPfIssueCoalescedSupport @ 0x14021BD28 (MiPfIssueCoalescedSupport.c)
 */

__int64 __fastcall MiPfIssueCoalesceCandidates(_QWORD **a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD *v13; // rcx

  v3 = *a1;
  if ( (_QWORD **)**a1 == a1 )
  {
    if ( (_QWORD **)v3[1] != a1 || (v6 = (_QWORD *)*v3, *(_QWORD **)(*v3 + 8LL) != v3) )
      __fastfail(3u);
    *a1 = v6;
    v6[1] = a1;
    MiIssueHardFaultIo((__int64)v3, 0LL, 0LL);
    v7 = *(_QWORD **)(a3 + 8);
    if ( *v7 != a3 )
      __fastfail(3u);
    *v3 = a3;
    v3[1] = v7;
    *v7 = v3;
    *(_QWORD *)(a3 + 8) = v3;
    return 0LL;
  }
  v8 = (_QWORD *)MiPfIssueCoalescedSupport();
  if ( v8 )
  {
    v13 = *(_QWORD **)(a3 + 8);
    if ( *v13 != a3 )
      __fastfail(3u);
    *v8 = a3;
    v8[1] = v13;
    *v13 = v8;
    *(_QWORD *)(a3 + 8) = v8;
    return 0LL;
  }
  while ( 1 )
  {
    v9 = *a1;
    if ( *a1 == a1 )
      break;
    if ( (_QWORD **)v9[1] != a1 || (v10 = (_QWORD *)*v9, *(_QWORD **)(*v9 + 8LL) != v9) )
      __fastfail(3u);
    *a1 = v10;
    v10[1] = a1;
    MiIssueHardFaultIo((__int64)v9, 0LL, 0LL);
    v11 = *(_QWORD **)(a3 + 8);
    if ( *v11 != a3 )
      __fastfail(3u);
    *v9 = a3;
    v9[1] = v11;
    *v11 = v9;
    *(_QWORD *)(a3 + 8) = v9;
  }
  return 3221225626LL;
}
