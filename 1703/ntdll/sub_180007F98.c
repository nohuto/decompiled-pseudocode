/*
 * XREFs of sub_180007F98 @ 0x180007F98
 * Callers:
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 * Callees:
 *     sub_180008004 @ 0x180008004 (sub_180008004.c)
 *     sub_180029FC0 @ 0x180029FC0 (sub_180029FC0.c)
 *     sub_180100870 @ 0x180100870 (sub_180100870.c)
 */

__int64 __fastcall sub_180007F98(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int16 v6; // di
  __int64 result; // rax

  if ( (unsigned int)sub_180008004() )
    v6 = sub_180100870();
  else
    v6 = 0;
  result = sub_180029FC0(a1, a2, a3, v6);
  if ( !result )
  {
    if ( v6 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(qword_1801598D8 + 8LL * (v6 - 1)) + 32LL), -a2);
  }
  return result;
}
