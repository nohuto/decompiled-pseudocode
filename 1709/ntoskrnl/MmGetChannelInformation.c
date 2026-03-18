/*
 * XREFs of MmGetChannelInformation @ 0x1405E8830
 * Callers:
 *     ExpQueryNumaAvailableMemory @ 0x1405E86B8 (ExpQueryNumaAvailableMemory.c)
 *     ExpQueryChannelInformation @ 0x140754B00 (ExpQueryChannelInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MiGetChannelInformation @ 0x1404FC770 (MiGetChannelInformation.c)
 */

__int64 __fastcall MmGetChannelInformation(unsigned __int16 a1, unsigned int a2, _QWORD *a3, SIZE_T *a4)
{
  size_t v6; // rbx
  SIZE_T v7; // rdx
  PVOID PoolWithTag; // rax
  SIZE_T NumberOfBytes[2]; // [rsp+20h] [rbp-D8h] BYREF
  _BYTE Src[160]; // [rsp+30h] [rbp-C8h] BYREF

  if ( a2 >= (unsigned __int16)KeNumberNodes )
    return 3221225711LL;
  MiGetChannelInformation(*(_QWORD *)(qword_140388AF0 + 8LL * a1), a2, (__int64)Src, NumberOfBytes);
  v6 = NumberOfBytes[0];
  v7 = NumberOfBytes[0];
  *a4 = NumberOfBytes[0];
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x68506D4Du);
  *a3 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memmove(PoolWithTag, Src, v6);
  return 0LL;
}
