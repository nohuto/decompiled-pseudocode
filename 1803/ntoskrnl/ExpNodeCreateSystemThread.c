/*
 * XREFs of ExpNodeCreateSystemThread @ 0x14052B848
 * Callers:
 *     ExpPartitionCreateSystemThread @ 0x14052C384 (ExpPartitionCreateSystemThread.c)
 * Callees:
 *     KeSelectIdealProcessor @ 0x14006B868 (KeSelectIdealProcessor.c)
 *     KeQueryNodeActiveAffinity @ 0x14007ED60 (KeQueryNodeActiveAffinity.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     PsCreateSystemThreadEx @ 0x14052AC40 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall ExpNodeCreateSystemThread(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        ULONG_PTR a4,
        int a5,
        __int64 a6,
        __int64 a7,
        int *a8,
        __int64 a9)
{
  int v12; // [rsp+50h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+58h] [rbp-30h] BYREF

  KeQueryNodeActiveAffinity(*(_WORD *)(a1 + 146), &Affinity, 0LL);
  v12 = KeSelectIdealProcessor(a1, (__int64)&Affinity, a8);
  return PsCreateSystemThreadEx(a9, 0x1FFFFF, 0LL, a4, 0LL, a6, a7, (__int64 *)&Affinity, &v12);
}
