/*
 * XREFs of RtlpHpLfhBucketAllocate @ 0x14029972C
 * Callers:
 *     RtlpHpLfhContextAllocate @ 0x14029A44C (RtlpHpLfhContextAllocate.c)
 * Callees:
 *     KeGetCurrentProcessorNumberEx @ 0x140078030 (KeGetCurrentProcessorNumberEx.c)
 *     RtlpHpLfhSlotAllocate @ 0x14029A9A8 (RtlpHpLfhSlotAllocate.c)
 */

__int64 __fastcall RtlpHpLfhBucketAllocate(__int64 a1, __int64 a2, int a3, int a4)
{
  unsigned __int8 v8; // al
  char CurrentProcessorNumber; // al
  unsigned int v10; // ecx
  unsigned int v11; // eax

  if ( (RtlpHpLfhPerfFlags & 0x10) != 0 && *(_BYTE *)(a2 + 2) == 1 )
  {
    v8 = 0;
  }
  else
  {
    CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
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
  return RtlpHpLfhSlotAllocate(a1, a2, *(_QWORD *)(*(_QWORD *)(a2 + 96) + 8LL * v8), a3, a4);
}
