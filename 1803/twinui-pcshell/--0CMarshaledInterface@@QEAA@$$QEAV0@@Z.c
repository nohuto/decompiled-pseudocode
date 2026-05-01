/*
 * XREFs of ??0CMarshaledInterface@@QEAA@$$QEAV0@@Z @ 0x1800F89D8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_625ab5e37b66b38d06a79fa4ea4f4743___::CTaskWrapper__lambda_625ab5e37b66b38d06a79fa4ea4f4743_____lambda_625ab5e37b66b38d06a79fa4ea4f4743___ @ 0x1802845F8 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_625ab5e37b66b38d06a79fa4ea4f4743___--CTaskW.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3468ccb19a16dff0d3ecf886d749dae3___::CTaskWrapper__lambda_3468ccb19a16dff0d3ecf886d749dae3_____lambda_3468ccb19a16dff0d3ecf886d749dae3___ @ 0x180305158 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3468ccb19a16dff0d3ecf886d749dae3___--CTaskW.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CMarshaledInterface::CMarshaledInterface(_QWORD *a1, _QWORD *a2)
{
  *a1 = 0LL;
  if ( a1 != a2 )
  {
    *a1 = *a2;
    *a2 = 0LL;
  }
  return a1;
}
