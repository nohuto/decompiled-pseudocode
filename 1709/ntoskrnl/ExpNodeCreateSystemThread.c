/*
 * XREFs of ExpNodeCreateSystemThread @ 0x140554884
 * Callers:
 *     ExpPartitionCreateSystemThread @ 0x140554C20 (ExpPartitionCreateSystemThread.c)
 * Callees:
 *     KeSelectIdealProcessor @ 0x140019804 (KeSelectIdealProcessor.c)
 *     KeQueryNodeActiveAffinity @ 0x1400FC870 (KeQueryNodeActiveAffinity.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     PsCreateSystemThreadEx @ 0x1405549A0 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall ExpNodeCreateSystemThread(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        _DWORD *a8,
        __int64 a9)
{
  int v12; // [rsp+50h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+58h] [rbp-30h] BYREF

  KeQueryNodeActiveAffinity(*(_WORD *)(a1 + 146), &Affinity, 0LL);
  v12 = KeSelectIdealProcessor(a1, (__int64)&Affinity, a8);
  return PsCreateSystemThreadEx(a9, 0x1FFFFFLL, 0LL, a4, 0LL, a6, a7, &Affinity, &v12);
}
