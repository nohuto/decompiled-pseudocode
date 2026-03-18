/*
 * XREFs of ?ContainsAllocation@?$CSectionBitmapAllocator@$0BDAAA@$0BDA@@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C005F084
 * Callers:
 *     ?Free@?$CSectionBitmapAllocator@$0BDAAA@$0BDA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C005EFC4 (-Free@-$CSectionBitmapAllocator@$0BDAAA@$0BDA@@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0BDAAA@$0BDA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C00663BC (--$FreeIsolatedType@V-$CTypeIsolation@$0BDAAA@$0BDA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall NSInstrumentation::CSectionBitmapAllocator<77824,304>::ContainsAllocation(
        _QWORD *a1,
        unsigned __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r10
  unsigned __int64 v4; // rax

  v2 = a1[1];
  v3 = a1[2];
  v4 = v3 ^ v2;
  return a2
      && a2 >= v4
      && a2 <= v4 + 77824
      && !((a2 & 0xFFF) % 0x130)
      && RtlTestBit(
           (PRTL_BITMAP)(v3 ^ a1[3]),
           (a2 & 0xFFF) / 0x130 + 13 * (((unsigned int)a2 - ((unsigned int)v2 ^ (unsigned int)v3)) >> 12)) != 0;
}
