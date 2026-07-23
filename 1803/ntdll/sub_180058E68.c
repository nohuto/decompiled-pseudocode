/*
 * XREFs of sub_180058E68 @ 0x180058E68
 * Callers:
 *     sub_180056280 @ 0x180056280 (sub_180056280.c)
 *     TpAllocJobNotification @ 0x1800565C0 (TpAllocJobNotification.c)
 *     sub_180056820 @ 0x180056820 (sub_180056820.c)
 *     sub_180056B80 @ 0x180056B80 (sub_180056B80.c)
 *     sub_180057320 @ 0x180057320 (sub_180057320.c)
 *     sub_18005756C @ 0x18005756C (sub_18005756C.c)
 *     sub_180058CA0 @ 0x180058CA0 (sub_180058CA0.c)
 *     sub_180058DCC @ 0x180058DCC (sub_180058DCC.c)
 *     sub_1801090E4 @ 0x1801090E4 (sub_1801090E4.c)
 * Callees:
 *     ZwSetInformationWorkerFactory @ 0x18009DD90 (ZwSetInformationWorkerFactory.c)
 */

void __fastcall sub_180058E68(__int64 a1, unsigned int a2)
{
  int v2; // eax
  int v3; // r8d
  int v4; // eax
  void *v5; // rcx
  int WorkerFactoryInformation; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v2 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 432), a2);
    v3 = v2 + a2;
    if ( v2 <= 0 )
    {
      if ( v3 <= 0 )
        return;
      v4 = 1;
    }
    else
    {
      if ( v3 > 0 )
        return;
      v4 = -1;
    }
    v5 = *(void **)(a1 + 56);
    WorkerFactoryInformation = v4;
    ZwSetInformationWorkerFactory(v5, WorkerFactoryBindingCount, &WorkerFactoryInformation, 4u);
  }
}
