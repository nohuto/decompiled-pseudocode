/*
 * XREFs of sub_180104C98 @ 0x180104C98
 * Callers:
 *     sub_18005F2D0 @ 0x18005F2D0 (sub_18005F2D0.c)
 * Callees:
 *     sub_18001AC70 @ 0x18001AC70 (sub_18001AC70.c)
 *     RtlGetCurrentProcessorNumber @ 0x18009F270 (RtlGetCurrentProcessorNumber.c)
 */

__int64 __fastcall sub_180104C98(unsigned __int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned __int8 v8; // al
  char CurrentProcessorNumber; // al
  unsigned int v10; // ecx
  unsigned int v11; // eax

  if ( (dword_18015A43C & 0x10) != 0 && *(_BYTE *)(a2 + 2) == 1 )
  {
    v8 = 0;
  }
  else
  {
    CurrentProcessorNumber = RtlGetCurrentProcessorNumber();
    v10 = *(unsigned __int8 *)(a1 + 48);
    v11 = CurrentProcessorNumber & 0x3F;
    if ( v11 >= v10 )
    {
      if ( v11 == v10 || (_BYTE)v10 == 1 )
        v11 = 0;
      else
        v11 = *(unsigned __int8 *)(v11 - v10 - 1 + *(_QWORD *)(a1 + 56));
    }
    v8 = *(_BYTE *)(v11 + *(_QWORD *)(a2 + 88));
  }
  return sub_18001AC70(a1, (_RTL_SRWLOCK *)a2, *(_QWORD *)(*(_QWORD *)(a2 + 96) + 8LL * v8), a3, a4);
}
