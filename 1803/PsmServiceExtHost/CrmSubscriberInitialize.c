/*
 * XREFs of CrmSubscriberInitialize @ 0x180039AC4
 * Callers:
 *     CrmGlobalsStart @ 0x180039230 (CrmGlobalsStart.c)
 *     CrmSrvSubscribe @ 0x180069FB0 (CrmSrvSubscribe.c)
 * Callees:
 *     memset_0 @ 0x180041D1C (memset_0.c)
 */

__int64 __fastcall CrmSubscriberInitialize(_QWORD *a1)
{
  __int64 result; // rax

  memset_0(a1, 0, 0x50uLL);
  a1[1] = a1;
  *a1 = a1;
  a1[2] = 0LL;
  a1[3] = 0LL;
  RtlInitializeSRWLock(a1 + 2);
  *((_DWORD *)a1 + 6) = 0;
  result = 0LL;
  a1[5] = 0LL;
  a1[6] = 0LL;
  a1[7] = 0LL;
  a1[7] = -1LL;
  return result;
}
