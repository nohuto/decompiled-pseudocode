/*
 * XREFs of MiPfIssueCoalesceCandidates @ 0x140257DB8
 * Callers:
 *     MiPfCoalesceAndIssueIOs @ 0x1400C5F28 (MiPfCoalesceAndIssueIOs.c)
 * Callees:
 *     MiIssueHardFaultIo @ 0x140057CF4 (MiIssueHardFaultIo.c)
 *     MiPfIssueCoalescedSupport @ 0x140257EB0 (MiPfIssueCoalescedSupport.c)
 */

__int64 __fastcall MiPfIssueCoalesceCandidates(__int64 **a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  __int64 v6; // rax
  __int64 **v7; // rax
  __int64 *v8; // rbx
  __int64 *v9; // rax
  __int64 **v10; // rax
  __int64 result; // rax

  v3 = *a1;
  v6 = **a1;
  if ( (__int64 **)v6 == a1 )
  {
    if ( (__int64 **)v3[1] != a1 || *(__int64 **)(v6 + 8) != v3 )
      __fastfail(3u);
    *a1 = (__int64 *)v6;
    *(_QWORD *)(v6 + 8) = a1;
    MiIssueHardFaultIo((__int64)v3, 0, 0LL);
    v7 = *(__int64 ***)(a3 + 8);
    if ( *v7 != (__int64 *)a3 )
      __fastfail(3u);
LABEL_18:
    *v3 = a3;
    v3[1] = (__int64)v7;
    *v7 = v3;
    result = 0LL;
    *(_QWORD *)(a3 + 8) = v3;
    return result;
  }
  v3 = (__int64 *)MiPfIssueCoalescedSupport();
  if ( v3 )
  {
    v7 = *(__int64 ***)(a3 + 8);
    if ( *v7 != (__int64 *)a3 )
      __fastfail(3u);
    goto LABEL_18;
  }
  while ( 1 )
  {
    v8 = *a1;
    if ( *a1 == (__int64 *)a1 )
      break;
    if ( (__int64 **)v8[1] != a1 || (v9 = (__int64 *)*v8, *(__int64 **)(*v8 + 8) != v8) )
      __fastfail(3u);
    *a1 = v9;
    v9[1] = (__int64)a1;
    MiIssueHardFaultIo((__int64)v8, 0, 0LL);
    v10 = *(__int64 ***)(a3 + 8);
    if ( *v10 != (__int64 *)a3 )
      __fastfail(3u);
    *v8 = a3;
    v8[1] = (__int64)v10;
    *v10 = v8;
    *(_QWORD *)(a3 + 8) = v8;
  }
  return 3221225626LL;
}
