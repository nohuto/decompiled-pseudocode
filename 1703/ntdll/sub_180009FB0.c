/*
 * XREFs of sub_180009FB0 @ 0x180009FB0
 * Callers:
 *     sub_18000978C @ 0x18000978C (sub_18000978C.c)
 * Callees:
 *     sub_18001FD40 @ 0x18001FD40 (sub_18001FD40.c)
 *     RtlGetCurrentProcessorNumber @ 0x1800A9950 (RtlGetCurrentProcessorNumber.c)
 */

__int64 __fastcall sub_180009FB0(__int64 a1, __int64 a2, int a3, int a4)
{
  char CurrentProcessorNumber; // al
  unsigned int v9; // r10d
  unsigned int v10; // eax

  CurrentProcessorNumber = RtlGetCurrentProcessorNumber();
  v9 = *(unsigned __int8 *)(a1 + 56);
  v10 = CurrentProcessorNumber & 0x3F;
  if ( v10 >= v9 )
  {
    if ( v10 == v9 || (_BYTE)v9 == 1 )
      v10 = 0;
    else
      v10 = *(unsigned __int8 *)(v10 - v9 - 1 + *(_QWORD *)(a1 + 64));
  }
  return sub_18001FD40(
           a1,
           a2,
           *(_QWORD *)(*(_QWORD *)(a2 + 104) + 8LL * *(unsigned __int8 *)(*(_QWORD *)(a2 + 96) + v10)),
           a3,
           a4);
}
