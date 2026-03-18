/*
 * XREFs of MmGetChannelInformation @ 0x14075688C
 * Callers:
 *     ExpQueryChannelInformation @ 0x1407BB420 (ExpQueryChannelInformation.c)
 *     ExpQueryNumaAvailableMemory @ 0x1407BBB44 (ExpQueryNumaAvailableMemory.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MiGetChannelInformation @ 0x14051275C (MiGetChannelInformation.c)
 */

__int64 __fastcall MmGetChannelInformation(unsigned __int16 a1, unsigned int a2, _QWORD *a3, SIZE_T *a4)
{
  size_t v7; // rbx
  SIZE_T v8; // rdx
  PVOID PoolWithTag; // rax
  SIZE_T NumberOfBytes[2]; // [rsp+20h] [rbp-D8h] BYREF
  _BYTE Src[160]; // [rsp+30h] [rbp-C8h] BYREF

  if ( a2 >= (unsigned __int16)KeNumberNodes )
    return 3221225711LL;
  MiGetChannelInformation(*(_QWORD *)(qword_1403CBD88 + 8LL * a1), a2, (__int64)Src, NumberOfBytes);
  v7 = NumberOfBytes[0];
  v8 = NumberOfBytes[0];
  *a4 = NumberOfBytes[0];
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v8, 0x68506D4Du);
  *a3 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memmove(PoolWithTag, Src, v7);
  return 0LL;
}
