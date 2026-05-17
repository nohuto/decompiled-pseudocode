/*
 * XREFs of sub_1800142F8 @ 0x1800142F8
 * Callers:
 *     sub_1800102BC @ 0x1800102BC (sub_1800102BC.c)
 *     sub_18001425C @ 0x18001425C (sub_18001425C.c)
 *     sub_180019398 @ 0x180019398 (sub_180019398.c)
 *     sub_18007F380 @ 0x18007F380 (sub_18007F380.c)
 *     sub_18007F460 @ 0x18007F460 (sub_18007F460.c)
 *     TpAllocJobNotification @ 0x180081010 (TpAllocJobNotification.c)
 *     sub_180081250 @ 0x180081250 (sub_180081250.c)
 *     sub_180081720 @ 0x180081720 (sub_180081720.c)
 *     sub_1801060F4 @ 0x1801060F4 (sub_1801060F4.c)
 * Callees:
 *     ZwSetInformationWorkerFactory @ 0x1800A8530 (ZwSetInformationWorkerFactory.c)
 */

__int64 __fastcall sub_1800142F8(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  int v3; // r8d
  int v4; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 432), a2);
    v3 = result + a2;
    if ( (int)result > 0 )
    {
      if ( v3 > 0 )
        return result;
      v4 = -1;
      return ZwSetInformationWorkerFactory(*(_QWORD *)(a1 + 56), 3LL, &v4);
    }
    if ( v3 > 0 )
    {
      v4 = 1;
      return ZwSetInformationWorkerFactory(*(_QWORD *)(a1 + 56), 3LL, &v4);
    }
  }
  return result;
}
